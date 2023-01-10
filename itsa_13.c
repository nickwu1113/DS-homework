#include<stdio.h>
#include<math.h>

int main()
{
    int sa, sb, ea, eb, cost;
    scanf("%d %d", &sa, &sb);
    scanf("%d %d", &ea, &eb);
    int all = (ea * 60 + eb) - (sa * 60 + sb);
    if(all < 120){
        cost = (all / 30) * 30;
        printf("%d\n", cost);
    }
    else if(all >= 120 && all < 240){
        all /= 30;
        cost = (all - 4) * 30 + 120;
        printf("%d\n", cost);
    }
    else if(all >= 240){
        all /= 30;
        cost = 120 + 160 + (all - 8) * 60;
        printf("%d\n", cost);
    }
    return 0;
}

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=2925