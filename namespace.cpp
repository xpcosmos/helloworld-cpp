#include <iostream>

namespace PrimeiroNamespace
{
    int x = 1;
}

namespace SegundoNamespace
{
    int x = 2;
}

int main(){
    using std::cout;
    using std::string;
    using std::endl;

    string s = "Hello World";

    cout << PrimeiroNamespace::x << endl;
    cout << s << endl;
    return 0;
}
