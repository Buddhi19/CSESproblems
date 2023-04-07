#include <stdio.h>

void series(int n){
    if (n==1){
        printf("%d\n",n);
        return;
    }
    printf("%d ",n);
    if (n%2==0){
        series(n/2);
    }
    else{
        series(n*3 +1);
    }
    
}




int main(){
    int n;
    scanf("%d",&n);
    series(n);
    return 0;
}