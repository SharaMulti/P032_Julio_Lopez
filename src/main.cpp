#include <iostream>
#include <string>

using namespace std;

class  Character{
  private:
  string CType;
  int LUse;
  int Reputation;
  int Life;

  public: 

  Character(int option)
  {
    switch(option)
    {
      case 1:
      CType = "Chef: ";
      CType = "chef";
      Life = 6;
      break;
      case 2:
      CType = "Maid: ";
      CType = "maid";
      Life = 10;
      break;
      case 3:
      CType = "Guard: ";
      CType = "guard";
      Life = 4;

    }
  }
  string getCType()
  {
    return CType;
  }
  void Heal(int amount)
  {
    Life = Life + amount;
  }
  void Damage (int amount)
  {
    Life = Life - amount;
  }
  int getLife()
  {
    return Life;
  }
};

int main() {
  int contador = 0; // Variable para contar las veces que se hizo el input
  string input;
  int classpick;
  int Intro;
  int Life;

cout << "It is the year 15XX, the king Dragokul has been calling to his castle lots and lots of clerics over for an unkown reason, when asked about it, he denies and turns the question around, you decide to investigate the motive of his actions, but, who are you? \n";
cout << "I am a: Chef (1)" << endl;
cout << "I am a: Maid/Butler (2)" << endl;
cout << "I am a: Guard (3)" << endl;
cout << "Exit game (Exit) ";

cin >> classpick;

Character player(classpick);

cout << player.getCType();


switch(classpick)
{
  case 1:
  cout << "You are the royal chef, your young life was spent perfeccioning your skills to always make hearty and good meals for your family of 4, even though your wish was becoming a simple restaurant chef, you got a silver platter opportunity to work for the king as its personal chef after you won a contest ith your star dish: The royal flapjacks, its your first day on the job actually, and youre already out to investigate what occurs at the castle, you grew so fast \n";
  break;
  case 2:
  cout << "You are a common maid/butler of the castle of Dragokul, your job is simple, clean, bring, and hear the demands of all the castle guards and (of course) the king Dragokul, your life was mostly uninteresting, you lived a poorly young life, and have been spending opver 20 years working at the castle, usually you look under the rug to all the evil things Dragokul has done in the past, specially beofre the civil war, but today it was different \n";
  break;
  case 3:
  cout << "You are the royal guard of the king, his right hand, THE man, and the only friend of the king at a point, when you were young, you were a recluse from the normal world, you lived in a rather cozy cave house far out into the forest, as you grew, your parents even let you work at the store with them, until one day, stress had built up in you, and you went into a rampage, killing over 20 residents with no weapon, this put you in life imprisonment, until the king came to visit, and offered you to work for him, you accepted out of need to redeem your own actions, as the years went by, you tolerated the kings misdeeds, but not today, as today you turn your head to the king and confront his actions, or die trying \n";
  break;
  default:
  cout << "Really funny";
};
cout << "\n";
cout << "It is a beautiful day here at the gates of the castle, you come from home to begin working right away and find out why the sudden call of clerics to the castle, you kept staring at the gate trying to steel yourself, until a cleric approaches the gate, passsing by you \n";
cout << "\n";
cout << "-Good morning-\n";
cout << "\n";
cout << "They spoke quietly, as they kept walking, you wonder what you should do: \n";
cout << "\n";
cout << "\n";
cout << "Walk through the front gate (1) \n";
cout << "Stop the cleric (2)\n";
cout << "Go back home (3) \n";
  cout << "Go to the kitchen (4) \n";
  cout << "Go to the storage (5) \n";
  cout << "Go to the throne room (6) \n";

cin.clear();
cin >> Intro;

switch(Intro)
{
  case 1:
  cout << "The cleric pushes the door open, a 3 meter tall wooden and iron door that has seen and will see more on its life, as you pass through the gates, you are met with a hallway with 2 doors to the sides, and forward, the way to the throne room \n";
  break;
  case 2: //Increases health by 1
  cout << "You stop the cleric dead in its tracks by grabbing him by the shoulder, he seems startled, as he turned around with a surprised expression, but quickly shoves you off \n";
  cout << "\n";
  player.Heal(1);
  

  cout << "-May the Gods bless you-\n";
  cout << "\n";
  cout << "With that, he returns to walking towards the gate, he opens it with a sturggle, you follow shortly after him, where he walks towards the throne room\n";
  break;
  case 3:
  cout << "You go back home, turning a entire 180 degrees, you come back to a bustling town filled with people, chatter and commerce is all that youre able to hear for miles even, but soon, that would end, as a man came severely wounded from the woods, claiming he was attacked by the dead, people gatheed around him and murmred all sorts of mannerisms, when suddenly, the main collapsed onto the floor, as people came closer to aid him, he suddenly jumped, and he began attacking the others, and the ones that got attacked, would get up and attack somebdoy else...\n";
  cout << "\n";
  cout << "After that, everything went foggy, your memories would not match with the others, your body felt numb constnatly, and it felt wet, as if raining, all you remember clearly as day, that being, a purple flame...\n";
  return 0;
  break;
  case 4:
  cout << "Without much tought, you skip past the cleric and open the door yourself, as your many runs of the castle quickly send you to the first place of your investigation, the kitched\n";
  cout << "\n";
  cout << "You head right into the door to the right in the hallway, leading to the kitchen, the kitchen is vast and filled with stoves and ovens displayed in 2 single rows, with crates and shelves containing all sorts of dry or hardly perishable foods, you snoop around the shelves all you could, trying to find anything that could maybe be of use, but to no avail, it is a kitchen after all, its just food and how to make foods\n";
  if(player.getCType() == "chef") // Increases health by 1
  {
    cout << "\n";
cout << "You remember however, that there is a really sweet fruit that just arrived from a shipment that the king ordered to try out, it doesn't help in your current situation, but you located hidden at the bottom of a shelf, and you decide to eat one, its sweet and delicious!\n";
player.Heal(1);
break;
  }
  case 5:
cout << "You decide to go straigh to the storage room, something there must have some information, you walk past the cleric and you open the gates, as you turn left and go through the door\n";
cout << "\n";
cout << "You are greeted by a set of barrels and boxes in a big room with just a couple torches hanged in the wall for light, most of theboxes are sealed shut, the ones that aren' have weapons of all kinds sprung upwards ready for quick grabs, you check all you can but to no avail, it's just a storage room\n";
if (player.getCType() == "maid")
{
  cout << "\n";
  cout << "You do however recall there being a very specific barrel containing a rare purple liquid that you told to be dismissed as grape juice, even though its foul smell was far from grapeish, you quickly find the respective barrel, and it seems to have been poured out, as it is missing a part of it's contents, you leave with the now knowing that someone is using this liquid\n";
}
if(player.getCType() == "guard") //heal 1
{
  cout << "\n";
  cout << "As you check the crates of equipment, you are quick to find a sort of weapon polish balm in new state, you wonder for abit, and look around you, after abit, you open the balm and began to polish your gauntlet, making it shine againts the harsh light of the torches againts the wall, probably no o*ne will be using it anyway\n";
  player.Heal(1);
}
break;
case 6:
cout << "With a clear goal in mind, you take a deep breath, and walk at a decently fast pace towards the gate, quickly open it with you shoudler, and walk straight into the hallway, where a door to each side are presented, and forward, the throne of the king\n";
}

cout << "You stand infront of  the throne room, and greeted by a red carpet that leads forward, you walk with your nerves showing slightly through your harsh movements, the king has not waken up, so the throne remains empty\n";
cout << "\n";
cout << "The throne room is vast and large all across it, yet it is empty and devoidd of any furtniture, the tall windows loom over from both sides, letting in lots of natural light, which illuminate it in its entirety, the throne is made of solid gold, in a rough, square shaped that almost looks as if it was just a cube or a marble statue, the cushion however looks relatively comfortable, if you can manage to get up the staircase that leads to the throne\n";
cout << "\n";
cout << "What would you do?\n";
cout << "\n";
cout << "Skip the throne room (1)\n";
cout << "Sit on the throne (2)\n";
cout << "Wait for another guard to arrive (3)\n";
cout << "Check behind the throne (4)\n";
cin.clear();
cin >> Intro;
switch(Intro)
{
  case 1:
  cout << "You decide that being in this room at all is a sign of bad luck, so you decide to skip it and continue your investigation somewhere else\n";
  break;
  case 2:
  cout << "You think to youreself how it feels to be the one person who sits on the throne, so, after steeling yourself for a bit, you began to climb up the stairs, after a while, you arrive, you take a deep breath, and take a seat, the royal cushion is as comfy as it looks, but the backside and sides could defenitely use some improvements\n"; // heal 1
  break;
  case 3:
  cout << "You hvae a rathe interesting idea, you hide yourself behind the doors, and now your idea is in motion, you decide to wait for someone else to come to this room, and then surprise them on the spot, or at least, ask them face to face\n";
  cout << "\n";
  cout << "It doesnt take long, for someone else to be on scout duty, as soon as they walk close enough, you basically pop out of nowehre for them and interrupt them, you ask about the schedule for today \n";
  cout << "\n";
  cout << "-Its a quiet day, there will not be much to do today, which is unusal, but hey, more freetime-\n";
  cout << "\n";

  cout << "He pats your back, and continues making his rounds, as for you, you continue your investigation\n";

  if (player.getCType() == "guard") // heal 1
  {
    cout << "You ask further before continuing, this time asking about where the king is\n";
    cout << "\n";
    cout << "-Naturally, the right hand is worried about the body, he is currently walking around town to get the attenion of more clerics to come to the castle for auditioning-\n";
    cout << "\n";
    cout << "You try asking him that what are they auditioning for, but he simply shrugs before he returns to his rounds\n";
    player.Heal(1);
  }
  break;
  case 4:
  cout << "You walk upstairs towards the emopty throne, as you stare at its golden base and ared cushion, you resist the urge to sit on it and decide to look behind it, but to your dissapointment, there is nothing here except for some money\n";
  break;
}

cout << "You decide to walk past the throne room and head to the first section of the castle, this being the hallway to the banquet hall, you enter through the door to the side, as you are greeted by chandeliers hanging from the roof, and a long red carpet that decorates the floor, many rooms strew from left to right, but the door to the banquet hall is at the end of the hallway\n";
cout << "\n";
cout << "Skip the other rooms and go to the banquet hall (1)\n";
cout << "Enter the armory (2)\n";
cout << "Enter the library (3)\n";
cout << "Enter the cold storage (4)\n";
cout << "Enter the infirmary (5)\n";
cin.clear();
cin >> Intro;

switch (Intro)
{
  case 1:
  cout << "You know already these rooms, or, somewhat, so there is not much point in visiting them again, you walk past all the doors layed out in front of you and go towards the banquet hall\n";
  break;
  case 2:
  cout << "You decide to enter the armory, the room is mostly stretched upwards with a high ceiling, where lots and lots of weapons of every type you can imagine are hanged in display, ready for the taking, a single table sits in the center of the room, where a maid can be seen sitting across it, polishing what appears to be a halbert\n";
  cout << "\n";
  cout << "-Good morning, is there anything you would require?-\n";
cout << "\n";
  cout << "She asked, her voice being rather quiet, like a whisper, but you managed to hear her, you go to the point, you want to know why the king is bringing so many clerics to the castle... she looks at you confuised, maybe she does not know herself...\n";
  if (player.getCType() == "chef") //heal 1
  {
    cout << "You use this opportunity to browse the new cooking equipment, you find a shiny new cooking knife with a stainless steel pan, you tell the maid if you could take it and she nods, as you leave your old weapons in the table\n";
    player.Heal(1);
  }
  if (player.getCType() == "maid") // damage 1
  {
    cout << "You offer your help to the maid to clean up the weapons, to which she gladly (or at leas she looked glad) to accept your help, she tells you the gist of it, which doe not actually sound that hard, but as you began to clean, you kept cutting yourself with the sharp edges, making blood stain the weapons as you wiped them, but the blood was coming off shortly after\n";  
    cout << "\n";
    cout << "-Now that i think of it, i think i may know something... i overheard from one of the other knights that the king is trying to sieze power of... something, i could no hear why, but the knights didn't look pleased with the conversation-\n";
    cout << "\n";
    cout << "She used this time to idly chatter to you about your topic, to which you learn something, as you finish the cleaning, the maid nods to you with a smile, as she startrs checking inventory, you let her be\n";
    player.Damage(1);
  }
  if (player.getCType() == "guard") // heal 1
  {
    cout << "You sit across from the maid, as you pull your own polishing kit from your backpocket, she remains quiet, as she observed you clean your weapon diligently, once you finish, you vow and leave the room\n";
    player.Heal(1);
  }
  break;
  case 3:
  cout << "You enter the library, inside you are quickly greeted by floating objects all around, these hover up and down in a whimsical manner, as you are mesmerized by the perfroamcne, you are quickly interrupted\n";
  cout << "\n";
  cout << "-Welcome to the library!, broswing for anything in specific?-\n";
  cout << "\n";
  cout << "A red haired wizard in blue robes is floating nearby you, as he asks you the question, you answer that you're looking for a reason for the king to need clerics\n";
  cout << "\n";
  if (player.getCType() == "chef")
  {
    cout << "-Of course!, he's prepraing a banqeut for all of them, after all, since the prince went missing, he has been obsessed with them-\n";
    cout << "\n";
    cout << "You leave after thanking him for the information\n";
  }
  if (player.getCType() == "maid")
  {
    cout << "-Aiming for a promotion?, well you should not worry about such trivialities, you're a maid after all, i would advsie you that you leave the castle before the morning of tomorrow-\n";
    cout << "\n";
    cout << "You felt shivers go down your spine as he said that, the happy tone of his voice made it uncanny, but you vow and leave\n";
  }
  if (player.getCType() == "guard")
  {
    cout << "-Guess the king didn't told you, he's is considering seizeing power of the island, you know that after the civil war, only Goblins and Orcs remained from the others, Dragokul is not entirely pleased with that outcome, so he has decided to make his rule absolute, i would advsie you stop him... but i'm afraid it might too late-\n";
    cout << "\n";
    cout << "Your body froze in place for a moment, as you simply look down to your feet, and walk back the way you came\n";
  }
  break;
  case 4:
  if (player.getCType() == "chef") //damage 1
  {
    cout << "You remember entering here when you needed meat, as you open the metallic door, a cold chill washed over you instantly, you are unable to enter the cold storage, as it was unnaturaly cold, you quickly close the door, and shiver as you walk away\n";
    player.Damage(1);
  }
  if (player.getCType() == "maid")
  {
    cout << "You freeze a bit before opening the cold storage door, as you suddenly open, you know where to look somehow, as you check behind the metallic meat crates, you find what you were trying to find, the corpse of another maid who had been severed gods know how long ago, you quickly read a note in what remains of her dress\n";
    cout << "\n";
    cout << "It reads: The lords have turned a blind eye on us, it is not safe anymore, Dragokul has shown its true colors, his reasonings, and we applaud him for it, well i won't, i will make my escape at dawn, an-\n";
    cout << "\n";
    cout << "The note has been thorn off, you take asigh, and get out of the cold storage, leaveing the note where you found it\n";
  } 
  if (player.getCType() == "guard") //damgae 1
  {
cout << "You open the door with confidense, as you walk in, the metal door closes behind you, as you begin to search all around as quickly as you could, you're unable to bear the cold for this long, so you rush outside, but before that, you managed to see what appeared to be, someones foot?\n";
player.Damage(1);
  }
  break;
  case 5:
  cout << "You decide to check the infirmary, or at least, the one at the bottom floor, as you open the door, you are greeted by a empty room filled with beds and blood all across the floor, it is not particullary a good smell\n";
  if (player.getCType() == "maid") //damage 1
  {
    cout << "You feel disgusted insatntly seeing the place, you uickly bring the utensils neccesarry to clean form the storage at the front, and begin to clean, you however, were too focused on cleaning, you didn't notice anything, and you feel quite tired\n";
    player.Damage(1);
  }
  break;
}

cout << "You enter the banquet hall tall dark wood doors, as you head inside, you see a large table strewn across the large room with at least 14 chairs all across it, a giant golden and glass chandelier hanging over the middle of the room, as the table has a red cover on top of it, but no dishes, you begin to wonder your next move\n";
cout << "\n";
cout << "Head back to the other side of the castle (1)\n";
cout << "Inspect the room more (2)\n";
cout << "Enter the kitchen (3)\n";
cout << "Look outside 4\n";
cin.clear();
cin >> Intro;

switch (Intro)
{
  case 1:
  cout << "You take a sigh, and turn 180 degrees, as you begin to walk back to the throne room, there is another hallway across from it like his one, as you walk, you wonder who the hell designed this place\n";
  break;
  case 2:
  cout << "You look around the room, mostly under the table, it is probably the most clean room in the entire castle, you think on what a good job the maids and butlers do to keep this place clean, but far from it, its nothing worthy\n";
  if (player.getCType() == "maid") // damage 1
  {
    cout << "As you finish inspecting, your breathing becomes agitated, you remember a few years ago looking under the table, and seeing a butler crushed under rubble in this very room, you shake that feeling quickly, and walk out quickly\n";
    player.Damage(1);
  }
  break;
  case 3:
  cout << "You decide to enter the kitchen, and think taht it is redundtant to have 2 kitchens, this one is by far larger than the one near the entrance,  having way more rows of stoves and shelves with even more dry foods, you look around, and find not much of note in this place, except that most foods are actually desserts, or materials for desserts\n";
  if (player.getCType() == "chef") // heal 1
  {
    cout << "You have good memories of this place, this is where you took the exam that allowed you to take this job, after all, you were here yesterday!, you leave the room with a big smile across your face\n";
    player.Heal(1);
  }
  break;
  case 4:
  cout << "You look through one of the 2 windows in this room, you gaze into the desne and thick forest that surrounds the castle, something you notice however, are what seem to be shadows of people near the tree branches, not moving, and wearing all kinds of clothes, you think about the civil war, and leave\n";
  break;
}

cout << "You get to the throne room, in here, you notice a different cleric than the one at the entrance is walking back and forth, pondering something\n";
cout << "\n";
cout << "Walk past him (1)\n";
cout << "Interrupt his thinking (2)\n";
cout << "Tell him to leave (3)\n";
cin.clear();
cin >> Intro;

switch (Intro)
{
  case 1:
  cout << "You simply ignore him, you also think to yourself that annoy his pondering might anger him\n";
  break;
  case 2:
  cout << "You poke his shoulder, and he looks up to you, for a moment\n";
  cout << "\n";
  cout << "-Oh, excuse me, i don't think the king has arrived, i apologize if i am being a inconvinience-\n";
  cout << "\n";
  if (player.getCType() == "chef")
  {
    cout << "You nod happily, and you tell him that he is welcome to wait for the king to return\n";
  }
  if (player.getCType() == "maid")
  {
    cout << "You tell him that he is welcome to stay, but you simply dismiss him and wlak away, you don't seem interested with him, nor does he\n";
  }
  if (player.getCType() == "guard")
  {
    cout << "You nod towards him, as he seems a bit, surprised, it seems that he wasn't expecting you to understand, which is a bit concerning now that you think about it\n";
  }
  break;
  case 3:
  cout << "You kindly tell him to leave, since not much of the staff is around, and that he is able to come back later\n";
  if (player.getCType() == "chef")
  {
    cout << "-Oh?, oh no no you're mistaken i gotta wait for the king, but, thanks for your concern-\n";
    cout << "\n";
    cout << "He remains walking back and forth, ignoring your words\n";
  }
  if (player.getCType() == "maid") //damage 1
  {
    cout << "As if you were not there, the priest keeps walking bacj and forth, ignoring what you told him\n";
    player.Damage(1);
  }
  if (player.getCType() == "guard") // heal 1
  {
    cout << "-Huh?, oh, uhm, yes, of course, sorry for the trouble, i will be leaving inmeddiately...-\n";
    cout << "\n";
    cout << "He quickly vows towards your direction, and he walks rather quickly to the main gate\n";
    player.Heal(1);
  }
  break;
}

cout << "You go to the next hallway, this one being somewhat different from the one you were before, in here, there is a staircase that goes down, and another one that goes up, as well as a room with a open cell door\n";
cout << "\n";
cout << "Go upstairs (1)\n";
cout << "Go downstairs (2)\n";
cout << "Go through the cell door (3)\n";
cin.clear();
cin >> Intro;

switch (Intro)
{
case 1:
cout << "You set your sights up the thick staircase, aand begin to head up it to the second floor of the castle\n";
break;
case 2:
cout << "You decide to go downstairs, as you go downstairs, you hear whispering and occassinal crying, as you reach the end of the stairs, you see around a near full jail of people of all kinds, but most of them seem to be either commoners, or... royal knights, they are battered and bruised, filled of cuts and bandages, they seem recent too\n";
if (player.getCType() == "chef")
{
  cout << "You decide to quickly tail out, the smell was pungeant, and it nearly made you gag, but most importantly, you brush off that imagine from your mind\n";
}
if (player.getCType() == "maid")
{
  cout << "You stare at them in different states of pain, yet you remain unbothered, you had to come here often, usually, for body disposal, so you leave the room after turning around\n";
}
if (player.getCType() == "guard") //heal 1
{
  cout << "You walk closer to the bars of a cell, the prison stares at you with blood all over his mouth and broken nose, laying on the floor, wearing the same kind of armor as you, you stare down to him, and remind yourself of what had happened...herecy, but with all that is going on, you start to doubt yourself, you leave the room, making a nod at the priosn who you stared at\n";
  player.Heal(1);
}
break;
case 3:
cout << "You go through the cell door, as you observe tons and tons of what appear to be file cabinets and crates, as you notice they appear to be, evidence from crimes\n";
if (player.getCType() == "chef")
{
cout << "You decide to snoop around for a bit, and find what appeared to be the case of a mass murder by food poisoning, it seems they were cooking rat meat and selling it as normal meals, which makes you feel weird after reading, so you go backstairs\n";
}
if (player.getCType() == "maid")
{
  cout << "You begin to peek all around the room, as you find a case that called your eye, the file reads that a royal maid was severed into several pieces by seemingly a crazed guard group, the body has not been found, and no culprit was ever taken, this was written around 4 days ago, you leave with a bitter taste in your mouth\n";
}
if (player.getCType() == "guard")
{
  cout << "You start to browse the files from around the date you joined the royal guard, and you find the file you were looking for, it tells the story of a man with a metalic glove murdering cold blooded a high amount of civilians and guards in a fit of rage, he was aprehended and taken to the royal cells, you stare at the paper for a while, and decide to fold it and pocket it for you\n";
}
break;
}

cout << "As you reach the upstairs, you are greeted by a hallway with a long row of doors, some being made of different materials, and at the end of the hallway, there lies a metal bar door, the doors across the hallway are all of different types, and to the other side, windows leading outside, you are able to see the sun is setting at the moment\n";
cout << "\n";
cout << "Go to the cell door (1)\n";
cout << "Go through the boreal wood door (2)\n";
cout << "Go through the old wooden door (3)\n";
cout << "Go through the metal door (4)\n";
cout << "Go through...another, cell door (5)\n";
cin.clear();
cin >> Intro;

switch (Intro)
{
  case 1:
  cout << "You stare at the doors, while they are all different and they call your attention, you feel like watching the sundown\n";
  break;
  case 2:
  cout << "When you open the door, it doesn't even creak, it seems well kept, as inside, you see why, it being non other than the king's bedroom, you can barely contain a smile, you think to yourself that in here out of all placed, you will find what you will need, or at least some lead to the investigation, the room has inside a big balcony with a glass door, a really big bed with yellow and red sheets and pillows, as well as a large carpet that fills the room, a couple bireal dressers and nightsands, itis a cozy room, but feels a bit overly riched out\n";
  if (player.getCType() == "chef")
  {
    cout << "What you find inside is that the king has been eating a lot, food carts are strewn about throughout all the room, with empty plates and glassess all over, what was he eating, you can't tell, but this is certainly not normal behaviour of the king\n";
  }
  if (player.getCType() == "maid")
  {
    cout << "You are not the designated maid for this room, you think you know the one who was meant to clean this room, but the room is entirely a mess, however, you do know where someone would hide their secrets, you began to check under mattress, and you quickly find the secret you were expecting, it was a bag of a sort of purple dust, it smells poisonous... \n";
  }
  if (player.getCType() == "guard")
  {
    cout << "You look around the room really quickly, you have never been inside this room, usually outside of it, as you inspect everything in a quick manner, you probably missed somethings, but the thing you do find, was a couple notes inside a drawer that said something related to firing you ...today\n";
  }
  break;
  case 3:
  cout << "As you open the old wooden door, it creaks loudly, so you just open it halfway, as you peek in between the door gap, you notice it looks like a cell for a child, it doesn't have any wooden walls like the others, no cute flooring, it simply had a wooden bed with hay, a filled toy box, and shackles on the wall with no windows, you're not quite sure what to make of this room, but could it be related to the prince's going missing\n";
  break;
  case 4:
  cout << "Before you open the metal door, it opens on its own, and a woman with butcher clothing is there, holding a bloody bag\n";
  cout << "\n";
  cout << "-Screw off, im not serving clients at the moment, go see Terro at the first floor-\n";
  cout << "\n";
  cout << "She bumped into your shoulder with anger, as you look inside the room, it seems the room has a white porcelean for floor and walls, abut they are covered in blood, as well as a single bed thats oddly wiped clean, a desk and chair, as well as another metal door that's under a really big lock\n";
  if (player.getCType() == "guard")
  {
    cout << "You don't pay mind to her bumping into you, you just stare blankly at the empty bed, something about it still makes you feel uneasy\n";
  }
  break;
  case 5://damage to all 1
  cout << "You peek through the cell bars to see whats behind, it's a giant gold pile sitting there, this must be the treasure room, further in, chests of all kinds and loot layed out free for the taking, you bump into the metal as you try to pen the door, it's locked\n";
  player.Damage(1);
  break;
  }

  cout << "You go upstairs, it is a closed off space with a spiraling staricase as if of a tower, as you walk up the stone staircase, you are met with another door, this one of wood, you open it, and are presented with a beautiful orange and black sky, as night is coming in\n";
  cout << "\n";
  cout << "Go back down to the throne room (1)\n";
  cout << "Go close to the edge (2)\n";
  cout << "Watch the sky turn dark (3)\n";
  cin.clear();
cin >> Intro;

switch (Intro)
{
  case 1:
  cout << "You take a deep breath, you needed some fresh air after all the walking you have been doing nearly non stop, you exhale, and begin to make your way back\n";
  break;
  case 2: 
  cout << "You walk close to the front edge, where you see the entrance of the castle, the path you took from the city to here, the vast forest that stretches for miles, and far off, the ocean, such a large thing and you are surrounded by it, with no other way to communicate with the outside world except via boat, you gaze at it as the sun stops shining and hides behind the ocean top\n";
  cout << "\n";
  cout << "As you look down, you notice a torch along the path, it seems the king has returned, you should go confront him, you turn around, and quickly make your way downstairs\n";
  break;
  case 3:
  cout << "You stare directly upwards, you see stars slowly appearing, as the sky slowly becomes dark\n";
  if (player.getCType() == "chef") //heal 1
  {
    cout << "You remember all you have seen as of today, and start to wonder if the king is as trustworthy as he seems, you can't fully grasp it, you were not alive during the civil war, but you start to wonder what happened, what made the king fake who he is, and if that you should be serving him anymore, you shake that feeling off, and take a sigh, as you walk back downstairs\n";
    player.Heal(1);
  }
  if (player.getCType() == "maid")
  {
    cout << "You start to only focus your eyes on the appearing stars, they remember you of faces with no names, only that you know them, you think to yourself about all the bad things the king has been doing since the civil war, and you despise not quitting right then and there, you grit your teeth, remembering all of the executions you had to watch as examples for obedience, you know that if you fail, your head will end in a spike, but you're too far, you stomp your foot in rage, and make your way back down\n";
  }
  if (player.getCType() == "guard")
  {
    cout << "You watch the sky turn dark, and focus on how the stars above seem dim, your eyes feel heavy, you think about the king, the one who took you out of prison to do his evil deeds in the name of justice, your faith is shaken, your footing weakening, and your mind doesn't feel like yours, you remember your parents, the ones who looked after you, the ones who gave you your gauntlet, you know that this is far greater than you, and yet, you didn't stop, and kept going, you clutch your fist, and walk back downstairs\n";
  }
}
  
  cout << "you make your way all the way to the throne room as quickly as you could, as you don't encounter anyone on your path, you arrive, nd see  sight that would sicken you to your core\n";
  cout << "\n";
  cout << "The king, sitting on his throne, watching as a perosn in puprle robes draws a pentagaram using a purple powder in the midle of the room. you watch with fear as the king hs an evil grin across his beared face, laughing and chuckling ocassionally as his mind fills with thoughts, he quickly notices you peeking from a side\n";
  cout << "\n";
  if (player.getCType() == "chef")
  {
    cout << "-Ahh, you are here from yesterday, yes?, my new royal cook, worthy of such a title!, i was expecting you'd come, but not stay this late!, say, why don't you stay?, you are about to witness something magnficient, and then, let us have that banuet i promised you, with your delicious star dish-\n";
  }
  if (player.getCType() == "maid")
  {
    cout << "-Oh?, what do you think you are doing here?, this is the throne room, nd you are not allowed here unless i am not in the room!, i should fire you, but it doesn't matter anymore, for you would soon learn your place-\n";
  }
  if (player.getCType() == "guard")
  {
    cout << "-Welcome welcome, i was hoping you'd come, my right hand, stay please, i wanted you to see the show before it began, as my most priced knight, this is the biggest honor i could ever bestow upon you-\n";
  }
cout << "\n";
cout << "As he said those words, the purpled robed person began to chant something while flailing it's arms near a book, as the pentagram began to grow purple, the grin in the kings face grew larger\n";
cout << "\n";
cout << "Leave the castle (1)\n";
cout << "Stop the person chanting (2)\n";
cout << "Ask the king what's happening (3)\n";
cout << "Confront the king (4)\n";
  cin.clear();
cin >> Intro;

switch (Intro)
{
  case 1:
  cout << "You sprint quickly across the room, and head to the main gate, as you put your shoudler to open it, it won't budge, you try and try, but are unable to escape the castle\n";
  break;
  case 2:
  cout << "You run towards the robed figure, as you hear the king yell at you to stop, you tackle with your arms and shoulder the robed figure, they were frail and weak, so they did not pose any threat, but the pentagram kept glowing, as you stand up, you watch the scene unfold despite your effort\n";
  break;
  case 3:
  cout << "You yell at the king your question, to which he laughs and turns around to talk to you, a madmans face imprinted on his\n";
  cout << "\n";
  cout << "-Something that will change the course of history for the next 1000 years and more to come!, the overwhelming power that i truly deserve!-\n";
  break;
  case 4:
  if (player.getCType() == "chef")
  {
    cout << "You tell the king about your concerns over his health, that he may be taking this too far, and that he should call this off, you did not come here to witness anything like this, and that you just came here to cook for him and the others\n";
    cout << "\n";
    cout << "-Poor fellow aren't you?, it shall not mater, for you will still serve the porpuse i gave into you, but now, with the power to accomplish it, nothing will stop me!-\n";
  }
  if (player.getCType() == "maid")
  {
    cout << "You yell at the king about all the bad things he has done towards his own people of his kingdom, and that he shamelessly makes people like you suffer for no reason, or just his amusement, you tell her about all the ones on your line of work that died just because of his stupid decisions and unawareness to what the people really need, a real ruler\n";
    cout << "\n";
    cout << "The king growls at you, gritting his teeth, as he turns to face you\n";
    cout << "\n";
    cout << "-And you will, you ungrateful bastard, you will, and i will show everyone, what it truly menas to lead, something you probably don't know even the slightiest bit of-\n";
  }
  if (player.getCType() == "guard")
  {
    cout << "You told the king that this wasn't the reason he agreed to the deal, that you are not gonna be his puppet anymore, and that you will follow what is true justice, and that if that meant killing him, you would gladly do so, for this is what you truly stand for, and what he should've stand for\n";
    cout << "\n";
    cout << "-It is truly a shame you cannot grasp the size of the situation, i had high hopes for you in the new world i will create, but maybe you were always destined to sink at the bottom with your parents-\n";
    break;
  }
}

  cout << "From the circle a light emerged, and a form arised from it, a giant skeleton with it's skull cracked from his left side, it placed it's bony arms onto the ground, and aproached the king with its hollow skull, the robed figure, watching calmly behind the skeleton, as you take a few steps back\n";
  cout << "\n";
  cout << "-I am Tarnished, ruler of the first ring of hell, Wrath, my chosen Lara has requested that i grant you 1 wish, in exchange of hers, so tell me, Dragokul, what is it you wish for?-\n";
  cout << "\n";
  cout << "The skeleton spoke, looming all of you, nearly breaking the roof with his mere size, as the king stood up, letting his red cape flow through with the wind coming from the breaths of Tarnished\n";
  cout << "\n";
  cout << "-Power, power beyond measure without limit, enough to conquer the planet, and rival the gods themselve,s the power for the mere island to be a threat to the entire world, and all for me to manage from the shadows-\n";
  cout << "\n";
  cout << "the king exclaimed, as Tarnished beared a grin, he snapped his fingers, as he moved upwards, breaking through the roof, a purple smoke filled the air, as you looked down, the robed figure was nowhere to be seen, the king, laughing, began to look at his body, it was decomposing, his skin and flesh melting away through the smoke, as soon, his skeleton landed on his throne, Tarnished began to laugh, as he then looked down to you, noticing you were there\n";
  cout << "\n";
  cout << "-Well well, a little servant i assume?, i see you lack the power, i shall grant it to you, for now i shall be taking over the king, and thus, making you part of my army\n";
  cout << "\n";
  if (player.getCType() == "chef")
  {
    if (player.getLife() >= 10)
    {
      cout << "Tarnished shrinks down to human size, as he draws from out of nowhere a pair of cooking knives, and throws them at you, you managed to deflect one, but the other one stabs you in the eye, you hold your eye as tight as you could, as you began to run away, you bump into gates, and now they open, you run away from the castle, not followed by anyone, aas it becomes hard for you to see clearly, you see a looming purple cloud begin to spread all through the island\n";
      cout << "\n";
      cout << "Your fate remains uncertain, what unfolded was the descturction of civilization as we know it, the dead rising up and attacking people, converting them into their unending army, but you will press on, whatever it takes\n";
      cout << "\n";
      cout << "Ending 2: The royal chef\n";
      return 0;
    }
    if (player.getLife() < 10 )
    {
      cout << "Tarnished shrinks down to human size, as he draws out of nowhere a pair of of cooking knives, he throws both of them at you, in shock of the sudden transformation, you were not able to react, you feel both of your eyes get stabbed at the same time, as you yell and stumble in pain, a bone foot is placed on your abdomen, and suddenly, both of your eyes and pluckered out, you go blind instantly, and you fall to your side, dying a quick and painful death\n";
      cout << "\n";
      cout << "Ending 1: The tarnished general\n";
      return 0;
    }
}
if (player.getCType() == "maid")
{
  if (player.getLife() >= 10)
  {
    cout << "Tarnished shrinks down to human size, as he pulls from thin air out a sword, as he lashes at you, you get cut across your belly, you begin to bleed out, but you are not dead, Tarnished laughs at you, you stand up quickly and begin to run away, the door opens quickly as you bash into it, leaving a trail of blood, you look behind you, and see a looming purple cloud start to cover the whole island\n";
    cout << "\n";
    cout << "Your fate remains uncertain, what unfolded was the descturction of civilization as we know it, the dead rising up and attacking people, converting them into their unending army, but you will press on, whatever it takes\n";
    cout << "\n";
    cout << "Ending 3: The last maid\n";
    return 0;
  }
  if (player.getLife() < 10)
  {
    cout << "Tarnished shrinks down to human size, as he pull from thin air out a sword, as he lashes at you, you get cut across your belly and back, swiftly cutting you in half from the waist, as your torso falls down to the floor, your legs shortly follow, you stop feeling anything at all, and quickly die a painless death\n";
    cout << "\n";
    cout << "Ending 1: The tarnished general\n";
    return 0;
  }
}
if (player.getCType() == "guard")
{
  if (player.getLife() >= 10)
  {
    cout << "Tarnished shrinks down to human size, as he summons from nowhere a spear, he throws it at you at inhuman speeds, you put your hand up to block the spear, the spear pierces through your gauntlet and sticks out from your shoulder, you take heavy breaths, as you look at Tarnished dead into his eyes, barely able to keep your footing\n";
    cout << "\n";
    cout << "-You know that fighting me in this state won't amount to anything, you would be dying a meaningless death, leave, and amount an amount of strenght worth my time, chosen of the gods-\n";
    cout << "\n";
    cout << "You take the words to heart, and after some thinking, you stand up and limp your way outside, in a last act of mocking, Tarnished opened the gates for you, as you walk outside, you take a few steps, and look back, a purple cloud looming over the island, soon to cover it in its entirety\n";
    cout << "\n";
    cout << "Your fate remains uncertain, what unfolded was the descturction of civilization as we know it, the dead rising up and attacking people, converting them into their unending army, but you will press on, whatever it takes\n";
    cout << "\n";
    cout << "Ending 4: The right hand\n";
    return 0;
    }
  if (player.getLife() < 10)
  {
    cout << "Tarnished shrinks down to human size, as he summons from nowhere a spear, he throws it at you at inhuman speeds, you put you hand up to block the spear, the spear pierces tyhrough your gauntlet and stick out from your shoudler, piercing your arm entirely, you take heavy breaths, you,re feeling dizzy, you stare at Tarnished hollowed skull as he laughed at you, you fall on your belly, and you soon die, a painful yet slow death\n";
    cout << "";
    cout << "Ending 1: the tarnished general\n";
    return 0;
  }
}

while (true) {
    getline(cin, input);  // Lee una línea de input
    if (input == "Exit") {
      break; // Salir del bucle si el input es "Exit"
    }
    contador++; // Incrementar el contador
    if (contador >= 31){

      cout << "Your time has ran out. ";
      return 0;
   }
  }


  return 0;
}