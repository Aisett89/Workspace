// - - - - - - - - - - - - - - - To go in Header - - - - - - - - - -  - - - - - - 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::list;
using std::endl;


// - - - - - - - BASE CLASS <-- The one we will inherite from as we go! - - - - - - - - - - - -
class YouTubeChannel // user defined datatype that is meant to represent a real life object through programming. 
{
    private: // access modifier <-- makes these memebers/variables accessible outside of the class. 
        string Name; // private access variables 
        int SubscribersCount; // private access variables 
        vector<string>PublishedVideoTitles;// private access variables 

    protected:
        string OwnerName; // protected access variables  <-- can be used in derived classes
        int ContentQuality;

    public:
        YouTubeChannel(string name, string ownerName)  // constructor <-- initializes variables here. 
        {
            Name = name;
            OwnerName = ownerName;
            SubscribersCount =0;
            ContentQuality = 0;
        }
        YouTubeChannel(); // default constructor <-- REQUIRED
        void get_info();
        void Subscribe();
        void unSubscribe();
        void PublishVideo(string title);
        void CheckAnalytics();
};

// - - - - - - - DIRIVED CLASS <-- The one we will inherite from as we go! - - - - - - - - - - - -
class CookingYouTubeChannel : public YouTubeChannel // inherits everything that YouTubeChannel has public.
{
    public:
        CookingYouTubeChannel(string name, string ownerName) : /* Call BASE CLASS*/ YouTubeChannel(name, ownerName) {}
            // ^Adding Constructor <-- DOES NOT NEED TO BE CONSTRUCTED PAST THIS POINT, 
            //                         BECAUSE IT ALREADY IS DONE IN THE BASE CLASS. 

        void Practice( ){
            cout<< OwnerName << " is practicing cooking, learning new recipes, experiementing with spices... " << endl;
            ContentQuality++;
        }
};

// - - - - - - - DIRIVED CLASS <-- The one we will inherite from as we go! - - - - - - - - - - - -
class SingersYouTubeChannel : public YouTubeChannel // inherits everything that YouTubeChannel has public.
{
    public:
        SingersYouTubeChannel(string name, string ownerName) : /* Call BASE CLASS*/ YouTubeChannel(name, ownerName) {}
            // ^Adding Constructor <-- DOES NOT NEED TO BE CONSTRUCTED PAST THIS POINT, 
            //                         BECAUSE IT ALREADY IS DONE IN THE BASE CLASS. 

        void Practice( ){
            cout<< OwnerName << " is practicing theory, learning new instrument, learning how to dance... " << endl;
            ContentQuality++;
        }

};