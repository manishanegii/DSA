#include <bits/stdc++.h>
using namespace std;

#define N 3

pair<int, int> colMaxSum(int mat[N][N])
{
	int idx = -1;
	int maxSum = INT_MIN;
	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < N; j++) {
			sum += mat[i][j];
		}
		if (sum > maxSum) {
			maxSum = sum;
			idx = i;
		}
	}

	pair<int, int> res;

	res = make_pair(idx, maxSum);

	return res;
}

int main()
{

	int mat[N][N] = {
		{ 1, 2, 3},
		{ 3, 1, 5},
		{ 7, 2, 1},

	};

	pair<int, int> ans = colMaxSum(mat);

	cout << "Customer " << ans.first + 1 << " is richest & money = " << ans.second << endl;

	return 0;
}
