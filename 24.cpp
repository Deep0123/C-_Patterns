//       1
//     2 3
//   4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    int count = 1;
    while(i<=n){
        int space = n - i;
        while(space){
            cout<<"  ";
            space--;
        }
        int j = i;
        while(j){
            cout<<count<<" ";
            j--;
            count++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}