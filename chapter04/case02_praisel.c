// 重要知识点：
// 4.2.1 char了性数组和null字符串
// C语言没有专门用于存储字符串的变量韩国类型，字符串都被存储在char类型的数组中。
// praisel.c 使用不同类型的字符串
# include <stdio.h>
# define PRAISE "You are an extraordinary being."
int main(void){
    char name[40];

    printf("What's you name?\n");
    scanf("%s", name);
    printf("Hello, %s, %s.\n", name, PRAISE);

    return 0;
}
