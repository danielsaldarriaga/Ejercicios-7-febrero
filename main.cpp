#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int suma (int a, int b)
{
     int sum=0;

     while (b>0)
     { 
           sum=sum+a;
           b--;
     }
     //cout<<sum;
           return sum;
     
}

int exp (int a, int b)
{
     int exp=a;
     for (int i=0;(b-1)>0;b--)
     {
         exp=suma(a,exp);
         }
     return exp;
     
     
     
}
  
int factorial (int a)
{
    int res=1;
    while (a>0){
          res=res*a;
          
          a--;
          
          }
          cout<<res;
          return res;
          }

int division (int a, int b)
{
    int div=0;
    div=a/b;
    cout<<div;
    return div;
    
}

int polinomio (int c[], int x, int b)
{
    int resul=0;
          for (int i=0; i<(b+1); i++)
          {
              resul=exp(x,b)*c[i];
              b--;
              }
              
              return resul;
              }
               
        

int main()
{
    int a, b, x;
    int c[5] = {1, 2, 3, 4, 5};
    cin>>a;
    cin>>b;
    cin>>x;
    cout<<polinomio(c,x,b);
    //division(a,b);
    cout<<exp(a,b);
    //factorial (a);
   // cout<<suma(a, b);
   // getche();
    system("PAUSE");
    return EXIT_SUCCESS;
}
