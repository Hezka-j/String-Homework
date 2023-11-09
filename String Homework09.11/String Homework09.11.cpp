#include <iostream>
using namespace std;
int main()
{
    int length = 50;
    char* words = new char[length];
    int count_words = 0;
    int count_spaces = 0;
    int count_symbols = 0;
    int middle_length = 0;
    cout << "Enter words - ";
    gets_s(words, length);
    for (int i = 0; i < strlen(words); i++)
    {
        if (words[i] == ' ')
        {
            count_spaces++;
        }
        cout << words[i] << " ";

    }
    cout << "\n";
    //cout << words << "\n";
    count_words = count_spaces + 1;
    count_symbols = strlen(words) - count_spaces;
    middle_length = count_symbols / count_words;
    cout << "Middle length words - " << middle_length << "\n";
    cout << "Count words - " << count_words << "\n";
    cout << "Count spaces - " << count_spaces << "\n";
    cout << "Count symbols(without spaces) - " << count_symbols << "\n";
}

