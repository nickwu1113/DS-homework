#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double c;
    if(a <= 60){
        c = a * b;
    }
    else if(a > 60 && a <= 120){
        c = 60 * b + (a - 60) * b * 1.33; 
    }
    else{
        c = 60 * b + 60 * b * 1.33 + (a - 120) * b * 1.66;
    }
    printf("%.1lf\n", c);
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2936