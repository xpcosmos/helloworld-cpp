#include <iostream>
#include <vector>

// typedef std::string text_t;
// typedef int number_t;

// Prática recomendada!
using text_t = std::string;
using number_t = int;

int main() {
    using std::cout;
    using std::endl;

    text_t text;
    number_t age;

    text = "Mikeias";
    age = 23;

    cout << text << endl;
    cout << age << endl;

    return 0;
}