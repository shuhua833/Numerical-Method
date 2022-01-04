#include<stdio.h>
int main()
{
    double a[20][20],x[20],sum,fy,xi;
    int i,j,n;
    printf("Enter the number of entries ");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
        {
            printf("x%d = ",i);
            scanf("%lf",&x[i]);
            printf("y%d = ",i);
            scanf("%lf",&a[i][0]);
        }
    printf("\nEnter xi where interpolation is required");
    scanf("%lf",&xi);
    for(j = 1; j < n; j++)
        {
            for(i = 0; i < n-1; i++)
                {
                    a[i][j] = (a[i+1][j-1] - a[i][j-1])/(x[i+j]-x[i]);
                }
        }
    sum = 0;
    for(i= 1; i < n; i++)
        {
            fy = 1;
            for(j= 0;j< i;j++)
                {
                    fy = fy * (xi- x[j]);
                }
            sum = sum + (fy * a[0][i]);
        }
    sum = sum + a[0][0];
    printf("\nThe interpolated value of y at xi = %lf is %lf\n",xi,sum);
}
