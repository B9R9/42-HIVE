### FILLIT

## Introduction
Fillit is a project that let you discover and/or familiarize yourself with a recurring problematic in 
programming: searching the optimal solution among a huge set of possi- bilities, in a respectable timing.
In this particular project, you will have to find a way to assemble a given Tetriminos set altogether in the smallest
possible square.  
A Tetriminos is a 4-blocks geometric figure you probably already heard of, thanks to the popular game Tetris.
***
## Objectives
Fillit is not about recoding Tetris, even if it’s still a variant of this game.
Your pro- gram will take a file as parameter, which contains a list of Tetriminos, and arrange them in order to create
the smallest square possible. Obviously, your main goal is to find the smallest square in the minimal amount of time,
despite an exponentially growing number of possibilities each time a piece is added. You should think carefully about
how you will structure your data and how to solve this problem, if you want your program answers before the next millenium.
***
## Installation
I made the choice to centralize all Hive projects in a single folder.
This does not allow you to download the Fillit individually at the moment.
```
$ git clone git@github.com:B9R9/42-HIVE.git
$ cd ../path/to/the/folder/Fillit
```
***
## Compilation
First, You will need to generate Tetriminos locate in the folders `./test_fillit`  
To use fillit, you can use Makefile command to generate an executable file:
```
$make
```
Then
```
$> ./fillit sample.fillit | cat -e
```
***
## Tester
In progress
***
## Collaboration
This project was made with [Itoe](https://github.com/itkimura)
