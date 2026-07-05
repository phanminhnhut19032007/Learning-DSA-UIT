#include <iostream>
using namespace std;

class Student {
    private:
    static int count;
    string name;
    public:
    Student(string n)
    {
     name = n;
     count++;
    }
    ~Student() {
        count--;
    }
    void show()
    {
        cout << "Name: " << name << endl;
    }
    void ShowCnt()
    {
        cout <<"Current number of student :" << count << endl;
    }
};
int Student :: count =0;

int main()
{
 Student s1("AN");
 s1.ShowCnt();
 Student s2("BINH");
 s1.show();
 s2.show();
 s1.ShowCnt();
 s2.ShowCnt();
 {
    Student s3("NAM");
    s3.show();
    s3.ShowCnt();
 }
 s1.ShowCnt();
 s2.ShowCnt();
    
}