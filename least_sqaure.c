#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
float x[100],y[100],Tx=0,Tx2=0,Ty=0,Tyx=0,b,a;
printf("Enter n: ");
scanf("%d",&n);

printf("Enter the values:\n");
for(i=0;i<n;i++)
{
printf("Enter x[%d] and y[%d]: ",i,i);
scanf("%f%f",&x[i],&y[i]);
}

for(i=0;i<n;i++)
{
Tx=Tx+x[i];
Tx2=Tx2+x[i]*x[i];
Ty=Ty+y[i];
Tyx=Tyx+y[i]*x[i];
}

//for y=ax+b
b=((n*Tyx)-(Tx*Ty))/((n*Tx2)-(Tx*Tx));
a=(Ty/n)-(b*(Tx/n));

printf("\ny = %fx + %f",a,b);

getch();
}
