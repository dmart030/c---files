//  =============== BEGIN ASSESSMENT HEADER ================
/// @file encrypt.cpp
/// @brief assignment02/ISBN
///
/// @author Dominic Martinez-Ta [dmart030@ucr.edu]
/// @date January 7, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>

#include <cmath>

using namespace std;

int main()
{
   string inputvar;
   string wordo_o;
   string defaulto_o = "zyxwvutsrqponmlkjihgfedcba";

cout << "What is the translation map (type 'default' to use default): ";
   cin >> inputvar;
   cout << endl;
   cout << endl;



   if (inputvar == "default") {
      cout << "What is the single word to translate: ";
      cin >> wordo_o;
      cout << endl;
      cout << endl;

      //THAT'S RIGHT YA PUNKS.
      //userText.substr(userText.length() - 4, 4)
      if (wordo_o.substr(0,1)[0]-'a' >= 0) {
         cout << "Encrypted word: ";
         cout << defaulto_o.substr((wordo_o.substr(0,1)[0]-'a'),1);
         cout << wordo_o.substr(1);
      }
      else {
         cout << "Error: encryption cannot be performed.";

      }


   }
   else if ( inputvar.length() != 26) {
      cout << "Error: invalid translation map size.";
   }
   else if ( inputvar.length() == 26) {
      cout << "What is the single word to translate: ";
      cin >> wordo_o;
      cout << endl;
      cout << endl;
      //THAT'S RIGHT YA PUNKS.
      cout << "Encrypted word: ";
      cout << inputvar.substr((wordo_o.substr(0,1)[0]-'a'),1);
      cout << wordo_o.substr(1);
   }
   else if ((wordo_o.substr(0,1)[0]-'A') > 0 ) {
      cout << "Error: invalid translation map size.";
   }


      return 0;
}
