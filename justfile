# test compile and link option n
test n:
    denv cmake -B build/{{n}} -S . -DFIND_GENIE_OPTION={{n}}
    denv cmake --build build/{{n}}

# remove all the builds to start fresh
clean:
    rm -r build
