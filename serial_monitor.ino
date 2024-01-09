String str= "Platforuma" ;

int num = 5 ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) ;   // to start serial monitor 
  Serial.println("Amit") ;
 for(int i = 0 ; i<10 ; i++){
  Serial.println(str);
 }

 for(int i = 1 ; i<=10 ; i++){
  
  Serial.print(i);
  Serial.print( ".");
  Serial.print(  str);
  Serial.println();
  
 }

 for(int i = 1 ;i<=10 ; i++){
    Serial.print(num );
    Serial.print("*" );
    Serial.print(i );
    Serial.print("=" );
    Serial.print(num*i );
    Serial.println();
 }
 

}

void loop() {
  // put your main code here, to run repeatedly:

}
