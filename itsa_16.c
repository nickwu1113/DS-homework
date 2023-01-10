#include<stdio.h>
#include<math.h>

int main()
{
    int a, b;
    int count = 1, k = 2;
    scanf("%d %d", &a, &b);
    if(a == 1 || b == 1){
        printf("1");
    }
    else if(a == 0 || b == 0){
        printf("0");
    }
    else if(a >= k && b >= k){
        while(a >= k && b >= k){
            while(a % k == 0 && b % k == 0){
                count *= k;
                a /= k;
                b /= k;
            }
            k++;
        }
        printf("%d\n", count);
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2929