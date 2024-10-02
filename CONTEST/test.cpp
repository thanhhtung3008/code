// Bài 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
   cin >> n;
   long long s = 0;
   for (long long i = 1; i <= n; i++)
   {
      if (i % 2 == 0)
      {
         s += i;
      }
   }
   cout << s;
}

// Bài 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
   cin >> n;
   long long a[n + 1];
   for (long long i = 1; i <= n; i++)
   {
      cin >> a[i];
   }
   sort(a + 1, a + n + 1);
   for (long long i = 1; i <= n; i++)
   {
      cout << a[i] << " ";
   }
}

// Bài 3
#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
      
}