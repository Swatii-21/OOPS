 #include<iostream>
 #include<string>
 using namespace std;
 
 class Student {
     private: 
     string name ; 
     
     public:
     float cgpa;

public:
     void getpercentage(){
         cout << (cgpa*10) <<"%\n";
     }
     
     //setters -> to set the value 
     void setname(string nameval){
         name = nameVal;
     };
     
     void setcgpa(flaot cgpa){
         cgpa = cgpaval;
     }
     
     //getters -> to get the value 
     void getname( ){
        return  name ;
     };
     
     void getcgpa( ){
         return cgpa  ;
     }
 };
 
 int main(){
     Student s1;
     s1.setName("shraddha") ; 
     s1.cgpa ( 9.0 ) ;
     
     cout << s1.getName() << endl;
     cout << s2.getcgpa() << endl; 
     return 0 ;
 }