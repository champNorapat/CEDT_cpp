#include<iostream>
#include<set>
#include<cctype>
using namespace std;

string S, M;
multiset<char> s;
multiset<char> m;
int main(){
    getline(cin, S);
    getline(cin, M);

    for(char x : S){
        if(isalpha(x)){
            s.insert(tolower(x));
        }
    }

    for(char x : M){
        if(isalpha(x)){
            m.insert(tolower(x));
        }
    }

    if(s == m){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}