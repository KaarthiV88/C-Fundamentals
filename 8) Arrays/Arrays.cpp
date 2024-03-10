#include <iostream>
#include <cmath>


using namespace std;

int main(){

    int luckyNums[] = {4, 8, 12, 16, 20, 24};

    luckyNums[0] = 8888;
    cout << luckyNums[0] << endl;

    int otherNums[10];
    cout << otherNums; //is there a toString() equivalent for arrays in C++?

    return 0;

}
