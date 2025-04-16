 #include<iostream>
 #include<string>
 using namespace std ;
 
 class car{
     public: 
     string name ; 
     string color ; 
     
     //parameterized constructot for c1
     car (string name , string color){
         this -> name = name ; 
         this -> color = color; 
     }
     
     //custom copy construcot 
     car( car &original){
         cout << "copying originla to new..\n";
         name = original.name ; 
         color = original.color ;
     }
 };
 
 int main(){
     car c1("maruti 800 " , "white");
     //copy constructor 
     car c2(c1);
     cout << c2.name << endl ;
     cout << c2.color << endl ;
     return 0 ; 
 }
 