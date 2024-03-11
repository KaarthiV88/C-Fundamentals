#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int numberGrid[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    cout << numberGrid[0][1] << endl;
    cout << numberGrid[2][0] << endl;

    int row = sizeof(numberGrid)/sizeof(numberGrid[0]);
    int col = sizeof(numberGrid[0])/sizeof(numberGrid[0][0]);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << numberGrid[i][j] << " ";
        }
        cout << "\n";

    }
}
