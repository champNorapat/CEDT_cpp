#include <iostream>
using namespace std;
long long T(int n, int k) { // Schroder Triangle
    if(k == 0)return 1;
    if(k > n)return 0;
    return T(n,k-1)+T(n-1,k-1)+T(n-1,k);
}
long long S(int n) { // Schroder Number
    if(n == 0)return 1;
    if(n == 1)return 2;
    long long x = 3*S(n-1);
    for(int k = 1; k <= n-2; k++){
        x += S(k)*S(n-k-1);
    }
    return x;
}
long long W(int n) { // Wedderburn–Etherington Number
    if(n == 0)return 0;
    if(n == 1)return 1;
    if(n % 2 != 0){
        long long odd = 0;
        for(int i = 1; i <= ((n+1)/2)-1; i++){
            odd += W(i)*W(n-i);
        }
        return odd;
    }
    if(n % 2 == 0){
        long long e = e = (W(n/2) * (W(n/2)+1) / 2);
        for(int i = 1; i <= (n/2)-1; i++){
            e += W(i)*W(n-i);
        }
        return e;
    }
}
int main() {
string fn;
int p1, p2;
while (cin >> fn >> p1) {
if (fn == "T") {
cin >> p2;
cout << fn << '(' << p1 << ',' << p2 << ") = " << T(p1,p2) << endl;
} else if (fn == "S") {
cout << fn << '(' << p1 << ") = " << S(p1) << endl;
} else if (fn == "W") {
cout << fn << '(' << p1 << ") = " << W(p1) << endl;
}
}
return 0;
}