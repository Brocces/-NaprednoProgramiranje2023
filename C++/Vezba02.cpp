#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
const int DECK_SIZE = 54;
const int SUIT_SIZE = 13;
string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

void shuffleDeck(string deck[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = rand() % size;
        string temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}
int main()
{
    string deck[DECK_SIZE];
    int index = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < SUIT_SIZE; j++)
        {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
        }
    }
    deck[52] = "1stJoker";
    deck[53] = "2stJoker";
    cout << "Шпил од карти:" << endl;
    for (int i = 0; i < DECK_SIZE; i++)
    {
        cout << deck[i] << endl;
    }
    srand(time(NULL)); // seed random number generator
    cout << endl
         << endl;
    cout << "Измешан шпил од карти:" << endl;
    shuffleDeck(deck, DECK_SIZE);
    for (int i = 0; i < DECK_SIZE; i++)
    {
        cout << deck[i] << endl;
    }

    return 0;
}
/*Христијан Тасевски INKI1005-Домашна работа 
    *Функцијата ctime() ја претвора временската вредност посочена од времето во локално време во форма на низа со знаци.
    *(cstdlib) е една од најшироко користените библиотеки од страна на програмерите на јазикот.
    *Дефинира збирка од функции за да се олесни ефикасен, стандардизиран C++ код со високи перформанси.
    