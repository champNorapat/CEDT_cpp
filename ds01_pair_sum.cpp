#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int l1, l2, c, in2;
int main(){
    cin >> l1 >> l2;
    vector<int> in1(l1);
    for(int i = 0; i < l1; i++){
        cin >> in1[i];
    }
    sort(in1.begin(), in1.end());
    for(int i = 0; i < l2; ++i){
        cin >> in2;
        bool found = false;
        int left = 0, right = l1 - 1;

        while(left < right){
            c = in1[left] + in1[right];
            if(c == in2){
                found = true;
                break;
            }
            else if(c < in2){
                ++left;
            }
            else{
                --right;
            }
        }
        if(found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}