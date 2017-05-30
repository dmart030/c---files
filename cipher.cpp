//  =============== BEGIN ASSESSMENT HEADER ================
/// @file cypher junk.cpp
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
   string inputVar;
   string Var1;
   string default1;
   string tw;
   string a;
   string default2;
   int i;
   int b;
   int abba;

   cout << "What is the method (encryption or decryption): ";
   cin >> inputVar;
   cout << endl;
   if (inputVar == "encryption" ) {
      i = 0;
      default2 = "zyxwvutsrqponmlkjihgfedcba";
      cout << "what is the translation map (type 'default' to use default): ";
      cin >> Var1;
      cout << endl;

      if (Var1 == "default") {
         cout << "What is the single word to translate: ";
         cin >> tw;
         cout << endl;


         do {

            if (tw.at(i) > 'z' || tw.at(i) < 'a') {
               ++abba;
            }
            else {
               ++b;

            }
            ++i;
         } while (i < tw.size());
         if ( b > abba && abba == 0 )  {
            i = 0;
            cout << "Encrypted word: ";
            do {
               cout << default2.substr((tw.substr(i,1)[0]-'a'),1);
               ++i;

            } while ( i < tw.size());
            cout << endl;
         }
         else if ( tw.size() == 1) {
            cout << default1.substr((tw.substr(1,0)[0]-'a'),1);
            cout << endl;
         }
         else {
            cout << "Error: encryption cannot be performed." << endl;
         }
      }

      else if (Var1.length() != 26) {
         cout << "Error: invalid translation map size." << endl;
      }
      else if (Var1.length() == 26) {
         cout << "What is the single word to translate: ";
         cin >> tw;
         cout << endl;


         do {

            if (tw.at(i) > 'z' || tw.at(i) < 'a') {
               ++abba;
            }
            else {
               ++b;

            }
            ++i;
         } while (i < tw.size());

         if ( b > abba && abba == 0)  {
            i = 0;
            cout << "Encrypted word: ";
            do {

               cout << Var1.substr((tw.substr(i,1)[0]-'a'),1);
               ++i;

            } while ( i < tw.size());
            cout << endl;

         }
         else {
            cout << "Error: encryption cannot be performed." << endl;
         }
      }
   }
   else if (inputVar == "decryption") {
      default1 = "abcdefghijklmnopqrstuvwxyz";
      i = 0;
      cout << "What is the translation map (type 'default' to use default): ";
      cin >> Var1;
      cout << endl;

      if (Var1 == "default") {
         cout << "What is the single word to translate: ";
         cin >> tw;
         cout << endl;

         do {
            if (tw.at(i) > 'z' || tw.at(i) < 'a') {
               ++abba;

            }
            else {
               ++b;

            }
            ++i;
         } while (i < tw.size());

         if ( b > abba && abba == 0)  {
            i = 0;
            cout << "Decrypted word: ";
            default1 = "abcdefghijklmnopqrstuvwxyz";
            do {
               cout << default1.substr(( 'z'-tw.substr(i,1)[0]),1);
               ++i;

            } while ( i < tw.size());
            cout << endl;
         }
         else if ( tw.size() == 1) {
            cout << default1.substr(('z' -tw.substr(1,1)[0]),1);
            cout << endl;
         }
         else {
            cout << "Error: decryption cannot be performed." << endl;
         }
      }


      else if (Var1.length() != 26) {
         cout << "Error: invalid translation map size." << endl;
      }
      else if (Var1.length() == 26)  {
         cout << "What is the single word to translate: ";
         cin >> tw;
         cout << endl;

         do {
            if (Var1.find(tw.at(i)) == string::npos ) {
               ++abba;
            }
            else {
               ++b;

            }
            ++i;
         } while (i < tw.size());

         if ( b > 0)  {
            i = 0;
            cout << "Decrypted word: ";
            default1 = "abcdefghijklmnopqrstuvwxyz";

            do {
               if (Var1.find(tw.at(i)) != string::npos) {
                  cout << default1.substr(Var1.find(tw.at(i)),1);

               }
               ++i;

            } while ( i < tw.size());
            cout << endl;
            if (abba > 0 ) {
               cout << "Error: decryption cannot be performed." << endl;

            }

         }
         else if (abba > 0) {
            cout << "Error: decryption cannot be performed." << endl;

         }

      }

   }
   else {
      cout << "Error: invalid method choice." << endl;
   }

   //YAYYY I DID IT FINALLY!!!!!!!!!!!1
   return 0;
}
