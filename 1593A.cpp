#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first 
#define S second 
#define PB push_back
#define EB emplace_back
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--) 
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
void solve(ll a, ll b, ll c){

    int maxVotes = max(a, max(b,c));
    // cout << maxVotes; 

    if(maxVotes == 0){
        cout << "1 1 1" << "\n";
        return;
    }

    if(a == maxVotes){
        cout << 0 << " ";
    }else{
        cout << maxVotes - a + 1 << " ";
    }

    if(b == maxVotes){
        cout << 0 << " ";
    }else{
        cout << maxVotes - b + 1 << " ";
    }

    if(c == maxVotes){
        cout << 0 << " ";
    }else{
        cout << maxVotes - c + 1 << " ";
    }

    cout << "\n";
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << fixed << setprecision(9);


    ll t;
    cin >> t;

    while(t-- > 0){

        ll a,b,c;
        cin >> a >> b >> c;

        solve(a,b,c);


    }
    


    return 0;
}
