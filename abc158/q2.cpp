#include <iostream>
using namespace std;

int main(){
    long long int N, A, B;
    cin >> N >> A >> B;

    long long int ans = 0;
    long long int arr = A+B;
    //cout << "arr : " << arr << endl;

    ans += (N/arr)*A;
    //cout << "ans : " << ans << endl;

    int mod = N%arr;

    ans += (mod > A) ? A : mod;

    cout << ans << endl;

    return 0;
}
