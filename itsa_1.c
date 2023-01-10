#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a == 1){
        printf("Person\n");
    }
    else if (a == 2){
        printf("Fairy\n");
    }
    else if(a == 3){
        printf("Dwarf\n");
    }
    else{
        printf("Error\n");
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=549