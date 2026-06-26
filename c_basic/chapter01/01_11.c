// 読み込んだ二つの整数値の積（乗算結果）を変数に格納して表示

#include <stdio.h>

int main(void) {
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数n1："); scanf("%d", &n1);
    printf("整数n2："); scanf("%d", &n2);

    int seki = n1 * n2; // n1とn2の積でsekiを初期化

    printf("それらの積は%dです。\n", seki); // 積を表示

    return 0;
}