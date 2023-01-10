#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    int b, c, d;
    scanf("%d", &a);
    b = a / 86400;
    printf("%d days\n", b);
    a -= b * 86400;
    c = a / 3600;
    printf("%d hours\n", c);
    a -= c * 3600;
    d = a / 60;
    printf("%d minutes\n", d);
    a -= d * 60;
    printf("%d seconds\n", a);
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2926