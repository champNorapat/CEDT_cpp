#include<iostream>
#include<map>
#include<vector>
using namespace std;

string s, check;
map<char, string> T2K;
map<string, string> K2K;
int main(){
    K2K["0"] = " ";
    K2K["2"] = "a";K2K["22"] = "b";K2K["222"] = "c";
    K2K["3"] = "d";K2K["33"] = "e";K2K["333"] = "f";
    K2K["4"] = "g";K2K["44"] = "h";K2K["444"] = "i";
    K2K["5"] = "j";K2K["55"] = "k";K2K["555"] = "l";
    K2K["6"] = "m";K2K["66"] = "n";K2K["666"] = "o";
    K2K["7"] = "p";K2K["77"] = "q";K2K["777"] = "r";K2K["7777"] = "s";
    K2K["8"] = "t";K2K["88"] = "u";K2K["888"] = "v";
    K2K["9"] = "w";K2K["99"] = "x";K2K["999"] = "y";K2K["9999"] = "z";

    T2K[' '] = "0";
    T2K['a'] = "2";T2K['b'] = "22";T2K['c'] = "222";
    T2K['d'] = "3";T2K['e'] = "33";T2K['f'] = "333";
    T2K['g'] = "4";T2K['h'] = "44";T2K['i'] = "444";
    T2K['j'] = "5";T2K['k'] = "55";T2K['l'] = "555";
    T2K['m'] = "6";T2K['n'] = "66";T2K['o'] = "666";
    T2K['p'] = "7";T2K['q'] = "77";T2K['r'] = "777";T2K['s'] = "7777";
    T2K['t'] = "8";T2K['u'] = "88";T2K['v'] = "888";
    T2K['w'] = "9";T2K['x'] = "99";T2K['y'] = "999";T2K['z'] = "9999";

    while(cin >> check && check != "END"){
        if(check == "T2K"){
            getline(cin, s);
            cout << ">>";
            for(int i = 1; i < s.length(); i++){
                cout << " " << T2K[tolower(s[i])];
            }
        }
        if(check == "K2T"){
            getline(cin, s);
            string p;
            cout << ">> ";
            for(int i = 1; i < s.length(); i++){
                if(s[i] == ' '){
                    cout << K2K[p];
                    p.clear();
                }
                if(s[i] != ' '){
                    p += s[i];
                }
            }
            cout << K2K[p]; p.clear();
        }
        cout << endl;
    }
}