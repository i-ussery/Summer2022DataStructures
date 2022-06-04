eo# C343 Assignment 1

## How to download your assignment locally

Once you have accepted the assignment on GitHub, click the code button on the GitHub repository and copy the HTTPS url.
Go to your IDE for this class in toolbox and open it from toolbox.
Then click get from VCS and put in the url and click clone.

If you already have an assignment, go to File &rarr; New &rarr; Project From Version Control,
then put in the url from the repository page and click clone.

Once cloned you will need to right-click on CMakeLists.txt file and load Cmake.

## Description
Complete the Sequence class in the /src directory using C++ pointers. 

**_You must use pointers for this assignment._**

#### [Tutoring Schedule and Department Office Hours](https://drive.google.com/file/d/1rmg41GjrE50VOoqqpDbqWTzrd1rZtdPZ/view?usp=sharing)

#### [How To Get Started Coding With Unit Tests](https://youtube.com/playlist?list=PLB8wiCkY95dmqfpxNCdDFHVg13K5TN_kM)

### Boundary Conditions To Consider

1. What happens in the add and remove methods if the position is out of bounds?

2. What is the length of an empty sequence?

3. What is the outcome of entry function if the position is out of bounds?

4. What is the outcome of clear function if Sequence is already empty?

## C++ Edge Case for Generics: 
### Unable to return null with generic return type 

As your developing the entry method in the Sequence class, the normal assumption is to return null.
However, this is not allowed by the Language(compiler) as null is not considered a generic type.
The reason for this is null can not be applied to primitive types.

The way we get around this is to have an optional generic return. This way we can return a std::nullopt 
and use this as our null return. This trick is required newer and 
better systems programming languages like (Rust)[https://www.rust-lang.org/].   

## Required Tasks
To complete this assignment you must do the following:

- Ensure Doxygen is set up on your computer (See the "Setting Up Doxygen" section).
- Create a minimum of three test cases for add method for both ints and strings.
- Create a minimum of three test cases for remove method for both ints and strings.
- Create a minimum of three test cases for entry method for both ints and strings.
- Create a minimum of three test cases for length method for both ints and strings.
- Create a minimum of three test cases for outputSequence method for both ints and strings.
- [Have all tests pass and code coverage is 100%](https://www.jetbrains.com/help/idea/running-test-with-coverage.html#run-config-with-coverage).
- Fill out the doxygen docs in all Sequence files for all attributes, classes, methods and constructors.
- Ensure your public name is filled out in [GitHub](https://github.com/settings/profile). 
    - If you can not put your name out on GitHub publicly you will need to contact your professor and let them know
      your GitHub username, otherwise your professor will not know who the grade goes to.
  
Note: When you add a test file you will need to add the path it to the add_executable(...) macro 
in the test\CMAkeLists.txt file.

## Installing toolchains for development

### Windows
To program with Clion and C++ you will need to have the C++ toolchains installed.
To install these toolchains you will need to either set up wsl, cygwin (do not use mingw), or visual studio. install

No matter which way you decided, we recommend checking what your Toolchain is set to
by going to  Settings &rarr; Build, Execution, Deployment &rarr; Toolchains.

Note: Each of these has its own pros and cons. Visual Studio takes up ~10 GB of storage. Cygwin is only about
100 MB and is easy to set up. WSL is the hardest to set up but is the most flexible as it is essentially
a linux server in windows.

#### Cygwin (*Recommended)
Install the latest version of the following packages:

- gcc-g++
- gdb
- cmake
- make
- bash
- grep
- doxygen
- graphviz

#### Visual Studio

Download the newest version of visual studio [here](https://visualstudio.microsoft.com/downloads/)

#### WSL

Install wsl by following this [guide](https://docs.microsoft.com/en-us/windows/wsl/install).
You may need to change some settings in your bios. Once you have everything set up,
it is recommended that you go with the latest ubuntu version and install everything you need to run C++.

Note: This is the only setup that supports valgrind on Windows.

### MacOS

Note: These instructions are currently incomplete.

To install the toolchains for developing with Clion, you will need to do the following:

1. Make sure your Mac is updated to the latest version
2. Make sure Xcode is installed and updated to most current version.
4. Ensure brew is installed. You can find the installation script [here](https://brew.sh/)
5. In your terminal run:
     ```shell 
     sudo rm -rf /Library/Developer/CommandLineTools
     sudo xcode-select --install
     brew tap LouisBrunner/valgrind
     brew install --HEAD LouisBrunner/valgrind/valgrind
     brew install valgrind

### Linux

To install the toolchains for developing with Clion, open a terminal and run:
```shell 
sudo apt-get install -y build-essential libssl-dev gcc g++ gdb ninja-build doxygen graphviz valgrind &&
export CMAKE_VERSION=3.22.1 && 
cd /tmp &&
wget https://github.com/Kitware/CMake/releases/download/v$CMAKE_VERSION/cmake-$CMAKE_VERSION.tar.gz &&
tar -zxf cmake-$CMAKE_VERSION.tar.gz &&
cd cmake-$CMAKE_VERSION &&
./bootstrap &&
make &&
make install &&
which cmake &&
cmake --version 
```
This will take about 30 minutes please be patience during this  time.

## Setting up Doxygen

### Windows

Go [here](https://www.doxygen.nl/download.html#srcbin) to download the Windows installer.
Run the installer and keep every option at the default choice.
Now that the program is installed we need to add it to the path.
1. Open a powershell terminal in adminastrator mode.
2. Run the following code in the powershell terminal.
   ```powershell
   $oldpath = (Get-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name PATH).path
   $newPath = "$oldpath;C:\Program Files\doxygen\bin"
   Set-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment' -Name PATH -Value $newPath
   ```
3. If you have CLion open you will need to restart the IDE.
4. Run 'All in unit_tests' to make sure everything is working correctly.

### MacOS

To install Doxygen open your terminal and run the following:

1. Ensure brew is installed. You can find the installation script [here](https://brew.sh/)
2. After it is installed open the terminal and run:
    ``` shell 
    brew install doxygen
    ```

### Linux

To install Doxygen open your terminal and run the following:
#### Debian
``` Sudo apt-get install doxygen```

#### Fedora/Redhat
``` Sudo dnf install doxygen```

## How to submit

To submit your assignment you will go the top of Intellij and select the "Git" button or hit ctrl + k. Click the checkbox next to the Changes button and add a simple explanation of what you did to the commit Message TextBox. Hit the "Commit and Push" button. If the IDE says you have TODOs left you have not completed the assignment yet, however you may commit anyway for partial credit. On the pop-up click push, you should receive an email shortly on how many of your tests have passed from the GitHub CI. Your professors will be emailed about the percentage of pass/fail rate of your tests and docs the day after your assignment is due.

![Alt Text](assets/TurningInAssignmentExample.gif)

## Disclaimer
⚠️ Changing the tests cases to pass locally will not get you any credit. We will not use your test cases to grade
your assignment, however we may ask you to write your own test cases to insure you have all cases covered.
We may grade you on the test cases you have written in addition to ours. 
Our tests may contain more or less test cases than you have written. ⚠️

## Resources
Samples:
https://github.com/google/googletest/tree/main/googletest/samples

Cmake tutorial:
https://cmake.org/cmake/help/latest/guide/tutorial/index.html

Google Test docs:
https://google.github.io/googletest/quickstart-cmake.html

Tutorial on stringstream:
https://www.softwaretestinghelp.com/stringstream-class-in-cpp/
