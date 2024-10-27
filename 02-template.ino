/*
  Template LED
  Ceci est un long commentaire, 
  cela permet d'indiquer à l'ordinateur 
  d'ignorer ces lignes
*/
// Ceci est un autre commentaire qui ne tient que sur une seule ligne

// ---------- DEFINITION DES VARIABLES ----------
const int LED = 11; // = la LED utilise le port 11

// ---------- DEFINITION DES FONCTIONS ----------

/*
  L'IDE utilise d'autres lignes de code 
  qui ne nous sont pas visible.
  Dans ces lignes sont appelées les fonctions 
  setup() et loop()
*/

/* 
  La fonction setup() n'est appelée qu'une seule fois.
  A la manière d'une recette de cuisine, 
  cela permet de rassembler les ingrédients nécessaires
  à notre programme.  
*/
void setup()
{
  pinMode(LED, OUTPUT); // = la sortie 11 émet maintenant du courant
}

/*
  La fonction loop() est appelée à l'intérieur d'une boucle (d'où son nom)
*/
void loop()
{
  // Comment faire clignoter la LED ?
  /*
  digitalWrite(LED, HIGH); // Allume la LED (HIGH is the voltage level)
  digitalWrite(LED, LOW);  // Eteint la LED (by making the voltage LOW)
  delay(1000); // met en pause le programme pendant 1000 millisecondes
  */
}