#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!" ;//no escape sequence
    cout << "Hello\n World!";// "/n using for having a new line
    cout << "Hello\t World!";// "/t using for having a tab space
    cout << "Hello\\ World!";// "/\ using for having a backslash
    cout << "Hello\' World!";// "/' using for having a single quote
    cout << "Hello\" World!";// "/" using for having a double quote
    cout << "Hello\? World!";// "/? using for having a question mark
    cout << "Hello\a World!";// "/a using for having a alert sound
    cout<< "Hello\b World!";// "/b using for having a backspace
    cout<< "Hello\r World!";// "/r using for having a carriage return
    cout<< "Hello\f World!";// "/f using for having a form feed
    cout<< "Hello\v World!";// "/v using for having a vertical tab
    cout<< "Hello\0 World!";// "/0 using for having a null character

    return 0;
}