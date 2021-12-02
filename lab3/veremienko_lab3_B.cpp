#include<iostream>
#include<string>
#include<map>
#include <fstream>
using namespace std;

int main(){
    map<char, int> m;
    string s;
    ifstream f_input("lab3_A.txt");
    f_input >> s;
    
    for (auto str: s) 
        m[str]++;
    for (char i = 'a'; i<='z'; ++i) 
        cout << i <<" "<< m[i]<<"\n";
    for (char i = 'A'; i<='Z'; ++i) 
        cout << i <<" "<< m[i]<<"\n";
    fin.close();
}
