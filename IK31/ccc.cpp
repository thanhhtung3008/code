#include <bits/stdc++.h>

using namespace std;

pair<int, vector<pair<int, int>>> findMinPathSum(const vector<vector<int>> &grid)
{
   int m = grid.size();
   int n = grid[0].size();

   // Ma trận lưu tổng giá trị nhỏ nhất
   vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
   vector<vector<pair<int, int>>> parent(m, vector<pair<int, int>>(n, {-1, -1}));
   queue<pair<int, int>> q;

   // Khởi tạo hàng đợi với các ô ở cột đầu tiên
   for (int i = 0; i < m; ++i)
   {
      dist[i][0] = grid[i][0];
      q.push({i, 0});
   }

   // Các hướng di chuyển (trên, dưới, trái, phải)
   vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

   while (!q.empty())
   {
      int x = q.front().first;
      int y = q.front().second;
      q.pop();

      // Nếu đã đến cột cuối cùng, truy vết đường đi và trả về số bước đi
      if (y == n - 1)
      {
         vector<pair<int, int>> path;
         int curX = x, curY = y;

         while (curX != -1 && curY != -1)
         {
            path.push_back({curX, curY});
            tie(curX, curY) = parent[curX][curY];
         }
         reverse(path.begin(), path.end());

         return {dist[x][y], path};
      }

      // Duyệt các ô lân cận
      for (auto &dir : directions)
      {
         int newX = x + dir.first;
         int newY = y + dir.second;

         if (newX >= 0 && newX < m && newY >= 0 && newY < n)
         {
            int newDist = dist[x][y] + grid[newX][newY];

            // Nếu tìm thấy đường đi ngắn hơn
            if (newDist < dist[newX][newY])
            {
               dist[newX][newY] = newDist;
               parent[newX][newY] = {x, y};
               q.push({newX, newY});
            }
         }
      }
   }

   return {-1, {}}; // Không thể đến cột cuối cùng
}

int main()
{
   freopen("code.inp", "r", stdin);
   freopen("code.out", "w", stdout);
   int m, n;
   cin >> m >> n;

   vector<vector<int>> grid(m, vector<int>(n));

   for (int i = 0; i < m; ++i)
   {
      for (int j = 0; j < n; ++j)
      {
         cin >> grid[i][j];
      }
   }

   auto [minPathSum, path] = findMinPathSum(grid);

   cout << "Tổng giá trị nhỏ nhất: " << minPathSum << endl;
   cout << "Số bước đi: " << (path.size() - 1) << endl;
   cout << "Đường đi:" << endl;
   for (const auto &p : path)
   {
      cout << "(" << p.first << ", " << p.second << ") ";
   }
   cout << endl;

   return 0;
}
