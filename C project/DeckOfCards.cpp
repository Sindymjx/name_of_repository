#include"DeckOfCards.h"
#include <vector>
#include "Card.h"
DeckOfCards::DeckOfCards()
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j <13; j++) {
            Card c(j, i);
            deck.push_back(c);
        }
    }
    currentCard = 0;
}
Card DeckOfCards::dealCard()
{
    return deck[currentCard++];
}
bool DeckOfCards::moreCards() const
{
    if (currentCard <= 52) return true;
    else return false;
}
