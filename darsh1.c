#include<stdio.h>
#include<math.h>

double func1(double i)
{
double r = 0.0;
r = pow(1.5 , i);
return r;
}

double func2(double i)
{
double r = 0.0;
r = pow(i , 3);
return r;
}

double func3(double i)
{
double r = 0.0;
r = i;
return r;
}

double func4(double i)
{
double r = 0.0;
r = pow(2 , i);
return r;
}

double func5(double i)
{
double e = 2.71;
double r = 0.0;
r = pow(e , i);
return r;
}

double func6(double i)
{
double r = 0.0;
r = log(i);
return r;
}

double func7(double i)
{
double r = 0.0;
r = log2(i);
return r;
}

double func8(double i)
{
double r = 0.0;
r = log(log(i));
return r;
}

double func9(double i)
{
double r = 0.0;
r = log2(log2(i));
return r;
}

double func10(double i)
{
double r = 0.0;
r = pow(2 , pow( 2 , i + 1));
return r;
}

double func11(double i)
{
if(i)
{
    return ( i * func11(i-1));
}
else
{
    return 1;
}
}



int main()
{
    int i=0;
    double x=0;
    printf("x = (3/2)^n \n");
    for(i=0;i<=100;i=i+10)           // x = (3/2)^n
    {
    x = func1(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }

    printf("\n");
    printf("x = n^3 \n");
    for(i=0;i<=100;i=i+10)          // x = n^3
    {
    x = func2(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }
   
    printf("\n");
    printf("x = n \n");
    for(i=0;i<=100;i=i+10)          // x = n
    {
    x = func3(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }
   
    printf("\n");
    printf("x = 2^n \n");
    for(i=0;i<=100;i=i+10)         // x = 2^n
    {
    x = func4(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }
   
    printf("\n");
    printf("x = e^n \n");
    for(i=0;i<=100;i=i+10)        // x = e^n
    {
    x = func5(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }
   
    printf("\n");
    printf("x = loge n \n");
    for(i=0;i<=100;i=i+10)           // x = loge n
    {
    x = func6(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }

    printf("\n");
    printf("x = log2 n \n");
    for(i=0;i<=100;i=i+10)          // x = log2 n
    {
    x = func7(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }
   
    printf("\n");
    printf("x = loge loge n \n");
    for(i=0;i<=100;i=i+10)          // x = loge loge n
    {
    x = func8(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }
   
    printf("\n");
    printf("x = log2 log2 n \n");
    for(i=0;i<=100;i=i+10)         // x = log2 log2 n
    {
    x = func9(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }
   
    printf("\n");
    printf("x = 2 ^ 2 ^ (n + 1) \n");
    for(i=0;i<=10;i=i+1)        // x = 2 ^ 2 ^ (n + 1)
    {
    x = func10(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }
   
    printf("\n");
    printf("x = n! \n");
    for(i=0;i<=20;i=i+2)        // x = 2 ^ 2 ^ (n + 1)
    {
    x = func11(i);
    printf("%d " , i);
    printf("\t");
    printf("%.2f \n" , x);
    }
   
   
}

