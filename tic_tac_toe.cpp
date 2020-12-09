#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <windows.h>
#include <ctime>
using namespace std ;
char numbers [3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}} ;
int counter = 0;
int options ( int three) ;
int newgame (int three) ;

int same (int num) ;
int same2 (int num) ;
int singleplayer (int start) ;
int optionsscreen ( int two) ;
int multiplayer (int infinite) ;
int player1turn (int inf) ;
int player2turn (int call) ;
int compturn (int mov) ;
int player1move(int mov) ;
void main_screen (int call) ;


int unbeatable (int start) ;
int Aiturn (int start) ;
int player1move1(int mov) ;
void main_screen (int call)
{

        cout << "_____________________________________________________________" << endl ;
        cout << "_____________________________________________________________" << endl ;
        cout << endl ;

}



int options ( int three)



{
        cout << "> Press 1 to start a new game" << endl ;
        cout << "> Press 2 for options " << endl ;
        cout << "> Press 3 to exit" << endl ;
        int choice ;
        int call ;
        cin >> choice ;
        if (choice == 1 ) { system ("cls") ; newgame(call) ;}
        if (choice == 2 ) { system ("cls") ; optionsscreen(call); }
        if (choice == 3 ) { cout << "Please wait" ;  for(int i=3;i>=1;i--)
                                        {  cout<<"." ; Sleep(1000);
                                        }   return 1 ;
                          }
        if ( choice != 1 && choice != 2 && choice !=3 ) {cout << "Invalid command" ; return 2 ; }

}

 int newgame (int three)



 {

        cout << "> Press 1 for single player\n" << endl ;
        cout << "> Press 2 for multiplayer\n" << endl ;
        cout << "> Press 3 for hardcore\n" << endl ;
        cout << "> Press 0 to go back\n" ;
        int choice1 ;
        int call ;
        cin >> choice1 ;
        if (choice1 == 1) { system("cls") ; singleplayer (call) ;}
         if (choice1 == 3) { system("cls") ; unbeatable (call) ; return 0 ;}
        if (choice1 ==2) { system ("cls") ; multiplayer(call) ;}
        if (choice1 == 0) { system("cls") ; main_screen(call) ; options (call) ;}
        if ( choice1 != 1 && choice1 != 2 && choice1 !=0 ) {cout << "Invalid command" ; return 3; }


}



 int optionsscreen (int two)



