#include <bits/stdc++.h>

using namespace std;


int min_range(vector<int> numbers,int start,int end)
{
    return *min_element(numbers.begin()+start-1,numbers.begin()+end);
}

int main()
{
    int n,q;
    cin>>n>>q;

    vector<int> numbers(n);

    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    int array[q];
    for(int j=0;j<q;j++)
    {
        int start,end;
        cin>>start>>end;
        array[j]=min_range(numbers,start,end);
    }
    for(int j=0;j<q;j++){
        cout<<array[j]<<"\n";
    }

    return 0;
}

