#include <iostream>
using namespace std;

bool tree[200000][200000];

int main(){
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        tree[a][b] = true;
        tree[b][a] = true;
    }
}
