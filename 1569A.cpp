#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first 
#define S second 

void solve(int n, string &st){

    int l = 1;
    int r = 0;
    int cA = 0;
    int cB = 0;
    bool flag =  false;
    int i;
    for(i = 0; i < n; i++){
        if(st[i] == 'a'){
            cA++;
        }else{
            cB++;
        }
        
        if(cA != 0 && cB != 0 && cA == cB){
            r = i + 1;
            cout << l << " " << r << "\n";
            flag = true;
            break;
        }
    }

    if(!flag){
        for(int i = 0; i < n; i++){
            if(st[i] == 'a'){
                cA--;
            }else{
                cB--;
            }

            if(cA != 0 && cB != 0 && cA == cB){
                l = i + 1;
                cout << l << " " << r << "\n";
                flag = true;
                break;
            }
        }
    }

    if(!flag){
        cout << "-1 -1\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        string st;
        cin >> n >> st;

        solve(n, st);
    }
    


    return 0;
}
