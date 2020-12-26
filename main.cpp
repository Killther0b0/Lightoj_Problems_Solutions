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
int dx[]={0,0,+1,-1,+1,-1,-1,+1} ;
int dy[]={+1,-1,0,0,+1,-1,+1,-1} ;
///   ***   ---   |||__________LET'S BEGIN (-_^)________|||   ---   ***   ///

const ll infLL = 1e15 ;
const int inf = 1e9 ;
const ll mod = 1e6+3 ;
const ll mx = 1e8+123;
ll Q , t ;


ll zeros(ll n)
{
    ll ret = 0 ;
    while(n)
    {
        n /= 5 ;
        ret += n ;
    }
    return ret;
}

ll solve(ll start , ll end)
{
    if(start>end) return -1 ;
    ll mid = (start+end) >> 1 ;
    ll cnt=zeros(mid) ;
    if(cnt==Q)
    {
        while(zeros(mid)==Q)
            mid--;
        return mid+1 ;
    }
    else if(cnt<Q)
    {
        return solve(mid+1,end);
    }
    else
    {
        return solve(start,mid-1);
    }
}

void _case_()
{
    cin >> Q ;
    ll ans=solve(1,INT_MAX);
    if(ans==-1)
        cout << "Case " << ++t << ": impossible\n";
    else cout << "Case " << ++t << ": " << ans el;
}

int main( )
{
    //optimize();
    _test_
      _case_();
}

/////////* ________ *  N A Y E M  * ________ *///////////