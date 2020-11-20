#include <cstdio>
#include <string>
using namespace std;
char buff[46];
int main(void)
{
  scanf("%[^\n]", buff);
  string s = buff;
  printf("%s\n", s.c_str());
}
