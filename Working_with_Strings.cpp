#include <iostream>

using namespace std;

int main(){

    string phrase = "Hello World!";
    cout << phrase.length() << endl;
    cout << phrase[0] << phrase[6] << endl;

    //phrase[6] = 'B';
    //cout << phrase;
    cout << phrase.find("World", 0) << endl;

    cout << phrase.substr(7, 3) << endl;

    string phraseSub = phrase.substr(7, 3);
    //cout << phraseSub << endl;

    return 0;

}
