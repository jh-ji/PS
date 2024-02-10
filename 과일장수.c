#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int static sort(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

// score_len은 배열 score의 길이입니다.
int solution(int k, int m, int score[], size_t score_len) {
    int answer = 0;

    qsort(score, score_len, sizeof(int), sort);

    for (int i = m - 1; i < score_len - (score_len % m); i += m)
        answer += score[i] * m;

    return answer;
}