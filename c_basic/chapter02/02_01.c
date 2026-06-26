// 読み込んだ整数値と7を加算乗除した値を表示

#include <stdio.h>

int main(void) {
    int n;

    printf("整数を入力せよ：");
    scanf("%d", &n);

    printf("7を加えると%dです。\n", n + 7); // 加算
    printf("7を減じると%dです。\n", n - 7); // 減算
    printf("7を乗じると%dです。\n", n * 7); // 乗算
    printf("7を除した商は%dです。\n", n / 7); // 除算（商）
    printf("7で除した剰余は%dです。\n", n % 7); // 除算（剰余）

    return 0;
}