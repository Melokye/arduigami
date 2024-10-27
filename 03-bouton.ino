// ---------- DEFINITION DES VARIABLES ----------
const int DONNEES_BOUTON = 2;
const int LED = 11;

int etatBouton; 
// pas de const car la variable sera modifié pendant l'execution du programme
// c'est pour cette raison qu'on peut ne pas lui donner de valeur pour le moment

// ---------- DEFINITION DES VARIABLES ----------
void setup()
{
  pinMode(DONNEES_BOUTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  // on récupère l'état du bouton fournie par DONNEES_BOUTON
  etatBouton = digitalRead(DONNEES_BOUTON);

  // Comment allumer la LED seulement lorsque le bouton
  // est maintenu appuyé ?

  delay(10); // Delay a little bit to improve simulation performance
}

// De nouvelles instructions qui peuvent vous servir :
/*
  etatBouton == LOW   // vérifie si on appuie sur le bouton
  etatBouton == HIGH  // vérifie si on n'appuie pas sur le bouton 
*/