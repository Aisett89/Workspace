
// - - - - - - - - - - - MAIN  - - - - - - - - - - - - - - - - - 

#include "workspace.h"

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
