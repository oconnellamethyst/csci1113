//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Problem 12.1, page 292
//  Card, Hand, and Deck classes

#include <iostream>
#include "Random.h"
using namespace std;

enum Rank { TWO=2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };
enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };

class Card
{
  friend class Hand;
  friend class Deck;
  friend ostream& operator<<(ostream&, const Card&);
public:
  char rank() { return rank_; }
  char suit() { return suit_; }
private:
  Card() { }
  Card(Rank rank, Suit suit) : rank_(rank), suit_(suit) { }
  Card(const Card& c) : rank_(c.rank_), suit_(c.suit_) { }
  ~Card() { };
  Rank rank_;
  Suit suit_;
};

ostream& operator<<(ostream& ostr, const Card& card)
{
  switch (card.rank_)
    {
    case TWO    : ostr << "two of ";     break;
    case THREE  : ostr << "three of ";   break;
    case FOUR   : ostr << "four of ";    break;
    case FIVE   : ostr << "five of ";    break;
    case SIX    : ostr << "six of ";     break;
    case SEVEN  : ostr << "seven of ";   break;
    case EIGHT  : ostr << "eight of ";   break;
    case NINE   : ostr << "nine of ";    break;
    case TEN    : ostr << "ten of ";     break;
    case JACK   : ostr << "jack of ";    break;
    case QUEEN  : ostr << "queen of ";   break;
    case KING   : ostr << "king of ";    break;
    case ACE    : ostr << "ace of ";     break;
    }
  switch (card.suit_)
    {
    case CLUBS     : ostr << "clubs";    break;
    case DIAMONDS  : ostr << "diamonds"; break;
    case HEARTS    : ostr << "hearts";   break;
    case SPADES    : ostr << "spades";   break;
    }
  return ostr;
}

class Hand
{
  friend class Deck;
public:
  Hand(unsigned n=5) : size(n) { cards = new Card[n]; }
  ~Hand() { delete [] cards; }
  void display();
  int isPair();
  int isTwoPair();
  int isThreeOfKind();
  int isStraight();
  int isFlush();
  int isFullHouse();
  int isFourOfKind();
  int isStraightFlush();
private:
  unsigned size;
  Card* cards;
  void sort();
};

int Hand::isThreeOfKind()
{
  if (cards[0].rank_ == cards[1].rank_
   && cards[1].rank_ == cards[2].rank_
   && cards[2].rank_ != cards[3].rank_
      && cards[3].rank_ != cards[4].rank_) return 1;
  if (cards[0].rank_ != cards[1].rank_
   && cards[1].rank_ == cards[2].rank_
   && cards[2].rank_ == cards[3].rank_
   && cards[3].rank_ != cards[4].rank_) return 1;  
if (cards[0].rank_ != cards[1].rank_
   && cards[1].rank_ != cards[2].rank_
   && cards[2].rank_ == cards[3].rank_
   && cards[3].rank_ == cards[4].rank_) return 1;
 return 0;
}

int Hand::isFlush()
{
  for (int i = 1; i < size; i++)
    if (cards[i].suit_ != cards[0].suit_) return 0;
  return 1;
}

class Deck
{
public:
  Deck();
  void shuffle();
  void deal(Hand&, unsigned =5);
private:
  unsigned top;
  Card cards[52];
  Random random;
};

void Deck::deal(Hand& hand, unsigned size)
{
  for (int i = 0; i < size; i++)
    hand.cards[i] = cards[top++];
  hand.sort();
}

Deck::Deck()
{
  for (int i=0; i<52; i++)
    {
      cards[1].rank_ = Rank(i%13);
      cards[i].suit_ = Suit(i%4);
    }
  top = 0;
}
