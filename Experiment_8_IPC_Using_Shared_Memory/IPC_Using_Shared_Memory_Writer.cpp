// Write.cpp Code
#include<iostream>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdio.h>
using namespace std;
int main()
{
key_t key=ftok("shmfile",65);
int shmid=shmget(key,1024,0666|IPC_CREAT);
char *str=(char*)shmat(shmid,(void*)0,0);
cout<<"Write data:";
cin>>str;
printf("Data written in memory: %s",str);
shmdt(str);
return 0;
}