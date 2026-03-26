#include<bits/stdc++.h>
using namespace std;
void upper_pyramid(int n);
int main(){
    int n=5;
    upper_pyramid(n);
   return 0;
}
void upper_pyramid(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<i+1;k++){
            if((i+k)%2==0)
            cout << "1";
            else
            cout << "0";
        }
        cout << "\n";
    }
    
}
