### Filler

## Table of Contents
1. [Introduction](#introduction)
2. [Objectives](#objectives)
3. [Installation](#installation)
4. [Compilation](#compilation)
5. [Tester](#tester)
6. [Update](#update)


***
### Introduction
Filler is an algorithmic game which consists in filling a grid of a known size in advance with pieces of random size and shapes,
without the pieces being stacked more than one square above each other and without them exceeding the grid. If one of these conditions
is not met, the game stops.  
Each successfully placed piece yields a number of points, and has only one player, the goal of the game could be to get the best score
possible. However, it is with two players that the filler takes all his interest. Each player has for the purpose of placing as many
pieces as possible while attempting to prevent his opponent from doing the same. At the end of the game, the one with the most points
wins the match...
***
## Objectives
Writing a Filler player is a very interesting algorithmic challenge. Each turn, the active player receives the grid status and must
maximize his points while trying to minimize those of the opponent by eliminating it as quickly as possible.  
The objectives of this project always bring together the usual objectives of early curriculum projects: rigour,
practice of C and practice of elementary algorithms. But unlike a simpler game like Fillit, it’s no longer just a matter
of arranging your pieces as efficiently as possible, but now of preventing your opponent from doing so! You will therefore
have to create your own filling algorithm to counter the enemy algorithm.
You must master the VM provided with this subject too...
***
## Installation
***
I made the choice to centralize all Hive projects in a single file.
This does not allow you to download the libft individually at the moment.
```
$ git clone git@github.com:B9R9/42-HIVE.git
$ cd ../path/to/the/folder/Filler
```
***
## Compilation
To generate an executable file, you can run `$>make`.  
To run the game:
```
$>./filler_vm -p1 user1 -p2 user2 -v -f samples/w1.flr
```
***
## Tester
To test your player, you will have to play games and see how the player behaves. There are 3 scripts with different purposes.
-  run_player.sh:  
  Run one game.
```
$>./resources/filler_vm -p1 ./briffard.filler -p2 ./resources/players/carli.filler -f ./resources/maps/map02 | python3 vis.py
$>usage run_player.sh 
```
-  play_game.sh:  
  Run x game again with a specific player and create a log.
```
$> $VM -f $MAP -p1 ./resources/players/$PLAYER.filler  -p2 ./$ME -q > $PWD/SCORE/$PLAYER/$STRMAP.result
$> usage ./play_game.sh [player] [number of games]
```
-  game.sh:  
  Do the same then play_game.sh with extra to play again all players.
```
$>usage: ./game.sh [player-name] [number of games]"
```
***
## Update
> to have only 1 script to run game  
> Create your own visual  
> Include BFS algorithm in the code   
