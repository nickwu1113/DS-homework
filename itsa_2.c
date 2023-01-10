#include<stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if(a == 'E'){
        printf("ByeBye\n");
    }
    else if (a == 'M'){
        printf("Male\n");
    }
    else if(a == 'F'){
        printf("Female\n");
    }
    else{
        printf("Error\n");
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=556