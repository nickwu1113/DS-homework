#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a, b, c;
    int arr[3];
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        arr[0] = a;
        if(b > c){
            arr[1] = b;
            arr[2] = c;
        }
        else{
            arr[1] = c;
            arr[2] = b;
        }
    }
    else if(b > a && b > c){
        arr[0] = b;
        if(a > c){
            arr[1] = a;
            arr[2] = c;
        }
        else{
            arr[1] = c;
            arr[2] = a;
        }
    }
    else if(c > b && c > a){
        arr[0] = c;
        if(b > a){
            arr[1] = b;
            arr[2] = a;
        }
        else{
            arr[1] = a;
            arr[2] = b;
        }
    }
    printf("%d>%d>%d\n", arr[0], arr[1], arr[2]);
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=262