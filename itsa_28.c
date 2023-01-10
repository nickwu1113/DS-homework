#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d", &a);
    unsigned long long sum = 1;
    for(int i = 1; i <= a; i++){
        sum *= i;
    }
    if(a == 0){
        printf("1\n");
    }
    else printf("%llu\n", sum);
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2933