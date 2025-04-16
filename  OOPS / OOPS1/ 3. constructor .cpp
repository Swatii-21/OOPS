#include<iostream>
using namespacestd;

class Car{
    string name ; 
    string color;
    
    public:
    Car(){ ///non - parameterized
        cout << "constructor without paramete";
    }
    //parameterized
    
    Car(string name  , string color){ //constructor
         cout << " constructoe is called object being create dl ";
         this->name = name ;
         this ->color = color;
         
    }
    
    void start(){
        cout << "car has started..\n";
    }
    
    void stop(){
        cout << "car has stopped..\n";
    }
};

int main(){
 car c1("maruti 800" , "white");
 car c0 ;
 
 return 0 
}