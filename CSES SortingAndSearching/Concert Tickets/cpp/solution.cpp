#include <bits/stdc++.h>

using namespace std;

multiset<long> tickets;

int main(){
    long n,m;
    cin>>n>>m;

    for (int i=0;i<n;i++){
        long num;
        scanf("%ld",&num);
        tickets.insert(-num);
    }

    for(int i = 0; i < m; i++){
        long t;
        scanf("%ld", &t);
        if(tickets.lower_bound(-t) == tickets.end())
            printf("-1\n");
        else {
            printf("%ld\n", -(*tickets.lower_bound(-t)));
            tickets.erase(tickets.lower_bound(-t));
        }
    }

    
    return 0;
}