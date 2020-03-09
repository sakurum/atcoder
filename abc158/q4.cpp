#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string array;
    cin >> array;

    int Q;
    cin >> Q;

    bool rev = false;

    for(int i=0; i<Q; i++){
        int t;
        cin >> t;

        if(t==1){
            rev = !rev;
        }
        else{
            int f;
            cin >> f;

            string c;
            cin >> c;

            if(f==1){
                if(rev)
                    array = array+c;
                else
                    array = c+array;
            }
            else{
                if(rev)
                    array = c+array;
                else
                    array = array+c;
            }
        }
    }

    if(rev)
        reverse(array.begin(), array.end());

    cout << array << endl;

    return 0;
}
