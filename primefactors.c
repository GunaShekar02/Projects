#include<stdio.h>
void primefactors(int num)
{
    int i;
    for(i=2;i<=num;++i)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num/=i;
        }
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    primefactors(num);
    return 0;
}
