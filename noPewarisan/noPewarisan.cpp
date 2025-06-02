#include <iostream>
using namespace std;

class baseClass final
{

public:
    virtual void perkenalan() final
    {
        cout << "Hallo saya Function dari base class";
    }
};
class deviredClass : public baseClass
{
public:
    void perkenalan(){
        cout << "Hallo saya Function dari base class"}
};
int main()
{
    derivedClass a;

    a.perkenalan();

    return 0;
}