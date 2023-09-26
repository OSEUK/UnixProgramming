#include <unistd.h>	// access, F_OK 사용 위함
#include <stdio.h>	
#include <stdlib.h>	// exit 사용 위함

int main(void)
{
	if (access("linux.txt", F_OK) == -1) {
		perror("linux.txt");
		exit(1);
	// linux.txt에 접근이 거부되거나 파일이 없다면
	// linux.txt : 해당 에러메시지 출력
	}
	return 0;
}
