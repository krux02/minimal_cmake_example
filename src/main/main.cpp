#include "main.h"

#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
#include <string>
// there are other ways of getting a path relative to the executable, but this
// one is part of the STL soon (if you can talk about soon in c++ development)
#include <boost/filesystem.hpp>
using boost::filesystem::absolute;

// when testing, the main of gtest and this main function will collide,
// this prevents the collision, but it's an ugly hack like all ifdef branches
#ifdef UNIT_TESTS
#define MAIN not_main
#else
#define MAIN main
#endif

int MAIN(int argc, char** argv) {
  // this way you can have a path relative to the executable
  // the absolute also gets rid of symlinks, so it should work pretty stable
  auto resource_path = absolute(argv[0]).parent_path() / "resources";
  std::fstream resource1((resource_path / "resource1").string());
  std::string line;
  while(resource1) {
    std::getline(resource1, line);
    cout << line << endl;
  }
  return EXIT_SUCCESS;
}


// just some function to have something that can be test
#include <exception>

void GetFrobnicationInterval() {
  throw std::string("InvalidOperation: frobnication interval can't be retrieved");
}

