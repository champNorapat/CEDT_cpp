#include<iostream>
#include<vector>
#include<map>
using namespace std;

int s;
string w;
vector<int> S;
vector<string> v;
map<string, int> D = { {"soon",0}, {"neung",1}, {"song",2}, {"sam",3}, {"si",4}, {"ha",5}, {"hok",6}, {"chet",7}, {"paet",8},
                        {"kao",9}, {"et",1}, {"yi",2}, {"sip",10}, {"roi",100}, {"phan",1000}, {"muen",10000}, {"saen",100000}, {"lan",1000000} };
int main(){
    while(cin >> w && w != "q"){
        v.push_back(w);
    }

    for(auto e : v){
        for(auto x : D){
            if(e == x.first){
                S.push_back(x.second);
            }
        }
    }

    for(auto j : S){
        cout << j << endl;
    }
}