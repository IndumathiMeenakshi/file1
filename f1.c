#include<stdio.h>
#include<stdlib.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a.int b);
int div(int a,int b);
int mod(int a,int b);
int add(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
return a*b;
}
int div(int a,int b)
{
return a/b;
}
int mod(int a,int b)
{
return a%b;
}
int main()
{
int n,m,v,w,x,y,zi;
scanf("%d%d",&n,&m);
v=add(n,m);
w=sub(n,m);
x=mul(n,m);
y=div(n,m);
z=mod(n,m);
printf("%d%d%d%d%d",v,w,x,y,z);
return 0;
}
