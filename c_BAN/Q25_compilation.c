/*Why makefile is used? */

Assume you have a huge codebase that has 100s of files with lots of dependencies between them.
Generally, you would compile each file, generate an object file and link all the object files together to generate an executable.
If you have to make a small change in one of the files (Maybe putting a debug statement), you would have to recompile all the files and link all of them which is extremely cumbersome and is not efficient.
Using Makefiles, you can ensure that only the files that have been modified since the last build and those which are dependent on the changed files are only compiled. "make" uses the timestamp on the file to check f the file has been modified and whether it has to be recompiled or not.
If you have a "Makefile" in your directory which specifies the rules for compiling the files (including the dependencies), all you have to do is run "make". If you want to run only specific rules, you can specify using "make <rule>".

