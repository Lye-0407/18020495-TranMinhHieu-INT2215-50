#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void arrange(int n, vector<int> N, int K)
{
    sort(N.begin(),N.end());
    
        for (int i = 0; i < n; i++)
            for (int j = 0 ; j < n; j++)
            {
                do
                {
                    if (N[i] + N[j] == K)
                        cout << N[i] << " " << N[j] << endl;
                }
                while (N[i] + N[j] < K);
            }
    
}

int main()
{
    int n, K;
    vector<int> N(n);
    
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> N[i];

    cin >> K;

    arrange(n, N, K);

    return 0;
}