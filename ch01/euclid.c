#include <stdio.h>
// 최대 공약수 구하기

int euclid(int m, int n) {
	int r;
	while ((r = m % n) != 0) {
		m = n;
		n = r;
	}
	return n;
}

int main(viod) {
	int m, n, t;
	printf("양의 정수 : ");
	scanf_s("%d", &m);
	printf("양의 정수 : ");
	scanf_s("%d", &n);
	if (m < n) {
		t = m;
		m = n;
	}
	printf("%d와 %d의 최대 공약수 : ", m, n);
	printf("%d\n", euclid(m, n));
	return 0;
}