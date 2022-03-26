#include <iostream>
using namespace std;

int main()
{
  int a[4] = {7, 9, 3, 4 };
  for(int i = 1; i < 4; i++)
  {
    a[0] += a[i] + 1;
  }
  cout << a[0] << endl;
  
  return 0;;
}

//26
