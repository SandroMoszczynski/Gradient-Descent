PHAS0100Assignment1
------------------

[![Build Status](https://travis-ci.com/MattClarkson/PHAS0100Assignment1.svg?branch=master)](https://travis-ci.com/MattClarkson/PHAS0100Assignment1)
[![Build Status](https://travis-ci.com/github/sukrire/PHAS0100Assignment1)]


Purpose
-------

This is a demo project to demonstrate a reasonable folder structure for [CMake](https://cmake.org/) based projects,
that use [CTest](https://cmake.org/) to run unit tests via [Catch](https://github.com/catchorg/Catch2).


Credits
-------

This project was developed as a teaching aid for UCL's ["Research Computing with C++"](http://rits.github-pages.ucl.ac.uk/research-computing-with-cpp/)
course developed by [Dr. James Hetherington](http://www.ucl.ac.uk/research-it-services/people/james)
and [Dr. Matt Clarkson](https://iris.ucl.ac.uk/iris/browse/profile?upi=MJCLA42).

Build Instructions
------------------

This project itself can be built if you just want to test it. In Linux terms that
would be:
``` cmake
git clone https://github.com/MattClarkson/PHAS0100Assignment1
mkdir PHAS0100Assignment1-Build
cd PHAS0100Assignment1-Build
cmake ../PHAS0100Assignment1
make
```
But ideally, you should use this as a template to create your own project. To do so,
please refer to the [CMakeTemplateRenamer](https://github.com/MattClarkson/CMakeTemplateRenamer)
which will show you how to clone this repository, and rename all the variables to names of your choice.
Then you would simply build your new project, using cmake, as shown above.

Usage Instructions
------------------

Here are some simple usage instructions for my solver app;
1. If using a data file to import, move to bin folder of the build directory, or to the directory you will run Solver from.
2. Run solver using ./Solver <SOLVER_TYPE> <DATA_TYPE>
    - all commands in caps must be typed in exactly (case sensitive), without the "".
    - <SOLVER_TYPE> has the options of "BATCH" or "NORMAL", this will change the solving method for your data.
        - The "BATCH" option will ask you additional input parameters; "Eta", "Iterations" and "Batch Size".
        - Note; for the test provided;(Eta ~ 0.01, Iterations > 20, Batch Size ~ 50) are recomended.
        - The "NORMAL" option has no options, it will generate outputs automatically if <DATA_TYPE> is correct.
    - <DATA_TYPE> Has the options of "IMPORT" or "GENERATE", this will change where the data comes from.
        - The "IMPORT" option will ask for a file location, give the name of the file, without quotations and with the .txt format.
        This will also require the data to be in a text file with space delimited values. 
        - Note; the program will display whether or not the file was read, but will not terminate, instead the outputs
        will just be random guesses. Make sure there is not error message.
        - The "GENERATE" option will create data for you, after asking aditional parameters; "Theta_1", "Theta_0" and "No_points".
    - If you have too many arguments or too few, or have entered some incorrectly, a help message will be displayed, 
    this can also be brought up by just typing "./Solver" with no other parameters. 


