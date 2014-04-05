#ifndef DECK_OF_CARDS_H
#define DECK_OF_CARDS_H

#include <vector>
#include "Card.h"

class DeckOfCards {
    public:
        DeckOfCards();
        Card dealCard();
        bool moreCards() const;
    private:
        std::vector< Card > deck;
        unsigned currentCard;
};
#endif
