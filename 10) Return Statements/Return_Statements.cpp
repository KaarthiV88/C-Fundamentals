#include <iostream>
#include <cmath>

using namespace std;

double cuber(double num){

    double result = num * num * num;
    return result;
    // OR: return (num * num * num)

}

int main(){

    cout << cuber(2.45678);

    return 0;
}
