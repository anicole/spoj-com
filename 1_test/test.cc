#include <iostream>

int
main (int, char **)
{
  using namespace std;
  int n;
  std::ios_base::sync_with_stdio (false);
  while (true)
  {
    cin >> n;
    if (n == 42)
      break;
    cout << n << '\n';
  }
  cout.flush ();
  return 0;
}

