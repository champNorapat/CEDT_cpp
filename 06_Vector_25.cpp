#include<iostream>
#include<vector>
using namespace std;

string n, g, c;
vector<string> a;
vector<string> A;
int main(){
    while(cin >> n && n != "q"){
        cin>>g;
        a.push_back(n);
        A.push_back(g);
    }
    while(cin >> c && c != "END"){
        for(int i = 0; i < a.size(); i++){
            if(c == a[i]){
                if(A[i] == "F") A[i] = "D";
                else if(A[i] == "D") A[i] = "D+";
                else if(A[i] == "D+") A[i] = "C";
                else if(A[i] == "C") A[i] = "C+";
                else if(A[i] == "C+") A[i] = "B";
                else if(A[i] == "B") A[i] = "B+";
                else if(A[i] == "B+") A[i] = "A";
            }
        }
    }

    for(int i = 0; i < A.size(); i ++){
        cout << a[i] << " " << A[i] << endl;
    }
}