#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 7
#define N 5

int main() {  
    srand(time(NULL));
    double matriz[N][M];
    for(int i = 0; i < N; i++) {
        puts("");
        for(int j = 0; j < M; j++) {
            *(*(matriz + i) + j) = rand()%100 + 1;
            printf("%.0lf    ",*(*(matriz + i) + j));
        }
    }
    return 0;
}