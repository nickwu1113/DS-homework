#include<stdio.h>

int main()
{
    int a;
    int sum = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a ; i++){
        sum += i;
        if(i == a){
            printf("%d = %d\n", a, sum);
        }
        else{
            printf("%d + ", i);
        }
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2952