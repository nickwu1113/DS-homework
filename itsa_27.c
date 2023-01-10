#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d", &a);
    double c;
    if(a <= 800){
        c = a * 0.9;
    }
    else if(a > 800 && a < 1500){
        c = a * 0.9 * 0.9;
    }
    else if(a >= 1500){
        c = a * 0.9 * 0.79;
    }
    printf("%.1lf\n", c);
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2931