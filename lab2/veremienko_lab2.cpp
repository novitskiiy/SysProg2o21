#include <iostream>
#include <ctime>
using namespace std; 

int main()
{
    char ch;
    int random_char;
    cout <<"Rock-r, paper-p, scissors-s\n";
    cout <<"Your choice: ";

    cin >> ch;
    random_char = rand()%3;

    if (ch == 'r'){
        if (random_char == 0) 
            cout <<"drawing\n";
        else if (random_char == 1) 
            cout <<"winning\n";
        else if (random_char == 2) 
            cout <<"losing\n";
    }
    else if (ch == 'p'){
        if (random_char == 0) 
            cout <<"winning\n";
        else if (random_char == 1) 
            cout <<"losing\n";
        else if (random_char == 2) 
            cout <<"drawing\n";
    }
    else if (ch == 's'){
        if (random_char == 0) 
            cout <<"losing\n";
        else if (random_char == 1) 
            cout <<"drawing\n";
        else if (random_char == 2) 
            cout <<"winning\n";
    }
    else 
        cout <<"Error\n";
        
    return 0;
}
