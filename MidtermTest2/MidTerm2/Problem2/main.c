#include <stdio.h>

// 초필살기 함수 (주인공은 현재 mp:150 range : 20이다)
int SS(int mp, int range) {
    if (mp >= 50 && range > 10) {
        printf("주인공 : 너는 점수를 획득했나?\n");
    }
    return 0;
}

int main() {
    int mp = 150;
    int range = 20;

    // 조건 맞으면 초필살기 발동
    SS(mp, range);

    return 0;
}