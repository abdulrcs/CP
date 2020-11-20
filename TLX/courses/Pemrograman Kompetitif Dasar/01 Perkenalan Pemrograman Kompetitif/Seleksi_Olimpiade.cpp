#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <utility>
#include <algorithm>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define REP(i,a,b) for(int i = a;i<=b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long ll;
/*
1 0-500
2 0-1000
3 0-500

sesi 3 priority, jika sama ke 2, lalu 1

- T test case
- N peserta seleksi, akan meluluskan M peserta

N baris isi nya ID peserta, sesi 1, sesi 2, sesi 3
*/
void solve()
{
  int i,j,n,m;
  cin >> n >> m;
  string cek;
  vector<pair<tuple<int,int,int>,string>> v; // nama, int isi 3
  cin >> cek; // nama yang di cek kelulusan nya
  fo(i,n)
  {
    string s;
    cin >> s;
    int a,b,c;
    cin >> a >> b >> c;
    v.pb(mp(make_tuple(c,b,a),s)); // ke 1,2,3 harusnya 3,2,1 <- priority
  }
  sort(v.begin(),v.end()); // sort berdasarkan first, makanya vector first nya tuple dulu bukan string
  // for(int i = 0; i < v.size(); i++) <-- buat ngecek isi nya, udah gaperlu
  // {
  //   cout << v[i].S << " " << get<0>(v[i].F) << " " << get<1>(v[i].F) << " " << get<2>(v[i].F) << endl;
  // }
  bool lulus = false;
  for(int i = 1; i <= m; i++)
  {
    if(v[v.size()-i].S == cek) // mulai dari belakang soalnya sort nya ascending order makanya v.size()-i
      lulus = true;
  }
  cout << (lulus ? "YA" : "TIDAK") << endl;
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}
