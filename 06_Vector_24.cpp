#include<iostream>
#include<cctype>
#include<vector>
#include<map>
#include <algorithm>
#include<utility>
using namespace std;

double c;
string r, l;
double d;
vector<string> L;
vector<pair<double, string> > p;
map<string, double> mp;
map<string, double> n;
int main(){
    while(cin >> r && r != "END"){
        cin >> d;
        mp[r] = d;
    }
    cin.ignore();
    while(cin >> l && l != "-1"){
        L.push_back(l);
    }

    for(auto e : L){
        if(mp.find(e) != mp.end()){
            n[e] += mp[e];
        }
    }

    if(n.empty()){
        cout << "No Sales" << endl;
    }
    else{
        for(auto x : n){
            p.push_back(make_pair(x.second,x.first));
        }
        sort(p.rbegin(), p.rend());
        for(int i = 0; i < 3 && i < p.size(); i++){
        cout << p[i].second << " " << p[i].first << " " << endl;
        }
    }
}