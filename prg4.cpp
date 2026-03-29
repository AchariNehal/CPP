#include<bits/stdc++.h>
using namespace std;
void up(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        for(int k=0;k<2*i;k++){
            cout << " ";
        }
        for(int j=n-i-1;j>=0;j--){
            cout << "*";
        }

        cout << endl;
   }
}

void down(int n){
    for(int i=4;i>=0;i--){
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        for(int k=0;k<2*i;k++){
            cout << " ";
        }
        for(int j=n-i;j>0;j--){
            cout << "*";
        }

        cout << endl;
   }
}
int main(){
    int n=5;
    up(n);
    down(n);
    return 0;
}