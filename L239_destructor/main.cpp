//
//  main.cpp
//  L239_destructor
//
//  Created by Hongbo Niu on 2022-11-26.
//

#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout<<"Constructor"<<endl;
    }
    ~Test()
    {
        cout<<"Destructor"<<endl;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Test *p = new Test[3];
    delete []p;
}
