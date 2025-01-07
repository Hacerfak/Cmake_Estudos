#include <iostream>

class test
{
private:
    int num;
public:
    test();
    ~test();
    int GetNum();
    void SetNum(int Num);
};

test::test(/* args */)
{
    num = 0;
}

test::~test()
{
    std::cout << "Tchauuuu\n\n";
}

int test::GetNum()
{
    return num;
}

void test::SetNum(int Num)
{
    this->num = Num;
}
