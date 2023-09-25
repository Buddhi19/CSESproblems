#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector <int> tickets(n);
    vector <int> custom_price(m);

    set<pair<int,int>> sorted_tickets;

    for(int i=0;i<n;i++)
    {
        cin>>tickets[i];
        sorted_tickets.insert({tickets[i],i});
    }
    for(int i=0;i<m;i++)
    {
        cin>>custom_price[i];
    }
    for(int i=0;i<m;i++)
    {
        auto match=sorted_tickets.lower_bound({custom_price[i]+1,0});
        if(match==sorted_tickets.begin()){
            cout<<-1<<endl;
        }
        else{
            match--;
            cout<<(*match).first<<"\n";
            sorted_tickets.erase(match);
        }
    }

    return 0;
}