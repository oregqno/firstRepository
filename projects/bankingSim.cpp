#include <iostream>
#include <algorithm>
double returnBal();
void deposit(double deposit);
void withdrawal(double withdrawl);

double balance = 0;

int main(){
    using std::cout;
    std::string userInput;
    double dropOff;
    double withdrawl;
    char yOrN;

    bool jit = true;
    cout << "Welcome to your banking program, what would you like to do today?" << std::endl;

    while(jit){
        cout << "Type in your choice (deposit, withdraw, checkBalance)" << std::endl;
        std::cin >> userInput;
        transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

        if(userInput.compare("deposit") == 0){
            cout << "How much do you want to deposit? ";
            std::cin >> dropOff;
            cout << std::endl;
            while(dropOff < 0 || dropOff * 0 != 0){
                cout << "Please type a valid response ";
                std::cin >> dropOff;
                cout << std::endl;
            }
            deposit(dropOff);
            cout << "Your deposit has just been updated to your balance!" << std::endl << std::endl;
            

        }
        else if(userInput.compare("withdraw") == 0){
            cout << "How much do you want to withdraw? ";
            std::cin >> withdrawl;
            if(withdrawl * 0 != 0){
                while(withdrawl * 0 != 0){
                    cout << "please type in a number";
                    std::cin >> withdrawl;
                    cout << std::endl;
                }
            }
            withdrawal(withdrawl);
            cout << "you're balance has been updated!" << std::endl;
        }
        else if(userInput.compare("checkbalance") == 0){

            cout << "Your balance is " << returnBal() << std::endl;
        }
        else{
            cout << "I think you may have misspelled something" << std::endl;
        }

        cout << "Anything else? (Y/N) ";
        std::cin >> yOrN;
        cout << std::endl;
        switch(tolower(yOrN)){
            case 'y':
                break;
            case 'n':
                cout << "Thanks for banking with us!";
                jit = false;
                break;
        }
    }



   
    




}

double returnBal(){
    return balance;

}

void deposit(double deposit){
    balance += deposit;
}

void withdrawal(double withdraw){
    balance = balance - withdraw;
    if(balance <= -1000){
        std::cout << "Maybe consider saving a bit";
    }
    else if(balance <= 0){
        std::cout << "watch out, you're in debt";
    }
}