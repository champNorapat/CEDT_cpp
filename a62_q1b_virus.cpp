#include<iostream>
#include<cmath>
using namespace std;

int A[256], n, k, m;

int isvirus(int l, int n, int d){
    if(n == 2){
        return !(A[l]^d && (A[l^1]^d));
    }
    n >>= 1;
    int l1 = l + n * d, l2 = l + n * (!d);
    return isvirus(l2, n, d) && (isvirus(l1, n, 0) || isvirus(l1, n, 1));
}

int main(){
    cin >> n >> k;
    while(m = 1 << k, n--){
        for(int i = 0; i < m; i++){
            cin >> A[i];
        }
        cout << (isvirus(0, m, 0) ? "yes" : "no");
    }
}