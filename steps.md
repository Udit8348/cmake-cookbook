# Big Idea
*CMake generates the corresponding instructions for the chosen build system*

# Common Steps
```
mkdir build
cd build
cmake ..
```
`cmake` this informs us of the build configuration, you could technically run this in the root of the project, but its is not good convention to mix source and build)

## Compile the executable
`cmake --build .` or `make` will actaully create the executable in the build directory itself. Automatically names it name-part from a {name-part}.cpp file

*note:* cmake -H. -Bbuild is a shortcut but it is still not accepted as standard so we are not going to try it

## Run the Execuatable
`./name-part` directly from the build directory

## Targets
you can specify what target you want to generate
`cmake --build . --target <target-name>` or `make <target-name>` shoud work

# Tips
- To preview markdown you can use ⌘K V (just have that file open)
- as long as you have the right paths, you can create the build directory where ever you want


### Bookmark
https://learning.oreilly.com/library/view/cmake-cookbook/9781788470711/69473a8e-f602-4167-8110-c4815b9a286b.xhtml

finished on ch1 rep1