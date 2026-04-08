//stl(standart template library)-contains pre bulid containers and algorithms
#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int>vec={1,2,3,4,5};
    // //forward iterator
    // vector<int>::iterator it; // can write auto
    // for(it=vec.begin();it<vec.end();it++)
    // cout << *(it) <<" ";
    // cout << "\n";
    // //backword iterator
    // //vector<int>::reverse_iterator itr;
    // for(auto itr=vec.rbegin();itr!=vec.rend();itr++)
    // cout << *(itr) <<" ";

    // cout << "\n";

    //list->implemented as doubly linked list and u cannot access randomly
    list<int>l;
    //list<int>l={1,2,3,4,5};
    l.push_back(0);
        l.push_back(1);
    l.push_front(4);
        l.push_front(5);
    for(int var:l){
        cout << var <<" ";
    }
  cout <<endl;

    //deque-> same as list and u can access element randomly 
    deque<int>d={1,2,3,4,5};
         for(int var:d){
        cout << var <<" ";
    }


    return 0;
}
