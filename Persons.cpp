/***********************************/
/*				   */
/* Code by: Khromov Egor Pavlovich */
/* github.com/SochnoeAnime/LABScpp */
/*		10.2021		   */
/*				   */
/***********************************/
#include <iostream>
#include <string.h>

using namespace std;


class Person {
private:
    int id;
    string name;
    int age;
    int height;

public:
    //set
    void SetId(int i) {
        id = i;
    };
    void SetName(string n) {
        name = n;
    };
    void SetAge(int a) {
        age = a;
    };
    void SetHeight(int h) {
        height = h;
    };
    //get
    int GetId() {
        return id;
    };
    string GetName() {
        return name;
    };
    int GetAge() {
        return age;
    };
    int GetHeight() {
        return height;
    };
};

int Menu(int m, Person p[]);
int ChangeInfo(int id, Person p[]);
void GetInfo(int id, Person p[]);

int main() {

    Person person[10];
    string names[10] = {"Conor", "John", "Diana", "Dwayne", "Klark", "Steve", "Tony", "Kirk", "Gomer", "Ostap"};
    int ages[10] = {33, 44, 36, 49, 23, 40, 51, 58, 34, 30};
    int heights[10] = {175, 185, 178, 196, 191, 199, 185, 175, 183, 180};

    string name;
    int menu;
    int id, age, height;

    for (int i = 0; i < 10; i++) {
        person[i].SetId(i);
        person[i].SetName(names[i]);
        person[i].SetAge(ages[i]);
        person[i].SetHeight(heights[i]);
    }

    cout << "1 - Complete information about all people\n2 - Changing information about one person\n3 - Complete information about this person\n";
    while (true) {
        cin >> menu;

        Menu(menu, person);
    }
    return 0;
};

int Menu(int m, Person p[]) {//Main menu

    int id;

    switch (m)
    {
    case 1://Complete information about all people
        for (int i = 0; i < 10; i++) {
            GetInfo(i, p);
        }
        break;
    case 2://Changing information about one person
        cout << "Id of the person information about which to change: ";
        cin >> id;
        ChangeInfo(id, p);
        break;
    case 3://Complete information about this person
        cout << "Information about which person: ";
        cin >> id;
        GetInfo(id, p);
        break;
    default:
        break;
    }
    return 0;
}

void GetInfo(int id, Person p[]) {
    cout << "Id: " << p[id].GetId() << "\t\tName: " + p[id].GetName() + "\t\tAge: " << p[id].GetAge() << "\t\tHeight: " << p[id].GetHeight() << "\n";
}

int ChangeInfo(int id, Person p[]) {

    char m;//menu 
    string n;
    int a, h;

    cout << "e - to see current information\nn - to change the name\na - to change age\nh - to change height\nq - to exit\n";
    cin >> m;

    while (m != 'q') {
        switch (m) {
        case 'e'://see current information about a person
            cout << "Current information:\n";
            cout << "Id: " << p[id].GetId() << "\t\tName: " + p[id].GetName() + "\t\tAge: " << p[id].GetAge() << "\t\tHeight: " << p[id].GetHeight() << "\n";
            break;
        case 'n'://change person's name
            cout << "Current name: " << p[id].GetName() << "\nChange to: ";
            cin >> n;
            p[id].SetName(n);
            break;
        case 'a'://change a person's age
            cout << "Current age: " << p[id].GetAge() << "\nChange to: ";
            cin >> a;
            p[id].SetAge(a);
            break;
        case 'h'://change a person's height
            cout << "Current height: " << p[id].GetHeight() << "\nChange to: ";
            cin >> h;
            p[id].SetHeight(h);
        default:
            break;
        }
        cin >> m;
    }

    return 0;
}