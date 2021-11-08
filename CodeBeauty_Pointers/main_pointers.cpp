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

// - - - - - LESSON THREE - - - - - //
// - - - - Functions - - - - //


// - - - - - LESSON THREE - - - - - //
// - - - - Passing Arrays - - - - //
// int main()
// {
//         int luckey_nums[5];
//         for (int i = 0; i < 4; ++i)
//         {
//             cout << "number: ";
//             cin >> luckey_nums[i];
//         }
//         for (int i = 0; i <= 5; ++i)
//         {
//             cout << *(luckey_nums + i) << " ";
//         }
// Example 1
//     int luckey_nums[5] = { 1,2,3,4,5 };
//     cout << luckey_nums << endl;
//     cout << &luckey_nums[0] << endl;
//     cout << luckey_nums[2] << endl;
//     cout << *(luckey_nums + 2) << endl; // Using the *, you dereference array and land on the first position in lucky_nums
// //                                         Then you tell it with "+2" to move over two spaces into the array. 
//     return 0;
// }

// - - - - - LESSON TWO - - - - - //
// - - - - Void Pointers - - - - //
// NOTE: - In the same way that basic pointers have limitations in how you can declare them
//         E.g. you can you only declare int pointers to int variable types
//       - Void pointers have a limitiation in the fact tha tyou can't directly dereference a 
//         void pointer. 
// void print_number(int* number_pointer) // will print out the value of the number that we are storing.
// {        //         ^integer pointer     
//     cout << * number_pointer << endl;
// }        // ^dereferencing
// void print_char(char* letter)
// {
//     cout << * letter << endl;
// }
// void print_example(void* pointer, char type)    
// {
//     switch (type)
//     {
//         case 'i': // handle int*
//             cout << *( (int*)pointer ) << endl ;  // casting pointer to an integer datatype. 
// //                  ^ Dereference the pointer 
//             break;
//         case 'c': // handle char*
//             cout << *( (char*)pointer ) << endl ; // casting pointer to a char datatype.
// //                  ^ Dereference the pointer             
//             break;
//     } // Basically, dereferencing is like unpacking the container?
// }
// int main()
// {
//     int number = 5;
//     print_number(&number); // prints value of number.
//     char letter = 'A';
//     print_char(&letter); // print value of character
//     print_example( &number, 'i' ); // print case 1
//     print_example( &letter, 'c'); // print case 2
//     // ^ printing multiple types of variabls. 
//     return 0;
// }

// - - - - - LESSON ONE - - - - - //
// - - - - - Pointer Basics - - - - - //
// int main()
// {
//     int num = 5;
//     cout << &num << endl; // <-- " & " gives you the memory address. 
//     //          ^ does this get stored on the stack?
//     int * pointer = &num; // <-- Holds a copy of the address where num is stored. .
//                             //      That should be on the heap, ya?
//     cout << pointer << endl; // prints where the copied data is stored. 
//     cout << * pointer << endl; // access value of the data stored in the original location and prints it. 
//     //       ^ dereferences pointer. 
//     // Dereferenceing Pointers. //
//     * pointer = 10; // This means: "This rewrites the original data... is that temporary or does it permanently do that?"
//     cout << * pointer << endl; // prints new value of pointer
//     cout << num << endl; // prints new value of original num.
//     int var; // creates variable
//     int* pointer_2 = &var; // creates a pointer to the spot in memeory var was given.
//     * pointer_2 = 7; // 
//     cout << "variable = " << var << endl; // 
//     // THE QUESTION: Why would we assign a pointer, just to assign a value to a variable?
//     // THE ANSWER: You don't. This is not how pointers were ever meant to be used. 
//  return 0;
// }
 