//编程题：先编写一个求1到n的偶数的和的函数，在main（）函数中输入n,
//然后调用函数求1到n的偶数和并求输出
#include <stdio.h> //当你不需要，intelli suggestion的时候。打入 editor:enable intellisense 找到suggestion下的两个勾取消了 
int sum(int n)  //注意：函数名称不能再用来做变量的名称了
{
int i=0;
int sumtotal=0;
for(i=0;i<=n;i++)
  { if(i%2==0)
    {sumtotal+=i;}
  }
  return sumtotal;
}
int main()  
{
  int n;

  printf("请输入整数n\n",n);

  scanf("%d",&n);

  int result=sum(n);

  printf("偶数的和为%d",result);

  return 0;
}