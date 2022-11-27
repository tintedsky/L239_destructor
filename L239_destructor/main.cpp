//
//  main.cpp
//  L239_destructor
//
//  Created by Hongbo Niu on 2022-11-26.
//

#include <iostream>
#include <fstream>
using namespace std;
class Test
{
    int *p;
    ifstream fi;
public:
    Test()
    {
        cout<<"Constructor"<<endl;
        p = new int[3];
        fi.open("my.txt");
    }
    ~Test()
    {
        cout<<"Destructor"<<endl;
        fi.close();
        delete p;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Test *p = new Test[3];
    delete []p;
}
