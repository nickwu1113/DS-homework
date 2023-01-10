#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double d;
    d = ((a + b) * c) / 2;
    if(((a + b) * c) % 2 == 0){
        printf("Trapezoid area:%.1lf\n", d);
    }
    else{
        d += 0.5;
        printf("Trapezoid area:%.1lf\n", d);
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2913