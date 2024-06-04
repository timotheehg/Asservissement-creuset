// Inclure la librairie
#include <L298N.h>

// Définir les pins
const unsigned int IN1 = 7;
const unsigned int IN2 = 8;

// Créer une instance pour le moteur
L298N motor(IN1, IN2);

void setup()
{
  // Utilisé pour afficher l'information
  Serial.begin(9600);

  // Attendre que le Serial Monitor s'ouvre
  while (!Serial)
  {
    // ne rien faire
  }
}

void loop()
{

  // Dire au moteur de tourner dans un sens
  motor.forward();

  // Méthode alternative
  // motor.run(L298N::FORWARD);

  //print le statut du moteur dans le serial monitor
  Serial.print("Is moving = ");
  Serial.println(motor.isMoving());

  delay(3000);

  // Stop
  motor.stop();

  // Méthode alternative
  // motor.run(L298N::STOP);

  Serial.print("Is moving = ");
  Serial.println(motor.isMoving());

  delay(3000);

  // Dire au moteur d'aller dans l'autre sens
  motor.backward();

  // Méthode alternative
  // motor.run(L298N::BACKWARD);

  Serial.print("Is moving = ");
  Serial.println(motor.isMoving());

  delay(3000);

  // Stop
  motor.stop();

  Serial.print("Is moving = ");
  Serial.println(motor.isMoving());

  delay(3000);
}