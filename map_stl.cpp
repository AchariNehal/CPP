#include<bits/stdc++.h>
using namespace std;
int main (){
    unordered_map<string,int>m; //map(key,value)
   // m["table"]=1017; // used to insert ^
      // m["tv"]=102;
      //   m["car"]=1012;
      //     m["laptop"]=1044;
      //     m.insert({"camera",1234});
      //     m.emplace("pot",50);
      //     m.erase("tv");

      m.emplace("tv",50);
          m.emplace("lamp",10);
              m.emplace("chair",80);
                  m.emplace("laptop",90);
                      m.emplace("car",60);
    for(auto p:m){
        cout <<p.first << " "<<p.second<<endl;
    }
    // cout <<"count:"<<m.count("laptop")<<endl;
    // cout <<"value:"<<m["laptop"]<<endl;
    // if(m.find("tv") != m.end()){
    //   cout << "found"<<endl;
    // }else{
    //   cout <<" not found";
    // }
    return 0;
}