### Lem-in

## Table of Contents
1. [Introduction](#introduction)
2. [Objectives](#objectives)
3. [Installation](#installation)
4. [Compilation](#compilation)
5. [Tester](#tester)
6. [Update](#update)


***
### Introduction
We are going to look in depth at its calculus bit. How does it work? Simple! We make an ant farm,
with tunnels and rooms; we place the ants on one side; and we look at how they find the exit.  
How do we build an ant farm? We need tubes and rooms.  
We join the rooms to one another with as many tubes as we need. A tube joins two rooms to each other. No more than that. A room can be linked to an infinite number of rooms and by as many tubes as deemed necessary. Then we must bury the ant farm (wherever you want). This is extremely important to ensure that ants don’t cheat and look at your design before before the game starts.
***
## Objectives

• Your program will receive the data describing the ant farm from the standard output in the following format:
• The ant farm is defined by the following links:
```
number_of_ants
the_rooms
the_links
##start 1 23 3
2 16 7 #comment 3 16 3
4 16 5 593 615
748 ##end 095 0-4 0-6
1-3
4-3
5-2
3-5
#another comment
4-2
2-1
7-6
7-2
7-4
6-5
#another comment
5
```
 • Which corresponds to the following representation:
 ```
Insert screen shot
```
• There are two parts:  
  ◦ The rooms, which are defined by: name coord_x coord_y ◦ The links, which are defined by: name1-name2  
  ◦ All of it is broken by comments, which start with #  
```
 The rooms’ names won’t necessarily be numbers, and they won’t
necessarily be in the right and continuous order (we will find rooms
with names such as zdfg, qwerty, etc...)  But most importantly, a
room will never start with the character L nor the character #
```
```
The rooms’ coordinates will always be integers.
```
• Lines that start with ## are commands modifying the properties of the line that comes right after.  
• For example, ##start signals the ant farm’s entrance and ##end its exit.  
• Any non compliant or empty lines will automatically stop the ant farm’s reading as well as the orderly processing of the acquired data.  
```
Any unknown command will be ignored.
```
 • If there isn’t enough data to process normally you must display `ERROR`.  
***
## Installation  
I made the choice to centralize all Hive projects in a single repo.
This does not allow you to download the Lem-in individually at the moment.
```
$ git clone git@github.com:B9R9/42-HIVE.git
$ cd ../path/to/the/folder/Lem-in
```
***
## Compilation
To generate an executable file, you can run `$>make`.  
USAGE:
```
$>./lem-in < [map-name].map
```
***
## Tester
To generate a map you can use `./generator [option]`. For help, use `./generator -help`.  
`./lem-in_tester.sh` will test your executable with all maps in `./test_maps`. 
It will return an array showing the difference between the printing line from your executable and the solution, speed and leaks(optional).  
If you add:
```
#add system("leaks lem-in >> leaks.txt") before return in main
#add system("leaks lem-in >> error_leaks.txt") before exit(1)
```
It will check also for leaks in your executable.  

***
## Update
