#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int flip()
{
    int face;
    face=rand()%2;
    return face;
}

int main()
{
   int heads=0;
   int tails=0;

   srand( time( 0 ) );
   for(int loop=1;loop<=100;loop++)
   {
      if (flip()==0)
      {
         ++tails;
         cout << "Tails ";
      }
      else
      {
         ++heads;
         cout << "Heads ";
      }
      if ( loop % 10 == 0 )
         cout << endl;
   }

   cout << "\nThe number of Heads was " << heads<< "\nThe number of Tails was " << tails<< endl;
}
