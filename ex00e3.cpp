#include<iostream>
#include<set>
#include<cmath>
using namespace std;

int x, y;
long long i = 0;
set<int> s1, s2;;
int main(){
    bool c = true;
    cin >> x;
    while(i < x){
        cin >> y;
        s2.insert(y);
        s1.insert(i+1);
        i++;
    }

    for(auto e : s1){
        if(s2.find(e) == s2.end()){
            c = false;
        }
    }

    if(c == true)cout << "YES";
    else cout << "NO";
}