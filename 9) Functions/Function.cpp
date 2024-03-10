#include <iostream>
#include <cmath>

using namespace std;

void sayHello(){

    cout << "Hello User";

}

void sayHelloName(string name){

    cout << "Hello " << name;
}

void sayHelloNameAge(string name, int age){

    cout << "Hello " << name << ", you are " << age << " years old.";

}
int main(){

    sayHello();
    
    cout << "" << endl;
    sayHelloName("Kaarthi Vedere");
    
    cout << "" << endl;
    sayHelloNameAge("Kaarthi Vedere", 17);

    return 0;

}

