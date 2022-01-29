#include <iostream>
#include <cstring>

using namespace std;

string original="TUMBBAD";
char dashes[100];
int size = original.length();
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
    cout<<endl;
    while(tries>0){
        cout<<endl;
        draw();
        cout<<endl;
        cout<<"You have "<<tries<<" tries"<<endl;
        cout<<endl;
        draw_dashes();
        cout<<endl;
        cout<<"\nGuess the letter (type it in upper case) : ";
        cin>>guess;
        right_or_wrong();
        cout<<endl;
    }
    if(tries==0){
        draw();
        cout<<"You have "<<tries<<" tries"<<endl;
        cout<<"Sorry. You lost the game"<<endl;
        cout<<"The correct answer was : "<<original<<endl;

    }
}

int main()
{
    for(int i=0; i<size; i++){
        if(original[i] == ' ')
            dashes[i] = ' ';
        else{
            dashes[i] = '_';
        }
    }

    cout <<"Welcome to Hangman !!!" << endl;
    cout<<"Start guessing :)";
    game_start();
    return 0;
}






//to check and return success if correct answer is guesses.










