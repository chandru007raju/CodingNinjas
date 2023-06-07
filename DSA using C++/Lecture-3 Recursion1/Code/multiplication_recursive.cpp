
#include <iostream>
using namespace std;

// Time: - O(n) Space: - O(n)
int multiplyNumbers(int m, int n)
{
    if(m == 0){
        return 0;
    }
    int smalloutput = multiplyNumbers(m-1, n);
    return n + smalloutput;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
