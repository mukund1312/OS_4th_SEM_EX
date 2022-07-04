// Code:

// Helloworld.c Code:
#include<stdio.h>
void main() {
printf("Hello World\n");
return;
}


// Excel_test.c Code:
#include<stdio.h>
#include<unistd.h>
void main() {
execl("./helloworld", "./helloworld", (char *)0);
printf("This wouldn't print\n");
return;
}
