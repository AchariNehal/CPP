#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    stack<int>s2;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout <<"top s:"<<s.top()<<endl;
    s2.swap(s);
    cout <<"size s:"<<s.size()<<endl;
    cout <<"size s2:"<<s2.size()<<endl;
    return 0;
}
