#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"hello wolrd"<<endl;
    int i = 1;
    while(i<=n){
        int c = n-i;
        while(c){
            cout<<c;
            c--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}