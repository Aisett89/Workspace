#include "pointers.h"

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// - - - - - - - - - - - - - - - To go in CPP - - - - - - - - - -  - - - - - - 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// #include "pointers.h"
int get_num_pointers()
{
    // create num value and memory referene string
    int num = 5; // declared value
    cout << num << endl; // print num
    cout<< &num <<endl; // & print num's location ( Example: 0x00sure00 )
    
    // create ptr_number which copies the value of num and stores it in new memory location.
    int* ptr_number = &num; // " reference " <-- * establishes a new memory reference string (Example: 0x69yup69 /*nice/* )
    cout<< ptr_number << endl; // print ptr lovation <-- a copy in a different address in memeory 
    cout<< *ptr_number << endl; // * in front of ptr references the value, not the location. 
    
    // Create NEW value of pointer and number using "dereference"
    *ptr_number = 10; // NEW value assignment of ptr "dereference" <-- also modifies value of original variable. 
    cout<< *ptr_number << endl; // print NEW value of ptr.
    cout<< num << endl; // * print NEW value of num.
    return num;
}

void print_number( int* pointer_number )
{
    cout << *pointer_number << endl;
}

void print_letter( char* pointer_letter )
{
    cout << *pointer_letter << endl;
}

// - - Universal print function - -
void print(void* ptr, char type) // void pointers can accept any datatype.
{  
    switch(type)
    {
        case 'i': //handle int*
            cout << ((int*)ptr) << endl; 
            break; // integer pointer
        case 'c': // handle char*
            cout << ((char*)ptr) << endl; 
            break;// char pointer
    }
}




// - - - - - - - - - - - - - EXAMPLE - - - - - - - - - - - - - - - -
// void YouTubeChannel::get_info()
// {
//     cout<<"Name: "<<Name <<endl;
//     cout<< "Owner Name: "<< OwnerName <<endl;
//     cout<<"Subscribers: " << SubscribersCount<<endl;
//     cout<<"Videos: "<<endl;
//     for (string videoTitle : PublishedVideoTitles)
//     {
//         cout<<videoTitle << endl;
//     }
// }