{
        cout << "> Press 1 for full screen\n" << endl ;
        cout << "> Press 0 to go back\n" ;

        int choice2 ;
        cin >> choice2 ;

        int call2 ;

        if (choice2 == 1) {  system("mode 650"); main_screen(call2) ; options(call2);}
        if (choice2 == 0 ) { system("cls") ; main_screen(call2) ; options (call2) ;}
        if ( choice2 != 1 && choice2 !=0 ) {cout << "Invalid command" ; return 4; }
 }



 int multiplayer ( int infinite)



 {  string symbol ;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << "\t\t\t\t\t\t" << "Loading\n\n" << "\t\t\t\t\t\t" ;
        char halfcolour =178 ;
        char fullcolour = 219 ;
        for (int i =0 ; i<=15 ; i++)
    {
          cout << halfcolour ;
    }
        cout<<"\r" <<  "\t\t\t\t\t\t" ;
        for ( int j = 0 ; j<=15 ; j++)
    {
          cout << fullcolour ; Sleep(200);
    }
        system ("cls") ;
        cout << "Player 1 symbol is (O) and player2 symbol is (X)\n" ;
        int box ;
        int call3 ;
        cout << endl ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[0][0]<<"  |  "<<numbers[0][1]<<"  |  "<<numbers [0][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[1][0]<<"  |  "<<numbers[1][1]<<"  |  "<<numbers [1][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[2][0]<<"  |  "<<numbers[2][1]<<"  |  "<<numbers [2][2]<<"  \n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "Player1 enter the box: " ;
        cin >> box ; system ("cls") ;
        if (box==1 && numbers[0][0] != 'X') {numbers[0][0] = 'O' ; player1turn(call3) ; }
        if (box==2 && numbers[0][1] != 'X') {numbers[0][1] = 'O' ; player1turn(call3) ; }
        if (box==3 && numbers[0][2] != 'X') {numbers[0][2] = 'O' ; player1turn(call3) ; }
        if (box==4 && numbers[1][0] != 'X') {numbers[1][0] = 'O' ; player1turn(call3) ; }
        if (box==5 && numbers[1][1] != 'X') {numbers[1][1] = 'O' ; player1turn(call3) ; }
        if (box==6 && numbers[1][2] != 'X') {numbers[1][2] = 'O' ; player1turn(call3) ; }
        if (box==7 && numbers[2][0] != 'X') {numbers[2][0] = 'O' ; player1turn(call3) ; }
        if (box==8 && numbers[2][1] != 'X') {numbers[2][1] = 'O' ; player1turn(call3) ; }
        if (box==9 && numbers[2][2] != 'X') {numbers[2][2] = 'O' ; player1turn(call3) ; }
        if (box >=10 || box<=0)    {cout << "Invalid move\n" << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(1000); } return 5 ;}
}







int player1turn (int inf)



{       int box ;
        int call3 ;

        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[0][0]<<"  |  "<<numbers[0][1]<<"  |  "<<numbers [0][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[1][0]<<"  |  "<<numbers[1][1]<<"  |  "<<numbers [1][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[2][0]<<"  |  "<<numbers[2][1]<<"  |  "<<numbers [2][2]<<"  \n" ;
        cout << "\t\t\t\t     |     |     \n" ;

        counter ++ ;



        if(numbers [0][0] == 'O' && numbers [0][1] == 'O' && numbers [0][2] == 'O' ||
        numbers [1][0] == 'O' && numbers [1][1] == 'O' && numbers [1][2] == 'O' ||
        numbers [2][0] == 'O' && numbers [2][1] == 'O' && numbers [2][2] == 'O' ||
        numbers [0][0] == 'O' && numbers [1][0] == 'O' && numbers [2][0] == 'O' ||
        numbers [0][1] == 'O' && numbers [1][1] == 'O' && numbers [2][1] == 'O' ||
        numbers [0][2] == 'O' && numbers [1][2] == 'O' && numbers [2][2] == 'O' ||
        numbers [0][0] == 'O' && numbers [1][1] == 'O' && numbers [2][2] == 'O' ||
        numbers [0][2] == 'O' && numbers [1][1] == 'O' && numbers [2][0] == 'O')
        {
            cout << "!!! Player1 Wins !!!" <<endl << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 10 ;}
             if (counter == 9) {cout << "!!! Game is Draw!!!" <<endl << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 6 ;}





        cout << "Player2 enter the box: " ;
        cin >> box ; system("cls") ;

        if (box==1 && numbers[0][0] != 'O') {numbers[0][0] = 'X' ; player2turn(call3) ; }
        if (box==2 && numbers[0][1] != 'O') {numbers[0][1] = 'X' ; player2turn(call3) ; }
        if (box==3 && numbers[0][2] != 'O') {numbers[0][2] = 'X' ; player2turn(call3) ; }
        if (box==4 && numbers[1][0] != 'O') {numbers[1][0] = 'X' ; player2turn(call3) ; }
        if (box==5 && numbers[1][1] != 'O') {numbers[1][1] = 'X' ; player2turn(call3) ; }
        if (box==6 && numbers[1][2] != 'O') {numbers[1][2] = 'X' ; player2turn(call3) ; }
        if (box==7 && numbers[2][0] != 'O') {numbers[2][0] = 'X' ; player2turn(call3) ; }
        if (box==8 && numbers[2][1] != 'O') {numbers[2][1] = 'X' ; player2turn(call3) ; }
        if (box==9 && numbers[2][2] != 'O') {numbers[2][2] = 'X' ; player2turn(call3) ; }
        if (box >=10 || box<=0)   {cout << "Invalid move\n" << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(1000); } return 7 ; }

}


 int player2turn (int call)



{
        int box ;
        int call3 ;

        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[0][0]<<"  |  "<<numbers[0][1]<<"  |  "<<numbers [0][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[1][0]<<"  |  "<<numbers[1][1]<<"  |  "<<numbers [1][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[2][0]<<"  |  "<<numbers[2][1]<<"  |  "<<numbers [2][2]<<"  \n" ;
        cout << "\t\t\t\t     |     |     \n" ;

        counter ++ ;


        if (numbers [0][0] == 'X' && numbers [0][1] == 'X' && numbers [0][2] == 'X' ||
        numbers [1][0] == 'X' && numbers [1][1] == 'X' && numbers [1][2] == 'X' ||
        numbers [2][0] == 'X' && numbers [2][1] == 'X' && numbers [2][2] == 'X' ||
        numbers [0][0] == 'X' && numbers [1][0] == 'X' && numbers [2][0] == 'X' ||
        numbers [0][1] == 'X' && numbers [1][1] == 'X' && numbers [2][1] == 'X' ||
        numbers [0][2] == 'X' && numbers [1][2] == 'X' && numbers [2][2] == 'X' ||
        numbers [0][0] == 'X' && numbers [1][1] == 'X' && numbers [2][2] == 'X' ||
        numbers [0][2] == 'X' && numbers [1][1] == 'X' && numbers [2][0] == 'X')
            {
            cout << "!!! Player2 Wins !!!" <<endl << "Ending" ;
            for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 9 ;
            }

        if (counter == 9) {cout << "!!! Game is Draw!!!" <<endl << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 8 ;
            }


        cout << "Player1 enter the box: " ;
        cin >> box ; system("cls") ;

        if (box==1 && numbers[0][0] != 'X') {numbers[0][0] = 'O' ; player1turn(call3) ; }
        if (box==2 && numbers[0][1] != 'X') {numbers[0][1] = 'O' ; player1turn(call3) ; }
        if (box==3 && numbers[0][2] != 'X') {numbers[0][2] = 'O' ; player1turn(call3) ; }
        if (box==4 && numbers[1][0] != 'X') {numbers[1][0] = 'O' ; player1turn(call3) ; }
        if (box==5 && numbers[1][1] != 'X') {numbers[1][1] = 'O' ; player1turn(call3) ; }
        if (box==6 && numbers[1][2] != 'X') {numbers[1][2] = 'O' ; player1turn(call3) ; }
        if (box==7 && numbers[2][0] != 'X') {numbers[2][0] = 'O' ; player1turn(call3) ; }
        if (box==8 && numbers[2][1] != 'X') {numbers[2][1] = 'O' ; player1turn(call3) ; }
        if (box==9 && numbers[2][2] != 'X') {numbers[2][2] = 'O' ; player1turn(call3) ; }
        if (box >=10 || box<=0)    {cout << "Invalid move\n" << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(1000); } return 10 ; }

}




int singleplayer (int start)

{  string symbol ;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << "\t\t\t\t\t\t" << "Loading\n\n" << "\t\t\t\t\t\t" ;
        char halfcolour =178 ;
        char fullcolour = 219 ;
        for (int i =0 ; i<=15 ; i++)
    {
          cout << halfcolour ;
    }
        cout<<"\r" <<  "\t\t\t\t\t\t" ;
        for ( int j = 0 ; j<=15 ; j++)
    {
          cout << fullcolour ; Sleep(200);
    }
        system ("cls") ;
        cout << "Player 1 symbol is (O) and Computer symbol is (X)\n" ;

        int box ;
        int call3 ;
        cout << endl ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[0][0]<<"  |  "<<numbers[0][1]<<"  |  "<<numbers [0][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[1][0]<<"  |  "<<numbers[1][1]<<"  |  "<<numbers [1][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[2][0]<<"  |  "<<numbers[2][1]<<"  |  "<<numbers [2][2]<<"  \n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << endl ;
        cout << "Player1 enter the box: " ;
        cin >> box ; system("cls") ;

         if (box==1 && numbers[0][0] != 'X') {numbers[0][0] = 'O' ; compturn(call3) ; }
        if (box==2 && numbers[0][1] != 'X') {numbers[0][1] = 'O' ; compturn(call3) ; }
        if (box==3 && numbers[0][2] != 'X') {numbers[0][2] = 'O' ; compturn(call3) ; }
        if (box==4 && numbers[1][0] != 'X') {numbers[1][0] = 'O' ; compturn(call3) ; }
        if (box==5 && numbers[1][1] != 'X') {numbers[1][1] = 'O' ; compturn(call3) ; }
        if (box==6 && numbers[1][2] != 'X') {numbers[1][2] = 'O' ; compturn(call3) ; }
        if (box==7 && numbers[2][0] != 'X') {numbers[2][0] = 'O' ; compturn(call3) ; }
        if (box==8 && numbers[2][1] != 'X') {numbers[2][1] = 'O' ; compturn(call3) ; }
        if (box==9 && numbers[2][2] != 'X') {numbers[2][2] = 'O' ; compturn(call3) ; }
        if (box >=10 || box<=0)    {cout << "Invalid move\n" << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(1000); } return 1 ;}
}



        int compturn (int mov)


{
        int box ;
        int call3 ;
        cout << endl ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[0][0]<<"  |  "<<numbers[0][1]<<"  |  "<<numbers [0][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[1][0]<<"  |  "<<numbers[1][1]<<"  |  "<<numbers [1][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[2][0]<<"  |  "<<numbers[2][1]<<"  |  "<<numbers [2][2]<<"  \n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << endl ;

        counter ++ ;



        if(numbers [0][0] == 'O' && numbers [0][1] == 'O' && numbers [0][2] == 'O' ||
        numbers [1][0] == 'O' && numbers [1][1] == 'O' && numbers [1][2] == 'O' ||
        numbers [2][0] == 'O' && numbers [2][1] == 'O' && numbers [2][2] == 'O' ||
        numbers [0][0] == 'O' && numbers [1][0] == 'O' && numbers [2][0] == 'O' ||
        numbers [0][1] == 'O' && numbers [1][1] == 'O' && numbers [2][1] == 'O' ||
        numbers [0][2] == 'O' && numbers [1][2] == 'O' && numbers [2][2] == 'O' ||
        numbers [0][0] == 'O' && numbers [1][1] == 'O' && numbers [2][2] == 'O' ||
        numbers [0][2] == 'O' && numbers [1][1] == 'O' && numbers [2][0] == 'O')
        {
            cout << "!!! Player1 Wins !!!"  <<endl << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 1 ;}
            if (counter == 9) {cout << "!!! Game is Draw!!!" <<endl << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 1;}


             srand ( time(NULL) ) ;


            box= 1+ (rand ()%9) ;
            system ("cls") ;
            for (int i =1 ; i<=1 ; i++)
    {
        if (box==1 && numbers[0][0] != 'O' && numbers [0][0] !='X') {numbers[0][0] = 'X' ; player1move(call3) ;break;}
        if (box==2 && numbers[0][1] != 'O' && numbers [0][1] !='X') {numbers[0][1] = 'X' ; player1move(call3) ;break; }
        if (box==3 && numbers[0][2] != 'O' && numbers [0][2] !='X') {numbers[0][2] = 'X' ; player1move(call3) ;break; }
        if (box==4 && numbers[1][0] != 'O' && numbers [1][0] !='X') {numbers[1][0] = 'X' ; player1move(call3) ;break; }
        if (box==5 && numbers[1][1] != 'O' && numbers [1][1] !='X') {numbers[1][1] = 'X' ; player1move(call3) ;break;}
        if (box==6 && numbers[1][2] != 'O' && numbers [1][2] !='X') {numbers[1][2] = 'X' ; player1move(call3) ;break; }
        if (box==8 && numbers[2][1] != 'O' && numbers [2][1] !='X') {numbers[2][1] = 'X' ; player1move(call3) ;break; }
                 if (box==9 && numbers[2][2] != 'O'&& numbers [2][2] !='X'){numbers[2][2] = 'X' ;player1move(call3) ; break; }
        if (box==7 && numbers[2][0] != 'O' && numbers [2][0] !='X') {numbers[2][0] = 'X' ;player1move(call3) ; break; }
        else {system("cls") ; same(call3) ;}


    }}

int same (int num)
{   int box ;
    int call3 ;
 srand ( time(NULL) ) ;


            box= 1+ (rand ()%9) ;
             system("cls") ;
            for (int i =1 ; i<=1 ; i++)
    {
        if (box==1 && numbers[0][0] != 'O' && numbers [0][0] !='X') {numbers[0][0] = 'X' ; player1move(call3) ;break;}
        if (box==2 && numbers[0][1] != 'O' && numbers [0][1] !='X') {numbers[0][1] = 'X' ; player1move(call3) ;break; }
        if (box==3 && numbers[0][2] != 'O' && numbers [0][2] !='X') {numbers[0][2] = 'X' ; player1move(call3) ;break; }
        if (box==4 && numbers[1][0] != 'O' && numbers [1][0] !='X') {numbers[1][0] = 'X' ; player1move(call3) ;break; }
        if (box==5 && numbers[1][1] != 'O' && numbers [1][1] !='X') {numbers[1][1] = 'X' ; player1move(call3) ;break;}
        if (box==6 && numbers[1][2] != 'O' && numbers [1][2] !='X') {numbers[1][2] = 'X' ; player1move(call3) ;break; }
        if (box==8 && numbers[2][1] != 'O' && numbers [2][1] !='X') {numbers[2][1] = 'X' ; player1move(call3) ;break; }
        if (box==9 && numbers[2][2] != 'O'&& numbers [2][2] !='X'){numbers[2][2] = 'X' ;player1move(call3) ; break; }
        if (box==7 && numbers[2][0] != 'O' && numbers [2][0] !='X') {numbers[2][0] = 'X' ;player1move(call3) ; break; }
        else {system ("cls") ; same2(call3);}

} }

int same2 (int num)
{   int box ;
    int call3 ;
 srand ( time(NULL) ) ;


            box= 1+ (rand ()%9) ;
             system("cls") ;
            for (int i =1 ; i<=1 ; i++)
    {
        if (box==1 && numbers[0][0] != 'O' && numbers [0][0] !='X') {numbers[0][0] = 'X' ; player1move(call3) ;break;}
        if (box==2 && numbers[0][1] != 'O' && numbers [0][1] !='X') {numbers[0][1] = 'X' ; player1move(call3) ;break; }
        if (box==3 && numbers[0][2] != 'O' && numbers [0][2] !='X') {numbers[0][2] = 'X' ; player1move(call3) ;break; }
        if (box==4 && numbers[1][0] != 'O' && numbers [1][0] !='X') {numbers[1][0] = 'X' ; player1move(call3) ;break; }
        if (box==5 && numbers[1][1] != 'O' && numbers [1][1] !='X') {numbers[1][1] = 'X' ; player1move(call3) ;break;}
        if (box==6 && numbers[1][2] != 'O' && numbers [1][2] !='X') {numbers[1][2] = 'X' ; player1move(call3) ;break; }
        if (box==8 && numbers[2][1] != 'O' && numbers [2][1] !='X') {numbers[2][1] = 'X' ; player1move(call3) ;break; }
        if (box==9 && numbers[2][2] != 'O'&& numbers [2][2] !='X'){numbers[2][2] = 'X' ;player1move(call3) ; break; }
        if (box==7 && numbers[2][0] != 'O' && numbers [2][0] !='X') {numbers[2][0] = 'X' ;player1move(call3) ; break; }
        else {system ("cls") ; same(call3);}

}}

        int player1move(int mov)
{
         int box ;
        int call3 ;
        cout << endl ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[0][0]<<"  |  "<<numbers[0][1]<<"  |  "<<numbers [0][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[1][0]<<"  |  "<<numbers[1][1]<<"  |  "<<numbers [1][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[2][0]<<"  |  "<<numbers[2][1]<<"  |  "<<numbers [2][2]<<"  \n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << endl ;

        counter ++ ;






        if (numbers [0][0] == 'X' && numbers [0][1] == 'X' && numbers [0][2] == 'X' ||
        numbers [1][0] == 'X' && numbers [1][1] == 'X' && numbers [1][2] == 'X' ||
        numbers [2][0] == 'X' && numbers [2][1] == 'X' && numbers [2][2] == 'X' ||
        numbers [0][0] == 'X' && numbers [1][0] == 'X' && numbers [2][0] == 'X' ||
        numbers [0][1] == 'X' && numbers [1][1] == 'X' && numbers [2][1] == 'X' ||
        numbers [0][2] == 'X' && numbers [1][2] == 'X' && numbers [2][2] == 'X' ||
        numbers [0][0] == 'X' && numbers [1][1] == 'X' && numbers [2][2] == 'X' ||
        numbers [0][2] == 'X' && numbers [1][1] == 'X' && numbers [2][0] == 'X')
            {
            cout << "!!! Computer Wins !!!" <<endl << "Ending" ;
            for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
              return 1 ;
            }
 if (counter == 9) {cout << "!!! Game is Draw!!!" <<endl << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 1; }
        cout << "Player1 enter the box: " ;
        cin >> box ;
         if (box==1 && numbers[0][0] != 'X') {numbers[0][0] = 'O' ; compturn(call3) ; }
        if (box==2 && numbers[0][1] != 'X') {numbers[0][1] = 'O' ; compturn(call3) ; }
        if (box==3 && numbers[0][2] != 'X') {numbers[0][2] = 'O' ; compturn(call3) ; }
        if (box==4 && numbers[1][0] != 'X') {numbers[1][0] = 'O' ; compturn(call3) ; }
        if (box==5 && numbers[1][1] != 'X') {numbers[1][1] = 'O' ; compturn(call3) ; }
        if (box==6 && numbers[1][2] != 'X') {numbers[1][2] = 'O' ; compturn(call3) ; }
        if (box==7 && numbers[2][0] != 'X') {numbers[2][0] = 'O' ; compturn(call3) ; }
        if (box==8 && numbers[2][1] != 'X') {numbers[2][1] = 'O' ; compturn(call3) ; }
        if (box==9 && numbers[2][2] != 'X') {numbers[2][2] = 'O' ; compturn(call3) ; }
        return 1 ;
}

int unbeatable (int start)
{
    string symbol ;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << "\t\t\t\t\t\t" << "Loading\n\n" << "\t\t\t\t\t\t" ;
        char halfcolour =178 ;
        char fullcolour = 219 ;
        for (int i =0 ; i<=15 ; i++)
    {
          cout << halfcolour ;
    }
        cout<<"\r" <<  "\t\t\t\t\t\t" ;
        for ( int j = 0 ; j<=15 ; j++)
    {
          cout << fullcolour ; Sleep(200);
    }
        system ("cls") ;
        cout << "Player 1 symbol is (O) and Computer symbol is (X)\n" ;
        int box ;
        int call3 ;
        cout << endl ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[0][0]<<"  |  "<<numbers[0][1]<<"  |  "<<numbers [0][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[1][0]<<"  |  "<<numbers[1][1]<<"  |  "<<numbers [1][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[2][0]<<"  |  "<<numbers[2][1]<<"  |  "<<numbers [2][2]<<"  \n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << endl ;
        cout << "Player1 enter the box: " ;
        cin >> box ; system("cls") ;

         if (box==1 && numbers[0][0] != 'X') {numbers[0][0] = 'O' ; Aiturn(call3) ;return 0 ; }
        if (box==2 && numbers[0][1] != 'X') {numbers[0][1] = 'O' ;  Aiturn(call3) ; return 0 ;}
        if (box==3 && numbers[0][2] != 'X') {numbers[0][2] = 'O' ;  Aiturn(call3) ; return 0 ;}
        if (box==4 && numbers[1][0] != 'X') {numbers[1][0] = 'O' ;  Aiturn(call3) ; return 0 ;}
        if (box==5 && numbers[1][1] != 'X') {numbers[1][1] = 'O' ;  Aiturn(call3) ; return 0 ;}
        if (box==6 && numbers[1][2] != 'X') {numbers[1][2] = 'O' ;  Aiturn(call3) ; return 0 ;}
        if (box==7 && numbers[2][0] != 'X') {numbers[2][0] = 'O' ;  Aiturn(call3) ; return 0 ;}
        if (box==8 && numbers[2][1] != 'X') {numbers[2][1] = 'O' ;  Aiturn(call3) ; return 0 ;}
        if (box==9 && numbers[2][2] != 'X') {numbers[2][2] = 'O' ;  Aiturn(call3) ; return 0 ;}
        if (box >=10 || box<=0)    {cout << "Invalid move\n" << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(1000); } return 1 ;}
}

    int Aiturn (int start)
    {
         int box ;
        int call3 ;
        cout << endl ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[0][0]<<"  |  "<<numbers[0][1]<<"  |  "<<numbers [0][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[1][0]<<"  |  "<<numbers[1][1]<<"  |  "<<numbers [1][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[2][0]<<"  |  "<<numbers[2][1]<<"  |  "<<numbers [2][2]<<"  \n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << endl ;

        counter ++ ;



        if(numbers [0][0] == 'O' && numbers [0][1] == 'O' && numbers [0][2] == 'O' ||
        numbers [1][0] == 'O' && numbers [1][1] == 'O' && numbers [1][2] == 'O' ||
        numbers [2][0] == 'O' && numbers [2][1] == 'O' && numbers [2][2] == 'O' ||
        numbers [0][0] == 'O' && numbers [1][0] == 'O' && numbers [2][0] == 'O' ||
        numbers [0][1] == 'O' && numbers [1][1] == 'O' && numbers [2][1] == 'O' ||
        numbers [0][2] == 'O' && numbers [1][2] == 'O' && numbers [2][2] == 'O' ||
        numbers [0][0] == 'O' && numbers [1][1] == 'O' && numbers [2][2] == 'O' ||
        numbers [0][2] == 'O' && numbers [1][1] == 'O' && numbers [2][0] == 'O')
        {
            cout << "!!! Player1 Wins !!!"  <<endl << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 1 ;}
            if (counter == 9) {cout << "!!! Game is Draw!!!" <<endl << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 1;}

                                                    //Exceptions


        if ( numbers[1][1] == 'O' && numbers [2][2] =='O' && numbers [0][1] =='O' && numbers [2][0] =='O' && numbers[1][2] != 'X') {numbers[1][2] = 'X' ;  player1move1(call3) ;return 0 ;}
        if ( numbers[2][0] == 'O' && numbers [1][1] =='O' && numbers [0][2] =='X' && numbers [0][1] =='O' && numbers[1][2] != 'X') {numbers[0][0] = 'X' ;  player1move1(call3) ;return 0 ;}



                                                        //ATTACK


        if ( numbers[0][0] == 'X' && numbers [1][1] =='X' && numbers[2][2] != 'O') {numbers[2][2] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[2][0] == 'X' && numbers [2][1] =='X' && numbers[2][2] != 'O') {numbers[2][2] = 'X' ; player1move1(call3) ; return 0 ;}
        if ( numbers[0][2] == 'X' && numbers [1][2] =='X' && numbers[2][2] != 'O') {numbers[2][2] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'X' && numbers [2][2] =='X' && numbers[1][1] != 'O') {numbers[1][1] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[0][2] == 'X' && numbers [2][0] =='X' && numbers[1][1] != 'O') {numbers[1][1] = 'X' ; player1move1(call3) ; return 0 ;}
        if ( numbers[1][0] == 'X' && numbers [1][2] =='X' && numbers[1][1] != 'O') {numbers[1][1] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'X' && numbers [0][1] =='X' && numbers[0][2] != 'O'  ) {numbers[0][2] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[2][0] == 'X' && numbers [1][1] =='X' && numbers[0][2] != 'O') {numbers[0][2] = 'X' ; player1move1(call3) ; return 0 ;}
        if ( numbers[2][2] == 'X' && numbers [1][2] =='X' && numbers[0][2] != 'O') {numbers[0][2] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'X' && numbers [1][0] =='X'&& numbers[2][0] != 'O') {numbers[2][0] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[0][2] == 'X' && numbers [1][1] =='X'&& numbers[2][0] != 'O') {numbers[2][0] = 'X' ; player1move1(call3) ; return 0 ;}
        if ( numbers[2][2] == 'X' && numbers [2][1] =='X'&& numbers[2][0] != 'O') {numbers[2][0] = 'X' ; player1move1(call3) ;return 0 ;}

        if ( numbers[1][1] == 'X' && numbers [2][2] =='X' && numbers[0][0] != 'O') {numbers[0][0] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[0][2] == 'X' && numbers [0][1] =='X' && numbers[0][0] != 'O') {numbers[0][0] = 'X' ; player1move1(call3) ; return 0 ;}
        if ( numbers[2][0] == 'X' && numbers [1][0] =='X' && numbers[0][0] != 'O') {numbers[0][0] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'X' && numbers [2][0] =='X' && numbers[1][0] != 'O') {numbers[1][0] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[1][2] == 'X' && numbers [1][1] =='X' && numbers[1][0] != 'O') {numbers[1][0] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'X' && numbers [0][2] =='X' && numbers[0][1] != 'O') {numbers[0][1] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[2][1] == 'X' && numbers [1][1] =='X' && numbers[0][1] != 'O') {numbers[0][1] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[2][0] == 'X' && numbers [2][2] =='X' && numbers[2][1] != 'O') {numbers[2][1] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[0][1] == 'X' && numbers [1][1] =='X' && numbers[2][1] != 'O') {numbers[2][1] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][2] == 'X' && numbers [2][2] =='X' && numbers[1][2] != 'O') {numbers[1][2] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[1][0] == 'X' && numbers [1][1] =='X' && numbers[1][2] != 'O') {numbers[1][2] = 'X' ; player1move1(call3) ;return 0 ;}



                                                           // DEFEND

        if ( numbers[0][0] == 'O' && numbers [1][1] =='O' && numbers [2][2] != 'X') {numbers[2][2] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[2][0] == 'O' && numbers [2][1] =='O' && numbers [2][2] != 'X') {numbers[2][2] = 'X' ; player1move1(call3) ;return 0 ;}
        if ( numbers[0][2] == 'O' && numbers [1][2] =='O' && numbers [2][2] != 'X') {numbers[2][2] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'O' && numbers [2][2] =='O'&& numbers[1][1] != 'X') {numbers[1][1] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[0][2] == 'O' && numbers [2][0] =='O' && numbers[1][1] != 'X') {numbers[1][1] = 'X' ; player1move1(call3) ;return 0 ;}
        if ( numbers[1][0] == 'O' && numbers [1][2] =='O' && numbers[1][1] != 'X') {numbers[1][1] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'O' && numbers [0][1] =='O'&& numbers[0][2] != 'X') {numbers[0][2] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[2][0] == 'O' && numbers [1][1] =='O' && numbers[0][2] != 'X') {numbers[0][2] = 'X' ; player1move1(call3) ;return 0 ;}
        if ( numbers[2][2] == 'O' && numbers [1][2] =='O'&& numbers[0][2] != 'X') {numbers[0][2] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'O' && numbers [1][0] =='O'&& numbers[2][0] != 'X') {numbers[2][0] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[0][2] == 'O' && numbers [1][1] =='O'&& numbers[2][0] != 'X') {numbers[2][0] = 'X' ; player1move1(call3) ; return 0 ;}
        if ( numbers[2][2] == 'O' && numbers [2][1] =='O'&& numbers[2][0] != 'X') {numbers[2][0] = 'X' ; player1move1(call3) ;return 0 ;}

        if ( numbers[1][1] == 'O' && numbers [2][2] =='O' && numbers[0][0] != 'X') {numbers[0][0] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[0][2] == 'O' && numbers [0][1] =='O' && numbers[0][0] != 'X') {numbers[0][0] = 'X' ; player1move1(call3) ; return 0 ;}
        if ( numbers[2][0] == 'O' && numbers [1][0] =='O' && numbers[0][0] != 'X') {numbers[0][0] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'O' && numbers [2][0] =='O'&& numbers[1][0] != 'X') {numbers[1][0] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[1][2] == 'O' && numbers [1][1] =='O' && numbers[1][0] != 'X') {numbers[1][0] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][0] == 'O' && numbers [0][2] =='O'&& numbers[0][1] != 'X') {numbers[0][1] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[2][1] == 'O' && numbers [1][1] =='O' && numbers[0][1] != 'X') {numbers[0][1] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[2][0] == 'O' && numbers [2][2] =='O' && numbers[2][1] != 'X') {numbers[2][1] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[0][1] == 'O' && numbers [1][1] =='O' && numbers[2][1] != 'X') {numbers[2][1] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][2] == 'O' && numbers [2][2] =='O'&& numbers[1][2] != 'X') {numbers[1][2] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[1][0] == 'O' && numbers [1][1] =='O' && numbers[1][2] != 'X') {numbers[1][2] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[0][1] == 'O' && numbers [1][0] =='O'&& numbers[1][1] != 'X') {numbers[1][1] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[0][1] == 'O' && numbers [1][2] =='O' && numbers[1][1] != 'X') {numbers[1][1] = 'X' ; player1move1(call3) ; return 0 ;}

        if ( numbers[1][0] == 'O' && numbers [2][1] =='O'&& numbers[1][1] != 'X') {numbers[1][1] = 'X' ; player1move1(call3) ;return 0 ;}
        if (numbers[2][1] == 'O' && numbers [1][2] =='O' && numbers[1][1] != 'X') {numbers[1][1] = 'X' ; player1move1(call3) ; return 0 ;}


                                            //IF Player 1 starts from middle


         if ( numbers[2][0] == 'O' && numbers [1][1] !='X' && numbers [1][1] =='O') {numbers[1][2] = 'X' ;  player1move1(call3) ; return 0 ;}
         if ( numbers[1][1] == 'O' && numbers [0][2] !='X' && numbers [0][2] !='O') {numbers[0][2] = 'X' ;  player1move1(call3) ; return 0 ;}



                                            //IF Player 1 don't start from diagonals

        if ( numbers[0][0] == 'O' && numbers [1][1] !='X' && numbers [1][1] !='O') {numbers[1][1] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[0][2] == 'O' && numbers [1][1] !='X' && numbers [1][1] !='O') {numbers[1][1] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[2][0] == 'O' && numbers [1][1] !='X' && numbers [1][1] !='O') {numbers[1][1] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[2][2] == 'O' && numbers [1][1] !='X' && numbers [1][1] !='O') {numbers[1][1] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[0][1] == 'O' && numbers [1][1] !='X' && numbers [1][1] !='O') {numbers[1][1] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[1][0] == 'O' && numbers [1][1] !='X' && numbers [1][1] !='O') {numbers[1][1] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[2][1] == 'O' && numbers [1][1] !='X' && numbers [1][1] !='O') {numbers[1][1] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[1][2] == 'O' && numbers [1][1] !='X' && numbers [1][1] !='O') {numbers[1][1] = 'X' ;  player1move1(call3) ; return 0 ;}

                                            //IF X is a sandwich between O

        if ( numbers[0][0] == 'O' && numbers [1][1] =='X' && numbers [2][2] =='O') {numbers[0][2] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[0][2] == 'O' && numbers [1][1] =='X' && numbers [2][0] =='O') {numbers[0][0] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[1][0] == 'O' && numbers [1][1] =='X'  && numbers [1][2] =='O') {numbers[0][2] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[0][1] == 'O' && numbers [1][1] =='X' && numbers [2][1] =='O') {numbers[0][2] = 'X' ;  player1move1(call3) ; return 0 ;}


                                            //IF Player 1 tries to defend


        if ( numbers[1][0] == 'X' && numbers [1][1] =='X' && numbers [1][2] =='O' && numbers[2][2] != 'X') {numbers[2][2] = 'X' ;  player1move1(call3) ;return 0 ;}
        if ( numbers[1][0] == 'X' && numbers [1][1] =='X' && numbers [1][2] =='O' && numbers[2][2] == 'X') {numbers[0][2] = 'X' ;  player1move1(call3) ;return 0 ;}
        if ( numbers[1][2] == 'X' && numbers [1][1] =='X' && numbers [1][0] =='O' && numbers[2][0] != 'X') {numbers[2][0] = 'X' ;  player1move1(call3) ;return 0 ; }
        if ( numbers[1][2] == 'X' && numbers [1][1] =='X' && numbers [1][0] =='O' && numbers[2][0] == 'X') {numbers[0][0] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[2][1] == 'X' && numbers [1][1] =='X' && numbers [0][1] =='O' && numbers[0][2] != 'X') {numbers[0][2] = 'X' ;  player1move1(call3) ;return 0 ;}
        if ( numbers[2][1] == 'X' && numbers [1][1] =='X' && numbers [0][1] =='O' && numbers[0][2] == 'X') {numbers[0][0] = 'X' ;  player1move1(call3) ;return 0 ;}


                                            //Randomly entered by user

        if ( numbers[0][0] == 'O' && numbers [1][1] =='X' && numbers [1][2] =='O') {numbers[0][2] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[0][2] == 'O' && numbers [1][1] =='X' && numbers [1][0] =='O') {numbers[0][0] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[2][0] == 'O' && numbers [1][1] =='X' && numbers [1][2] =='O') {numbers[0][2] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[2][2] == 'O' && numbers [1][1] =='X' && numbers [1][0] =='O') {numbers[0][0] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[0][1] == 'O' && numbers [1][0] =='O' && numbers [2][2] !='O') {numbers[0][2] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[0][0] == 'O' && numbers [1][0] =='O' && numbers [2][0] !='X') {numbers[2][0] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[0][1] == 'O' && numbers [1][2] =='O' && numbers [0][0] !='X') {numbers[0][0] = 'X' ;  player1move1(call3) ; return 0 ;}
        if ( numbers[2][1] == 'O' && numbers [1][0] =='O' && numbers [2][2] !='X') {numbers[2][2] = 'X' ;  player1move1(call3) ;return 0 ;}
        if ( numbers[2][1] == 'O' && numbers [1][2] =='O' && numbers [2][0] !='X') {numbers[2][0] = 'X' ;  player1move1(call3) ;return 0 ;}






return 0 ;



    }



        int player1move1(int mov)
{
         int box ;
        int call3 ;
        cout << endl ;
        system("cls") ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[0][0]<<"  |  "<<numbers[0][1]<<"  |  "<<numbers [0][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[1][0]<<"  |  "<<numbers[1][1]<<"  |  "<<numbers [1][2]<<"  \n" ;
        cout << "\t\t\t\t_____|_____|_____\n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << "\t\t\t\t  "<<numbers[2][0]<<"  |  "<<numbers[2][1]<<"  |  "<<numbers [2][2]<<"  \n" ;
        cout << "\t\t\t\t     |     |     \n" ;
        cout << endl ;

        counter ++ ;






        if (numbers [0][0] == 'X' && numbers [0][1] == 'X' && numbers [0][2] == 'X' ||
        numbers [1][0] == 'X' && numbers [1][1] == 'X' && numbers [1][2] == 'X' ||
        numbers [2][0] == 'X' && numbers [2][1] == 'X' && numbers [2][2] == 'X' ||
        numbers [0][0] == 'X' && numbers [1][0] == 'X' && numbers [2][0] == 'X' ||
        numbers [0][1] == 'X' && numbers [1][1] == 'X' && numbers [2][1] == 'X' ||
        numbers [0][2] == 'X' && numbers [1][2] == 'X' && numbers [2][2] == 'X' ||
        numbers [0][0] == 'X' && numbers [1][1] == 'X' && numbers [2][2] == 'X' ||
        numbers [0][2] == 'X' && numbers [1][1] == 'X' && numbers [2][0] == 'X')
            {
            cout << "!!! Computer Wins !!!" <<endl << "Ending" ;
            for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
              return 0 ;
            }
 if (counter == 9) {cout << "!!! Game is Draw!!!" <<endl << "Ending" ; for(int i=3;i>=1;i--) {  cout<<"." ; Sleep(2000); }
            return 1; }
        cout << "Player1 enter the box: " ;
        cin >> box ;
         if (box==1 && numbers[0][0] != 'X') {numbers[0][0] = 'O' ; Aiturn(call3) ; }
        if (box==2 && numbers[0][1] != 'X') {numbers[0][1] = 'O' ; Aiturn(call3) ; }
        if (box==3 && numbers[0][2] != 'X') {numbers[0][2] = 'O' ; Aiturn(call3) ; }
        if (box==4 && numbers[1][0] != 'X') {numbers[1][0] = 'O' ; Aiturn(call3) ; }
        if (box==5 && numbers[1][1] != 'X') {numbers[1][1] = 'O' ; Aiturn(call3) ; }
        if (box==6 && numbers[1][2] != 'X') {numbers[1][2] = 'O' ; Aiturn(call3) ; }
        if (box==7 && numbers[2][0] != 'X') {numbers[2][0] = 'O' ; Aiturn(call3) ; }
        if (box==8 && numbers[2][1] != 'X') {numbers[2][1] = 'O' ; Aiturn(call3) ; }
        if (box==9 && numbers[2][2] != 'X') {numbers[2][2] = 'O' ; Aiturn(call3) ; }
        return 1 ;
}
int main ()
{
        int a ;
        system ("color f0") ;
        main_screen (a) ;
        options (a) ;
        return 0;

}
