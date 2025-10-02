# GENIE CMake Testing

I want to construct a GENIE CMake Target that can provide the
necessary include and link directories for within ldmx-sw.
Building ldmx-sw takes a long time though, so this is a testing ground.

- clone this repository in the same directory as ldmx-sw so we are in the same `denv`

```
denv cmake -B build -S .
denv cmake --build build
```
