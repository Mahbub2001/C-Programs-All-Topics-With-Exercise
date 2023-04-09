#include <cstdio>
using namespace std;

typedef long long int64;
const int64 MOD = 1000000007;
int64 power(int64 a, int64 N) {
	if (N == 0) return 1LL;
	if (N == 1) return a;
	
	int64 f = power(a, N/2) %MOD;
	f = (f * f) %MOD;
	if (N & 1)
		f = (f * a) %MOD;
	return f;
}
int main() {
	int64 T;
	scanf("%lld", &T);
	for (int64 i = 1; i <= T; i++)
     {
		int64 N;
		scanf("%lld", &N);
		int64 f = (N * power(2, N - 1)) %MOD;
		printf("Case #%lld: %lld\n", i, f);
	}
	return 0;
}