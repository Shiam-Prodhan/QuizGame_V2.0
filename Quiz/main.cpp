#include <iostream>

using namespace std;
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
void intro();
void face();
void game();
void rules();
void score(int x);
void junior();
void senior();
void profession();
int Count(int count);


int main(){
    intro();
    face();
}
void intro(){
    system("cls");
    system("color 1f");
   cout<<"\n\n\t\t\t****University of Liberal Arts Bangladesh****\n\n"<<endl;
    Sleep(2500);
    system("cls");
    system("color 1c");
    printf("\n\n\t\t\t\t\t****A quiz game****\n\n");
    Sleep(2500);
    system("cls");
    system("color 9f");
   cout<<"\n\n\t\t\t\t\t****BY****\n\n";
    cout<<"\t\t\t****Md.Afraim Bin Zahangir** ID:181014080****\n\n";
   cout<<"\t\t\t****Md.Shiam Prodhan      ** ID:181014123****\n\n";
   cout<<"\t\t\t****Nazmuj Shakib Diip    ** ID:181014053****\n\n";
    Sleep(4000);
}
void face(){
    char c;
    home:{
        system("cls");
        system("color f0");
    cout<<"\n";
    cout<<"\t\t\t\t *********************************\n";
    cout<<"\t\t\t\t *             Group             *\n";
    cout<<"\t\t\t\t *     \"The Three Musketeers\"    *\n";
    cout<<"\t\t\t\t *            presents           *\n";
    cout<<"\t\t\t\t *                               *\n";
    cout<<"\t\t\t\t *       \"BRAIN STORMING\"        *\n";
    cout<<"\t\t\t\t *********************************\n";
    cout<<"\t\tPress P to play.\n\t\tPress H for help\n\t\tPress Q to quit";
    }
    Choice:{
        cout<<"\n\n\t\tPlease choose one and press enter: ";
   cin>> c;
    switch(c){
        case 'P':game();
        system("cls");
        break;
        case 'p':system("cls");
        game();
        break;
        case 'h': rules();
        system("cls");
        goto home;
        break;
        case 'H': rules();
        system("cls");
        goto home;
        break;
        case 'Q': exit(0);
        break;
        case 'q': exit(0);
        break;
        default:
            cout<<"!!!sorry wrong choice!!!!";
            Sleep(500);
            system ("cls");
            goto home;
            break;
        }
    }


}
void game(){
    start:{
        int c;



        system("cls");
   cout<<"\n\t\t\t\t Please choose your challenge level and press enter.\n";
    cout<<"\n\t\t\t1.Junior.\n\t\t\t2.Senior.\n\t\t\t3.Professional .\n\n\t\t\t0.Back to main page.\n";
    cout<<"\t\t\tEnter Yours choice here: ";
   cin>>c;
    if(c==1){
            system("color 74");
            cout<<"\n\t\t\t\t LEVEL: \"Junior\"\n";
            system("cls");
            cout<<"\n\n\n\n\t\t\t\t *****WELCOME TO THE*****\n\n\t\t\t *****\"Junior\" Challenge round/*****";
            cout<<"\n\n\n\n\t\t\t\tLoading...";
            Sleep(1000);
            junior();

    }
    else if (c==2){
            system("color 74");
           cout<<"\n\t\t\t\t LEVEL: \"Senior\"\n";
            system("cls");
            cout<<"\n\n\n\n\t\t\t\t *****WELCOME TO THE*****\n\n\t\t\t *****\"Senior\" Challenge round/*****";
           cout<<"\n\n\n\n\t\t\t\tLoading...";
            Sleep(1000);
            senior();
    }
else if (c==3){
            system("color 74");
            cout<<"\n\t\t\t\t LEVEL: \"PROFESSIONAL\"\n";
            system("cls");
           cout<<"\n\n\n\n\t\t\t\t *****WELCOME TO THE*****\n\n\t\t\t  *****\"Professional\" Challenge round/*****";
            cout<<"\n\n\n\n\t\t\t\tLoading...";
            Sleep(1000);
            profession();
            }
    else if (c==0){
            system("cls");
        face();
    }
    else {
        goto start;
    }
  }
}
void rules(){
    system("cls");
    system("color 0c");
    printf("\t\t\t\"RULES\"\n\n\n");
    printf("\t\t>>Press the answer on your keyboard and press enter.\n");
    printf("\t\t>>For each correct answer you will get 10 points.\n");
    printf("\t\t>>For each wrong answer you will loose one life. You get total ");
    printf("\n\t\t\"3\" lives \n");
    printf("\t\t>>Enjoy\n\n\n\n\n\n\n\n");
    printf("copyright \"The Three Musketeers\" group.");
    getch();

}

