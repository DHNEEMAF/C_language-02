![linkedin_banner_image_1](https://user-images.githubusercontent.com/67286684/124254379-dd475800-dadd-11eb-9853-15a76669c27e.png)

# My_bsq in C programming language
```
This is a simple and custom My_bsq implementation in C programming language.

my_bsq -- finds and prints the biggest square in a map

Must find the largest possible square on a board while avoiding obstacles.
The board is represented by a file passed as the program’s argument,
respecting those constraints:

- Its first line contains the number of lines on the board (and only that),
(representing an empty place) and "o" (representing an obstacle)
are the only two allowed characters for the other lines
- All of the lines will be the same length (except the first one)
- There will always be at least one line
- Each line is terminated by \n.

Must print the board, with some "." replaced by "x" to represent
the largest square you found.
```
### Authorized function(s)
```
- malloc(3)
- free(3)
- open(2)
- read(2)
- close(2)
- printf(3)
- write(2)
```
### Instruction on how to compile and use my_bsq
```
1. Because I created a makefile for this program, you
can compile the files by typing "make"
2. It will give you the output "my_bsq"
3. To generate a map you need to type "perl [file]  [a] [b] [c]"
- [file] is the name of your file with the code
- [a] is the number of rows
- [b] is the number of columns
- [c] is the density
4. Type "./my_bsq board.txt" and run the program
5. To clean/remove the .o files, type "make clean" in your terminal
```
