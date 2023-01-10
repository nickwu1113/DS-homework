#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a, arr[8];
    memset(arr, 0, sizeof(arr));
    scanf("%d", &a);
    int cnt = 7;
    if(a >= 0){
        while(a > 1){
            arr[cnt] = a % 2;
            a /= 2;
            cnt--;
        }
        if(a == 1){
            arr[cnt] = 1;
        }
    }
    else{
        a = 0 - a;
        while(a > 1){
            arr[cnt] = a % 2;
            a /= 2;
            cnt--;
        }
        if(a == 1){
            arr[cnt] = 1;
        }
        for(int i = 7; i >= 0; i--){
            if(arr[i] == 0){
                arr[i] = 1;
            }
            else arr[i] = 0;
        }
        arr[7] += 1;
        for(int i = 7; i > 0; i--){
            if(arr[i] > 1){
                arr[i - 1] += 1;
                arr[i] = 0;
            }
        }
    }
    for(int i = 0; i < 8; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2930