#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t , n , k , R;
vector < ll > a;
ll chk(ll first , ll K)
{
    ll AN = 1;
    for(ll i = first ; i < first + k - 1; i++)
    {
        ll pou = a[i] - a[i + 1];
        if(pou != 1)
        {
            AN = -1;
            break;

        }
    }
    return AN;



}
int main()
{
    R = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;

        for(ll i = 0; i < n; i++)
        {
            ll NN; cin >> NN; a.push_back(NN);
        }
        cout << "Case #" << R++ << ":" << ' ';
        ll cnt = 0;
        for(auto it = a.begin(); it != a.end(); it++)
        {
            if(*it == k)
            {
               ll XX  = distance(a.begin(), it);
               //ll YY = XX + k - 1;
              // cout << XX << ' ' << YY << '\n';
               ll ans = chk(XX , k);
               if(ans == 1)
               {
                   cnt++;
               }

            }
        }
        cout << cnt << '\n';
        cnt = 0;
        a.clear();

    }
}

