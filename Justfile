ci:
    cd fast-arithmetic && cabal new-build
    cabal new-test all -w ghc-8.2.2
    hlint fast-arithmetic gmpint
    yamllint .stylish-haskell.yaml
    yamllint .hlint.yaml
    yamllint .travis.yml
    yamllint stack.yaml
    stack build && weeder .
