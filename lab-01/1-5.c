#include <stdio.h>
#include <stdlib.h>	// atoi 사용 위함

int main(int argc, char *argv[])	// command line argument
{
	int i, sum = 0;	// 변수 선언

	for(i = 1; i < argc; i++)	
		sum += atoi(argv[i]);  // 입력한 수들을 순서대로 더함

	printf("%d\n", sum);	// 출력
	return 0;
}

