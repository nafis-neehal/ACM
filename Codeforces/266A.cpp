#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, count=0;
    string str;
    cin >> n >> str;
    for (int i=0; i<n; i++){
        if(str[i]==str[i+1] && (i+1)<n){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}