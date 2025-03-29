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
    using namespace SegundoNamespace;
    std::cout << PrimeiroNamespace::x << std::endl;
    std::cout << x << std::endl;
    return 0;
}
