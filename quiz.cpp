#include<iostream>
using namespace std;

int main()
{
    string name;
    int user_id, age, option, a;
    int score = 0;

    cout << "enter name: ";
    cin >> name;

    cout << "enter user id: ";
    cin >> user_id;

    cout << "enter age: ";
    cin >> age;

    string password, confirm_password;
    int pass_attempt = 0;

    if(age > 18)
    {
        while(pass_attempt < 3)
        {
            cout << "enter password: ";
            cin >> password;

            cout << "enter confirm password: ";
            cin >> confirm_password;

            if(password == confirm_password)
                break;
            else
            {
                cout << "incorrect password" << endl;
                pass_attempt++;
            }
        }

        if(password == confirm_password)
        {
            cout << "Accept terms and conditions(1 for yes)" << endl;
            
            cout << "1.Personal data may be used." << endl;
            cout << "2.Winners will be selected based on highest score." << endl;
            cout << "3.Cheating is strictly prohibited." << endl;
            cout << "4.The quiz cannot be paused once started." << endl;
            cout << "5.The organizer's decision will be final." << endl;
            cout << "6.Results may be published publicly." << endl;
            cin >> a;

            if(a == 1)
            {
                cout << "quiz starts" << endl;
                cout << "choose answer from 4 options" << endl;

                cout << "\nQuestion 1: what is the capital of India?" << endl;
                cout << "1.Mumbai\n2.New Delhi\n3.Bhopal\n4.Chennai" << endl;

                for(int i=1; i<=4; i++)
                {
                    cin >> option;
                    if(option == 2)
                    {
                        cout << "correct answer" << endl;
                        score++;
                        break;
                    }
                    else if(i < 4)
                        cout << "wrong answer, try again: ";
                    else
                        cout << "wrong answer" << endl;
                }

                cout << "\nQuestion 2: national game of India?" << endl;
                cout << "1.Cricket\n2.Basketball\n3.Hockey\n4.Badminton" << endl;

                for(int i=1; i<=4; i++)
                {
                    cin >> option;
                    if(option == 3)
                    {
                        cout << "correct answer" << endl;
                        score++;
                        break;
                    }
                    else if(i < 4)
                        cout << "wrong answer, try again: ";
                    else
                        cout << "wrong answer" << endl;
                }

                cout << "\nQuestion 3: smallest state in India?" << endl;
                cout << "1.Goa\n2.Punjab\n3.Maharashtra\n4.Gujarat" << endl;

                for(int i=1; i<=4; i++)
                {
                    cin >> option;
                    if(option == 1)
                    {
                        cout << "correct answer" << endl;
                        score++;
                        break;
                    }
                    else if(i < 4)
                        cout << "wrong answer, try again: ";
                    else
                        cout << "wrong answer" << endl;
                }

                cout << "\nQuestion 4: largest state in India?" << endl;
                cout << "1.Goa\n2.Punjab\n3.Maharashtra\n4.Rajasthan" << endl;

                for(int i=1; i<=4; i++)
                {
                    cin >> option;
                    if(option == 4)
                    {
                        cout << "correct answer" << endl;
                        score++;
                        break;
                    }
                    else if(i < 4)
                        cout << "wrong answer, try again: ";
                    else
                        cout << "wrong answer" << endl;
                }

                cout << "\nQuestion 5: what is Indian currency?" << endl;
                cout << "1.Won\n2.Rupee\n3.Yen\n4.Dollar" << endl;

                for(int i=1; i<=4; i++)
                {
                    cin >> option;
                    if(option == 2)
                    {
                        cout << "correct answer" << endl;
                        score++;
                        break;
                    }
                    else if(i < 4)
                        cout << "wrong answer, try again: ";
                    else
                        cout << "wrong answer" << endl;
                }

                cout << "\nQuestion 6: Prime Minister of India?" << endl;
                cout << "1.Narendra Modi\n2.Rahul Gandhi\n3.Amit Shah\n4.Yogi Adityanath" << endl;

                for(int i=1; i<=4; i++)
                {
                    cin >> option;
                    if(option == 1)
                    {
                        cout << "correct answer" << endl;
                        score++;
                        break;
                    }
                    else if(i < 4)
                        cout << "wrong answer, try again: ";
                    else
                        cout << "wrong answer" << endl;
                }

                cout << "\nQuestion 7: National animal of India?" << endl;
                cout << "1.Lion\n2.Tiger\n3.Elephant\n4.Leopard" << endl;

                for(int i=1; i<=4; i++)
                {
                    cin >> option;
                    if(option == 2)
                    {
                        cout << "correct answer" << endl;
                        score++;
                        break;
                    }
                    else if(i < 4)
                        cout << "wrong answer, try again: ";
                    else
                        cout << "wrong answer" << endl;
                }

                cout << "\nFinal score is: " << score << endl;
                if(score == 7) cout << "Excellent! You got all answers correct." << endl;
                else if(score >= 5) cout << "Very Good! Great performance." << endl;
                else if(score >= 3) cout << "Good! Keep practicing." << endl;
                else cout << "Needs Improvement. Try again!" << endl;
            }
            else
                cout << "exit";
        }
        else
            cout << "exit";
    }
    else
        cout << "exit";
        return 0;
}
