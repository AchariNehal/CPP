#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    reverse(vec.begin(),vec.begin());
    for(auto val:vec)
    cout << val<< " ";
    return 0;
}