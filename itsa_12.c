#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d", &a);
    int x = a / 10;
    printf("NT10=%d\n", x);
    a -= x * 10;
    int y = a / 5;
    printf("NT5=%d\n", y);
    a -= y * 5;
    printf("NT1=%d\n", a);
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2923