#include <iostream>
using namespace std;

//FUNCTIONS------------------------------------------
void Words(char* str, int word_count);
void Vowels(char* str, char* ptr_vow, int vow_count);
void Consonants(char* str, char* ptr_cons, int cons_count);
void Numbers(char* str, char* ptr_num, int numb_count);
void Punctuations(char* str, char* ptr_punct, int punct_count);
void Symbols(char* str, char* ptr_symb, int symb_count);
//---------------------------------------------------

int main()
{
    int count = 0;
    int word_count = 0;
    int vow_count = 0;
    int cons_count = 0;
    int numb_count = 0;
    int punct_count = 0;
    int symb_count = 0;

    char* str = new char[200];
    cout << "Enter text: ";
    gets_s(str, 20);

    char vowels[] = "aeiouy";                       //гласные
    char* ptr_vow = vowels;

    char consonants[] = "bcdfghjklmnqprstvwxyz";    //согласные
    char* ptr_cons = consonants;

    char numbers[] = "0123456789";                  //цифры
    char* ptr_num = numbers;

    char punctuations[] = "!?,.:-\"\'";             //знаки пункутации
    char* ptr_punct = punctuations;

    char symbols[] = "~`@#№$;%^&*()_=+{}[]/\\<>";   //спец символы
    char* ptr_symb = symbols;

    for (int i = 0; i <= strlen(str); i++)          // всего символов (буквы, цифры, символы)
    {
        if (i == strlen(str))
        {
            cout << "\nSymbols in text: " << i;
        }
    }

    Words(str, word_count); //подсчет слов
    Vowels(str, ptr_vow, vow_count); //подсчет гласных
    Consonants(str, ptr_cons, cons_count); //подсчет согласных
    Numbers(str, ptr_num, numb_count); //подсчет цифр
    Punctuations(str, ptr_punct, punct_count); //подсчет знаков пунктуации
    Symbols(str, ptr_punct, punct_count); // подсчет спец символов
}

void Words(char* str, int word_count)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            word_count++;
        }
    }
    cout << "\nWords: " << word_count + 1 << endl;
}

void Vowels(char* str, char* ptr_vow, int vow_count)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_vow); j++)
        {
            if (str[i] == ptr_vow[j])
            {
                vow_count++;
            }
        }
    }
    cout << "Vowels: " << vow_count - 1 << endl;
}

void Consonants(char* str, char* ptr_cons, int cons_count)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_cons); j++)
        {
            if (str[i] == ptr_cons[j])
            {
                cons_count++;
            }
        }
    }
    cout << "Consonants: " << cons_count - 1 << endl;
}

void Numbers(char* str, char* ptr_num, int numb_count)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_num); j++)
        {
            if (str[i] == ptr_num[j])
            {
                numb_count++;
            }
        }
    }
    cout << "Numbers: " << numb_count - 1 << endl;
}

void Punctuations(char* str, char* ptr_punct, int punct_count)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_punct); j++)
        {
            if (str[i] == ptr_punct[j])
            {
                punct_count++;
            }
        }
    }
    cout << "Punctuations: " << punct_count - 1 << endl;
}

void Symbols(char* str, char* ptr_symb, int symb_count)
{
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j <= strlen(ptr_symb); j++)
        {
            if (str[i] == ptr_symb[j])
            {
                symb_count++;
            }
        }
    }
    cout << "Symbols: " << symb_count - 1 << endl;
}