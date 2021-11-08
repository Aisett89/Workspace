// Incl-using //
#include <iostream>
#include <utility>      
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
using std::vector;
using std::pair;
using std::string;
using std::make_pair;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::pair;

// stuff
string *name;
int health;
int level = 1;

int attack(int weapon, int attack_bonus, int armor_class); // <-- AC of oponent. 
int health_potion(int health);

class Bot {};


class Player 
{
    name = get_name()?
    archetype = Fighter 
    map<inventory>
    int hit_points;
    double armor_class;
    attack();
};

class Archetypes 
{   
    // Fighter
        // short sword = + 3 to attack, int range(1-8) dmg
        // HP_regen = 10 + level <-- per encounter <-- 
        // double armor_buff = +20% to AC
        // 
    // Rogue
        // pair(dual_wield_daggers<int R_hand, int L_hand> )
};

// class CookingYouTubeChannel : public YouTubeChannel // inherits everything that YouTubeChannel has public.
// {
//     public:
//         CookingYouTubeChannel(string name, string ownerName) : /* Call BASE CLASS*/ YouTubeChannel(name, ownerName) {}
//             // ^Adding Constructor <-- DOES NOT NEED TO BE CONSTRUCTED PAST THIS POINT, 
//             //                         BECAUSE IT ALREADY IS DONE IN THE BASE CLASS. 

//         void Practice( ){
//             cout<< OwnerName << " is practicing cooking, learning new recipes, experiementing with spices... " << endl;
//             ContentQuality++;
//         }
// };


// };

// Map of everything a fighter is...
class Fighter : public Archetypes
{
        void get_info();
        void get_weapon();
        void dodge();
        void attack(string weapon);
        void health_potion();

};