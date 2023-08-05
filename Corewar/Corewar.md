### Corewar

## Table of Contents
1. [Introduction](#introduction)
2. [Objectives](#objectives)
3. [Installation](#installation)
4. [Compilation](#compilation)
5. [Tester](#tester)
6. [Update](#update)

This project was made with [Margot](https://github.com/MargotDem), [Bengisu](https://github.com/Bengissimo) and [Yakiv](https://github.com/kotyakiv).  
***
## Introduction
What is Corewar?  
• Corewar is a very peculiar game. It’s about bringing “players” together around a
“virtual machine”, which will load some “champions” who will fight against one another with the support of “processes”,
with the objective being for these champions
to stay “alive”.  
• The processes are executed sequentially within the same virtual machine and memory space. They can therefore,
among other things, write and rewrite on top of
each others so to corrupt one another, force the others to execute instructions that
can damage them, try to rewrite on the go the coding equivalent of a Côtes du
Rhône 1982 (that is one delicious French wine!), etc...  
• The game ends when all the processes are dead. The winner is the last player
reported to be “alive”.

***
## Objectives
This project can be broken down into three distinctive parts:  
• The assembler: this is the program that will compile your champions and translate them from the language you will write them in (assembly language) into “Bytecode”.Bytecode is a machine code, which will be directly interpreted by the virtual
machine.  
• The virtual machine: It’s the “arena” in which your champions will be executed.
It offers various functions, all of which will be useful for the battle of the champions.
Obviously, the virtual machine should allow for numerous simultaneous processes;
we are asking you for a gladiator fight, not a one-man show simulator.
• The champion: This one is a special case. Later, in the championship, you will
need to render a super powerful champion, who will scare the staff team to death.
However, rendering this kind of champion is serious work. And since, for now, we
are mostly interested in your capacity to create Corewar’s other programs (i.e. the
assembler and virtual machine), your current champion will only need to prove to
us that you can write bits and pieces of Corewar ASM. This means that the champion you should render for this project only needs to scare the bejesus out of a
neurasthenic hedgehog.  

***
## Installation  
I made the choice to centralize all Hive projects in a single repo.
This does not allow you to download the Corewar individually at the moment.
```
$ git clone git@github.com:MargotDem/corewar.git
$ cd ../path/to/the/folder/Corewar
```
***
## Compilation
To generate an executable file, you can run `$>make`. 
You can also generate executable for each part:  
```
$>make Core
$>make ASM
$>make DISASM
```
USAGE:  
Virtual machine:  
```
$>./corewar [-dump CYCLE [-l]] [-v NUM][[-n NUM] champion1.cor] ...
```
Assembler:  
```
$>./asm [file_name]
```
Disassembler:
```
$>./disam [file_name]
```

***
## Tester  
Usage:  
```
$>./corewar_tester.sh
```
It will compare the output  from the original VM and your VM at different moments of the game.  
Players are taken from `./tests/vm/op_codes_champs/cor_files`.  
To succeed, your output should be the same as the original.  
***
## Update
