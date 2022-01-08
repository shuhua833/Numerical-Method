#include<stdio.h>
#include<math.h>
float f(float x){
  return (x*x*x)+1;
}
int main(){
  int n,i;
  float a,b,h,sum=0,integral;
  printf("\nEnter the no. of segments ");
  scanf("%d",&n);
  printf("\nEnter the lower limit: ");
  scanf("%f",&a);
  printf("\nEnter the upper limit: ");
  scanf("%f",&b);
  h=(b-a)/n;
  for(i=1;i<n;i++){
    if(i%3==0){
      sum=sum+2*f(a+i*h);
    }
    else{
      sum=sum+3*f(a+i*h);
    }
  }
  integral=(3*h/8)*(f(a)+f(b)+sum);
  printf("\nThe integral is: %f\n",integral);
}
