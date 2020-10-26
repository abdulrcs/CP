#include<iostream>
using namespace std;
int N, k;
int catat[15];
void tulis(int kedalaman)
{
	if (kedalaman == 0)
  {
		for (int i = 1; i <= N-k+1; i++)
    {
			catat[kedalaman] = i;
			tulis(kedalaman+1);
		}
	}
  else if (kedalaman == k)
  {
		for (int i = 0; i < k; i++)
    {
			if (i < k-1)
      {
				cout << catat[i] << " ";
			} 
      else 
      {
				cout << catat[i] << "\n";
			}
		}	
	} 
  else 
  {
		for (int i = catat[kedalaman-1]+1; i <= N; i++)
    {
			catat[kedalaman] = i;
			tulis(kedalaman+1);
		}
	}
}

int main(){
	cin >> N >> k;
	tulis(0);
}
