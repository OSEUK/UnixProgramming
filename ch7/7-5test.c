#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Before exec function\n");

	if (execv("/usr/bin/ls", argv) == -1){
		perror("execv");
		exit(1);

	}
	printf("After exec function\n");
}

	
