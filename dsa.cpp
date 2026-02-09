#include<iostream>
using namespace std;
int reversecounting(int number){
    if(number==0){
        return 0;
    }
    cout<<number<<" ";
    number--;
    return reversecounting(number);
}
int main(){
    int x;
    cin>>x;
    int res=reversecounting(x);
    cout<<res;
    
    return 0;
}