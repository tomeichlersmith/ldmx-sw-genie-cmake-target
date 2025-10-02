# GENIE CMake Testing

I want to construct a GENIE CMake Target that can provide the
necessary include and link directories for within ldmx-sw.
Building ldmx-sw takes a long time though, so this is a testing ground.

- clone this repository in the same directory as ldmx-sw so we are in the same `denv`
- test differnet cmake configuration options (`OptionN.cmake`): `just test N`

[Example Failure](https://htmlpreview.github.io/?https://github.com/tomeichlersmith/ldmx-sw-genie-cmake-target/blob/main/options.html)

## Terminal Recordings
I do terminal recordings with `script` and `ansi2html`.
```
script output.log
# run commands
exit
ansi2html <output.log >output.html
```
