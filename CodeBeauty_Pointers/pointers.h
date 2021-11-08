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


int get_num_pointers();
void print_letter( char pointer_char );
void print_number( int pointer_numer );



// - - - - - - - - - - - - - EXAMPLE - - - - - - - - - - - - - - - -
// class YouTubeChannel // user defined datatype that is meant to represent a real life object through programming. 
// {
//     public: // access modifier <-- makes these memebers/variables accessible outside of the class. 
//         string Name;
//         string OwnerName;
//         int SubscribersCount;
//         vector<string>PublishedVideoTitles;

//         YouTubeChannel(string name, string ownerName)
//         {
//             Name = name;
//             OwnerName = ownerName;
//             SubscribersCount = 1800;
//         }
//         YouTubeChannel();
//         void get_info();
// };