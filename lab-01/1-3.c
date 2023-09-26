#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str;
	// 포인터 str 정의
	
	str = malloc(sizeof(char) * 10);
	// str에 문자 20개 크기만큼 메모리 할당
	
	strcpy(str, "Hello");
	printf("%s\n", str);
	// str포인터에 문자열 Hello 카피 후 str 문자열 출력
	
	strcpy(str, "Good morning");
	printf("%s\n", str);
	// Good morning 카피 후 출력

	// 메모리 반환
	free(str);
	return 0;
}
