#include <iostream>
#include <algorithm>
using namespace std;

long long int N;
long long int A[1000000];
long long int K[1000000];
long long int C_d[1000000];

int main(){
    cin >> N;

    for(long long int i=0;i<N;i++){
        long long int a;
        cin >> a;
        A[a]++;
        K[i] = a;
    }

    // 組み合わせの数
    long long int allc = 0;
    for(long long int i=0;i<N;i++){
        long long int a = A[i];
        long long int c = a*(a-1)/2;
        allc += c;
        // 値がiのものについて、i==kのときに減る数
        C_d[i] = c - (a-1)*(a-2)/2;
    }

    for(long long int j=0;j<N;j++){
        cout << allc - C_d[K[j]] << endl;
    }

}
