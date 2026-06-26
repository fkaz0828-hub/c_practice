// 読み込んだ整数値から7を減じた値を表示

#include <stdio.h>

int main(void) {
    int no;

    printf("整数を入力してください。：");
    scanf("%d", &no); // 整数値を読み込む

    printf("%dから7を減じると", no);
    printf("%dです。\n", no - 7);

    return 0;
}