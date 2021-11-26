#include <iostream>
#include <windows.h>
#include <string>
#include<array>
using namespace std;



bool working=true;
bool waiting=false;
string shit;

void keypress(int s,int y=0 ,int z=0/*intput thecode of the key*/){
  
            
            while (true)
            {
              
            
                  INPUT inputs[6] = {};
                  ZeroMemory(inputs, sizeof(inputs));

                  inputs[0].type = INPUT_KEYBOARD;
                  inputs[0].ki.wVk = y;
                  inputs[3].type = INPUT_KEYBOARD;
                  inputs[3].ki.wVk = y;
                  inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;


                  Sleep(1000);
                  inputs[1].type = INPUT_KEYBOARD;
                  inputs[1].ki.wVk =s;

                  inputs[2].type = INPUT_KEYBOARD;
                  inputs[2].ki.wVk = s;
                  inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

                  
                  

               



                  



 /*              if (z!=0){
                  inputs[5].type = INPUT_KEYBOARD;
                  inputs[5].ki.wVk =z;

                  inputs[6].type = INPUT_KEYBOARD;
                  inputs[6].ki.wVk = z;
                  inputs[6].ki.dwFlags = KEYEVENTF_KEYUP;


               }*/
                  int why=   SendInput(6 , inputs, sizeof(INPUT)); //a function that inputs a thing to the pc it get excuted when it gets equaled to a int 
              
                  if (GetAsyncKeyState(VK_NUMPAD0)){  
                  
                  cout<<"program abl stopped";
                  break;
               }        
            }
         
}


int main (){
     cout<< "welcome to the program press 1  in the numpad to start ------>> \n activate ablities------->>1";
        while(working)
           {
          if (GetAsyncKeyState(0xA1))
              keypress(0x51,0x57,0x45);
   
            }
     
}
