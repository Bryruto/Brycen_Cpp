#include <iostream>
#include <string>

using namespace std;

int main(){
    int menuChoice;
    cin >> menuChoice;

  switch(menuChoice){
    case 1:cout << "Start game";break; 
    case 2:cout << "Load game";break; 
    case 3:cout<< "Settings";break;
    case 4:cout << "Quit";break;  
    default:cout << "Invalid choice";}
}
