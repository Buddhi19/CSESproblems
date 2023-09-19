#include <iostream>
#include <vector>

using namespace std;

class tower{
    int count=0;
    public:
        vector<vector<int>> arr;
        void tower_of_hanoi(int n,int tower1,int tower2,int tower3)
        {
            if(n==0){
                return;
            }
            tower_of_hanoi(n-1,tower1,tower3,tower2);
            arr.push_back({tower1,tower3});
            count++;
            tower_of_hanoi(n-1,tower2,tower1,tower3);
        }
        int get_count(){
            return count;
        }
};

int main()
{

    int n;
    cin>>n;
    // cout<<n<<"\n";
    tower Tower;
    Tower.tower_of_hanoi(n,1,2,3);

    cout<<Tower.arr.size()<<"\n";
    int s=Tower.get_count();
    for(int i=0;i<s;i++){
        cout<<Tower.arr[i][0]<<" "<<Tower.arr[i][1]<<"\n";
    }
    return 0;
}