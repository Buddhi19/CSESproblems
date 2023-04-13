#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int devisors(int n){
    int limit=sqrt(n)+1;
    int dev=0;
    for (int i=1;i<limit;i++){
        if (n%i==0){
            if(i*i==n){
                dev++;
            }
            else{
                dev+=2;
            }
        }
    }

    
    return dev;
}

int main(){
    int t;
    scanf("%d",&t);

    for (int i=0;i<t;i++){
        int q;
        scanf("%d",&q);
        printf("%d\n",devisors(q));
        
    }


    return 0;
}