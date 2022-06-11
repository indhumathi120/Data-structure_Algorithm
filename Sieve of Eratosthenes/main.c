
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int prime[n+1];
    for(int i=0;i<n;i++){
     prime[i]=1;
    }
    for(int i=2;i<=n/2;i++){
        if(prime[i]==1){
            for(int j=i*i;j<=n;j=i+j){
                prime[j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]!=0)
        printf("%d ",i);
    }
    return 0;
}

