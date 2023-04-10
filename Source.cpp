#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(const vector<int>& A)
{
	if (A.empty()) {
		return false;
	}

	if (A.size() > 100000) {
		return false;
	}
		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] < 1 || A[i] > 1000000000) {
				return false;
			}
			for (int j = i + 1; j < A.size(); j++) {

				if (abs(A[i] - A[j] == 1) || abs(A[j] - A[i] == 1))
				{
					return true;
				}
			}
		}
	
	return false;
	
}

int main()
{
	vector<int> A = {7};
	vector<int> B = { 4,3 };
	vector<int> C = {11,1,8,12,14};
	vector<int> D = {4,10,8,5,1};
	vector<int> E = { 5,5,5,5,5 };

	if (solution(A))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	if(solution(B))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	if(solution(C))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	if(solution(D))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	if (solution(E))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	return 0;
}