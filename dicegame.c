#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void user_dice(int* up) {
    for (int i = 0; i < 3; i++) {
        up[i] = rand() % 6 + 1;
    }
}

void machine_dice(int* mp) {
    for (int i = 0; i < 3; i++) {
        mp[i] = rand() % 6 + 1;
    }
}

void win_or_lose(int* up, int* mp) {
    int user_res;
    int machine_res;

    for (int i = 0; i < 3; i++) {
        user_res += up[i];
        machine_res += mp[i];
    }

    if (user_res > machine_res) {
        printf("You won!\n");
    } else if (user_res = machine_res) {
        printf("It's draw.\n");
    } else {
        printf("You lost...\n");
    }
}

int main() {
    int user_cards[3];
    int machine_cards[3];
    int* up = user_cards;
    int* mp = machine_cards;
    srand(time(NULL)); // 시드를 현재 시간으로 설정

    user_dice(up);
    machine_dice(mp);
    win_or_lose(up, mp);
    return 0;
}