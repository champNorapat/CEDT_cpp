#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, m, k;
long long l, p;
vector<int> v;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++){
        cin >> l;
        v.push_back(l);
    }
    sort(v.begin(),v.end());
    while(m--){
        cin >> p;
        auto s = lower_bound(v.begin(),v.end(),p-k);
        auto e = upper_bound(v.begin(),v.end(),p+k);
        cout << e - s << " ";
    }
}