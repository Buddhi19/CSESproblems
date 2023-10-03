#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S1,S2;
    cin>>S1>>S2;

    int n=S1.size();
    int val=S2.size();
    int out=0;
    for(int i=0;i<n-val+1;i++){
        if (S1.compare(i,val,S2)==0){
            out++;
        }
    }
    cout<<out<<endl;
    
    return 0;
}