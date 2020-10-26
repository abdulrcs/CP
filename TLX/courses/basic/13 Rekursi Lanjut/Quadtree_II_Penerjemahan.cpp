#include <iostream>
#include <string>
using namespace std;
int m[128][128];
string s[128*128];
int d;
void homogen(int r, int c, int k) {
   for (int i = r; i < r+k; i++) {
      for (int j = c; j < c+k; j++)
         m[i][j] = 1;
    }
}

void quadtree(int r, int c, int k, int kedalaman, string s1){
	string s2;
   if (kedalaman>=d) {
      homogen(r, c, k);
   } else {
   	  s2 = s1[kedalaman];
      if (s2=="0")
      	quadtree(r, c, k/2, kedalaman+1, s1);
  	  else if (s2=="1")
      		quadtree(r, c+(k/2), k/2, kedalaman+1, s1);
  	  else if (s2=="2")
      		quadtree(r+(k/2), c, k/2, kedalaman+1, s1);
  	  else if (s2=="3")
      		quadtree(r+(k/2), c+(k/2), k/2, kedalaman+1, s1);
   }
}

int main(){
   int r, c, n;
   string s1;
   cin>>n;

   //Input jawaban
   for (int i = 0; i < n; i++){
      cin>>s[i];
   }
   
   cin>>r>>c;

   // Cari 2^p yang >= max(r, c)
   int maxRc = max(r, c);
   int pow2 = 1;
   while (pow2 < maxRc){
      pow2 *= 2;
   }
   // Inisialisasi, karna matrix harus 2^p x 2^p, jika tidak, harus tambahin nol, jadi di init 0 semua
   for (int i = 0; i < pow2; i++) {
      for (int j = 0; j < pow2; j++) {
         m[i][j] = 0;
      }
   }

   // Translate
   for(int i=0; i<n; i++){
   	s1 = s[i];
   	d = s1.length();
   	quadtree(0, 0, pow2, 1, s1);
   }

   // Cetak
	for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++){
         cout<<m[i][j];
         if(j<c-1)
         	cout<<" ";
      }
      cout<<endl;
    }
   return 0;
}
