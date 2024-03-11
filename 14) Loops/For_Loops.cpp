#include <iostream>

using namespace std;

int main(){

//    for(int i = 1; i <= 5; i++){
//        cout << i << endl;
//    }

    int nums[] = {1, 2, 4, 8, 16, 32, 64};
    for(int i = 0; i < (sizeof(nums)/sizeof(nums[0])); i++){
        cout << nums[i] << endl;
    }
    return 0;
}
