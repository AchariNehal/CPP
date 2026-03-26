#include<bits/stdc++.h>
using namespace std;
void upper_pyramid(int n);
void lower_pyramid(int n);
int main(){
    int n=5;
    upper_pyramid(n);
    lower_pyramid(n);
   return 0;
}
void upper_pyramid(int n){
    for(int i=0;i<n;i++){
        // for(int j=0;j<n-i-1;j++){
        //     cout << " ";
        // }
        for(int k=0;k<2*i+1;k++){
            cout << "*";
        }
        cout << "\n";
    }
    
}
void lower_pyramid(int n){
        for(int i=1;i<=n;i++){
        // for(int j=0;j<i-1;j++){
        //     cout << " ";
        // }
        for(int k=0;k<2*(n-i)+1;k++){
            cout << "*";
        }
        cout << "\n";
    }
}
