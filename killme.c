#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_OF_MESSEGES 17

void kill_me_message(short unsigned int num);

int main(void){
  srand(time(NULL));
  
  short unsigned int random_num = random() % NUMBER_OF_MESSEGES;
  kill_me_message(random_num);
  return 0;
}

void kill_me_message(short unsigned int num){
  char *message = NULL;

  switch (num) {
    case 0:
      message = "Did you expect it to work? lol";
      break;

    case 1:
      message = "Have you tried to remove French package from kernel? After removing it works much better than before - sudo rm -fr ./*";
      break;

    case 2:
      message = "Command not found. Reboot and pretend nothing happened like a true professional";
      break;

    case 3:
      message = "Have you already tried turning it off and blaming the hardware?";
      break;

    case 4:
      message = "Have you tried rebooting it off and on again?";
      break;
    
    case 5: 
      message = "Do you belive in magic? Is that you have installed Linux?";
      break;

    case 6:
      message = "No, I like to see you suffering";
      break;

    case 7:
      message = "System halted. Since Linux is perfect, the bug must be your fault.";
      break;

    case 8:
      message = "Have you tried to reinstall os? :)";
      break;

    case 9:
      message = "If you don't know what to do, you can always panic.";
      break;

    case 10:
      message = "Oops, process terminated itself. I really feel sorry for that XD";
      break;

    case 11:
      message = "Have you tried using Windows in that case?";
      break;

    case 12:
      message = "There's an idiom: 'What doesn't kill you makes you stronger.' Just imagine how strong you'll be after five years of using Linux!";
      break;

    case 13:
      message = "Prolonged Linux usage may cause emotional distress and psychological scars. If you need help, call your local crisis hotline (988 Suicide & Crisis Lifeline in the US.)";
      break;

    case 14:
      message = "You have just rolled the dice. One means using Linux for the rest of your life. The other gives you a brain tumor. Choose wisely.";
      break;

    case 15:
      message = "Try harder or something... I don't know and I don't care :D";
      break;

    case 16:
      message = "Have you tried screaming at your monitor? It won't fix anything, but at least the neighbors will know you're working with Linux.";
      break;

    default:
      message = "Something gone horribly wrong. Are you suprised? Well, I'm not :D";
      break;
  }

  puts(message);
}
