#include<stdio.h>
#define MAX 100
int n,dem,a[MAX];
void phantich(int n , int k)
{   
    if(n==0)    
    { 
        in();
        return 0;
    }
    for(int i=1;i<=n;++i)
    {   
        a[k]=i;
        if(a[k]<a[k-1]) 
        {
            a[k]=0;
            continue;
        }
        phantich(n-i,k+1);
        a[k]=0;
    }
}
void in()
{   
    dem++;
    printf("T/h %d = ",dem );
    for(int i=0 ; i<6 ; i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        printf("+ %d ",a[i]);
    }
    printf("\n");
}
int main()
{
    phantich(6,0);
}
