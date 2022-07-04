// Code:


// While_loop.c:
#include<stdio.h>
void main() {
int value = 1;
while (value <= 10) {
printf("%d\t", value);
value++;
}
printf("\n");
return;
}



// Hello_world.c:
#include<stdio.h>
void main() {
printf("Hello World\n");
return;
}


// Exec_run_two_programs.c:
#include<stdio.h>
#include<unistd.h>
void main() {
int pid;
pid = fork();if (pid == 0) { printf("Child process: Running Hello World Program\n");
execl("./helloworld", "./helloworld", (char *)0); printf("This wouldn't print\n");
}
else {
sleep(3); printf("Parent process: Running While loop Program\n");
execl("./while_loop", "./while_loop", (char *)0); printf("Won't reach here\n");}