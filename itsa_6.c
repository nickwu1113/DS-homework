#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double d;
    d = (a * b) / 2;
    if(a * b % 2 == 0){
        printf("%.1lf\n", d);
    }
    else{
        d += 0.5;
        printf("%.1lf\n", d);
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2914