#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    queue<int>q2;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty()){
            cout <<q.front()<<endl;
            q.pop();
    }
    // q2.swap(q);
    // cout <<"size s:"<<q.size()<<endl;
    // cout <<"size s2:"<<q2.size()<<endl;
    return 0;
}