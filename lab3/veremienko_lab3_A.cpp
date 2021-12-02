#include<iostream>
#include<vector>
#include<algorithm>
#include <fstream>
using namespace std;

int main(){
    char ch;
    vector<char> s;

    while(1){
        cin >> ch;
        if ((ch>='a' && ch <='z') || (ch>='A' && ch <='Z') ) 
            s.push_back(ch);
        else 
            break;
    }
    sort(s.begin(), s.end());
    ofstream f_output("lab3_A.txt");
    
    for (auto i: s)
        f_output << i;
    f_output.close();
}
