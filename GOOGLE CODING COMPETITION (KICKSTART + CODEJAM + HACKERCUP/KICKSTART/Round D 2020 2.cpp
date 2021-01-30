#include <bits/stdc++.h>
using ll = long long;
using namespace std;
vector < ll > a;
int main()
{

    ll t;  cin >> t;
    for(ll i = 1; i <= t; i++)
    {
        a.clear();
        ll n; cin >> n;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            a.push_back(x);
        }
        a.push_back(-1);
        ll mx = -2e5 , cnt = 0;
        for(ll i = 0; i < (ll) a.size() - 1; i++)
        {
            if(a[i] > mx and a[i] > a[i + 1])
            {
                cnt++;
            }
            mx = max(mx , a[i]);
        }
        cout << "Case " << "#" << i << ": " << cnt << '\n';

    }
}
