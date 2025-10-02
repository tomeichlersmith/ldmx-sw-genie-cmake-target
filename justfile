# test compile and link option n
test n:
    denv cmake -B build/{{n}} -S . -DFIND_GENIE_OPTION={{n}}
    denv cmake --build build/{{n}}

