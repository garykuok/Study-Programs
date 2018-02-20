#include <stdio.h>
int calc_cycle_len(int num)
{
    int cycle_length=1;
    
    while(num!=1)
    {
        cycle_length++;
        if(num%2==1)
            num=num*3+1;
        else
            num/=2;
    }
    
    return cycle_length;
}
int main(void)
{
    int temp,i,Num1,Num2,cycle_length=0,max_cycLen=0;
    
    while(scanf("%d %d",&Num1,&Num2)!=EOF)
    {
        printf("%d %d ",Num1,Num2);
        max_cycLen=0;
        if(Num1>Num2)
        {
            temp=Num2;
            Num2=Num1;
            Num1=temp;        
        }
        for(i=Num1;i<=Num2;i++)
        {
            cycle_length=calc_cycle_len(i);
            if(cycle_length>max_cycLen)
                max_cycLen=cycle_length;
        }
        printf("%d\n",max_cycLen);
    }
    return 0;
}