#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void sig_handler(int signo) {
	printf("Signal Handler signum: %d\n", signo);
	psignal(signo, "Received Signal");
}

int main(void) 
{
	void (*hand)(int);
		
	// hand 설정 안해놓으면 ctrl+C 입력시 바로종료
	hand = signal(SIGINT, sig_handler);
	if (hand == SIG_ERR) {
		perror("signal");
		exit(1);
	}

	printf("Wait 1st Ctrl+C... : SIGINT\n");
	pause();
	printf("After 1st Signal Handler\n");
	printf("Wait 2nd Ctrl+C... : SIGINT\n");
	pause();
	printf("After 2nd Signal Handler\n");
}

