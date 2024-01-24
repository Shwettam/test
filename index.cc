#include <iostream>

using namespace std;

int main()
{
  int n;
  int sum = 0;
  cout << "Enter a num: ";
  cin >> n;
  
  for (int i = 2; i < n; i++)
  {
    bool isPrime = 1;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        isPrime = 0;
        break;
      }
    }
    if (isPrime == 1)
    {
      cout << i << endl;
      sum += i;
    }
  }
  cout << "Sum of prime number b/w 1 to " << n << " = " << sum;
  return 0;
}