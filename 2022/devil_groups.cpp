// Problem Statement  :
// There are some groups of devils and they splitted into people to kill them. Devils make People to them left as their group and at last the group with maximum length will be killed. Two types of devils are there namely “@” and “$”
// People is represented as a string “P”

// Input Format:
// First line with the string for input

// Output Format:
// Number of groups that can be formed.

// C++ program to find all combinations that
// sum to a given value
#include <bits/stdc++.h>
using namespace std;

// Print all members of ar[] that have given
void findNumbers(vector<int>& ar, int sum,
				vector<vector<int> >& res, vector<int>& r,
				int i)
{
	// if we get exact answer
	if (sum == 0) {
		res.push_back(r);
		return;
	}

	// Recur for all remaining elements that
	// have value smaller than sum.
	while (i < ar.size() && sum - ar[i] >= 0) {

		// Till every element in the array starting
		// from i which can contribute to the sum
		r.push_back(ar[i]); // add them to list

		// recursive call for next numbers
		findNumbers(ar, sum - ar[i], res, r, i);
		i++;

		// Remove number from list (backtracking)
		r.pop_back();
	}
}

// Returns all combinations 
// of ar[] that have given
// sum.
vector<vector<int> > combinationSum(vector<int>& ar,
									int sum)
{
	// sort input array
	sort(ar.begin(), ar.end());

	// remove duplicates
	ar.erase(unique(ar.begin(), ar.end()), ar.end());

	vector<int> r;
	vector<vector<int> > res;
	findNumbers(ar, sum, res, r, 0);

	return res;
}

// Driver code
int main()
{
	vector<int> ar;
	ar.push_back(2);
	ar.push_back(4);
	ar.push_back(6);
	ar.push_back(8);
	int n = ar.size();

	int sum = 8; // set value of sum
	vector<vector<int> > res = combinationSum(ar, sum);

	// If result is empty, then
	if (res.size() == 0) {
		cout << "Empty";
		return 0;
	}

	// Print all combinations stored in res.
	for (int i = 0; i < res.size(); i++) {
		if (res[i].size() > 0) {
			cout << " ( ";
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << ")";
		}
	}
return 0;
}
