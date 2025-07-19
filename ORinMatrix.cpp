#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)  // ✅ FIXED
        {
            cin >> mat[i][j];
        }
    }

    vector<vector<int>> a(m, vector<int>(n, 1)); // Init with 1

    // Step 1: Apply 0s to rows and columns
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                for (int k = 0; k < n; k++) a[i][k] = 0;
                for (int k = 0; k < m; k++) a[k][j] = 0;
            }
        }
    }

    // Step 2: Check if each 1 in original mat can be justified
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
            {
                int sum = 0;
                for (int k = 0; k < m; k++) sum += a[k][j];  // Column
                for (int k = 0; k < n; k++) sum += a[i][k];  // Row

                if (sum == 0)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    // Output result
    cout << "YES\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)  // ✅ FIXED
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    solve();
    return 0;
}
