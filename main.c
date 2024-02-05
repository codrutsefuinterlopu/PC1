#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   char c;
   scanf("%c", &c);
   
   int a[50];
   int x;
   int n=0;
   
   do{
       scanf("%d", &x);
       a[n]=x;
       n++;
   }while(x!=0);
    
   int max, nr;
   max=-999999;
   nr=0;
   
    switch (c)
    {
        case 'a':{
            
            for (int i=0;i<n;i++){
                if(max==a[i])
                nr++;
              
                if (max<a[i]){
                    max=a[i];
                    nr=1;
                }
            }
            
            printf("%d %d\n",max,nr);
            break;
        }
        case 'b':{
            
            for (int i=0;i<n;i++){
                if(max==a[i])
                nr++;
              
                if (max<a[i]){
                    max=a[i];
                    nr=1;
                }
            }
            
            int nr1=0;
            int nr2=0;
            
            while (max!=0) {
                if (max&1==1)
                    nr1++;
                else
                    nr2++;
                max>>=1;
           }
           printf("%d %d\n", nr1, nr2);
           break;
        }
        case 'c':{
            
            int S=0;
            
            for (int i=0;i<n;i++){
                
                int s1=0;
                int aux=abs(a[i]);
                
                while(aux!=0){
                 
                    s1=s1+aux%10;
                    aux=aux/10;
                }
             
                if(s1%2==1)
                    S=S+a[i];
            }
            
            printf("%d", S);
        }
        
        case 'd':{
            
            float S=0;
            int nr=0;
            int p=1;
            
            for(int i=0;i<n;i++){   
                
                if(a[i]>0){
                    int k=2;
                    int ok=1;
                    
                    while(a[i]%k!=0 && ok){
                        if(a[i]%k==0)
                            ok==0;
                        k++;    
                    }
                    
                    if(ok){
                        
                        S=S+a[i];
                        nr++;
                        p=p*a[i];
                    }
                    
                }
                
            }
            printf("%.2f %.2f\n", S/nr, pow(p,1.0/nr));
            break;
        }    
        case 'e':{ 
            int ok=1;
            
            for(int i=0;i<n;i++){
                if(a[i]<0 || a[i]>9)
                 ok=0;
            }
            
            if(ok==0)
                printf("Sortare invalida!");
            
            else{
                int aux;
                
                for(int i=0;i<n-1;i++)
                    for(int j=i+1;j<n;j++)
                        if (a[i]>a[j]){
                            aux=a[i];
                            a[i]=a[j];
                            a[j]=aux;
                        
                        }
                
                for (int i=0;i<n;i++)
                    printf("%d ", a[i]);
            }
        break;    
        
        }
        default:{
            printf("Sunt smecher");
        }
        
    }

    
    
    return 0;
}
