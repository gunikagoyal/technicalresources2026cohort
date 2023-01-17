#include<iostream>
using namespace std;
int main()
{
    int l, u, num, count=0;
    cout<<"enter lower limit";
    cin>>l;
    cout<<"enter upper limit";
    cin>>u;
    for(int i=l; i<=u; i++){
        for(int j=2; j<i; j++){
            if(i%2==0){
                count=1;
                break;
            }
            count=0;
        }
        if(count==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
