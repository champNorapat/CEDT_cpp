#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v = {1,3,4,5,6,1,1,1,3,1,9,1};
int main(){
    auto x = v.begin(), e = v.end();
    auto itr = x-1;
    bool found = false;
    while ((itr = find(++itr, e, 1)) != e){
        cout << itr-x << endl;
        found = true;
    }
    
    if(!found){
        cout << "Not found";
    }
}