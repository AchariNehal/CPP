#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=123456789;
    int count =0;
for(int i=0;i<n%10;i++)
   count++;
    cout <<count;
    return 0;
}