{
  description = "Code and data repository for Boys' function paper";
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
    flake-compat = {
      url = "github:edolstra/flake-compat";
      flake = false;
    };
  };

  outputs = {
    self,
    nixpkgs,
    flake-utils,
    flake-compat,
  }:
    flake-utils.lib.eachDefaultSystem (system: let
      pkgs = nixpkgs.legacyPackages.${system};
      pythonEnv =
        pkgs.python311.withPackages
        (ps:
          with ps; [
            ps.h5py
            ps.jupyterlab
            ps.numpy
            ps.plotly
            ps.rich
            ps.sympy
            ps.tqdm
            ps.typer
            ps.scipy
          ]);
    in {
      # used with mybinder.org
      defaultPackage = [pkgs.git-annex pkgs.git-annex-remote-rclone pythonEnv];

      devShell = pkgs.mkShell {
        packages = [
          pkgs.cmake
          pkgs.gcc
          pkgs.gdb
          pkgs.git-annex
          pkgs.git-annex-remote-rclone
          pkgs.hdf5
          pkgs.highfive
          pkgs.ninja
          pythonEnv
        ];

        hardeningDisable = ["all"];
        NINJA_STATUS = "[Built edge %f of %t in %e sec] ";
        BUCKET = "old-dogs-old-tricks";
      };
    });
}
