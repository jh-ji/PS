#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// cards1_len은 배열 cards1의 길이입니다.
// cards2_len은 배열 cards2의 길이입니다.
// goal_len은 배열 goal의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int counter = 0;
    int counter_backup = 0;
    int cards1_idx = 0;
    int cards2_idx = 0;
    for (int j = 0;j < goal_len;j++)
    {
        if (cards1_idx < cards1_len) {
            if (strcmp(cards1[cards1_idx], goal[j]) == 0)
            {
                cards1_idx++;
                counter++;
            }
        }
        if (cards2_idx < cards2_len) {
            if (strcmp(cards2[cards2_idx], goal[j]) == 0)
            {
                cards2_idx++;
                counter++;
            }
        }
        if (counter_backup == counter)
        {
            return "No";
        }
        else
        {
            counter_backup = counter;
        }
    }
    return "Yes";
}