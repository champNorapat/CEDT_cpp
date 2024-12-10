#include <iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

int n;
string name, grade, s, symbol;
vector<tuple<string, string, int>> d; 

int gradeRank(const string &grade) {
    if (grade == "A") return 1;
    if (grade == "B+") return 2;
    if (grade == "B") return 3;
    if (grade == "C+") return 4;
    if (grade == "C") return 5;
    if (grade == "D+") return 6;
    if (grade == "D") return 7;
    return 8; 
}

bool customSort(const tuple<string, string, int>& a, const tuple<string, string, int>& b) {
    int rankA = gradeRank(get<0>(a));
    int rankB = gradeRank(get<0>(b));
    if (rankA != rankB) {
        return rankA < rankB; 
    }
    return get<2>(a) < get<2>(b);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> name >> grade;
        d.push_back(make_tuple(grade, name, i));
    }
    cin.ignore();

    while(cin >> s && s != "END"){
        symbol = s[s.length()-1];
        s.pop_back();
        for (int i = 0; i < d.size(); i++){
            if(s == get<1>(d[i])){
                if(symbol == "+"){
                    if(get<0>(d[i]) == "B+") get<0>(d[i]) = "A";
                    else if(get<0>(d[i]) == "B") get<0>(d[i]) = "B+";
                    else if(get<0>(d[i]) == "C+") get<0>(d[i]) = "B";
                    else if(get<0>(d[i]) == "C") get<0>(d[i]) = "C+";
                    else if(get<0>(d[i]) == "D+") get<0>(d[i]) = "C";
                    else if(get<0>(d[i]) == "D") get<0>(d[i]) = "D+";
                    else if(get<0>(d[i]) == "F") get<0>(d[i]) = "D";
                } 
                else if (symbol == "-"){
                    if(get<0>(d[i]) == "B+") get<0>(d[i]) = "B";
                    else if(get<0>(d[i]) == "B") get<0>(d[i]) = "C+";
                    else if(get<0>(d[i]) == "C+") get<0>(d[i]) = "C";
                    else if(get<0>(d[i]) == "C") get<0>(d[i]) = "D+";
                    else if(get<0>(d[i]) == "D+") get<0>(d[i]) = "D";
                    else if(get<0>(d[i]) == "D") get<0>(d[i]) = "F";
                    else if(get<0>(d[i]) == "A") get<0>(d[i]) = "B+";
                }
            }
        }
        symbol = "";
    }
    sort(d.begin(), d.end(), customSort);

    for (int i = 0; i < d.size(); i++){
        cout << get<1>(d[i]) << " " << get<0>(d[i]) << endl;
    }
}