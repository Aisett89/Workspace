// - - - - - - - - - - - - - - -  To go in CPP - - - - - - - - - -  - - - - - - -
#include "workspace.h"


void YouTubeChannel::get_info() // Function that allows variables to be assigned real values. 
{
    cout << "Name: "<< Name << endl;
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