#include<iostream>
#include<map>
#include<set>
using namespace std;

string f, s;
map<string, set<string>> mp;
int main(){
    while(cin >> f){
        if(!(cin >> s)) break;
        if(mp.find(f) == mp.end()) mp[f] = set<string>();
        if(mp.find(s) == mp.end()) mp[s] = set<string>();
        mp[f].insert(s);
        mp[s].insert(f);
    }

    set<string> out(mp[f]);
    out.insert(f);

    for(auto e : mp[f]){
        for(auto x : mp[e]){
            out.insert(x);
        }
    }

    for(auto e : out){
        cout << e << endl;
    }
}