void junior()
{
    system("cls");
    char c;


    int count=0,i, lives=3,r;
    for (i=1;i<=10;i++)
    {
    system("cls");
    r=i;
    system("color 8e");
    switch(r)
        {
 case 1:
                system("cls");
               cout<<"\t\t\t\t  Q-1: What is the old name of Dhaka city?\n\n";
               cout<<"\t\t\t\t       A.Dhaka\t\tB.Buriganga\n\n\t\t\t\t       C.Jahangirnagar\tD.Noakhali\n\n";
                cout<<"\t\t\t\t Answer:";

                cin>>c;


                if(c=='C'|| c=='c'){
                cout<<"\n\n\t\t\t\t$Correct Answer$";
                count++;
                break;
                }
            else{
                cout<<"\n\n\t\t\t\t\tWrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is C.Jahangirnagar";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                   cout<<"\t\t\t\t\t\tSorry! your life is"<<lives<<"\n\n Your score ="<<  count*10<<"\n\n\n";
                   cout<<"\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;
            }
             case 2:
                system("cls");
               cout<<"\t\t\t\tQ-2:The boy along with his friends _____ present the last day.\n\t\t\t\t Fill the blank with appropriate verb.";
                cout<<"\n\n\t\t\t\t     A.is    \tB.was\n\n\t\t\t\t     C.were  \tD.will\n\n";
               cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c=='B'|| c=='b'){
                cout<<"\n\n\t\t\t\t$Correct Answer$";
                count++;
                Sleep(1500);
                break;
                }
            else{
                cout<<"\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is B.was";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                   cout<<"\t\t\t\t\t\tSorry! your life is "<< lives<<"\n\n Your score is"<< count*10 <<"\n\n\n";
                    cout<<"\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;
            }
             case 3:
                system("cls");
               cout<<"\t\t\t\t Q-3:The language movement happened in_____";
               cout<<"\n\n\t\t\t\t      A.1947  \tB.1971\n\n\t\t\t\t      C.1952  \tD.1969\n\n";
                cout<<"\t\t\t\t\tAnswer: ";
                cin>>c;
                if(c=='C' || c=='c'){
                cout<<"\n\n\t\t\t\t$Correct Answer$";
                count++;
                Sleep(1500);
                break;
                }
            else{
                cout<<"\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is C.1952 ";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                   cout<<"\t\t\t\t\t\tSorry! your life is "<< lives<<"\n\n Your score is"<< count*10 <<"\n\n\n";
                  cout<<"\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;
            }
             case 4:
                system("cls");
               cout<<"\t\t\t\t Q-4:What is the full form of USA?";
               cout<<"\n\n\t\t      A.United state of America  \tB.United states of America      ";
                cout<<"\n\n\t\t      C.Unite state of America   \tD.United states of Afghanistan\n\n";
               cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c=='B' ||c=='b'){
                printf("\n\n\t\t\t\t$Correct Answer$");
                count++;
                Sleep(1500);
                break;
                }
            else{
                cout<<"\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is 2.United states of America";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                   cout<<"\t\t\t\t\t\tSorry! your life is "<< lives<<"\n\n Your score is"<< count*10 <<"\n\n\n";
                    cout<< "\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;

            }
             case 5:
                system("cls");
               cout<<"\t\t\t\t True or false? Q-5:Hippos are vegetarian.";
                cout<<"\n\n\t\t\t\tA.False!!\n\n\t\t\t\tB.Only when there is no food!\n\n\t\t\t\tC.They are omnivore!\n\n\t\t\t\tD.True!!\n\n";
                cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c=='C' ||c=='c'){
               cout<<"\n\n\t\t\t\t$Correct Answer$";

                count++;
                Sleep(1500);
                break;
                }
            else{
               cout<<"\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is C.They are omnivore!";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                   cout<<"\t\t\t\t\t\tSorry! your life is "<< lives<<"\n\n Your score is"<< count*10 <<"\n\n\n";
                    cout<<"\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;
            }
            case 6:
               cout<<"\t\t\t\t Q-6:In which country the number zero (0) was first used?";
               cout<<"\n\n\t\t\t\t\t      A.Bangladesh  \tB.America\n\n\t\t\t\t\t      C.India       \tD.Russia\n\n";
                cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c=='C' ||c=='c'){
                cout<<"\n\n\t\t\t\t$Correct Answer$";

                count++;
                Sleep(1500);
                break;
            }
            else
            {
              cout<<"\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is C.India";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                   cout<<"\t\t\t\t\t\tSorry! your life is"<<lives<<"\n\n Your score ="<<  count*10<<"\n\n\n";
                    cout<<"\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;
            }
            case 7:
               cout<<"\t\t\t\t Q-7:Which planet did Superman come from?";
                cout<<"\n\n\t\t\t\t\t      A.Wakanda  \tB.Earth      \n\n\t\t\t\t\t      C.Asgard   \tD.Krypton\n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c=='D' ||c=='d'){
                cout<<"\n\n\t\t\t\t$Correct Answer$";

                count++;
                Sleep(1500);
                break;
            }
            else
            {
                cout<<"\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is D.Krypton";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                    cout<<"\t\t\t\t\t\tSorry! your life is"<<lives<<"\n\n Your score ="<<  count*10<<"\n\n\n";
                    cout<<"\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;
            }

            case 8:

               cout<<"\t\t\t\t Q-8:What creatures have wings but can not fly?";
               cout<<"\n\n\t\t\t\t\t      A.Ducks      \tB.Hens\n\n\t\t\t\t\t      C.Penguins   \tD.Bats\n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c=='C' ||c=='c'){
               cout<<"\n\n\t\t\t\t$Correct Answer$";

                count++;
                Sleep(1500);
                break;
            }
            else
            {
                cout<<"\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is C.Penguins";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                    cout<<"\t\t\t\t\t\tSorry! your life is"<<lives<<"\n\n Your score ="<<  count*10<<"\n\n\n";
                    cout<<"\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;
            }
             case 9:
               cout<<"\t\t\t\t Q-9:A \"Pentagon\" has__________ edges?";
                cout<<"\n\n\t\t\t\t\t      A.Five  \tB.Two      \n\n\t\t\t\t\t      C.Four   \tD.three\n\n";
               cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c=='A' ||c=='a'){
               cout<<"\n\n\t\t\t\t$Correct Answer$";

                count++;
                Sleep(1500);
                break;
            }
            else
            {
                cout<<"\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is A.Five";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                    cout<<"\t\t\t\t\t\tSorry! your life is"<<lives<<"\n\n Your score ="<<  count*10<<"\n\n\n";
                    cout<<"\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;
            }

            case 10:
                cout<<"\t\t\t\t Q-10:What is the opposite of vertical?";
               cout<<"\n\n\t\t\t\t\t      A.Sideways  \tB.Horizontal\n\n\t\t\t\t\t      C.Deep      \tD.Shallow\n\n";
               cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c=='B' ||c=='b'){
                cout<<"\n\n\t\t\t\t$Correct Answer$";

                count++;
                Sleep(1500);
                break;
            }
            else

            {
               cout<<"\n\n\t\t\t\t\t      Wrong Answer!!\n\n\n\t\t\t\t\t      The correct answer is B.Horizontal";
                Beep(500,1000);
                lives--;
                if (lives==0){
                        system("cls");

                    cout<<"\t\t\t\t\t\tSorry! your life is"<<lives<<"\n\n Your score ="<<  count*10<<"\n\n\n";
                    cout<<"\t\t\t\t Please Try Again!";
                    Sleep(1500);
                    face();
                }
                else continue;
                getch();
                break;
            }
        }


        }
        Sleep(600);
            score(count);
            Sleep(800);
            face();
}
void senior(){ system ("cls");
  char c;
  int count=0,i,lives=3,r;
  for(i=1;i<=10;i++){
        system("color 2D");
            system("cls");
            r=i;

            switch(r){
                case 1:
                system("cls");
                cout<<"\t\t\t\t Q-1 If you count from 1 to 100 how many 7's will you pass? \n\n";
               cout<<" \t\t\t\t A)9 \t\t B)1 \n\n\t\t\t\t C)19 \t\t D)10 \n\n";
               cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c== 'C'|| c=='c'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                       cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is:19 ";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 2:
                system("cls");
               cout<<"\t\t\t\t Q-2 Which answer best expresses the meaning of the word \n\t\t\t\t\t \"Compassionate\"? \n\n";
                cout<<" \t\t\t\t A)comforting \t\t B)accommodation \n\n\t\t\t\t C)Legislative \t\t D) easy\n\n";
               cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'A'|| c=='a'){
               cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                       cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is A.comforting";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
               cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
  case 3:
                system("cls");
               cout<<"\t\t\t\t Q-3 Which number logically follows the series 4,6,9,14,6......? \n\n";
               cout<<" \t\t\t\t A)21 \t\t B)19 \n\n\t\t\t\t C)0 \t\t D)17 \n\n";
               cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'B'|| c=='b'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                       cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is B.19";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 4:
                system("cls");
                cout<<"\t\t\t\t Q-4 Which answer expresses the opposite of the word \"Menacing\"  \n\n";
               cout<<" \t\t\t\t A)unscathed \t\t B)insecure \n\n\t\t\t\t C)savage\t\t D)dangerous \n\n";
               cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'A'|| c=='a'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                       cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is A.unscathed";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 5:
                system("cls");
                cout<<"\t\t\t\t Q-5 If written backward the number \n\t\t\t\t one thousand,two hundred and ninety four \" \n\t\t\t\tthen what would be the answer \n\n";
               cout<<" \t\t\tA)four thousand ,nine hundred and twenty one  \n\t\t\tB)two thousand,one hundred and ninety four \n\t\t\tC)two thousand,nine hundred and twenty four  \n\t\t\tD)one thousand,nine hundred and forty two \n\n";
                cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c== 'A'|| c=='a'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: four thousand,nine hundred and twenty one";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
               cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
                 case 6:
                system("cls");
               cout<<"\t\t\t\t Q-6 Which one of the following is an element from the periodic table? \n\n";
               cout<<" \t\t\t\t A)Nd \t\t B)Ag \n\n\t\t\t\t C)CO \t\t D)OH \n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'B'|| c=='b'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                       cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Ag";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 7:
                system("cls");
                cout<<"\t\t\t\t Q-7 What is the another name of scrimitar? \n\n";
                cout<<" \t\t\t\t A)Spear \t\t B)shield \n\n\t\t\t\t C)Sword \t\t D)Javelin \n\n";
                cout<<"\t\t\t\t Answer:";
              cin>>c;
                if(c== 'C'|| c=='c'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Sword";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
               cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 8:
                system("cls");
               cout<<"\t\t\t\t Q-8 Where is the origin of katana? \n\n";
                cout<<" \t\t\t\t A)Russia \t\t B)Thailand \n\n\t\t\t\t C)China \t\t D)Japan \n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'D'|| c=='d'){
               cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Japan";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 9:
                system("cls");
               cout<<"\t\t Q-9 Which of the following is known to have invented the number zero (0)?  \n\n";
                cout<<" \t\t\t\t A)Amar Nath \t\t B)Chanakya \n\n\t\t\t\t C)Brahmagupta \t\t D)Aryabhatta \n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'C'|| c=='c'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Brahmagupta";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
                 case 10:
                system("cls");
                cout<<"\t\t\t\t Q-10 If Hritik Roshan has six fingers which bollywood star has four fingers?  \n\n";
                cout<<" \t\t\t\t A)No one \t\t B)All of them \n\n\t\t\t\t C)Chunky Pandey \t\t D)Hritesh Deshmukh \n\n";
                cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c== 'B'|| c=='b'){
               cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is:All of them";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
}
            }
  }
}
void profession()
{ system ("cls");
  char c;
  int count=0,i,lives=3,r;
  for(i=1;i<=10;i++){
            system("cls");
            r=i;
            system("colour 8e");
            switch(r){
               case 1:system("cls");
                cout<<"\t\t\t\t Q-1 What is the National sport of England?  \n\n";
               cout<<" \t\t\t\t A)Football \t\t B)Cricket \n\n\t\t\t\t C)Hockey \t\t D)Chess \n\n";
                cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c== 'B'|| c=='b'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                       cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is B)Cricket";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
               cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 2:
                system("cls");
                cout<<"\t\t\t\t Q-2 Which is the world's Largest Mammal? \n\n";
               cout<<" \t\t\t\t A)Blue Whale \t\t B)Elephant \n\n\t\t\t\t C)Great White Shark \t\t D) Giraffe\n\n";
                cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c== 'A'|| c=='a'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                       cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is :Blue Whale";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
                 case 3:
                system("cls");
                cout<<"\t\t\t\t Q-3 What the capital of Australia? \n\n";
                cout<<" \t\t\t\t A)Sydney \t\t B)Austria \n\n\t\t\t\t C)Canberra \t\t D)Melbourne \n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'C'|| c=='c'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Canberra";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 4:
                system("cls");
                cout<<"\t\t\t\t Q-4 Who was the first independent ruler of Bengal? \n\n";
                cout<<" \t\t\t\t A)Ashoka \t\t B)Chandra Sengupta \n\n\t\t\t\t C)Gopala \t\t D)Shashanka \n\n";
               cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'D'|| c=='d'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Shashanka";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 5:
                system("cls");
                cout<<"\t\t\t\t Q-5 Which galaxy is the closest one to our galaxy \n\n";
                cout<<" \t\t\t\t A)Andromeda \t\t B)Triangulam \n\n\t\t\t\t C)Milkyway \t\t D)Centurius A \n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'A'|| c=='a'){
               cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Andromeda";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
                 case 6:
                system("cls");
               cout<<"\t\t\t\t Q-6 What is the proportion of red blood cell in our body \n\n";
               cout<<" \t\t\t\t A)30% \t\t B)45% \n\n\t\t\t\t C)60% \t\t D)50% \n\n";
               cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'B'|| c=='b'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                       cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: 45%";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
               cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 7:
                system("cls");
               cout<<"\t\t\t\t Q-7 What is the largest species of reptile \n\n";
                cout<<" \t\t\t\t A)Komodo Dragon \t\t B)Alegator \n\n\t\t\t\t C)Monitor Lizard\t\t D)Salt water crocodile \n\n";
               cout<<"\t\t\t\t Answer:";
               cin>>c;
                if(c== 'D'|| c=='d'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Salt Water crocodile";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 8:
                system("cls");
                cout<<"\t\t\t\t Q-8 Who was the second person to walk on the Moon? \n\n";
                cout<<" \t\t\t\t A)Michael Tanner the 3rd \t\t B)Edwin Eugene Aldrin, Jr. \n\n\t\t\t\t C)Neil Armstong \t\t D)John Dalton \n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'B'|| c=='b'){
               cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Edwin Eugene Aldrin, Jr.";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 9:
                system("cls");
                cout<<"\t\t\t\t Q-9 What is the currency of China?  \n\n";
                cout<<" \t\t\t\t A)Derham \t\t B)Yen \n\n\t\t\t\t C)Renminbi \t\t D)Dinar \n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'C'|| c=='c'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                        cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is: Renminbi";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
               cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
                }
            case 10:
                system("cls");
                cout<<"\t\t\t\t Q-10 What is the name of the first person born in Antarctica? \n\n";
                cout<<" \t\t\t\t A)Peter Mackinson \t\t B)John Smith \n\n\t\t\t\t C)Emilio Marcos Palma \t\t D)Edzio Auditore \n\n";
                cout<<"\t\t\t\t Answer:";
                cin>>c;
                if(c== 'C'|| c=='c'){
                cout<<"\n\n\t\t\t\t\t\t$ Correct answer $";
                count++;
                Sleep(1500);
                break;
                }
                else{
                       cout<<"\n\n\t\t\t\t  Wrong answer \n\n\n\t\t\t\t The correct answer is:Emilio Marcos Palma ";
                Beep(500,1000);
                lives--;
                if(lives==0){
                        system ("cls");
                cout<<"\t\t\t\t\tSorry your life is "<<lives<<"\n\n Your score ="<<count*10<<"\n\n\n";
                Sleep(1500);
                face();
                }
                else continue;
                getch ();
                break;
}
            }
  }
}


