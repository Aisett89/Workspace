#include "workspace.h"


void YouTubeChannel::get_info()
{
    cout<<"Name: "<<Name <<endl;
    cout<< "Owner Name: "<< OwnerName <<endl;
    cout<<"Subscribers: " << SubscribersCount<<endl;
    cout<<"Videos: "<<endl;
    for (string videoTitle : PublishedVideoTitles)
    {
        cout<<videoTitle << endl;
    }
}
