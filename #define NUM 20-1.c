#define NUM 6
#include <stdio.h>
int main()
{
    int a[NUM];
    int i,j,temp;
    printf("请输入%d个整数:\n",NUM);
    for (i=0;i<NUM;i++)
        { scanf("%d",&a[i]);}
    printf("\n");
    for(i=0;i<NUM-1;i++)
    {for(j=0;j<NUM-1-i;j++)
        if(a[j]>a[j+1])
           {temp=a[j];   // temp=a1;a1=a2;a2=temp;          
            a[j]=a[j+1];
            a[j+1]=temp;}
}                                   //my fault:put first circle's "}" in wrong place(21line),so wrong!
            printf("排序后的数组为:");
            for(i=0;i<NUM;i++)
            printf("%d",a[i]);
    
return 0;
    }