# Dr_Quine

A quine is a computer program which takes no input and produces a copy of its own source code as its only output.

In general, the method used to create a quine in any programming language is to have, within the program, two pieces: (a) code used to do the actual printing and (b) data that represents the textual form of the code.

## Basic Quine in c

```c
#include <stdio.h>
int main(){
char*s="#include <stdio.h>%cint main(){%cchar*s=%c%s%c;%cprintf(s,10,10,34,s,34,10);return 0;}";
printf(s,10,10,34,s,34,10);return 0;}
```

## Self Replicated Program

Last objectif of my quine is to replicate it self

[here the code](/Sully/c/Sully.c)