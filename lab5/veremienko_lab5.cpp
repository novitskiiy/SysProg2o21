#include <iostream>
#include <stdio.h>
#include <ctime>
#include <chrono>
using namespace std;

int main()
{
    cout << "memory allocation time of functions: malloc calloc\n";

    for (long long x = 0; x<=64; ++x){
        cout << "x: "<< x<<", timer of malloc:  ";
        {
            auto start_of_time = std::chrono::steady_clock::now();
            char *first = (char*)malloc(sizeof(char) * (1LL << x));
            char *second = (char*)malloc(sizeof(char) * (1LL << (x + 1)));
            auto end_of_time = std::chrono::steady_clock::now();
            free(first);
            free(second);
        auto result = std::chrono::duration_cast<std::chrono::milliseconds>(end_of_time - start_of_time);
        cout << result.count()<<", timer of malloc:  ";
        }
        {
            auto start_of_time = std::chrono::steady_clock::now();
            char *first = (char*)calloc((1LL << x), sizeof(char));
            char *second = (char*)calloc((1LL << (x + 1)), sizeof(char));
            auto end_of_time = std::chrono::steady_clock::now();
            free(first);
            free(second);
        auto result = std::chrono::duration_cast<std::chrono::milliseconds>(end_of_time - start_of_time);
        cout << result.count()<<" .\n";
        }
    }
}
