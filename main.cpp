#include <iostream>
#include <vector>
#include <string>
#include <test/test.hpp>

int main()
{
    {
        std::vector<std::string> msg{"Hello", "World", "your", "great", "world"};

        for (const std::string &word : msg)
        {
            std::cout << word << " ";
        }
        std::cout << std::endl;

        test *MyTest = new (test);

        std::cout << "MyTest num is: " << MyTest->GetNum() << std::endl;

        MyTest->SetNum(7);

        std::cout << "MyTest num is: " << MyTest->GetNum() << std::endl;

        delete MyTest;
    }

#ifdef _WIN32
    std::cout << "Windows!\n";
    system("pause");
#elif __linux__
    std::cout << "Linux!\n";
#endif

    return 0;
}