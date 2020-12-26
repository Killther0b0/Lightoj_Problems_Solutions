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
ll b , t ;
string a ;


void _case_()
{
    cin >> a >> b ;
    ll rem=0,temp_num=0,j=0;
    if(a[0]=='-') j++;
    while(a[j])
    {
        temp_num+=a[j]-'0';
        rem=temp_num%b;
        temp_num=10*rem;
        j++;
    }
    if(!rem)
        cout << "Case " << ++t << ": divisible\n" ;
    else
        cout << "Case " << ++t << ": not divisible\n" ;
}

int main( )
{
    //optimize();
    _test_
      _case_();
}

/////////* ________ *  N A Y E M  * ________ *///////////