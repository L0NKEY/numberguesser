#include <iostream>

using namespace std;

int main()
{
char symbols[] = {
    '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+',
    '[', ']', '{', '}', '|', ';', ':', '"', ',', '<', '.', '>', '/', '?', '\\','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};

int i = 0;
cout << "How long do you want password: ";
int poop;
cin >> poop;
while (i <= poop){
    int num =  rand() % 123;
    cout << symbols[num];
    i++;
}


}  
