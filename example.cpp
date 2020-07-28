#include <paracefas/command-line-args.hpp>

namespace par = paracefas;

#include <iostream>

int main(int argc, char const** argv)
{
	try 
	{
		/*
			Use only argc & argv constructor when you want to use the following input
			your_program.exe arg1=val1 arg2=val2 ...
		*/
		const par::CommandLineArgs args{ argc, argv };
		args.GetList();
		std::cout << args.GetDouble("arg1") + args.GetDouble("arg2");

		/*
			// Use named arguments when you wnat the following input
			// your_program.exe val1 val2 ...

			const par::CommandLineArgs args{ argc, argv, { "arg1", "arg2" } };
			args.GetList();

			// About CommandLineArgs::GetValue keep in mind that it supports only three types (std::string | double | int)
			std::cout << args.GetDouble("arg1") + args.GetDouble("arg2");
		*/
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	catch (...) 
	{
		std::cerr << "Error not captured\n";
	}
}

