#include<bits\stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
    s.emplace(5);
    for(auto val:s)
        cout << val <<endl;
    return 0;
}