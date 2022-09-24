#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int count1 = 0; // player one score counter
int count2 = 0; // player two score counter
int main(void)
{
    //-------------------------the shape-------------------------------//
    string thing = "\t  1 | 2 | 3\n\t____|___|____\n\t  4 | 5 | 6\n\t____|___|____\n\t  7 | 8 | 9\n\t    |   |\n";
    int a;              // start or quit var.
    int x, o[10] = {0}; //----- X & O option.
    int y_or_n;         // play again or not check.
    bool check1 = true; // while loop condition break.
    bool check2 = true; // while loop condition break.
    //-------------------------start menu-------------------------------//
    cout << "|W|E|L|C|O|M|E|  |T|O|  |M|Y|  |X|&|O|  |G|A|M|E|\n";
    cout << " 1-start \n 2-quit \n";
    cin >> a; // get the start or quit option
    if (a == 2)
    { /*---------------quit condition----------------*/
        cout << "<<<<<<<<<<<thank you for playing>>>>>>>>>>>>\n";
        return 0;
    }
    else if (a == 1) // let's start
    {
        //-------------------------player one turn-------------------------------//
        for (int i = 0; i < 5; i++)
        {
            check1 = true;
            check2 = true;
            while (check1)
            {
                cout << "------------------------------------------------------------------------------------------------\n";
                cout << thing << endl; //! print the shape
                cout << "\t\t\t<<<<<<<<<<<<<<player one turn>>>>>>>>>>>>>>>\n\n";
                cout << "enter O position from 1 to 9 enter.\t 0 to withdraw\n";
                cin >> x;
                if (o[x] == 0 || x > 9 || x < 1)
                {
                    o[x] = x;
                    switch (x)
                    {
                    case 1:
                        thing[3] = 'O';
                        cout << thing << endl;

                        check1 = false;
                        break;
                    case 2:
                        thing[7] = 'O';
                        cout << thing << endl;

                        check1 = false;
                        break;
                    case 3:
                        thing[11] = 'O';
                        cout << thing << endl;

                        check1 = false;
                        break;
                    case 4:
                        thing[31] = 'O';
                        cout << thing << endl;

                        check1 = false;
                        break;
                    case 5:
                        thing[35] = 'O';
                        cout << thing << endl;

                        check1 = false;
                        break;
                    case 6:
                        thing[39] = 'O';
                        cout << thing << endl;

                        check1 = false;
                        break;
                    case 7:
                        thing[59] = 'O';
                        cout << thing << endl;

                        check1 = false;
                        break;
                    case 8:
                        thing[63] = 'O';
                        cout << thing << endl;

                        check1 = false;
                        break;
                    case 9:
                        thing[67] = 'O';
                        cout << thing << endl;

                        check1 = false;
                        break;
                    // withdraw option
                    case 0: // withdraw
                        cout << "player one withdraw\nthank you for playing..\n";
                        check1 = false;
                        check2 = false;
                        i = 100; //! to get out of for loop
                        break;
                    default: // out of range---------//
                        cout << "!!!!!!!!!!enter O position from 1 to 9 range ONLY!!!!!!!!!!\n";
                        break;
                    }
                }
                else // try again
                    cout << "!!!!!!!!!!please enter none occupied postion!!!!!!!!!!!\nplease try aging with a different number..\n";
            }
            //--------------------------------------winner--------------------------------------//
            if (i >= 2)
            {
                //-----------horizontal win--------------//
                //! player one
                if (thing[3] == 'O' && thing[7] == 'O' && thing[11] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<\n";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[3] == 'X' && thing[7] == 'X' && thing[11] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<\n";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }

                //! player one
                else if (thing[31] == 'O' && thing[35] == 'O' && thing[39] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[31] == 'X' && thing[35] == 'X' && thing[39] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player one
                else if (thing[59] == 'O' && thing[63] == 'O' && thing[67] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[59] == 'X' && thing[63] == 'X' && thing[67] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //---------vertical win-----------//
                //! player one
                if (thing[3] == 'O' && thing[31] == 'O' && thing[59] == 'O')
                { // 1-4-7//
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<\n";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[3] == 'X' && thing[31] == 'X' && thing[59] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<\n";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }

                //! player one
                else if (thing[7] == 'O' && thing[35] == 'O' && thing[63] == 'O')
                { // 2-5-8//
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[7] == 'X' && thing[35] == 'X' && thing[63] == 'X')
                { // 2-5-8//
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player one
                else if (thing[11] == 'O' && thing[39] == 'O' && thing[67] == 'O')
                { // 3-6-9//
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[11] == 'X' && thing[39] == 'X' && thing[67] == 'X')
                { // 3-6-9//
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //------------------------diagonal-------------------------//
                //--------- 1 5 9 ---------//
                //! player one
                else if (thing[3] == 'O' && thing[35] == 'O' && thing[67] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[3] == 'X' && thing[35] == 'X' && thing[67] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //--------- 3 5 7 ----------//
                //! player one
                else if (thing[11] == 'O' && thing[35] == 'O' && thing[59] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[11] == 'X' && thing[35] == 'X' && thing[59] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                else if (i == 4) //-------draw-------//
                {
                    cout << "<<<<<<<<<<draw>>>>>>>>>>\n";
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
            } // win end
            //-------------------------player two turn-------------------------------//
            while (check2)
            {
                cout << "------------------------------------------------------------------------------------------------\n";
                cout << thing << endl; //! print the shape
                cout << "\t\t\t<<<<<<<<<<<<<<player two turn>>>>>>>>>>>>>>>\n\n";
                cout << "enter X free position from 1 to 9.\t 0 to withdraw\n";
                cin >> x;
                if (o[x] == 0 || x > 9 || x < 1)
                {
                    o[x] = x;
                    switch (x)
                    {
                    case 1:
                        thing[3] = 'X';
                        cout << thing << endl;

                        check2 = false;
                        break;
                    case 2:
                        thing[7] = 'X';
                        cout << thing << endl;

                        check2 = false;
                        break;
                    case 3:
                        thing[11] = 'X';
                        cout << thing << endl;

                        check2 = false;
                        break;
                    case 4:
                        thing[31] = 'X';
                        cout << thing << endl;

                        check2 = false;
                        break;
                    case 5:
                        thing[35] = 'X';
                        cout << thing << endl;

                        check2 = false;
                        break;
                    case 6:
                        thing[39] = 'X';
                        cout << thing << endl;

                        check2 = false;
                        break;
                    case 7:
                        thing[59] = 'X';
                        cout << thing << endl;

                        check2 = false;
                        break;
                    case 8:
                        thing[63] = 'X';
                        cout << thing << endl;

                        check2 = false;
                        break;
                    case 9:
                        thing[67] = 'X';
                        cout << thing << endl;
                        check2 = false;
                        break;
                        // withdraw option
                    case 0: // withdraw
                        cout << "player one withdraw\nthank you for playing..\n";
                        check1 = false;
                        check2 = false;
                        i = 100; //! to get out of for loop
                        break;
                    default: // out of range----//
                        cout << "!!!!!!!!!!enter O position from 1 to 9 range ONLY!!!!!!!!!!\n";
                        break;
                    }
                }
                else // try again
                    cout << "!!!!!!!!!!please enter none occupied postion!!!!!!!!!!!\nplease try aging with a different number..\n";
            }
            //--------------------------------------winner--------------------------------------//
            if (i >= 2)
            {
                //---------------------horizontal win---------------------//
                //! player one
                if (thing[3] == 'O' && thing[7] == 'O' && thing[11] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<\n";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[3] == 'X' && thing[7] == 'X' && thing[11] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<\n";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }

                //! player one
                else if (thing[31] == 'O' && thing[35] == 'O' && thing[39] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[31] == 'X' && thing[35] == 'X' && thing[39] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player one
                else if (thing[59] == 'O' && thing[63] == 'O' && thing[67] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[59] == 'X' && thing[63] == 'X' && thing[67] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //---------vertical win-----------//
                //! player one
                if (thing[3] == 'O' && thing[31] == 'O' && thing[59] == 'O')
                { // 1-4-7//
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<\n";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[3] == 'X' && thing[31] == 'X' && thing[59] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<\n";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }

                //! player one
                else if (thing[7] == 'O' && thing[35] == 'O' && thing[63] == 'O')
                { // 2-5-8//
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[7] == 'X' && thing[35] == 'X' && thing[63] == 'X')
                { // 2-5-8//
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player one
                else if (thing[11] == 'O' && thing[39] == 'O' && thing[67] == 'O')
                { // 3-6-9//
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[11] == 'X' && thing[39] == 'X' && thing[67] == 'X')
                { // 3-6-9//
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //---------------------diagonal win---------------------//
                //--------- 1 5 9 ---------//
                //! player one
                else if (thing[3] == 'O' && thing[35] == 'O' && thing[67] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[3] == 'X' && thing[35] == 'X' && thing[67] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //--------- 3 5 7 ----------//
                //! player one
                else if (thing[11] == 'O' && thing[35] == 'O' && thing[59] == 'O')
                {
                    cout << "player one wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count1;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                //! player two
                else if (thing[11] == 'X' && thing[35] == 'X' && thing[59] == 'X')
                {
                    cout << "player two wins..\n>>>>>>>>>>>>>|W|I|N|N|E|R|<<<<<<<<<<<<<<<<";
                    ++count2;
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
                else if (i == 4) //-------draw-------//
                {
                    cout << "<<<<<<<<<<draw>>>>>>>>>>\n";
                    cout << "the score is \n player one----> " << count1 << endl;
                    cout << "player two----> " << count2 << endl;
                    cout << "do you want to play again?..\n 1-YES \n 2-NO \n"; //?play again question//
                    cin >> y_or_n;
                    if (y_or_n == 1)
                    {
                        main();
                        return 0;
                    }
                    else
                    {
                        cout << "<<<<<<<<THANK YOU FOR PLAYING>>>>>>>>>\n";
                        break;
                    }
                }
            } // win end

            // cout << "i = " << i << endl;//?check i value
        }
    } // the end
    else
        cout << "please enter (1) to start or (2) to quit\n try again \n";

    return 0;
}
/*
      1 | 2 | 3
    ____|___|____
      4 | 5 | 6
    ____|___|____
      7 | 8 | 9
        |   |

*/
