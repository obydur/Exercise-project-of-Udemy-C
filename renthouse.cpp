#include iostream
#include conio.h
#include stdlib.h
using namespace std;

struct Cars {

    string company[200]= {Mohammad Obydur Rahman,Volkswagun,BMW,Bayerische Motoren Werke AG,Audi,Volkswagen AG,Mercedes,Gumpert,DKW,Alpina};

    string model[200]= {800,2023,R6,QW4,1909,S-Series,Benz,Thar,Nano,Toyota Corolla};

    string color[200]={Yellow,Black,Green pearl,Red,Brown,Blue,Silver,Golden,Grey,Paint};

    string max_speed[200]={80 Kmh ,200 Kmh,300 Kmh,250 Kmh,320 Kmh,400 Kmh,200 Kmh,250 Kmh,355 kmh,280 Kmh};

    int price[100]={110000,1320000,250000,45000,600000,570000,201000,2700000,453000,2560000};

    int date [100] = {2023,2022,2021,2020,2018,2017,2016,2015,2021,2010};
   }car;

  struct Lease_info{

   string Name[100];
   string Natio_ID[100];
   int payment_acc[100] ;
   }lease;


First output
   void Menu ()
{
    int num=1;
  for(int i=0 ;i10;++i)
{
    coutttt;
    coutEnter numt- To Select  car.company[i]endl;
    num++ ;
}

}

Second output
void Details (int Choice)
  {
   system(CLS);
   coutnnnttt-----------------------------n;
     coutttt You have to selected - car.company[Choice-1]endl;
     coutttt-----------------------------nnn;
     coutttt you have to select model number  car.model[Choice-1]endl;
     coutttt what is your feverate color  car.color[Choice-1]endl;
     coutttt Maximum speed of car car.max_speed[Choice-1]endl;
     coutttt Price  car.price[Choice-1]endl;


  }
   check lease credit

   void checklease (int k )
  {
      if(lease.payment_acc[k]=car.price[k])
           coutnnnttt Process has been done successfully!! endl;
           else
              coutnnnttt Not Available endl;

  }
User Inputcpo
  void user_input (int theChoice)
   {
   system(CLS);
   int i;
        int j=theChoice-1 ;
       coutttt----------------------------------------n;
       coutttt Please Provide Your Personal Details   n;
       coutttt----------------------------------------nn;
       coutnt NOTE PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,ntPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF CARnnnn;
       coutttt Enter Your Name  ;
       cinlease.Name[100];
       coutttt Enter Your National ID  ;
       cinlease.Natio_ID[j] ;
       coutttt Payment Amount  ;
       cinlease.payment_acc[j] ;


     checklease( j ) ;
   }


int main()
{
int login();
    login();

     string decide =yes ;
     coutttt----------------------------------------------n;
     coutttttSIMPLE CAR RENTAL SYSTEM n;
     couttttWelcome to Our Company ,Choose from the menu  endl;
     coutttt----------------------------------------------n;
     while(decide!=exit)
     {
         Menu();
     coutnnntttYour Choice ;
     int theChoice ;
     cintheChoice ;
     Details(theChoice);
     coutnnntttAre You Sure, you want to rent this Car (yes no exit )  ;
     cindecide ;
     if(decide==yes) {
        user_input(theChoice);
        coutnntttDo you want to continue (yesno) ;
        cindecide;
        if (decide==no) break ;
system(CLS);
     }

   else {
      if(decide==no)
      {
       system(CLS);
          continue ;
      }
     else if  (decide==exit)
     {
     system(CLS);

         break ;
     }

   }
     }

    getch();
    return 0;
}
cpo
int login(){
   string pass =;
   char ch;
   cout nnnnnnnttttt  Sunshine Car Rental System Login;
   cout nnnnnnnttttttEnter Password ;
   ch = _getch();
   while(ch != 13){character 13 is enter
      pass.push_back(ch);
      cout'';
      ch = _getch();
   }
   if(pass == rana){
      cout nnnnttttt  Access Granted! Welcome To Our System nn;
      system(PAUSE);
      system(CLS);

   }else{
      cout nnnntttttAccess Aborted...Please Try Again!!n;
      system(PAUSE);
      system(CLS);
      login();
   }
}

