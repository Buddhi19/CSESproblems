#include <bits/stdc++.h>

using namespace std;

//counting boarders

vector<int> lps_array(string s){
    int i=0;
    int j=1;
    vector<int> lps(s.size());
    lps[0]=0;
    int count=0;
    while(j<(int)s.size()){
        if(s[j]==s[i]){
            count+=1;
            lps[j]=count;
            i+=1;
            j+=1;
        }
        else{
            i=0;
            if(s[j]==s[i]){
                count=0;
                continue;
            }
            count=0;
            lps[j]=count;
            j+=1;
        }
    }
    return lps;
}



int main()
{
    string s;
    cin>>s;    
    vector<int> ans=lps_array(s);
    
    int i=ans.size()-1;
    vector<int> pos;
    while(1){
        if(ans[i]==0){
            break;
        }
        else{
            pos.push_back(ans[i]);
            i=ans[i-1];
        }
    }
    sort(pos.begin(),pos.end());
    for(int i=0;i<(int)pos.size();i++){
        cout<<pos[i]<<" ";
    }
    // cout<<endl;

    return 0;
}