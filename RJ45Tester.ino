//RJ45 Tester
//ist eigentlich nur ein besseres Lauflicht.

int i = 200;
byte j = 2;
void setup() {
  for (j = 2; j < 10; j++) {
    pinMode(j, OUTPUT);
    digitalWrite(j, LOW);
    pinMode(10,INPUT);
  }
}
void loop() {
  for (j = 2; j < 10; j++) {
  digitalWrite(j,HIGH);
  if (digitalRead(10)) delay (80);
  else delay(200);
  digitalWrite(j,LOW);}
}
 /*                                          ___      ___                         LED     /.\ 
 -------------------------------------------|___|. .-|___--------X===========X--o->|---. / | \
 |                               +-----+     1k  | | 560R            BN         '-|<---o   |  
 |  +----[PWR]-------------------| USB |--+      | |                                   |   |  Antiparallel zu den LEDs sind Dioden geschaltet, z.B. 1n4148
 |  |                            +-----+  |      | |   ___                        LED  |   |  
 |  |           GND/RST2  [ ] [ ]         |      | | -|___|------X===========X--o->|---o   |  
 |  |         MOSI2/SCK2  [ ] [ ]  SCL[ ] |      | | |560R           BN/WT      '-|<---o   |  
 |  |            5V/MISO2 [ ] [ ]  SDA[ ] |  GND | | |                                 |   |  
 |  |                             AREF[ ] |   |  | | |   ___                      LED  |   '  
 |  |                              GND[ ] |\  o  | | | -|___|----X===========X--o->|---o      
 |  | [ ]N/C                    SCK/13[A] | \    | | | |560R         GN         '-|<---o      
 |  | [ ]v.ref                 MISO/12[A] |  \.  | | | |                               |      
 |  | [ ]RST                   MOSI/11[A]~|   o  | | | |   ___                    LED  |      
 |  | [ ]3V3    +---+               10[-------o--' | | | -|___|--X===========X--o->|---o      
 '------]5v     | A |                9-------------' | | |560R       BU/WT      '-|<---o      
    [ ]GND     -| R |-               8[--------------' | |                             |      
    | [ ]GND   -| D |-                    |            | |   ___                  LED  |      
    | [ ]Vin   -| U |-               7-----------------' | -|___-X===========X--o->|---o      
    |          -| I |-               6[------------------' |560R     BU         '-|<---o      
    | [ ]A0    -| N |-               5[--------------------'                           |      
    | [ ]A1    -| O |-               4[--------------------- ___                  LED  |      
    | [ ]A2     +---+           INT1/3[------------------- '|___|X===========X--o->|---o      
    | [ ]A3                     INT0/2[---------------.- |  560R     GN/WT      '-|<---o      
    | [ ]A4      RST SCK MISO     TX>1[ ] |           |  |                             |      
    | [ ]A5      [ ] [ ] [ ]      RX<0[ ] |           |  |   ___                  LED  |      
    |            [ ] [ ] [ ]              |           |  '--|___|X===========X--o->|---o      
    |  UNO_R3    GND MOSI 5V  ____________/           |     560R     ORG        '-|<---o      
     \_______________________/                        |                                |      
                                                      |      ___                  LED  |      
    http://busyducks.com/ascii-art-arduinos           ------|___|X===========X--o->|---o      
                                                            560R     ORG/WT     '-|<---'      
                                                                                                   
                                                                                                    
 */                                                                                                 
                                                                                                    
                                                                                                    
 
