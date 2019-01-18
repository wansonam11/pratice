#include <unistd.h>
#include <stdlib.j>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#define MAXLINE 64

int main(int argc, char **argv){
	char buf[MAXLINE];
	int proc_status;
	pid_t pid;
	printf("DaveShell ver 1.0\n");
	while(1){
		memset(buf, 0x00, MAXLINE);
		fgets(buf, MAXLINE -1, stdin);
		if(strncmp(buf, "exit\n",5)==0){
			break;
		}
		buf[strlen(buf) - 1] = 0x00;

