#include<stdio.h>
#include<math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    while( a != 0 && b != 0 ){
        if( a >= b){
            a = a % b;
        }
        else if(b > a){
            b = b%a;
        }
    }
    if(a >= b){
        printf("%d\n", a);
    }
    else{
        printf("%d\n", b);    
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=15913