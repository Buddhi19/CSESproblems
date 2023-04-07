#include <iostream>
#include <unordered_set>

int main()
{
	long int n;
	scanf("%ld",&n);
	long int A[n];
	
	for (long int i=0;i<n;i++){
		scanf("%ld",&A[i]);
	}
	
	std::unordered_set<long int> s(A, A + n);

	std::cout << s.size();

	return 0;
}