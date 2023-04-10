#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,q;
    scanf("%d %d",&n,&q);

    long long arr[n];

    for (int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    for (int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }

    for (int i=0;i<q;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        long long sum=0;
        sum=arr[b]-arr[a-1];
        printf("%lld %lld\n",arr[i],sum);
    }


    return 0;
}