#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    cin>>input;

    vector<string> ans;

    sort(input.begin(),input.end());

    do{
    ans.push_back(input);
    }while(next_permutation(input.begin(),input.end()));

    cout<<ans.size()<<"\n";
    for(int i=0;i<(int)ans.size();i++){
        cout<<ans[i]<<"\n";
    }

    return 0;
}