#include <iostream>
#include <vector>

using namespace std;

//  Delegating Constructors


// .h file 

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    // overloaded Constructors
    Player();


    Player(string name); 
    Player(string name, int health, int xp); 
    
    void set_name(string name);

    string get_name();
    
    // Destructor 
    ~Player(){cout<<"Destroy "<< name<<endl;}
}; 

// .cpp file

Player::Player(string name, int health, int xp): name{name}, health{health}, xp{xp} {cout<<"3_arg"<<endl;}
Player::Player(string name): Player{name, 0, 0}{cout<<"1_arg"<<endl;}
Player::Player(): Player{"default", 0, 0} {cout<<"0_arg"<<endl;}


string Player::get_name(){return name;}
void Player::set_name(string name){this->name = name;}

// main file 

int main()
{
    Player gamer_101;
    gamer_101.set_name(" Kishan"); 

    Player gamer_102(" Tushar");
    string gamer_102_name = gamer_102.get_name(); 
    cout<< gamer_102_name <<endl; 

    Player* enemy  = new Player(" Boss", 100,10); 
    string your_name = enemy->get_name(); 
    cout<< your_name <<endl; 
    
    delete enemy; 

    return 0; 
}


