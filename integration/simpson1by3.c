#include<stdio.h>
#include<math.h>
double f(double x){
  return exp(x);
}
  int main(){
  int n,i;
  double a,b,h,x,sum=0,integral;
  printf("\nEnter the no. of segments ");
  scanf("%d",&n);
  printf("\nEnter the lower limit: ");
  scanf("%lf",&a);
  printf("\nEnter the upper limit: ");
  scanf("%lf",&b);
  h=(b-a)/n;
  for(i=1;i<n;i++){
    if(i%2==0){
      sum=sum+2*f(a+i*h);
    }
    else{
      sum=sum+4*f(a+i*h);
    }
  }
  integral=(h/3)*(f(a)+f(b)+sum);
  printf("\nThe integral is: %lf\n",integral);
}
  
