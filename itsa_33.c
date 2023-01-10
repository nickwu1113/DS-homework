#include<stdio.h>

int main()
{
    int a, b;
    int sum = 0;
    scanf("%d %d", &a, &b);
    if(a > b){
        for(int i = a; i >= b; i--){
            sum += i;
        }
    }
    else if(a < b){
        for(int i = a; i <= b; i++){
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2939