// Here's the C++ version:

#include "dnd.h"
#include utility

// ```cpp
class Player
{
  public:
    virtual void Attack(Player anotherPlayer);
    
    // Just to reiterate that a base
    // class can have proper implemented
    // methods in it, not just virtual.     
    void Walk(int numSteps)
    {
        cout << "Walking " << numSteps << " steps." << "\n";
    }
};

int player_level;

struct Knife
{
    int damage = range(0,4) + player_level;
    int throwAt(double anotherPlayer);

};

class Rogue : Player
{
  private:
    Knife knife;

  public:
    void Attack(Player anotherPlayer)
    {
      knife.throwAt(anotherPlayer);
    }

    // Note the existence of this method.
    void Sneak(int sneakSeconds)
    {
       cout << "Sneaking for " << sneakSeconds << " seconds." << "\n";
    }

    // We don't redeclare 'Walk',
    // it's defined in the base class.
};

struct Sword
{
    pair<
};

class Fighter : Player
{
  private:
    Sword sword;

  public:
    void Attack(anotherPlayer: Player)
    {
      this.sword.SwingAt(anotherPlayer);    
    }
};

void Main()
{
  auto player = new Player();

  // A player can walk
  player.Walk(10);

  // Can a player sneak?
  // No, Player cannot sneak.
  // Sneak is not defined in
  // the player class.
  // player.Sneak(10); <-- won't compile

  auto rogue = new Rogue();

  // Can a rogue sneak?
  rogue.Sneak(100); // yes

  // Can a rogue walk?
  rogue.Walk(100); // Yep! It's a Player, since it's a Rogue, and Players can walk.

  // ^This was all just inheritance
  // Now, here' the polymorphism:

  auto aRandomNumber = 10;
  
  // Can a rogue attack a number?
  // No, aRandomNumber is of type
  // `int`, and `Attack` expects a
  // `Player` argument.
  // rogue.Attack(aRandomNumber); <-- won't compile
  
  // Can a rogue attack a Player?
  rogue.Attack(player); // yes, player is of type Player, so it can be passed to Attack

  auto fighter = new Fighter();

  // Now the million dollar question
  // Can a rogue attack a Fighter?
  rogue.Attack(fighter);

  // Yes, because even though Attack expects a Player, and fighter is a Fighter, a Fighter is a Player.
  // Being able to use subclasses in place of a super class
  // in this context is an example of polymorphism.
}