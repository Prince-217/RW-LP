#include <iostream>

using namespace std;

class Student{
    
    private:
        
        int sid, sage;
        string sname, scity, scourse, semail, sclg;
        
    public:
        
        void setID(int a)
        {
            sid = a;
        }
        
        void setName(string a)
        {
            sname = a;
        }
        
        void setAge(int a)
        {
            sage = a;
        }
        
        void setCourse(string a)
        {
            scourse = a;
        }
        
        void setCity(string a)
        {
            scity = a;
        }
        
        void setEmail(string a)
        {
            semail = a;
        }
        
        void setClg(string a)
        {
            sclg = a;
        }
        
        void studInfo()
        {
            cout << "Student ID :- " << sid << endl; 
            cout << "Student Name :- " << sname << endl; 
            cout << "Student Age :- " << sage << endl; 
            cout << "Student Course :- " << scourse << endl; 
            cout << "Student City :- " << scity << endl; 
            cout << "Student Email ID :- " << semail << endl; 
            cout << "Student College :- " << sclg << endl; 
        }
    
};

int main()
{
    Student s1, s2, s3, s4, s5;
    
    s1.setID(101);
    s1.setName("Talaviya Naksh");
    s1.setAge(18);
    s1.setCourse("Data Science & AI Ml");
    s1.setCity("Ahmedabad");
    s1.setEmail("naksh23@gmail.com");
    s1.setClg("Gujarat University");
    s1.studInfo();
    
    cout << endl;
    
    s2.setID(102);
    s2.setName("Joshi Magan");
    s2.setAge(19);
    s2.setCourse("Full Stack Developer");
    s2.setCity("Surat");
    s2.setEmail("jmagan@gmail.com");
    s2.setClg("VNSG University");
    s2.studInfo();
    
    cout << endl;
    
    s3.setID(103);
    s3.setName("Chauhan Divyesh");
    s3.setAge(20);
    s3.setCourse("UI UX");
    s3.setCity("Surat");
    s3.setEmail("divyesh67@gmail.com");
    s3.setClg("Vidhyadip University");
    s3.studInfo();
    
    cout << endl;
    
    s4.setID(104);
    s4.setName("Raj Patel");
    s4.setAge(22);
    s4.setCourse("Video Editor");
    s4.setCity("Navsari");
    s4.setEmail("rajptl34@gmail.com");
    s4.setClg("Ganpat University");
    s4.studInfo();

    cout << endl;

    s5.setID(105);
    s5.setName("Dev Shah");
    s5.setAge(23);
    s5.setCourse("Animation");
    s5.setCity("Surat");
    s5.setEmail("devshah45@gmail.com");
    s5.setClg("PP Savani University");
    s5.studInfo();
    
    return 0;
}