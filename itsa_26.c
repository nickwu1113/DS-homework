#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    f = (a + c * 2 + b * 2 + d * 2) - e * 2;
    if(f >= 45){
        printf("A\n");
    }
    else if(f >=35 && f <=44){
        printf("B\n");
    }
    else if(f >=25 && f <=34){
        printf("C\n");
    }
    else if(f < 25){
        printf("D\n");
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=281