void score(int x){
    int o=x*10;
    system("cls");
    if (o>80 && o<=100){
            cout<<"\n\n\t\t!*!*!*!*!*!Winner Winner Winner Winner!*!*!*!*!*!";
            cout<<"\n\n\t\t!*!*!*!*!*!*!*!Your score is : "<<o<<"!*!*!*!*!*!*!*!*!";
    }
    else if (o>60 && o<=80){
           cout<<"\n\n\t\t!*!*!*!*!*!You know, This is Great!*!*!*!*!*!";
           cout<<"\n\n\t\t!*!*!*!*!*!*!*!Your score is : "<<o<<"!*!*!*!*!*!*!*!*!";
    }
    else if (o>40 && o<=60){
            cout<<"\n\n\t!*!*!*!*A little more effort and you can do even better!*!*!*!";
            cout<<"\n\n\t\t!*!*!*!*!*!*!*!Your score is : "<<o<<"!*!*!*!*!*!*!*!*!";
    }
    else if (o>20 && o<=40){
            cout<<"\n\n\t!*!*!*!*!*!I believe in you, Next time you will do better!*!*!*!*!*!";
            cout<<"\n\n\t\t!*!*!*!*!*!*!*!Your score is : "<<o<<"!*!*!*!*!*!*!*!*!";
    }
    else if (o>=00 && o<=20){
            cout<<"\n\n\t!*!*!*!*!*!Oh! Don't be sad, Next time you will do better!*!*!*!*!*!";
            cout<<"\n\n\t\t!*!*!*!*!*!*!*!Your score is : "<<o<<"!*!*!*!*!*!*!*!*!";
    }
    getch();
}
int Count(int count){
                cout<<"\n\n\t\t\t\t$Correct Answer$";
                count++;
                Sleep(1500);
                return count;}
