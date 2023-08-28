#include <stdio.h>
#include <stdlib.h>
#include <time.h> // time 함수를 사용하기 위한 헤더 파일 추가

size_t scissors = 1;
size_t rock = 2;
size_t paper = 3;

int main() {
    srand(time(NULL)); // 시드 설정

    size_t machine_pick = (rand() % 3) + 1;
    size_t user_pick;

    printf("Input your pick.\n");
    scanf("%zu", &user_pick);
    if (machine_pick == user_pick) {
        printf("It's a draw.\n");
    } else {
        switch (user_pick) {
            case 1:
                if (machine_pick == rock) {
                    printf("You lost...\n");
                } else if (machine_pick == paper) {
                    printf("You won!\n");
                }
                break; // 각 case 블록 끝에 break 추가
            case 2:
                if (machine_pick == paper) {
                    printf("You lost...\n");
                } else if (machine_pick == scissors) {
                    printf("You won!\n");
                }
                break;
            case 3:
                if (machine_pick == scissors) {
                    printf("You lost...\n");
                } else if (machine_pick == rock) {
                    printf("You won!\n");
                }
                break;
            default:
                printf("Invalid pick.\n");
        }
    }
    return 0;
}