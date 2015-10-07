# ExampleSerialProject
Simple project setup to implement the SerialCommsDll
https://github.com/mattmunee/ExampleSerialProject

This project incorporates SerialCommsDll project located here (as a submodule):
https://github.com/mattmunee/SerialCommsDll
Make sure to update submodules!  This does not happen automatically when cloning the parent.

When checking out the SerialCommsDll project, the necessary dll, lib, pdb, etc. will be ready for use, so there's no need to rebuild the SerialCommsDll project.

The ExampleSerialProject.vcxproj is included which automatically links to the necessar SerialCommsDll and copies the SerialCommsDll.dll and .pdb into the executable directory.

The solution file is not included, but it should be saved in the directory containing both the ExampleSerialProject and SerialCommsDll project folders.  For example
f
...\DummyContainingFolder
	CallItWhatYouLike.sln
	\ExampleSerialProject
		ExampleSerialProject.cpp
		ExampleSerialProject.vcxproj
		ReadMe.txt
	\SerialCommsDll
		.git
		README.md
		SerialCommsDll.vcxproj
		\SerialCommsDll
			\bin
				SerialCommsDll.dll
				SerialCommsDll.pdb
			\include
				SerialCommsDll.h
			\lib
				SerialCommsDll.lib
			\src
				SerialCommsDll.cpp
				dllmain.cpp
		
