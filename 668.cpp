#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    b+=a*60,d+=c*60;
    a=(d-b+24*60)%(24*60);
    a=(a)?(a):(24*60);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a/60,a%60);
    return 0;
}