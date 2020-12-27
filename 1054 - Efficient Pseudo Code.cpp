//بسم الله الرحمن الرحيم


#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
//using u128 = __uint128_t;
#define el << '\n'
#define PI 3.141592653589793238
#define _test_ int _ ; cin >> _ ; while(_--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define file() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
ll gcd ( ll  a, ll b ) { return __gcd ( a, b ) ; }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ) ; }
ll bigmod(ll base , ll power , ll mod){ll ret=1;base%=mod;while(power){if(power&1)ret=ret*base%mod;base=base*base%mod;power>>=1;}return ret;}
ll mod_inverse(ll a , ll mod ){ return bigmod(a,mod-2,mod);}
int dx[]={0,0,+1,-1,+1,-1,-1,+1} ;
int dy[]={+1,-1,0,0,+1,-1,+1,-1} ;
///   ***   ---   |||__________LET'S BEGIN (-_^)________|||   ---   ***   ///

const ll infLL = 1e15 ;
const int inf = 1e9 ;
const ll mod = 1e9+7 ;
const ll mx = 1e6+123;
ll t,n,m;

bitset<mx>vis;
vl prime;
void sieve()
{
    prime.push_back(2);
    for(int i=3;i*i<=mx;i+=2)
        if(!vis[i])
            for(int j=i*i;j<mx;j+=2*i)
                vis[j]=1;
    for(int i=3;i<mx;i+=2)
        if(!vis[i])
            prime.push_back(i);

}

ll sum_of_divisors()
{
    ll ret=1;
    for(auto i:prime)
    {
        if(i*i>n) break;
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            ll low=mod_inverse(i-1,mod);
            ll power=cnt*m;
            ll up = (bigmod(i,power+1,mod)-1+mod)%mod;
            ret=( ret%mod * up%mod * low%mod )%mod;
            //cout << ret el;
        }
    }
    if(n!=1)
    {
        ll low=mod_inverse(n-1,mod);
        ll power=m;
        ll up = (bigmod(n,power+1,mod)-1+mod)%mod;
        ret=( ret%mod * up%mod * low%mod )%mod;
        //cout << n el;
    }
    return ret;
}

void _case_()
{
    cin >> n >> m ;
    cout << "Case " << ++t << ": " << sum_of_divisors() el;
}

int main( )
{
    //optimize();
    sieve();
    _test_
      _case_();
}

/////////* ________ *  N A Y E M  * ________ *///////////
