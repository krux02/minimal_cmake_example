# minimal_cmake_example
this tries to be a minimal cmake example, that covers sources resources dependencies and packaging.

I created this project, because I think the official documentation of CMake is bad. It avoidids talking about the actually important 
parts to setup a new project, but instead explains you unnecessary fuss like how to write configuration headers.

I think that a configuariton headers are something you shouldn't do at all. In my opinion the project should just compile the 
source without any magic happening. Generating configuration headers just makes the build unnecessarily complicated, and tools that work
on the source code get a harder job. Also I disagree that every source folder should have it's own CMake file. I think when there
is no really good reason do do it otherwise, one CMake file should be enough for the entire project. In one file you should be able 
to see everything that is important to build all parts of the project. This information should not be scattered around in different source folders.
