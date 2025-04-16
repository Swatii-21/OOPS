 #include <iostream>
using namespace std;

// ---------- 1. Single Inheritance ----------
class Animal {
public:
    void eat() {
        cout << "Animal eats ️" << endl;
    }
};

// Dog inherits Animal - Single Inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks " << endl;
    }
}

// ---------- 2. Multilevel Inheritance ----------
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy weeps " << endl;
    }
};

// ---------- 3. Multiple Inheritance ----------
class Flyer {
public:
    void fly() {
        cout << "Can fly 🕊️" << endl;
    }
};

class Swimmer {
public:
    void swim() {
        cout << "Can swim 🐟" << endl;
    }
};

class Duck : public Flyer, public Swimmer {
public:
    void quack() {
        cout << "Duck quacks 🦆" << endl;
    }
};

// ---------- 4. Hierarchical Inheritance ----------
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows 🐱" << endl;
    }
};

class Horse : public Animal {
public:
    void neigh() {
        cout << "Horse neighs 🐴" << endl;
    }
};

// ---------- 5. Hybrid Inheritance ----------
class LivingThing {
public:
    void live() {
        cout << "Living thing survives 🌱" << endl;
    }
};

class Human : public LivingThing {
public:
    void think() {
        cout << "Human thinks 🧠" << endl;
    }
};

class Athlete {
public:
    void workout() {
        cout << "Athlete works out 🏋️" << endl;
    }
};

// Sportsperson inherits from Human and Athlete (Human already inherits LivingThing)
class Sportsperson : public Human, public Athlete {
public:
    void play() {
        cout << "Sportsperson plays ⚽" << endl;
    }
};

// ---------- Main ----------
int main() {
    cout << "\n--- Single Inheritance ---\n";
    Dog dog;
    dog.eat();
    dog.bark();

    cout << "\n--- Multilevel Inheritance ---\n";
    Puppy pup;
    pup.eat();
    pup.bark();
    pup.weep();

    cout << "\n--- Multiple Inheritance ---\n";
    Duck duck;
    duck.fly();
    duck.swim();
    duck.quack();

    cout << "\n--- Hierarchical Inheritance ---\n";
    Cat cat;
    cat.eat();
    cat.meow();

    Horse horse;
    horse.eat();
    horse.neigh();

    cout << "\n--- Hybrid Inheritance ---\n";
    Sportsperson sp;
    sp.live();
    sp.think();
    sp.workout();
    sp.play();

    return 0;
}
