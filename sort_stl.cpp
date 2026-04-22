#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,6,3,4,2,9};
    sort(arr,arr+6); // ASC ORDER
    for(int val:arr){
        cout << val<< " ";
    }
    cout <<endl;
    sort(arr,arr+6,greater<int>()); //DSC ORDER
       for(int val:arr){
        cout << val<< " ";
    }

    return 0;
}