# **COMMAND LINE ARGUMENTS LIBRARY**
##### *by Paracefas*

### Usage

#### Constructor

if you want to use for the following input: your_program.exe arg1=val1 arg2=val2 ...
Use argc & argv contructor

> `const par::CommandLineArgs args { argc, argv };`

if you want to use for the following input: your_program.exe val1 val2 ...
Use argc & argv contructor

> `const par::CommandLineArgs args { argc, argv,  { "arg1", "arg2" /*, ...*/ } }`;

#### List values

Use `paracefas::CommandLineArgs::GetList` to list all arguments names and its values

> `args.GetList(); `
> Note that every argument list start with PROGRAM_PATH wich value is the program name it self.
> Keeping in mind that even when you have "Zero" arguments you have one the name program.
> > [\[PROGRAM_PATH]]: my-program.exe

#### Get some specific value

Use `paracefas::CommandLineArgs::GetDouble` or `paracefas::CommandLineArgs::GetString` in order to 
take the value of an argument as a double or as a string respectively 

> `args.GetDouble("arg1");`

The line above returns the value of the argument names *arg1* as a double if it exists; if it doesn't exists the function throw a run-time exception.

### Compile

#### Visual Studio

In order to use *Command line arguments library* on your vs-solution you have to link your project with *command-line-args.lib* if you want to compile for x64 (64 bits) the .lib is lacated at `./lib/x64` in the other hand if you want to have a x86 (32 bits) binary, the .lib is located at `./lib/x86`

#### GCC

In order to use *Command line arguments library* on your proyect you have to link it with *command-line-args.a* this file must to ve located at `./lib/gcc`

##### To compile the example.cpp

> `g++ -std=c++17 example.cpp -I ./include ./lib/gcc/command-line-args.a`