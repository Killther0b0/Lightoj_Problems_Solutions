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
const ll mx = 1e6+123;
ll factors[mx][2],prime[2];
ll n,r,p,q,t;


void generating()
{
    prime[0]=2;
    prime[1]=5;
    for(ll i=1;i<mx;i++)
    {
        ll num=i;
        for(int j=0;j<2;j++)
        {
            int cnt=0;
            while(num>1 and num%prime[j]==0)
            {
                cnt++;
                num/=prime[j];
            }
            if(cnt) factors[i][j]=cnt;
        }
        for(int j=0;j<2;j++)
            factors[i][j]+=factors[i-1][j];
    }
    //for(int i=1;i<=5;i++)
        //cout << factors[i][1] el;

}

void _case_()
{
    cin >> n >> r >> p >> q ;
    ll etwo =0 , efive=0;
    ll two = factors[n][0] - factors[n-r][0] - factors[r][0];
    ll five = factors[n][1] - factors[n-r][1] - factors[r][1];
    for(int i=0;i<2;i++)
    {
        int cnt=0;
        while(p>1 and p%prime[i]==0)
        {
            p/=prime[i];
            cnt++;
        }
        if(cnt)
        {
            if(i==0) etwo=cnt;
            if(i==1) efive=cnt;
        }
    }
    two+=(etwo*q);
    five+=(efive*q);
    cout << "Case " << ++t << ": " << min(two,five) el;
}

int main( )
{
    //optimize();
    generating();
    _test_
      _case_();
}

/////////* ________ *  N A Y E M  * ________ *///////////
