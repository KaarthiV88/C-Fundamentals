#include <iostream>
#include <cmath>

using namespace std;

int getMax(int num1, int num2){

    int result;
    if(num1 > num2){
        result = num1;
    }
    else if(num2 > num1){
        result = num2;
    }
    else{
        result = 0;
    }

    return result;
}

int getMaxMore(int num1, int num2, int num3){

    int result = 0;
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3){
        result = num2;
    }
    else{
        result = num3;
    }

    return result;
}

int main(){

    bool isMale = false;


    if(isMale == true){
        cout << "You are a male" << endl;
    }
    else{
        cout << "You are NOT a male" << endl;
    }
//__________________________________________________________________

    cout < "\n";
    bool isStrong = true;

    if(isMale == true && isStrong == true){
        cout << "You are a strong male" << endl;
    }
    else if(isMale == true && isStrong == false){
        cout << "You are NOT a strong male" << endl;
    }
    else if(isMale == false && isStrong == true){
        cout << "You are not a male, but you are strong." << endl;
    }
    else{
        cout << "You are neither NOT strong or NOT a male" << endl;
    }


//_________________________________________________________________________

    cout << "\n";
    cout << getMax(5, 10) << endl;
    cout << getMax(6, 2) << endl;
    cout << getMax(5, 5) << endl;

    cout << "\n" << getMaxMore(5, 6, 7) << endl;
    cout << getMaxMore(6, 5, 4) << endl;



}
