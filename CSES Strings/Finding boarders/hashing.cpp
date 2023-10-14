#include <bits/stdc++.h>

using namespace std;

//######################### HASHING

long long compute_hash(string const& s){
    const int p=31; //for both lower and upper case 53 is good
    const long int MOD=1e9+9;
    long long hash_value=0;
    long long p_pow=1;
    for(auto c:s){
        hash_value=(hash_value+(c-'a'+1)*p_pow)%MOD;
        p_pow=(p_pow*p)%MOD;
    }
    return hash_value;
}


int main()
{
    string s;
    cin>>s;
    string new1="";
    string new2="";
    for(int i=0;i<(int)s.size()-1;i++){
        new1+=s[i];
        new2=s[s.size()-1-i]+new2;
        if(compute_hash(new1)==compute_hash(new2)){
            if(i+1!=(int)s.size()){
                cout<<i+1<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}