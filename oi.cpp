#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

#pragma warning(disable: 4786)

#define ai001
#define functions

#ifdef ai001
#ifdef functions

   using namespace std;

class controler
{
  public:

   int contador_INPTS;
};

 void pause(){system("pause");}
 void cls(){system("cls");}
 void fim(){system("exit");}
 void jmpln(){cout<<" "<<endl;}

int main()
{
 cls();

 /*
 controler ctrl;
  ctrl.contador_INPTS;
  */
 int cont = 0;

 system("title IA-001");
 system("color 1f");

 cout<<"IA-001 Application"<<endl;
pause();

return 0;

}


#endif
      #endif

