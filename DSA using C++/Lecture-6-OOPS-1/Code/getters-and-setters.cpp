#include <iostream>
using namespace std;

class student{

    private:
    int rollNo; // these properties are private so we cannot use/access them outside the class that is y we ceate public functions inside the class;
    int age;

    public:
    void setAge(int x,int password){
        
        if(password != 123){
            return;
        }
        if(x < 0){
            return;
        }
        age = x;
    }
    void setRollNo(int x){
        rollNo = x;
    }
    int getAge(){
        return age;
    }

    int getRollNo(){
        return rollNo;
    }

    void display(){
        cout << "Age :" << age << " " << "Roll no. :" << rollNo; 
    }
};

int main(){
    student s;

    // s.age = 22; 
    // s.rollNo = 111; these properties cannot be accessed here as they belong to private access modifiers so we want to make use of the public class functions to access and modify these variables.

    // these properties are private so we cannot use/access them outside the class that is y we ceate public functions inside the class;

    // s.setAge(20);this code does not pass the check

    s.setAge(20,123);// this code passes the check i.e password

    s.setRollNo(18);
    cout << "Getters:\n";
    cout << "Age :" << s.getAge() << " " << "Roll no. :" << s.getRollNo();
    cout << "\nDisplay: ";
    cout << endl;
    s.display();

    return 0; 
}