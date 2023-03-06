#include<bits/stdc++.h>
 
using namespace std;


int main(){
    string s;
    cin >> s;
    int left = 0,right = s.size()-1;
    while(left<right){
        char aux = s[left];
        s[left] = s[right];
        s[right] = aux;
        left++;
        right--;
    }

    cout << s;
    


    return 0;
}





