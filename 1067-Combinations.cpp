//بسم الله الرحمن الرحيم

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
//using u128 = __uint128_t;
#define el << '\n'
#define sz(v) ((int)(v).size())
#define PI 3.141592653589793238
#define _test_ int _ ; cin >> _ ; while( _-- )
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define file() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define pb push_back
ll gcd ( ll  a, ll b ) { return __gcd ( a, b );}
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) );}
ll big_mod(ll base , ll power , ll mod){
    ll ret=1;base%=mod;while(power){if(power&1)ret=ret*base%mod;base=base*base%mod;power>>=1;}return ret;}
ll mod_inverse(ll a , ll mod ){ return big_mod(a,mod-2,mod);}
ull POW(ll a , ll b){if(b==0) return 1;ull ret=1;while(b--)ret*=a;return ret;}
int dx[]={0,0,+1,-1,+1,-1,-1,+1};
int dy[]={+1,-1,0,0,+1,-1,+1,-1};
// ------------------>
const ll infLL = 15e17+123;
const int inf = 1e9;
const ll mod = 1000003;
const ll mx = 1e6+123;
// ------------------>
ll fibo[mx],t;

void making()
{
    fibo[1]=1;
    fibo[0]=1;
    for(int i=2;i<mx;i++)
        fibo[i]=((i%mod)*(fibo[i-1]%mod))%mod;
    //for(int i=1;i<=10;i++) cout << fibo[i] el;
}

void _case_()
{
    ll n,k;
    cin >> n >> k;
    ll f1=fibo[n];
    ll f2=fibo[k];
    ll f3=fibo[n-k];
    f2=((f2%mod)*(f3%mod))%mod;
    f2=mod_inverse(f2,mod);
    //cout << f1 << ' ' << f2 el;
    cout << "Case " << ++t << ": " << ((f1%mod)*(f2%mod))%mod el;
}

int main()
{
    optimize();
    making();
    _test_
        _case_();
    return 0;//                               Author : NAYEMUR RAHMAN NAYEM
}//                                           [ DEPT. of CSE , CU ]
