// 読み込んだ二つの整数値の平均値の符号を反転した値を表示

#include <stdio.h>

int main(void) {
    int x, y;

    puts("二つの整数を入力せよ。");
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);

    int ave = (x + y) / 2; // 平均値を求める

    printf("平均値%dの符号を反転した値は%dです。\n", +ave, -ave);

    return 0;
}