#include<iostream>
using namespace std;
int main(){
    int n, num, count=0;
    cout<<"enter number";
    cin>>num;

    n=num;
    while(n!=0){
        count++;
        n/=10;
    }
    cout<<endl<<"total digits in"<<count;
    return 0;

}
