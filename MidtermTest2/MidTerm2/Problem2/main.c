#include <stdio.h>

// ���ʻ�� �Լ� (���ΰ��� ���� mp:150 range : 20�̴�)
int SS(int mp, int range) {
    if (mp >= 50 && range > 10) {
        printf("���ΰ� : �ʴ� ������ ȹ���߳�?\n");
    }
    return 0;
}

int main() {
    int mp = 150;
    int range = 20;

    // ���� ������ ���ʻ�� �ߵ�
    SS(mp, range);

    return 0;
}