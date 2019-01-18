#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	char *envp[] = {"USER=DAVE", NULL};
	char *arg[] = {"ls","-al", NULL};

	printf("execute ls\n");
	execve("ls", arg, envp);
	perror("execl is failed\n");
	exit(1);
}

