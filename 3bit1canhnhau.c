#include<stdio.h>
#include<math.h>
#define MAX 100
int dem=0,a[MAX],k=3,v;
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
    if(i==0)  return 1;
    if(i==1)
    {
        if(a[k-1] == 1 && a[k-2] == 1) return 0;
        else return 1;
    }
}
void in(int v)
{
    int i;
    for ( i = 0; i <= 1; i++)
    {
        if(UCV(i,v)==1)
        {
            a[v] = i;
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