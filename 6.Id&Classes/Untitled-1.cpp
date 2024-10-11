#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

const int INF = 1e9; 

double dist(pair<int, int> a, pair<int, int> b) {
    return sqrt((a.first - b.first) * (a.first - b.first) +
                (a.second - b.second) * (a.second - b.second));
}


double tsp(const vector<pair<int, int>>& cities) {
    int n = cities.size();
    vector<vector<double>> dp(1 << n, vector<double>(n, INF));

    dp[1][0] = 0;

    for (int mask = 1; mask < (1 << n); ++mask) {
        for (int i = 0; i < n; ++i) {
            if (mas