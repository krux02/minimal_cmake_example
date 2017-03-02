# minimal_cmake_example
this tries to be a minimal cmake example, that covers sources resources dependencies and packaging.

I created this project, because I think the official documentation of CMake is bad. It avoidids talking about the actually important 
parts to setup a new project, but instead explains you unnecessary fuss like how to write configuration headers.

I think that a configuariton headers are something you shouldn't do at all. In my opinion the project should just compile the 
source without any magic happening. Generating configuration headers just makes the build unnecessarily complicated, and tools that work
on the source code get a harder job. Also I disagree that every source folder should have it's own CMake file. I think when there
is no really good reason do do it otherwise, one CMake file should be enough for the entire project. In one file you should be able 
to see everything that is important to build all parts of the project. This information should not be scattered around in different source folders.

## build can fail because of boost

The build of this project might fail, when CMake does not find boost. This does not mean that there is an error in the CMakeLists.txt file, it just means, that CMake could not find boost in your system. You can simply remove the boost dependency, if you don't want or need it. Or you could tell CMake where to find boost with ccmake or cmake-gui. It's just there to serve as an example, how you could declare dependencies that you do not distribute with your project.
