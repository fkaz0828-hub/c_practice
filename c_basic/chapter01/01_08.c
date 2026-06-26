// 読み込んだ整数値に13を加えた値を表示

#include <stdio.h>

int main(void) {
    int no;

    printf("整数値を入力してください。：");
    scanf("%d", &no); // 整数値を読み込む

    printf("%dに13を加えると", no);
    printf("%dです。\n", no + 13);

    return 0;
}