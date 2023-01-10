#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a == 1){
        printf("NO\n");
    } 
    if(a == 2 || a == 3) {
        printf("YES\n");
    }
    for(int i = 2; i <= a / 2 ; i++){
        if(a % i == 0) {
            printf("NO\n");
            break;
        }
        if(i == a / 2){  
            printf("YES\n");
            break;
        }
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=15908