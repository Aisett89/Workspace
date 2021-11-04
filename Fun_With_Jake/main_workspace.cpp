
// #include "workspace.h"

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
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

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// - - - - - - - - - - - - - - -  To go in CPP - - - - - - - - - -  - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

void YouTubeChannel::get_info() // Function that allows variables to be assigned real values. 
{
    cout << "Name: "<<Name << endl;
    cout << "Owner Name: " << OwnerName << endl;
    cout << "Subscribers: " << SubscribersCount << endl;
    cout << "Videos: " << endl;
    for ( string videoTitle : PublishedVideoTitles)
    {
        cout << videoTitle << endl;
    }
}
void YouTubeChannel::Subscribe()
        {
            SubscribersCount++;
        }
void YouTubeChannel::unSubscribe()
        {
            if (SubscribersCount > 0)
            {
            SubscribersCount--;
            }
        }
void YouTubeChannel::PublishVideo(string title)
{
    PublishedVideoTitles.push_back(title);
}
void YouTubeChannel::CheckAnalytics()
{
    if (ContentQuality < 5 )
    {
        cout<< Name << " has bad quality content." << endl;
    }
    else 
    {
        cout << Name << " this has great quality content!" << endl;
    }   
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// - - - - - - - - - - - - - - - To go in Main - - - - - - - - - -  - - - - - - -
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

// #include "workspace.h"

int main()
{
    CookingYouTubeChannel cyt( "Amy's Kitchin", "Amy" );
    SingersYouTubeChannel syt( "Jon Sings", "Jon" );
    cyt.Practice();
    cyt.Practice();
    cyt.Practice();
    cyt.Practice();
    cyt.Practice();
    syt.Practice();
    syt.Practice();



    YouTubeChannel *yt1 = &cyt; // * is the pointer, & is the address. 
    YouTubeChannel *yt2 = &syt; // * is the pointer, & is the address. 

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();
//      ^-- changes from the dot...         




}
