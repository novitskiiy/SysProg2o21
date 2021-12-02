#include <iostream>
#include <ctime>

using namespace std;

int main()
{
   time_t time = time(NULL);
   cout<<"Time:    "<<asctime(localtime(&time));
}
