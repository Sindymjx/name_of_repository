#include"Card.h"
#include <string>
using namespace std;
Card::Card(int cardFace, int cardSuit)
{
    face = cardFace;
    suit = cardSuit;
}
std::string Card::toString() const
{
    std::string ans, strface, strsuit;
    strface = static_cast<string> (faceNames[face]);
    strsuit = static_cast<string> (suitNames[suit]);
    ans = strface + " of " + strsuit;
    return ans;
}
int Card::getFace() const
{
    return face;
}
int Card::getSuit() const
{
    return suit;
}
const char* Card::faceNames[ totalFaces ] =
{ "Ace", "Two", "Three", "Four", "Five", "Six",
"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

const char* Card::suitNames[ totalSuits ] =

{ "Hearts", "Diamonds", "Clubs", "Spades" };
