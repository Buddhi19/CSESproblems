#include <iostream>
#include <unordered_set>

int main()
{
	long int n;
	scanf("%ld",&n);
	long *A = (long*) calloc(n,sizeof(long));
	
	for (int i=0;i<n;i++){
		scanf("%ld",&A[i]);
	}
	
	std::unordered_set<long int> s(A, A + n);

	std::cout << s.size();
    free(A);
	return 0;
}