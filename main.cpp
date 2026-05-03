#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int user, comp, score = 0, target, choice;

    cout << "HAND CRICKET GAME\n";
    cout << "1. Batting\n2. Bowling\n";
    cin >> choice;

    if(choice == 1) {
        cout << "You are batting\n";

        while(true) {
            while(true) {
                cout << "Enter number (1-6): ";
                cin >> user;

                if(cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input! Enter numbers only.\n";
                    continue;
                }

                if(user >= 1 && user <= 6) break;
                else cout << "Invalid input! Please enter 1-6 only.\n";
            }

            comp = rand()%6 + 1;
            cout << "Computer: " << comp << endl;

            if(user == comp) break;

            score += user;
            cout << "Score: " << score << endl;
        }

        target = score + 1;
        cout << "Target: " << target << endl;

        score = 0;
        cout << "Now bowl\n";

        while(score < target) {
            while(true) {
                cout << "Enter number (1-6): ";
                cin >> user;

                if(cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input! Enter numbers only.\n";
                    continue;
                }

                if(user >= 1 && user <= 6) break;
                else cout << "Invalid input! Please enter 1-6 only.\n";
            }

            comp = rand()%6 + 1;
            cout << "Computer: " << comp << endl;

            if(user == comp) break;

            score += comp;
            cout << "Computer score: " << score << endl;
        }

        if(score >= target) cout << "Computer wins\n";
        else cout << "You win\n";
    }
    else {
        cout << "You are bowling\n";

        while(true) {
            while(true) {
                cout << "Enter number (1-6): ";
                cin >> user;

                if(cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input! Enter numbers only.\n";
                    continue;
                }

                if(user >= 1 && user <= 6) break;
                else cout << "Invalid input! Please enter 1-6 only.\n";
            }

            comp = rand()%6 + 1;
            cout << "Computer: " << comp << endl;

            if(user == comp) break;

            score += comp;
            cout << "Computer score: " << score << endl;
        }

        target = score + 1;
        cout << "Target: " << target << endl;

        score = 0;
        cout << "Now bat\n";

        while(score < target) {
            while(true) {
                cout << "Enter number (1-6): ";
                cin >> user;

                if(cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input! Enter numbers only.\n";
                    continue;
                }

                if(user >= 1 && user <= 6) break;
                else cout << "Invalid input! Please enter 1-6 only.\n";
            }

            comp = rand()%6 + 1;
            cout << "Computer: " << comp << endl;

            if(user == comp) break;

            score += user;
            cout << "Score: " << score << endl;
        }

        if(score >= target) cout << "You win\n";
        else cout << "Computer wins\n";
    }

    return 0;
}
