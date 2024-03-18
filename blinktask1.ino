// Define Morse code timings
#define DOT_DURATION 500
#define DASH_DURATION 1500
#define LETTER_SPACE_DURATION 1000
#define WORD_SPACE_DURATION 3000

// Function to blink a dot
void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DOT_DURATION);
  digitalWrite(LED_BUILTIN, LOW);
  delay(LETTER_SPACE_DURATION);
}

// Function to blink a dash
void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DASH_DURATION);
  digitalWrite(LED_BUILTIN, LOW);
  delay(LETTER_SPACE_DURATION);
}

// Function to blink a letter according to Morse code
void blinkLetter(char letter) {
  switch(letter) {
    case 'A':
    case 'a':
      dot();
      dash();
      break;
    case 'D':
    case 'd':
      dash();
      dot();
      dot();
      break;
    case 'I':
    case 'i':
      dot();
      dot();
      break;
    case 'T':
    case 't':
      dash();
      break;
    default:
      // If the character is not in Morse code dictionary, do nothing
      break;
  }
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  blinkLetter('A'); 
  blinkLetter('D'); 
  blinkLetter('I'); 
  blinkLetter('T'); 
  blinkLetter('I'); 
  
  delay(WORD_SPACE_DURATION); 
}