#include<stdio.h>
#include<math.h>
#define MAX 100
int dem=0,a[MAX],n=4,k=3,v;
void ghinhan(){
    int i;
    printf("\ndem=%d:  ",++dem);
    for(i=0;i<k;i++){
        printf("%d ",a[i]);
    }
}
int UCV(int i , int k)
{
    if(k==0)  return 1;
    if(k==1)  return 1;
    else 
    {
        if(abs(i-a[k-1]) == 1 && abs(a[k-1]-a[k-2])==1)  { return 0;} 
        else return 1;
    }
}
void in(int v)
{
    int i;
    for ( i = 1; i <= n; i++)
    {
        if(UCV(i,v)==1)
        {
            a[v] = i;
            if(a[v]<a[v-1]) 
            {
            a[v]=0;
            continue;
            }
            if(v==k-1) ghinhan();
            else in(v+1);
        }
    }
}
int main()
{
    in(0);
    return 0;
}