#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<int,int>p={1,2};
    // cout <<" "<< p.first<< " "<<p.second;
    pair<int,pair<int,int>>p={1,{2,3}};
    cout <<" "<< p.first <<" "<< p.second.second<<" "<<p.second.first <<"\n";
    pair<int,int>arr[]={{1,2},{2,3},{3,4}};
    cout << arr[0].first <<""<< arr[0].second;
    return 0;
}