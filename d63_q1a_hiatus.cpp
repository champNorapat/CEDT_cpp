#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    size_t y;
    size_t month,n,m,year;
    int total;
    vector<int> all_y,release;
    cin >> n >> m;
    for(size_t i = 0 ; i < n ; i++){
        cin >> y >> month;
        total = y*100 + month;
        release.push_back(-total);
    }
    sort(release.begin(),release.end());
    for(size_t i = 0 ; i < m ; i++){
        cin >> y >> month;
        total = -(y*100 + month);
        
        auto last = lower_bound(release.begin(),release.end(),total);
        if(last == release.end()){
            cout << "-1 -1 ";
            
        }else if(-(*last) == -total){
            cout << "0 0 ";
        }else{
            year = -(*last)/100 , month =(-(*last))% 100 ;
            cout << year << ' ' << month << ' ';
        }
        
        
    }
}