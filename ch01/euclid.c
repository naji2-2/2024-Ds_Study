#include <stdio.h>
// �ִ� ����� ���ϱ�

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
	printf("���� ���� : ");
	scanf_s("%d", &m);
	printf("���� ���� : ");
	scanf_s("%d", &n);
	if (m < n) {
		t = m;
		m = n;
	}
	printf("%d�� %d�� �ִ� ����� : ", m, n);
	printf("%d\n", euclid(m, n));
	return 0;
}