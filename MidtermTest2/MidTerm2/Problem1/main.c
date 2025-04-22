#include <stdio.h>

// PassOrFail 함수
int PassOrFail(int score) {
    if (score >= 50) {
        return 1; // 50점 이상이면 합격
    }
    else {
        return 0; // 50점 미만이면 불합격
    }
}

// main 함수
int main() {
    int score = 50; //예상 점수
    int result = PassOrFail(score);

    if (result == 1) {
        printf("재시험 없습니다!\n");
    }
    else {
        printf("재시험 있습니다\n");
    }

    return 0;
}