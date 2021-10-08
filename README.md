# POsetup
really simple setup for a project
## overwiew
this command will load aliases and allow to use 'r' , 'b' instead longer commands.
> source alias.sh

'r' will compile and run program, 'b' will reload makefiles and run tests before running main.

equivalent of 'b' below:
> sh build.sh

in order to add/modify aliases edit alias.sh. valid alias definition looks like that:
> keyword ='command or set of terminal commands'


to perform just compilation:
> make .


in order to add file to executable (ie. ./main) edit CMakeLists.txt in corresponding directory. edit aftermentioned line accordingly
> add_executable(executable_name file1.cpp file2.cpp file3.cpp ...)

to reload changes:
> cmake .

