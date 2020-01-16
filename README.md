Proof of Concept Compiler Independent Interface (CII)
=====================================================
foo -> Class compiled with our "main compiler"
main.cpp -> Program Entry Point using our "main compiler"
foo_cii -> Compiler Independent Interface for class foo. Compiled with our "main compiler"

foo_manip -> Shared Library compiled with "foreign compiler" and thus also needs compiler idependent functions (can be seen as entry point/wrapper to libraries developed with foreign compilers). Uses foo_cii to handle Objects of class foo compiled with "main compiler".

Use test_foo.sh in the root directory to rebuild project and run the test executable. G++ and CLANG need to be installed on the system.

Requirements for a CII:
------------------------
* Functions declarations without name mangeling (because name mangeling is compiler dependent)
* Functions declarations only using basic standard datatypes (no C++ datatypes, because their byte size and alignment is compiler dependent)

Run test:
---------

Tested and developed on Debian 10

### First install compilers:
```
sudo apt install g++ clang
```

### Run script
```
./test_foo.sh
```

Bonus:
------
If a CII exits, it is easily possible to create bindings to high level languages like JAVA, C#, etc.

License:
"THE BEER-WARE LICENSE" (Revision 42):
<giri@nwrk.biz> wrote this file. As long as you retain this notice you can do whatever you want with this stuff. If we meet some day, and you think this stuff is worth it, you can buy me a beer in return Daniel Giritzer

Autor: Daniel Giritzer, 23.04.2019