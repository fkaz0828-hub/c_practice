// 読み込んだ実数値をそのまま表示

#include <stdio.h>

int main(void) {
    double x;

    printf("実数を入力せよ："); scanf("%lf", &x);
    
    printf("あなたは%fと入力しましたね。\n", x); //そのまま表示

    return 0;
}