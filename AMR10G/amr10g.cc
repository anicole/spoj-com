#include <algorithm>
#include <limits>
#include <iostream>
#include <vector>

int
main (int, char**)
{
  int testCount {0};

  std::ios_base::sync_with_stdio (false);

  std::cin >> testCount;

  while (testCount--)
  {
    using dt = std::vector<long>::difference_type;
    using st = std::vector<long>::size_type;
    st n {0};
    st k {0};
    std::cin >> n >> k;
    std::vector<long> kids (n);
    for (st i = 0; i < n; i++)
    {
      std::cin >> kids[i];
    }
    std::sort (kids.begin (), kids.end ());
    auto end = kids.end ();
    long diff = std::numeric_limits<long>::max ();
    for (auto it = kids.begin(), jt = it + static_cast<dt>(k - 1); jt != end; it++, jt++)
    {
      diff = std::min (diff, *jt - *it);
      // if (diff == 0) break;
    }
    std::cout << diff << std::endl;
  }

  return 0;
}

