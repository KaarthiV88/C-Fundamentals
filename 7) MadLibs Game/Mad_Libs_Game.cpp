#include <iostream>

using namespace std;

int main(){

    string color, pluralNoun, person;

    cout << "Roses are {color}" << endl;
    cout << "{plural noun} are blue" << endl;
    cout << "I love {anybody you want}" << endl;

    cout << "Enter a color: ";
    cin >> color;

    cout << "\nEnter a plural noun: ";
    cin >> pluralNoun;

    cout << "\nEnter a name of anybody you want: ";
    cin << person;

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << person << endl;

    return 0;

}
