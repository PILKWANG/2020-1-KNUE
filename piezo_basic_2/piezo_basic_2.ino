int piezo = 3;

int numTones = 8;
int tones[] = {261, 294, 330, 349, 392, 440, 494, 523};
 

void setup() {
  
  pinMode(piezo, OUTPUT);
  }

void loop() {
  for (int i = 0; i < numTones; i++) {
     
      tone(piezo, tones[i],500);
      delay(500);
    }
}


/*int numTones = 26;
int tones[] = {
330, 294, 261, 294, 330, 330, 330, 294, 294, 294,
330, 392, 392, 330, 294, 261, 294, 330, 330, 330,
294, 294, 330, 294, 261, 523};//비행기 노래*/ 

/*int numTones = 38;;
int tones[] = {293, 391, 493, 587, 587, 523, 493,
440, 493, 391, 493, 587, 783, 783, 783, 880, 693, 
659, 698, 440, 554, 698, 880, 783, 698, 659, 698, 
783, 698, 659, 587, 523, 493, 523, 587, 523, 391, 440};//하울의 움직이는성*/
