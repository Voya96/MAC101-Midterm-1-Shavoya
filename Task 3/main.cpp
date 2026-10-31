#include <iostream>
using namespace std;

int main(){
    
    string name; // Declare string variable "name"
    string direction; // Declare string varible "direction"
     
    cout <<"Hey! Welcome to Munchinkin Land! I heard you're trying to get to the Wizard of Oz. I'll be happy to lead you there!" << endl;
    cout <<"I don't have a very good memory so we may get lost. But with your amazing judgement I'm sure we'll make it there!" << endl;

    cout <<"What is your name traveler?" << endl;
    cin >> name; // User inputs name

    cout <<"Hi " <<name <<"! My name is Toto and I'll be with you on your journey! Let's start to head down the Yellow Brick Road!" << endl; // Narrator greets user

    cout <<"We've come across our first fork in the road, which way should we go?" << endl;
    cin >> direction; // User inputs left or right

    while(direction != "right"){ // If the direction user enter is wrong it will keep looping till right direction is chosen
        cout << "Oh no! I can hear the flying monkeys in that direction we better not go there. Lets go right instead." << endl;
        cin >> direction; // User inputs left or right
    }

    if(direction == "right"){ // If the right direction is chosen user meets meets one of the characters and goes the right way
        cout << "Great! We've ended up at the cornfields! Is that the Scarecrow up ahead? Lets take him to meet the Wizard too!" << endl;
    }  
    
    cout <<"Amazing work! I wonder if we will meet anyone else on our journey! Let's continue!" << endl;
    cout <<"Drat! Another fork in the road. Which way should we go this time?" << endl;
    cin >> direction; // User inputs left or right

    while(direction != "left"){ // If the direction user enter is wrong it will keep looping till right direction is chosen
        cout << "Oh! That turns into the Green Brick road. Only the Yellow Brick road goes to the Wizard of Oz. Let's go left!" << endl;
        cin >> direction;
    }
    if(direction == "left"){ // If the right direction is chosen user meets meets one of the characters and goes the right way
        cout <<"Wow, the woods are really scary. Is that squeaking I hear?" << endl;
        cout <<"Oh! It's just the Tin Man. He needs a little oil. Let's take him on our journey to the Wizard too!" << endl;
    }
    
    cout <<"Great! We now have the Scarecrow and the Tin Man! We're so close to Emerald City! Let continue!" << endl;
    cout <<"I think this our last fork in the road. Which way should we go now?" << endl;
    cin >> direction;

    while(direction != "right"){ // If the direction user enter is wrong it will keep looping till right direction is chosen
        cout <<"I can hear the Wicked Witch of the West cackling! Lets not go that way. The forrest seems spooky but it may be safter. Right we go!" << endl;
        cin >> direction;
    }
    if(direction == "right"){ // If the right direction is chosen user meets meets one of the characters and goes the right way
        cout <<"This forrest is really spooky. Who's that growling?" << endl;
        cout << "It's the Cowardly Lion! Let's take him to meet the Wizard too!" << endl;
    }
    
    
    cout <<"YAY! We've made it to Emerald City! Great work " <<name <<", but I fear our journey has come to an end. Say Hi to the Wiz for me!" << endl;
    cout << "FIN";

    return 0;
}
