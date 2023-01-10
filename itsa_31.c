#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int sum = 0;
    for(int i = 1; i <= a; i++){
        if(i % 3 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2937