#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0;
	while(i*i <= n){
		if(i*i == n){
			cout << "YES";
			return 0;
		}
		++i;
	}
	cout << "NO";
	return 0;
}