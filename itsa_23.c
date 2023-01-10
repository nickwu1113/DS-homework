#include<stdio.h>
#include<math.h>

int f(int i){
    if(i == 0 || i == 1){
        i += 1;
        return i;
    }
    else{
        if(i > 1){
            return f(i - 1) + f(i / 2);
        }
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", f(a));
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=15917