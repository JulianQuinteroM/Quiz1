/*
 "Programa para arrojar el resultado de la suma de todos los dijitos en pontencia de ellos mismos"
*/

int main(){
  
  init();
// SETUP
  int num=0, opr=0, total=0;
  
  Serial.begin(9600);
  
  
  
  // cout << "Ingrese el primer operando: ";
  Serial.print( "Ingrese el numero");  

  // cin >> num;
  while (Serial.available()==0);
  num=Serial.parseInt();
  
  Serial.println(num);
  
  while(num>0){
        opr=num%10; //saco el último dígito
        total+= pow(opr,opr); //en total guardo la potencia del dígito que saqué
        num/=10; //le quito un dígito al numero inicial para sacar el que sigue y elevarlo
    }
  // cout << "El valor de la suma a+b es: " << a+b << endl;
  Serial.print("El resultado de la suma es: ");
  Serial.println(total);
  
  // FIN SETUP
  while(true){
    // LOOP
    // FIN LOOP
  }
  
  return 0;
}