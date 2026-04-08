#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>q;  //top=max number and it is a binary tree
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(15);
    while(!q.empty()){
            cout <<q.top()<<" ";
            q.pop();
    }
    cout << "\n";
     priority_queue<int,vector<int>,greater<int>>q1; //top=min number and it is a binary tree
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(15);
    while(!q1.empty()){
            cout <<q1.top()<<" ";
            q1.pop();
    }
    cout << "\n";
    return 0;
}