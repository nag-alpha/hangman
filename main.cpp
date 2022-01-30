#include <iostream>
#include <string.h>

using namespace std;

string original;
char dashes[100];
char to_check[100];
int size;
int tries = 6;
char guess;


void draw(){
    switch(tries){
        case 6: cout<<"\t  -----"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                break;

        case 5: cout<<"\t  -----"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |     | "<<endl;
                cout<<"\t |    (O)"<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                break;

        case 4: cout<<"\t  -----"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |     | "<<endl;
                cout<<"\t |    (O)"<<endl;
                cout<<"\t |     | "<<endl;
                cout<<"\t |     | "<<endl;
                cout<<"\t |     | "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                break;

        case 3: cout<<"\t  -----"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |    (O)"<<endl;
                cout<<"\t |    /| "<<endl;
                cout<<"\t |   / | "<<endl;
                cout<<"\t |     | "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                break;

        case 2: cout<<"\t  -----"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |    (O)"<<endl;
                cout<<"\t |    /|\\" <<endl;
                cout<<"\t |   / | \\"<<endl;
                cout<<"\t |     | "<<endl;
                cout<<"\t |       "<<endl;
                cout<<"\t |       "<<endl;
                break;

        case 1: cout<<"\t  -----"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |    (O)"<<endl;
                cout<<"\t |    /|\\" <<endl;
                cout<<"\t |   / | \\"<<endl;
                cout<<"\t |     | "<<endl;
                cout<<"\t |    /  "<<endl;
                cout<<"\t |   /    "<<endl;
                break;

        case 0: cout<<"\t  -----"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |     |"<<endl;
                cout<<"\t |    (O)"<<endl;
                cout<<"\t |    /|\\" <<endl;
                cout<<"\t |   / | \\"<<endl;
                cout<<"\t |     | "<<endl;
                cout<<"\t |    / \\ "<<endl;
                cout<<"\t |   /   \\ "<<endl;
                break;
    }
}

void right_or_wrong(){
    bool present = false;
    for(int i=0; i<size; i++){
        if(original[i] == guess){
            dashes[i] = guess;
            present = true;
        }
    }
    if(present == false)
            tries--;
}

void draw_dashes(){
    for(int i=0; i<size; i++){
        cout<<dashes[i]<<" ";
    }
}


void game_start(){
    while(tries>0){
        cout<<"Start guessing"<<endl;
        cout<<endl;
        draw();
        cout<<endl;
        if(strcmp(dashes, to_check)==0){
            cout<<"You guessed it right :)"<<endl;
            cout<<"The correct answer is : "<<original<<endl;
            exit(0);
        }
        else{
            cout<<endl;
            cout<<"You have "<<tries<<" tries"<<endl;
            cout<<endl;
            draw_dashes();
            cout<<endl;
            cout<<"\nGuess the letter (type it in lower case) : ";
            cin>>guess;
            system("cls");
            right_or_wrong();
            cout<<endl;
        }
    }
    if(tries==0){
        draw();
        cout<<endl;
        cout<<"You have "<<tries<<" tries"<<endl;
        cout<<"Sorry. You lost the game"<<endl;
        cout<<"The correct answer was : "<<original<<endl;

    }
}

int main()
{
    cout <<"Welcome to Hangman !!!" << endl;

    cout<<"Give the players a word to guess :)"<<endl;
    cout<<"Enter the word using lower case letters only : ";
    getline(cin, original);
    size = original.length();
    system("cls");

    for(int i=0; i<size; i++){
        if(original[i] == ' ')
            dashes[i] = ' ';
        else{
            dashes[i] = '_';
        }
    }

    for(int i=0; i<size; i++){
        to_check[i] = original[i];
    }
    game_start();
    return 0;
}










