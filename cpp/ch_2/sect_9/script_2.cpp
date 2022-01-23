#include <iostream>

#define MY_NAME1

int main()
{
    #ifdef MY_NAME1
        std::cout << "Hello my user name is leschultz" << "\n";
    #endif

    #ifdef MY_NAME2
	std::cout << "MY_NAME2" << "\n";
    #endif
    return 0;
}
