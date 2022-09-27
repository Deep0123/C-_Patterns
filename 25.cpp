//       1
//     1 2 1 
//   1 2 3 2 1
// 1 2 3 4 3 2 1
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int space = n - i;
        while(space){
            cout<<"  ";
            space--;
        }
        int j = i;
        int count = 1;
        while(j){
            cout<<count<<" ";
            j--;
            count++;
        }
        int k = 2;
        while(k<=i){
            cout<<i-k+1<<" ";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}