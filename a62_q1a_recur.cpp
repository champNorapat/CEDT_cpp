#include<iostream>
using namespace std;

int a, b, a2 = 1, c;
int main(){
    cin >> a >> b;
    for(int i = 0; i < a; i++){
        a2 = a2 * 2;
    }
    int H[a2][a2], G[a2];

    for(int i = 0; i < a2; i++){
        c = i;
        G[i] = 0;
        while(c > 0){
            if(c % 2 == 1){
                G[i]++;
            }
            c = c / 2;
        }
    }

    for(int i = 0; i < a2; i++){
        for(int j = 0; j < a2; j++){
            H[i][j] = G[i] + G[a2 - j - 1]-a+b;
            cout << H[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}