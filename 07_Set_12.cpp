#include<iostream>
#include<set>
using namespace std;

int n, c;
bool f;
multiset<int> N;
int main(){
    while(cin >> n && n != -1){
        c++;
        if(N.find(n) == N.end()){
            N.insert(n);
        }
        else{
            f = 1;
            break;
        }
    }

    if(f){
        cout << c;
    }
    else{
        cout << "-1";
    }
}