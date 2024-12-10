#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

int c, s, m=1;
string n;
vector<string> N;
vector<tuple<string,int,int>> v;
int main(){
    // getline(cin, n);
    while(cin >> n && n != "-1"){
        N.push_back(n);
    }

    N.push_back("");
    for(int i = 1; i < N.size(); i++){
        if(N[i] != N[i-1]){
            if(i - s >= m){
                m = i-s;
            }
            s = i;
        }
    } 
    s = 0;
    for(int i = 1; i < N.size(); i++){
        if(N[i] != N[i-1]){
            if(i - s == m){
                v.push_back(make_tuple(N[i-1],s,i));
            }
            s = i;
        }
    }
    sort(v.begin(), v.end());
    for(auto e : v){
        cout << get<0>(e) << " --> x[ " << get<1>(e) << " : " << get<2>(e) << " ] " << endl;
    }
}