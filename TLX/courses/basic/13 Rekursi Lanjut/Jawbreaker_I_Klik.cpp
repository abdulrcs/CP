#include <iostream>
#define fo(i, n) for(i = 0; i < n; i++) 
using namespace std;
int count, m, n;
int arr[25][25];
bool visited[25][25];

void f(int B, int K, int c)
{
  // Algoritma Flood-Fill
  // jika koordinat (B,K) berada di dalam peta
	if( (B >= 0 && B < m ) && ( K >= 0 && K < n) )
	{
		if(!visited[B][K])
    {
      if(arr[B][K]==c) // jika elemen sekarang adalah yang dipilih (c)
			{
				count++;
				visited[B][K] = true;
				f(B+1,K,c); // cek di kanan
				f(B-1,K,c); // cek di kiri
				f(B,K+1,c); // cek di bawah
				f(B,K-1,c); // cek di atas
			}
    }
	}
}

int main()
{
	int i,j,B,K;
	cin >> m >> n;
	fo(i,m)
    fo(j,n)
			cin >> arr[i][j];
  fo(i,m)
    fo(j,n)
			visited[i][j] = false; // initialisasi array visited menjadi false
	cin >> B >> K; // input index elemen yang dipilih
	int c = arr[B][K];
	f(B, K, c);
	cout << count*(count-1) << endl;
}
