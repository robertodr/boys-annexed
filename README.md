# old-dogs-old-tricks

The `data` folder contains large (>10MiB) datasets in HDF5 format. They are
stored in a S3 bucket and **you will need**
[`git-annex`](https://git-annex.branchable.com/) to work with this repo.

## Getting the data with `git-annex`

* Clone the repository from GitHub as usual:
  ```
  git clone https://github.com/robertodr/old-dogs-old-tricks.git
  ```
* Go in the root of the repo and initialize the `git-annex` remote:
  ```
  cd old-dogs-old-tricks
  git annex init hdf5-data
  ```
  the name you give to the `git-annex` remote is not relevant.
* Fix some configuration options for the `git-annex` remote:
  ```
  git config remote.origin.annex-ignore true
  git config remote.origin.annex-sync true
  git config annex.largefiles 'largerthan=1MiB'
  ```
* Enable the S3 bucket as remote:
  ```
  git annex enableremote public-s3
  ```
  here the name `public-s3` **matters**.
* Finally, get the actual HDF5 datasets with:
  ```
  git annex get
  ```
  
## Working with the data tracked by `git-annex`

* To modify any of the datasets in the annex, you first need to unlock it:
  ```
  git annex unlock data/boys_reference.h5 
  ```
  and then lock it again when you're done:
  ```
  git annex lock data/boys_reference.h5
  ```
* To add a file to the annex:
  ```
  git annex add data/new_file.h5
  git commit -m "..."
  # TODO do I need? git annex copy --to=public-s3 data/new_file.h5 
  git annex sync --content
  ```

