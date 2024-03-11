#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int i = 1;
    int sum = 0;
    string eq = "0";
    while(i < 10){
        eq += " + " + std::to_string(i);
        sum += i;
        cout << eq << " = " << sum << endl;
        i++;
    }
    //!!!!!!!!!!OR a do -> while;

    int j = 11;
    do{
        cout << j << endl;
        j++;

    }while(j <= 10);
}
