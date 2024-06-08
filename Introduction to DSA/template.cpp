#include <iostream>
using namespace std;
class arithmetic
{
private:
    int a;
    int b;

public:
    arithmetic(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int add()
    {
        int c;
        c = a + b;
        return c;
    }
    int sub()
    {
        int c;
        c = a - b;
        return c;
    }
};

int main()
{
    arithmetic ar(10, 5), ar2(15, 7);
    cout << "add" << ar.add() << endl;
    cout << "sub" << ar.sub() << endl;
    return 0;
}