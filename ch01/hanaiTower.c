#include <stdio.h>

void HanoiTower(int n, char a, char b, char c) {

	if (n == 1) {
		//n�� ���� ��ȣ, a�� ������� ������ ����, b�� �������� ������ ����, c�� �������� ������ ����
		printf("���� %d, %c -> %c\n", n, a, c);
	}
	else {
		HanoiTower(n - 1, a, c, b);
		//n�� ���� ��ȣ, a�� ������� ������ ����c�� �������� ������ ����
		printf("���� %d, %c -> %c\n", n, a, c);
		//n�� ���� ��ȣ, b�� ������� ������ ����, a�� �������� ������ ����, c�� �������� ������ ����
		HanoiTower(n - 1, b, a, c);
	}
}

int main(void) {
	int n = 5;
	// n�� ������ ����, A�� �����, B�� ������, C�� ������
	HanoiTower(n, 'A', 'B', 'C');

	return 0;
}

