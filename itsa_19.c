#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a >= 3 && a <=5){
        printf("Spring\n");
    }
    else if(a >= 6 && a <=8){
        printf("Summer\n");
    }
    else if(a >= 9 && a <=11){
        printf("Autumn\n");
    }
    else{
        printf("Winter\n");
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=15910