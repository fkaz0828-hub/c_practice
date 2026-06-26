// 読み込んだ三つの整数値の和（加算結果）を変数に格納して表示

#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    puts("三つの整数を入力してください。");
    printf("整数n1："); scanf("%d", &n1);
    printf("整数n2："); scanf("%d", &n2);
    printf("整数n3："); scanf("%d", &n3);

    int wa =n1 + n2 + n3; // n1とn2とn3の和でwaを初期化

    printf("それらの和は%dです。\n", wa); // 和を表示

    return 0;
}