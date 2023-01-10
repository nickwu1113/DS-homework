#include<stdio.h>
#include<math.h>

int main()
{
    int a, b;
    double c;
    while(scanf("%d %d", &a, &b) !=EOF){
        if(b == 1){
            c = (a - 80) * 0.7;
        }
        else if(b == 2){
            c = (a - 70) * 0.6;
        }
        printf("%.1lf\n", c);
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=278