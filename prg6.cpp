#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n=7;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           int layer=min(min(i,j),min(n-i-1,n-j-1));
           int value=(n+1)/2 - layer;
           cout << value;
    }
        cout << "\n";
}
      
    return 0;
}
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/