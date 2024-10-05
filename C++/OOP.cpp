/*
// Create the class student and input/display the info of two students.
#include <iostream>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input()
    {
        cout << "\nEnter Student name: ";
        cin >> nm;

        cout << "\nEnter Roll Number, Age and Percentage: ";
        cin >> rno >> age >> per;
    }
    void display()
    {
        cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
    }
};

int main()
{
    Student s1, s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
    return 0;
}

// Passing the arguments to member functions.
#include <iostream>
#include <string.h>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input()
    {
        cout << "\nEnter Student name: ";
        cin >> nm;

        cout << "\nEnter Roll Number, Age and Percentage: ";
        cin >> rno >> age >> per;
    }

    // argument to member function
    void input(char inm[], int irno, int iage, float iper)
    {
        strcpy(nm, inm);
        rno = irno;
        age = iage;
        per = iper;
    }

    void display()
    {
        cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
    }
};

int main()
{
    Student s1, s2;
    s1.input();
    s2.input("Akash", 14, 20, 80);
    s1.display();
    s2.display();
    return 0;
}

// Defining member function outside of class
#include <iostream>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input();
    void display();
};

void Student::input()
{
    cout << "\nEnter Student name: ";
    cin >> nm;

    cout << "\nEnter Roll Number, Age and Percentage: ";
    cin >> rno >> age >> per;
}
void Student::display()
{
    cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
}

int main()
{
    Student s1, s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
    return 0;
}

// Array of objects
#include <iostream>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input()
    {
        cout << "\nEnter Student name: ";
        cin >> nm;

        cout << "\nEnter Roll Number, Age and Percentage: ";
        cin >> rno >> age >> per;
    }
    void display()
    {
        cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
    }
};

int main()
{
    Student s[2];
    
    // Input
    for(int i = 0; i < 2; i++) {
        s[i].input();
    }

    // Display
    for(int i = 0; i < 2; i++) {
        s[i].display();
    }

    return 0;
}

// pointer to objects
#include <iostream>
using namespace std;

class Student 
{
    private:
    char nm[40];
    int rno, age;
    float per;

    public:
    void input()
    {
        cout << "\nEnter Student name: ";
        cin >> nm;

        cout << "\nEnter Roll Number, Age and Percentage: ";
        cin >> rno >> age >> per;
    }
    void display()
    {
        cout << "\nStudent Name: " << nm << "\nRoll No: " << rno << "\nAge: " << age << "\nPercentage: " << per << " %" << endl;
    }
};

int main()
{
    int cnt;
    cout << "\nEnter number of students: ";
    cin >> cnt;
    
    Student *s = new Student[cnt];

    // Input
    for(int i = 0; i < cnt; i++) {
        s[i].input();
    }

    // Display
    for(int i = 0; i < cnt; i++) {
        s[i].display();
    }

    return 0;
}


// Returning data from member function
// Enter the item code and price and display the list and total
#include <iostream>
using namespace std;

class Item
{
    private:
    int icode;
    float iprice;

    public:
    void indata()
    {
        cout << "\n Enter Item Code and Price: \n";
        cin >> icode >> iprice;
    }
    void outdata()
    {
        cout << "\n\nItem Code: " << icode << "\nItem Price: " << iprice;
    }
    float getprice()
    {
        return iprice;
    }
};

int main()
{
    int cnt;
    float total = 0;
    cout << "\nEnter item count: ";
    cin >> cnt;

    Item *it = new Item[cnt];

    cout << "\nInput Item info for " << cnt << " items: \n";
    for(int i = 0; i < cnt; i++) {
        it[i].indata();
    }

    cout << "\nItem Details:";
    for(int i = 0; i < cnt; i++) {
        it[i].outdata();
        // total calculation
        total += it[i].getprice();
    }

    cout << "\nTotal: " << total;

    return 0;
}

// Function Overloading
#include <iostream>
using namespace std;

class Rect
{
    int len, bre;
    public:

    void in()
    {
        cout << "\nEnter Length and breadth of Rectangle: ";
        cin >> len >> bre;
    }
    
    void in(int side)
    {
        len = side;
        bre = side;
    }

    void in(int length, int breadth)
    {
        len = length;
        bre = breadth;
    }

    void out()
    {
        cout << "\nLength: " << len << "\nBreadth: " << bre;
    }

    int area()
    {
        return len * bre;
    }
};

int main()
{
    // with no arguments
    Rect r1;
    r1.in();
    r1.out();
    cout << "\nArea of Rectangle: " << r1.area();
    // with one argument length and breadth are assumed to be the same
    Rect r2;
    r2.in(10);
    r2.out();
    cout << "\nArea of Rectangle: " << r2.area();
    // with two arguments
    Rect r3;
    r3.in(10, 20);
    r3.out();
    cout << "\nArea of Rectangle: " << r3.area();
    return 0;
}

// Nesting of member function
//  Define the class Number and define some functions within it to process the value.
#include <iostream>
using namespace std;

class Number 
{
    int n;
    public:
    
    void in() {
        cout << "\nEnter number: ";
        cin >> n;
    }

    void in(int a) {
        n = a;
    }

    void out() {
        cout << "\nNumber: " << n;
    }

    int getreverse() {
        int rev = 0;
        int dup = n;
        while(dup != 0) {
            rev = rev * 10 + dup % 10;
            dup = dup / 10;
        }
        return rev;
    }

    int isPalindrome() {
        return n == getreverse();
    }
};

int main()
{
    Number n;
    n.in();
    cout << "\nReverse is " << n.getreverse();
    if(n.isPalindrome()) {
        cout << "\nIs Palindrome.";
    }
    else {
        cout << "\nIs Not Palindrome.";
    }
    return 0;
}

// Array as a member of class
#include <iostream>
using namespace std;
class MyArray
{
    int x[5];
    public:
    void in()
    {
        cout << "\nEnter 5 numbers: ";
        for(int i = 0; i < 5; i++) {
            cin >> x[i];
        }
    }
    void out()
    {
        cout << "\nArray is: ";
        for(int i = 0; i < 5; i++) {
            cout << "\t" << x[i];
        }
    }

    int getPrimeCount()
    {
        int cnt = 0, flg;
        for(int i = 0; i < 5; i++) {
            flg = 1;
            int ele = x[i];
            if(ele > 1) {
                for(int div = 2; div <= ele / 2; div++) {
                    if(ele % div == 0) {
                        flg = 0;
                        break;
                    }
                }
                if(flg) {
                    cnt ++;
                }
            }
        }
        return cnt;
    }
};

int main()
{
    MyArray a;
    a.in();
    a.out();
    cout << "\nPrime Count: " << a.getPrimeCount();
    return 0;
}

// Pointer as a member of class

#include <iostream>
using namespace std;
class MyDynamicType
{
    int *p;
    int cnt;
    public:
    void in()
    {
        cout << "\nEnter count of integers: ";
        cin >> cnt;
        cout << "\nEnter " << cnt << " elements: \n";
        for(int i = 0; i < cnt; i++) {
            cin >> p[i];
        }
    }
    void out()
    {
        cout << "\nElements are: ";
        for(int i = 0; i < cnt; i++) {
            cout << "\t" << p[i];
        }
    }
    int evenCount()
    {
        int ecnt = 0;
        for(int i = 0; i < cnt; i++) {
            if(p[i] % 2 == 0) {
                ecnt++;
            }
        }
        return ecnt;
    }
};

int main()
{
    MyDynamicType md;
    md.in();
    md.out();
    cout << "\nEven Count is: " << md.evenCount();
    return 0;
}

// Complex Number
#include <iostream>
using namespace std;
class Complex
{
    int real, img;
    public:
    void in()
    {
        cout << "\nEnter real and imaginery part of complex number: ";
        cin >> real >> img;
    }
    void in(int r, int i) 
    {
        real = r;
        img = i;
    }
    void out()
    {
        cout << endl << "Complex Number: " << real << " + " << img << "i";
    }
    friend Complex add(Complex a, Complex b);
};

Complex add(Complex a, Complex b)
{
    a.real = a.real + b.real;
    a.img = a.img + b.img;
    return a;
}

int main()
{
    Complex a, b, c;
    a.in();
    b.in();
    a.out();
    b.out();
    c = add(a, b);
    c.out();
    return 0;
}


// Menu driven program
// we have to store the runs scored by 3 players in N matches
// find current top scorer
#include <iostream>
using namespace std;

class Player
{
    int pid;
    int *matchScores;
    int noOfMatches;
    
    public:
    void in(int playerID)
    {
        pid = playerID;
        cout << "\nEnter number of matches for Player " << pid << ": ";
        cin >> noOfMatches;
        matchScores = new int[noOfMatches];
        cout << "\nEnter  " << noOfMatches << " Match Scores: ";
        for(int i = 0; i < noOfMatches; i++) {
            cin >> matchScores[i];
        }
    }

    void out()
    {
        cout << "\nPlayer " << pid << ": ";
        cout << "\nMatches: \n";
        for(int i = 0; i < noOfMatches; i++) {
            cout << "\t" << matchScores[i];
        }
    }

    void insert(int score) 
    {
        // matchScores = (int *)realloc(matchScores, sizeof(int) * (noOfMatches + 1));
        // matchScores[noOfMatches++] = score;
    
        // Other option
        int* temp = matchScores;
        matchScores = new int[noOfMatches + 1];
        for(int i = 0; i < noOfMatches; i++) {
            matchScores[i] = temp[i];
        }
        matchScores[noOfMatches] = score;
        noOfMatches++;
        free(temp);
    }
};

int main()
{
    Player p[3];
    cout << "\nEnter details for 3 players: \n";
    for(int i = 0; i < 3; i++) {
        p[i].in(i+1);
    }

    while(1) {
        int opt;
        cout << "\n----- MENU -----\n1. Display\n2. Insert\n3. Exit\nSelect: ";
        cin >> opt;
        switch(opt) {
            case 1:
                for(int i = 0; i < 3; i++) {
                    p[i].out();
                }
                break;
            case 2:
                int pno, s;
                cout << "\nEnter player number: ";
                cin >> pno;
                if(pno >= 1 && pno <= 3) {
                    cout << "\nEnter score: ";
                    cin >> s;
                    p[pno - 1].insert(s);
                    cout << "\nScore Inserted."; 
                }
                else {
                    cout << "\nPlayer doesn't exist.";
                }
                break;
            case 3:
                exit(0);
            default:
                cout << "\nInvalid Option.";
        }
    }
    return 0;
}

// static data member and static member function
#include <iostream>
using namespace std;

class Item
{
    private:
    int icode;
    float iprice;
    static int total;

    public:
    void indata()
    {
        cout << "\n Enter Item Code and Price: \n";
        cin >> icode >> iprice;
        total += iprice;
    }
    void outdata()
    {
        cout << "\n\nItem Code: " << icode << "\nItem Price: " << iprice;
    }
    static void showTotal()
    {
        cout << "\nTotal Bill: " << total;
    }
};

int Item::total; // without this declaration: undefined reference to `Item::total'

int main()
{
    int cnt;
    float total = 0;
    cout << "\nEnter item count: ";
    cin >> cnt;

    Item *it = new Item[cnt];

    cout << "\nInput Item info for " << cnt << " items: \n";
    for(int i = 0; i < cnt; i++) {
        it[i].indata();
    }

    cout << "\nItem Details:";
    for(int i = 0; i < cnt; i++) {
        it[i].outdata();
    }

    Item::showTotal();
    return 0;
}

// Friend Function

    - outside function as a friend of class
    - Member function of one class as a friend of another
    - friend class - all member functions of one class as a friend of another class


// - outside function as a friend of class
#include <iostream>
using namespace std;

class Person
{
    char nm[50];
    int age;
    public:
    void in()
    {
        cout << "\nEnter name of person: ";
        cin.getline(nm, 50);
        
        cout << "\nEnter age: ";
        cin >> age;
    }  
    
    void out()
    {
        cout << "\nPerson Details\nName: " << nm << "\nAge: " << age; 
    }

    friend void changeAge(Person&);
};

void changeAge(Person& p)
{
    cout << "\nEnter new age: ";
    cin >> p.age;
}

int main()
{
    Person p;
    p.in();
    cout << "\nBefore Change: ";
    p.out();

    changeAge(p);

    cout << "\nBefore Change: ";
    p.out();
    
    return 0;
}

// Outside function as a friend of two or more classes
#include <iostream>
using namespace std;

class Student;
class Person
{
    char nm[50];
    int age;
    public:
    void in()
    {
        cout << "\nEnter Name of person: ";
        cin >> nm;

        cout << "\nEnter Age of person: ";
        cin >> age;
    }
    void out()
    {
        cout << "\nPerson Details: \nName: " << nm << "\nAge: " << age;
    }
    friend void findElder(Person p, Student s);
};

class Student
{
    char nm[50];
    int age;
    public:
    void in()
    {
        cout << "\nEnter Name of student: ";
        cin >> nm;

        cout << "\nEnter Age of student: ";
        cin >> age;
    }
    void out()
    {
        cout << "\nStudent Details: \nName: " << nm << "\nAge: " << age;
    }
    friend void findElder(Person p, Student s);
};

void findElder(Person p, Student s)
{
    cout << "\nElder Details: ";
    if(p.age > s.age) {
        p.out();
    }
    else if(p.age < s.age) {
        s.out();
    }
    else {
        cout << "\nBoth have same age.";
    }
}

int main()
{
    Student s;
    Person p;
    s.in();
    p.in();
    s.out();
    p.out();

    findElder(p, s);
    return 0;
}

// - Member function of one class as a friend of another
#include <iostream>
using namespace std;

class A
{
    int a;
    friend class B;
};

class B
{
    int b;
    public:
    void in(A& ob)
    {
        cout << "\nEnter value of a: ";
        cin >> ob.a;

        cout << "\nEnter value of b: ";
        cin >> b;
    }

    void out(A& ob)
    {
        cout << "\nValue of a: " << ob.a;
        cout << "\nValue of b: " << b;
    }
};

int main()
{
    A a;
    B b;
    b.in(a);
    b.out(a);
    return 0;
}

// Swaping the private data of class using friend function
#include <iostream>
using namespace std;

class B;
class A
{
    int a;
    public:
    void in()
    {
        cout << "\nEnter value of a: ";
        cin >> a;
    }

    void out()
    {
        cout << "\nValue of a: " << a;
    }
    friend void swapdata(A&, B&);
};

class B
{
    int b;
    public:
    void in()
    {
        cout << "\nEnter value of b: ";
        cin >> b;
    }

    void out()
    {
        cout << "\nValue of b: " << b;
    }
    friend void swapdata(A&, B&);
};

void swapdata(A& ob1, B& ob2)
{
    int temp = ob1.a;
    ob1.a = ob2.b;
    ob2.b = temp;
}

int main()
{
    A a;
    B b;
    a.in();
    b.in();

    cout << "\nAfter Swap: ";
    a.out();
    b.out();

    swapdata(a, b);

    cout << "\nAfter Swap: ";
    a.out();
    b.out();
    return 0;
}

// Constructor and Destructor
*/
#include <iostream>
using namespace std;

class Num
{
    int n;
    public:
    Num()
    {
        cout << "\nObject is Created.";
    }
    
    ~Num()
    {
        cout << "\nObject is Destroyed.";
    }
    
    void indata()
    {
        cout << "\nEnter the data: ";
        cin >> n;
    }

    void outdata()
    {
        cout << "\nNumber: " << n;
    }
};

int main()
{
    Num n;
    
    n.indata();
    n.outdata();
    return 0;
}

