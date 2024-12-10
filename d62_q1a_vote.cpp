#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    size_t n, k;
    cin >> n >> k;
    unordered_map<string, int> m;
    while(n--){
        string x;
        cin >> x;
        if(m.find(x) == m.end()){
            m[x] = 1;
        }
        else{
            m[x]++;
        }
    }
    vector<int> v;
    for(auto a : m){
        v.push_back(a.second);
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << v[min(k-1, v.size()-1)];
}
