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
      derivation = pkgs.mkShell {
        packages = with pkgs; [
          cmake
          gcc
          hdf5
          highfive
          ninja

          (python311.withPackages
            (ps:
              with ps; [
                ps.tqdm
                ps.h5py
                ps.jupyterlab
                ps.numpy
                ps.plotly
                ps.scipy
                ps.sympy
              ]))
        ];

        hardeningDisable = ["all"];
        NINJA_STATUS = "[Built edge %f of %t in %e sec] ";
      };
    in {
      defaultPackage = derivation;
      devShell = derivation;
    });
}
