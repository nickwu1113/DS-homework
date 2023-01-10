#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        printf("%d*%d=%d\n", i, i, i * i);
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2938