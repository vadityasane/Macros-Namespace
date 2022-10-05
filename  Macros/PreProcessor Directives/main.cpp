#include <iostream>

using namespace std;

// #define PI 3.1425
#define c cout
#define max(x,y) (x>y?x:y)

#ifndef PI
#define PI 3
#endif

#define msg(x) #x

int main()
{

    c<<max(15,20)<<endl;
    c<<PI<<endl;
    c<<msg(wassup)<<endl;

    return 0;
}
