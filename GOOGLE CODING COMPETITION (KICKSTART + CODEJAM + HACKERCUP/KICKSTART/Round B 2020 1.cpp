int main()
{
    //FIO;
    #ifdef mahin
           freopen("input.txt", "r" , stdin);
           freopen("output.txt", "w" , stdout);
    #endif // mahin
    ll t; cin >> t; ll cnt = 0;
    ll r = 1;
    while(t--)
    {
        ll n; cin >> n;
        ll a[n + 10];
        for(ll i = 0; i < n; i++)
            cin >> a[i];
        cnt = 0;
        for(ll i = 1; i < n - 1; i++)
        {
            ll x = a[i - 1], y = a[i + 1], z = a[i];
            if( z > x and z > y )
                cnt++;
        }
        p_case(r);
    cout << cnt << '\n';
    cnt = 0;


    }

