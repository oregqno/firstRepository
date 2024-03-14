#include <iostream>
#include <algorithm>
int main(){
    using std::cout;

    double converted;
    double given;
    std::string convertingTo;

    cout << "enter a temperature to convert (like the number): ";
    std::cin >> given; 

    if(given * 0 != 0){
        cout<< "need to use a number";
        
    }else{
        cout << "what are you converting this temperature into? (fahrenheit or celsius): ";
        std::cin >> convertingTo;
        cout << '\n';

        transform(convertingTo.begin(), convertingTo.end(), convertingTo.begin(), ::tolower);
    
        if(convertingTo.compare("fahrenheit") == 0){
            given = (given * (9/5)) + 32;
            cout << "You're converted temperature is now " << given << " fahrenheit";
        }else if(convertingTo.compare("celsius") == 0){
            given = (given - 32) * (5/9);
            cout << "You're converted temperature is now " << given << " celsius";
        }else{
            cout << "I think you spelled something wrong";
     }

    }






}