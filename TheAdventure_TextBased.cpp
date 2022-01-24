// TheAdventure_TextBased.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    const int GOLD_PIECES = 900; //sets the gold pieces to 900
    int adventurers, killed, survivors;
    string leader; // your character
    string enemy; //your enemy

    const int MAX_ITEMS = 10; //makes the max items to 10
    string inventory[MAX_ITEMS];

     //works out how many are left
    cout << "Hello Adventure!\n"; //displays what is said in the ""
    

    //get the information
    cout << "Please enter the following for your personalized adventure\n";

    cout << "Enter your name: ";
    cin >> leader; //stores your name as leader
    
    cout << "Enter your age: ";
    cin >> adventurers; //stores it as the adventurers.
    
    cout << "Enter your power level(max your age): ";
    cin >> killed; //stores it as killed.

    cout << "whats your opponents name: ";
    cin >> enemy; //stores name for an enemy

    int numItems = 0;
    inventory[numItems++] = "sword"; //collects the name and puts it into the inventory system.
    inventory[numItems++] = "armor"; //collects the name and puts it into the inventory system.
    inventory[numItems++] = "shield"; //collects the name and puts it into the inventory system.
    cout << "\n";
    cout << leader << " You begin your adventure through the village, you have 3 items on you currently which are:\n";
    //above a bit of the story

    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl; //displays the inventory
    }

    cout << "\nYou come across as weapon smith.\n";
    cout << "You look through his fine weapons and choose to trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl; //collects the name and puts it into the inventory system. displays the inventory
    }


    cout << "\n"; //break to give it a space from above
    //story below
    //start of the story
    cout << "\nAs you almost make it out the town, you hear of a demon called" << enemy; //inserts the name you given
    cout << "is lerking near by in the forest.\n";
    cout << "knowing yourself to well you wanted to go defeat the demon" << enemy; //inserts the name you given
    cout << " but couldnt without a potion of some kind and not alone.\n";
    cout << "You sent out " << adventurers << " of your finest adventures that are with you to investigate. While you look for this potion.\n";//inserts the age you given
    cout << "You ask the weapon smith man, if he knew of a potion maker. ";
    cout << "luckly he did and pointed you into the direction.\n";
    cout << "You make your way to the potion maker, as soon as you walk in you are drawn to a potion from just the site of it.\n";
    cout << "You think to yourself -this must be the potion-\n";
    cout << "The potion you are drawn to, you find out is a healing potion.\n";

    if (numItems < MAX_ITEMS)
    {
        inventory[numItems++] = "healing potion"; //collects the name and puts it into the inventory system.
    }
    else //if an item is set higher than 10 for the items than this will make the saying inside this display.
    {
        cout << "You have too many items and can't carry another.";
    }

    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl; //displays the inventory
    }
    survivors = adventurers - killed;//this helps the ending to work out how much you will get at the end of the mission.
    
    cout << "\n";
    cout << "This potion will come in handy surely.\n"; 
    cout << "You head towards the demons directions but come to a cross section.\n";
   
    int choice_Path;//making a choice path
    cout << "# What would you like to do?\n";
    cout << " >> Enter '1' to follow the left path?\n";
    cout << " >> Enter '2' to follow the right path?\n";
    retry:
    cout << "\nEnter your choice: \n";
    cin >> choice_Path;
    if (choice_Path == 1)//gives you the choice 1 path of story.
    {
        cout << "\nYou follow the left path and come across a huge demon but none of your adventures.\n";
        cout << "You stop in your tracks, and look around to see if it is this one you are hearing about.\n";
        cout << "you dont see your adventures, so this isnt the one but should take it either way, as you can tell its an underling of the demon " << enemy;//inserts the name you given
        cout << ". \nYou draw your axe, and run towards the demon\n";
        cout << "once you get close enough, the demon turns to you and swings at you sending you backwards.\n";
        cout << "Going through 4 trees and hitting a big tree, knocking the wind out of you and breaking some bones on the way.\n";
        cout << "you cough and slowly get up even through your in pain and run back to it and throw your shield up into the air distracting the demon.\n";
        cout << "you get closer this time and hit the demon on its weak spot repeatedly.\n";
    }
    else if (choice_Path == 2)//gives the choice 2 path of story.
    {
        cout << "\nYou follow the right path, you start seeing blood trails.\n";
        cout << "you had a bad feeling about this, so you quickened your pace.\n";
        cout << "You got to the clearing but stopped dead in your tracks.\n";
        cout << "you see your adventures dead. there infront of you stood the demon\n" << enemy;//inserts the name you given
        cout << ". You felt anger vise up in you, as you ran blindly into the battle.\n";
        cout << "after a big battle, you finally vanquished" << enemy;//inserts the name you given
        cout << ". After the battle you noticed some of your adventures were still somewhat alive\n";
        cout << "You help them to get back to the village, the villagers saw you all come back and give you a reward." << GOLD_PIECES;//inserts default gold pieces
        cout << "\n";
        cout << leader << " took " << (GOLD_PIECES % survivors) << " The rest you give to the adventures with you.";//inserts the name you given and calculates what you wil get out of it
        cout << "\n";
    }
    else
    {
        cout << "You are doing it wrong, Adventure " << leader;
        cout << "! Press either '1' or '2', nothing else!\n";
        goto retry;
    }

    


    return 0;
}