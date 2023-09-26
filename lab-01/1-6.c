#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	extern char *optarg;
	extern int optind;
	// getopt사용 위한 변수 정의

	long r;
	// long 형 변수 r

	while ((n = getopt(argc, argv, "a:m:")) != -1) {
		// command line argument로 -a와 -m을 인식하면 
		switch (n) {
			case 'a':	// a 일때 (add)
				r = 0;
				for (--optind; optind < argc; optind++)
					r = r + atol(argv[optind]);
					// 인자를 long형으로 변환한 뒤 총 합을 구함
			break;
			case 'm':	// m 일때 (mul)
				r = 1;	// 곱셈 위해 1로 정의
				for(--optind; optind < argc; optind++)
					r = r * atol(argv[optind]);
					// 인자를 long형으로 변환한 뒤 총 곱을 구함
			break;
		}
		printf("res = %ld\n", r);
		// 결과 출력
	}
}

