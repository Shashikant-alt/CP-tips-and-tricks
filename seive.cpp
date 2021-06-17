#include <bits/stdc++.h>
int primes[1000002];
using namespace std;

void precompute()
{
  for(int i=0; i<=1000001; i++)
  {
    primes[i] = 1;
  }
  primes[0] = 0;
  primes[1] = 0;
  for(int i=2; i<=sqrt(1000001); i++)
  {
    if(primes[i] == 1)
    {
      for(int j=2; i*j<=1000001; j++)
      {
        primes[i*j] = 0;
      }
    }
  }
}

bool solve()
{
  int n;
  cin>>n;
  if(primes[n] == 1)
  {
    return true;
  }
  return false;
}

int main()
{
  precompute();
  int tc = 1;
  cin >> tc;
  while(tc--)
  {
    if(solve())
       cout << "Yes" << endl;
    else
       cout << "No" << endl;
  }
  return 0;
}
