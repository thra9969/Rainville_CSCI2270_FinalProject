#include <iostream>
#include "Final.h"
#include <fstream>
#include <string>
#include <stdlib.h>
#include <json/json.h>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    Final B;
    bool quit = false;
    int x;
    while(quit != true){
        string inputString1;
        string inputString2;
        string inputString3;
        cout << "======The Adventurers Quest (and etc.)======" << endl;
        cout << "1. Create Your Adventure!" << endl;
        cout << "2. Forgot To Include A Quest You Went On? Insert The Quest You Forgot To Mention!" << endl;
        cout << "3. Added False Information? Expunge it from the records!" << endl;
        cout << "4. Forgot All Of The Adventures You Went On? Have The Scribes Recite Them!" << endl;
        cout << "5. Don't Want To Write About Yourself? And You Need To Do Math Homework?!" << endl;
        cout << "6. Don't Like Anything You See? Why Not Press 6?" << endl;
        cin >> x;
        cin.clear();
        cin.ignore(10000,'\n');
        if (x == 1){
            cout << "Wow An Adventurer!" << endl;
            cout << "Why Don't You Record Your Past Quests!" << endl;
            cout << "Please Enter Your Exciting Tales (Such As Killed a Dragon or Found Treasure)" << endl;
            cout << "Oh Ya, Our Scribes Can Only Handle So Please Enter A Maximum Of Three Of Your Quests" << endl;
            cout << "Quest #1: " << endl;
            getline(cin,inputString1);
            cout << "Quest #2: " << endl;
            getline(cin,inputString2);
            cout << "Quest #3: " << endl;
            getline(cin,inputString3);
            B.adventure(inputString1);
            B.advafter(inputString1, inputString2);
            B.advafter(inputString2, inputString3);
        }
        if (x == 2){
            cout << "Oh Hello There! I See You Forgot To Include One Of Your Important Endeavors!" << endl;
            cout << "Why Not Try Adding It After One Of Your Previous Adventures Now?" << endl;
            cout << "Previous Adventure: " << endl;
            getline(cin,inputString1);
            cout << "Adventure You Forgot To Add: " << endl;
            getline(cin,inputString2);
            B.insertfalseinfo(inputString1, inputString2);
        }
        if (x == 3){
            cout << "I Cannot Believe That An Adventurer Would Lie About His Quests" << endl;
            cout << "Okay, Please Enter The Record You Would Like To Erase, And Remember"<< endl;
            cout << "I Am Disappointed In You: " << endl;
            getline(cin, inputString1);
            B.eraserecords(inputString1);
        }
        if (x == 4){
            cout << "It Is Okay Adventurer, For Someone Of Your Prestige, It Is Okay To Forget Every Once In A While. " << endl;
            B.printquest();
        }
        if (x == 5){
            bool quit2 = false;
            float number1;
            float number2;
            int input;
            while (quit2 != true){
                cout << "====== Math Menu ======" << endl;
                cout << "1. Ahhhh, Hello Adventurer, If You Choose This Option One Of Our Knights Who Excels In Addition Will Help You." << endl;
                cout << "2. Need Help With Your Subtraction? How About Our Wise Wizard? He Sits In His Tower All Day Doing It!" << endl;
                cout << "3. It Seems You May Be Smarter Than Most Of The Adventurers We Usually Get, Our Castle Chef Will Help You With Your Multiplication!" << endl;
                cout << "4. Division?! Oh My, Adventurer! You Are The Creme Of The Crop! Both Smart And Adventurous?! Our Tabby Cat Will Help With Division!" << endl;
                cout << "5. Do You Not Even Understand What Math Is And Just Wanted To See What Other Options You Had? Then Go Ahead And Press 5 To Return." << endl;
                cin >> input;
                cin.clear();
                cin.ignore(10000,'\n');
                if (input == 1){
                    cout << "Hello! I Am Sir Abraham Slashler! Please Tell Me The Two Numbers You Would Like To Add!" << endl;
                    cout << "Number 1: " << endl;
                    cin >> number1;
                    cout << "Number 2: " << endl;
                    cin >> number2;
                    B.addition(number1,number2);
                }
                if (input == 2){
                    cout << "Hey Kid, Want To Buy Some Magic?" << endl;
                    cout << "No? Okay, Then I Guess I Can Help You With Subtraction." << endl;
                    cout << "Number You Want To Subtract From: " << endl;
                    cin >> number1;
                    cout << "Subtracting Amount: " << endl;
                    cin >> number2;
                    B.subtraction(number1,number2);
                }
                if (input == 3){
                    cout << "I Am Only Good At Multiplication And Food" << endl;
                    cout << "Number 1: " << endl;
                    cin >> number1;
                    cout << "Number 2: " << endl;
                    cin >> number2;
                    B.multiplication(number1,number2);
                }
                if (input == 4){
                    cout << "Meow" << endl;
                    cout << "Number You Want To be Divided: " << endl;
                    cin >> number1;
                    cout << "Divisor: " << endl;
                    cin >> number2;
                    B.division(number1,number2);
                }
                if (input == 5){
                    cout << "Don't Worry Adventurer, Math Is Not For Everyone!" << endl;
                    quit2 = true;
                }
            }
        }
        if (x == 6){
            cout << "I Sincerely Hope That You Had A Nice Time!" << endl;
            quit = true;
            return 0;
        }
    }
}
