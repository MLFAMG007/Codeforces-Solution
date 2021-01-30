//  TIME :
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll s = 0, cnt = 0;
int main()
{
    ll t; cin >> t;
    for(ll j = 1; j <= t; j++)
    {
        ll n, b; cin >> n >> b;
        ll a[n + 10] = {0} ;


        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];

        }
        sort(a, a + n);
        for(ll i = 0; i < n; i++)
        {
            if(a[i] <= b)
            {

                if(  (s + a[i]) > b  )
                {
                    break;
                }
                else{
                    s += a[i];
                    cnt++;
                    //cout << "eta s, cnt " << ' ' << s << ' ' << cnt << '\n';
                                    }
            }

        }
        cout << "Case" << ' ' << "#" << j << ":" << ' ' << cnt << '\n';
        cnt = 0 ,s = 0;

    }
}
