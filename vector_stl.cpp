//stl(standart template library)-contains pre bulid containers and algorithms
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    //forward iterator
    vector<int>::iterator it; // can write auto
    for(it=vec.begin();it<vec.end();it++)
    cout << *(it) <<" ";
    cout << "\n";
    //backword iterator
    //vector<int>::reverse_iterator itr;
    for(auto itr=vec.rbegin();itr!=vec.rend();itr++)
    cout << *(itr) <<" ";
    return 0;
}
