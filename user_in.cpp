#include <iostream>

int main(){
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;

    string name;
    int age;

    cout << "Age: ";
    cin >> age;

    cout << "Name: ";
    std::getline(cin >> std::ws, name);
    
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;

}
