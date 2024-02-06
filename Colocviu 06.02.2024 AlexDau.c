/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int v[50];
    int n;
    n=0;
    
    do{
        scanf("%d",&v[n]);
        if(v[n]==0)
            break; 
        n++;
    }while(n<50);
    
    float a[50];
    
    for(int i=0; i<n-2; i++)
    {
        float s=0;
        for(int j=i;j<i+3;j++)
        {
            s=s+v[j];

        }
        a[i]=s/3;
        printf("%.2f ", s/3);
    }
    printf("\n");
    float max=a[0];
    for(int i=1; i<n; i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("%.2f", max);
    printf("\n");
    
    int b[50];
    int m=0;
    for (int i=0;i<n;i++)
    {
        if(v[i]>0&&v[i]%2==0){
            b[m]=v[i];
            m++;
        }
    }
    float c[50]; int p=0;
    for(int i=0;i<=m/2;i++)
        {
            printf("%.2f ", (float)(b[i]+b[m-i-1])/2);
            c[p]=(float)(b[i]+b[m-i-1])/2; p++;
        }
        printf("\n");
        float max1=c[0];
    for (int i=0;i<p;i++)
    {
        if(c[i]>max1)
        max1=c[i];
    }
    printf("%.2f ", max1);
    
    int q=0;
    while(q*q<n)
    {
        q=q+1;
        if(q*q>n){
        q=q-1;break;}
    }
    printf("\n");
    int mat[q][q];
    for (int i=0;i<q;i++){
        for(int j=0;j<q;j++)
            {
                mat[i][j]=v[i*q+j];
                printf("%d ", mat[i][j]);
            }
        printf("\n");
    }
    
    int g[q];
    for (int i=0;i<q;i++){g[i]=0;
        for(int j=0;j<q;j++)
            {
                g[i]=g[i]*10+mat[j][i];
            }
    }
    for(int i=0;i<q;i++)
    {   int d=1;
        for(int k=2; k<g[i]/2;k++)
            if(g[i]%k==0){
                d=0;
                break;}
        if(d)
        printf("%d ", g[i]);
    }
    
    
    return 0;
}
