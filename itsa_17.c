#include<stdio.h>
#include<math.h>

int main()
{
    int a, b;
    int c;
    scanf("%d %d", &a, &b);
    c = a * a + b * b;
    if(c > 40000){
        printf("outside\n");
    }
    else printf("inside\n");
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2928