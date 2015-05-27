#include <algorithm>
#include <iterator>
#include <limits>
#include <iostream>

int
main (int, char**)
{
  int testCount {0};

  std::cin >> testCount;

  while (testCount--)
  {
    int n {0};
    int k {0};
    std::cin >> n >> k;
    long kids[20000];
    for (int i = 0; i < n; i++)
    {
      std::cin >> kids[i];
    }
    std::sort (std::begin (kids), std::begin (kids) + n);
    long diff = std::numeric_limits<long>::max ();
    for (int j = k - 1; j < n; j++)
    {
      long tmp = kids[j] - kids[j - k + 1];
      if (tmp < diff)
      {
        diff = tmp;
      }
    }
    std::cout << diff << std::endl;
  }

  return 0;
}

