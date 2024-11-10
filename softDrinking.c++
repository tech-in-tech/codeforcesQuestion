#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k * l;
    int requiredDrink = totalDrink / nl; // Calculate total servings of drink
    int totalLime = c * d;               // Total lime slices
    int totalSalt = p / np;              // Calculate total servings of salt

    // Find the minimum of the three, then divide by number of friends
    cout << min(min(requiredDrink, totalLime), totalSalt) / n;

    return 0;
}


