#include <stdio.h>

// PassOrFail �Լ�
int PassOrFail(int score) {
    if (score >= 50) {
        return 1; // 50�� �̻��̸� �հ�
    }
    else {
        return 0; // 50�� �̸��̸� ���հ�
    }
}

// main �Լ�
int main() {
    int score = 50; //���� ����
    int result = PassOrFail(score);

    if (result == 1) {
        printf("����� �����ϴ�!\n");
    }
    else {
        printf("����� �ֽ��ϴ�\n");
    }

    return 0;
}