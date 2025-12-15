#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand ((unsigned int)time(0));
    int randnum = rand ()%5+1;
    switch(randnum) {
        case 1 :
        cout << "You win a sticker ";
        break;
        case 2 :
        cout << "You win a bag";
        break;
        case 3 : 
        cout << "You win a phone";
        break;
        case 4 :
        cout<< "You win a car";
        break;
        case 5 : 
        cout << "You win a tesla car ";
        break;
        case 6 : 
        cout << "You win a bmw";
        break;
        default :
        cout << "You havn't got nothing ";

    }
}