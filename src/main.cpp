#include "Message.h"
#include <limits.h>

//Address sanitizer test
void addressSanTest()
{
    int *ptr = new int[1024];
    delete[] ptr;
    std::cout << __PRETTY_FUNCTION__ << ptr[0] << std::endl;
}

int addressSanTest2()
{
    int a[10] = {0};
    return a[10];
}

//Undefined behaviour sanitizer test
void undefinedBehaviourSanTest()
{
    int i = 0x7fffffff;
    int j = i+1;
    std::cout<<j<<std::endl;
}

//Leak sanitzer test
void leakSanTest()
{
    malloc(12321);
}

int main() {
    //To trigger warnings
    // {
    //     int x;
    //     if(x = 5)
    //     {
    //         	long x = LONG_MAX;
	//             unsigned short t = x;
    //     }
    // }

    //To trigger sanitizer
    // {
    //     addressSanTest();
    //     addressSanTest2();
    //     undefinedBehaviourSanTest();
    //     leakSanTest();
    // }
    Message m;
    m.print();
    return 0;
}