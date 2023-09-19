#include <iostream>
#include <algorithm>

using namespace std;

int min_diff(vector<int> arr,int n,int sum1,int sum2)
{
    if(n==0){
        return abs(sum1-sum2);
    }
    return min(
        min_diff(arr,n-1,sum1+arr[n-1],sum2),
        min_diff(arr,n-1,sum1,sum2+arr[n-1])
    );
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<min_diff(arr,n,0,0)<<"\n";
    return 0;
}