#include <stdio.h>

void HanoiTower(int n, char a, char b, char c) {

	if (n == 1) {
		//n은 원판 번호, a는 출발지를 가지는 변수, b는 경유지를 가지는 변수, c는 도착지를 가지는 변수
		printf("원판 %d, %c -> %c\n", n, a, c);
	}
	else {
		HanoiTower(n - 1, a, c, b);
		//n은 원판 번호, a는 출발지를 가지는 변수c는 도착지를 가지는 변수
		printf("원판 %d, %c -> %c\n", n, a, c);
		//n은 원판 번호, b는 출발지를 가지는 변수, a는 경유지를 가지는 변수, c는 도착지를 가지는 변수
		HanoiTower(n - 1, b, a, c);
	}
}

int main(void) {
	int n = 5;
	// n은 원판의 갯수, A는 출발지, B는 경유지, C는 도착지
	HanoiTower(n, 'A', 'B', 'C');

	return 0;
}

