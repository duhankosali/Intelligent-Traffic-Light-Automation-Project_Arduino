//Bedirhan BUYUKOZ - Software E.


//IMPORT TRAFFIC(çift þeritli yol.) PiNMODE
#define kirmiziotob 2
#define sariotob 3
#define yesilotob 4
#define kirmiziyayab 5
#define yesilyayab 6

//IMPORT TRAFFIC LAMB 3.(dönüþ yol.)
#define kirmizioto A1
#define sarioto A2
#define yesiloto A3
#define kirmiziyaya A3
#define yesilyaya A1

//BUTTONS IMPORT
int sayac=0; 
int butonDurumu=0; 
int Buton = A0;


//SEVEN SEGMENT DISPLAY IMPORT
int a = 13;
int b = A4;
int c = 8;
int d = 9;
int e = 10;
int f = 12;
int g = 11;


void setup()
{
//TRAFFÝC LAMB PÝNMODE  
pinMode(kirmizioto,OUTPUT);
pinMode(sarioto,OUTPUT);
pinMode(yesiloto,OUTPUT);
pinMode(kirmiziyaya,OUTPUT);
pinMode(yesilyaya,OUTPUT);
  
pinMode(kirmiziotob,OUTPUT);
pinMode(sariotob,OUTPUT);
pinMode(yesilotob,OUTPUT);
pinMode(kirmiziyayab,OUTPUT);
pinMode(yesilyayab,OUTPUT);
 
//BUTTON SETUP
Serial.begin(9600);//Serial Buton Aktif
pinMode(Buton, INPUT); 
pinMode(kirmiziotob, OUTPUT); 
pinMode(yesilotob, OUTPUT); 
pinMode (sariotob, OUTPUT);
  
  
//SEVEN SEGMENT PÝNMODE  
pinMode(g,OUTPUT);
pinMode(f,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(c,OUTPUT);
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
  
 
  
}
//TRAFFÝC LAMB
void loop()
{
    
  
 // TLAMB 3.(Dönüþ yolu)
digitalWrite(kirmizioto,HIGH);
digitalWrite(sarioto,HIGH);//reverse
digitalWrite(yesiloto,LOW);
digitalWrite(kirmiziyaya,LOW);
digitalWrite(yesilyaya,HIGH);


//Buton Fonk. 1.Çaðýrma 
button();


//TLamb (çift þeritli yol.)
digitalWrite(kirmiziotob,LOW);
digitalWrite(sariotob,HIGH);
digitalWrite(yesilotob,HIGH);
digitalWrite(kirmiziyayab,HIGH);
digitalWrite(yesilyayab,LOW);
 
  

  
//Sayac Fonksiyonu 
sifirYaz();//Sayaç Fonk.Çaðýrma
delay(1000);//1 sn Bekle
birYaz();
delay(1000);
ikiYaz();
delay(1000);
ucYaz();
delay(1000);
dortYaz();
delay(1000);  
besYaz();
delay(1000);
altiYaz();
delay(1000);
yediYaz();
delay(1000);
sekizYaz();
delay(1000);
dokuzYaz();
delay(1000);
sifirYaz();
delay(1000);

  
//Buton Fonk.  2.Çaðýrma
button();
  

digitalWrite(kirmizioto,LOW);
digitalWrite(sarioto,HIGH);
digitalWrite(yesiloto,LOW);
digitalWrite(kirmiziyaya,HIGH);
digitalWrite(yesilyaya,LOW);
delay(1000);

digitalWrite(kirmiziotob,LOW);
digitalWrite(sariotob,HIGH);
digitalWrite(yesilotob,LOW);
digitalWrite(kirmiziyayab,HIGH);
digitalWrite(yesilyayab,LOW);
delay(1000);

digitalWrite(kirmizioto,LOW);
digitalWrite(sarioto,LOW);
digitalWrite(yesiloto,HIGH);
digitalWrite(kirmiziyaya,HIGH);
digitalWrite(yesilyaya,LOW);

  
digitalWrite(kirmiziotob,HIGH);
digitalWrite(sariotob,LOW);
digitalWrite(yesilotob,LOW);
digitalWrite(kirmiziyayab,LOW);
digitalWrite(yesilyayab,HIGH);
delay(2000);//2 sn Bekle


}


//7 Segment Display 
 //9
void dokuzYaz()
  { 
digitalWrite(a, LOW);   
digitalWrite(b, LOW);   
digitalWrite(c, LOW);   
digitalWrite(d, LOW);   
digitalWrite(e, HIGH);   
digitalWrite(f, LOW);   
digitalWrite(g, LOW);   
  }              
  
  //8
void sekizYaz()
  { 
digitalWrite(a, LOW);   
digitalWrite(b, LOW);   
digitalWrite(c, LOW);   
digitalWrite(d, LOW);   
digitalWrite(e, LOW);   
digitalWrite(f, LOW);   
digitalWrite(g, LOW);   
  }             
  
  //7
  void yediYaz()
  { 
digitalWrite(a, LOW);   
digitalWrite(b, LOW);   
digitalWrite(c, LOW);   
digitalWrite(d, HIGH);   
digitalWrite(e, HIGH);   
digitalWrite(f, HIGH);   
digitalWrite(g, HIGH);     
  } 
  
  //6
  void altiYaz()
  { 
digitalWrite(a, LOW);   
digitalWrite(b, HIGH);   
digitalWrite(c, LOW);   
digitalWrite(d, LOW);   
digitalWrite(e, LOW);   
digitalWrite(f, LOW);   
digitalWrite(g, LOW);     
  }               

  //5
  void besYaz()
  { 
digitalWrite(a, LOW);   
digitalWrite(b, HIGH);   
digitalWrite(c, LOW);   
digitalWrite(d, LOW);   
digitalWrite(e, HIGH);   
digitalWrite(f, LOW);   
digitalWrite(g, LOW);     
  }               
  
  //4
  void dortYaz()
  { 
digitalWrite(a, HIGH);   
digitalWrite(b, LOW);   
digitalWrite(c, LOW);   
digitalWrite(d, HIGH);   
digitalWrite(e, HIGH);   
digitalWrite(f, LOW);   
digitalWrite(g, LOW);     
  }              
    
  
  //3
  void ucYaz()
  { 
digitalWrite(a, LOW);   
digitalWrite(b, LOW);   
digitalWrite(c, LOW);   
digitalWrite(d, LOW);   
digitalWrite(e, HIGH);   
digitalWrite(f, HIGH);   
digitalWrite(g, LOW);     
  }           
  
  //2
  void ikiYaz()
  { 
digitalWrite(a, LOW);   
digitalWrite(b, LOW);   
digitalWrite(c, HIGH);   
digitalWrite(d, LOW);   
digitalWrite(e, LOW);   
digitalWrite(f, HIGH);   
digitalWrite(g, LOW);     
  }               
  
  //1
  void birYaz()
  { 
digitalWrite(a, HIGH);   
digitalWrite(b, LOW);   
digitalWrite(c, LOW);   
digitalWrite(d, HIGH);   
digitalWrite(e, HIGH);   
digitalWrite(f, HIGH);   
digitalWrite(g, HIGH);     
  }              

  //0
  void sifirYaz()
  { 
digitalWrite(a, LOW);   
digitalWrite(b, LOW);   
digitalWrite(c, LOW);   
digitalWrite(d, LOW);   
digitalWrite(e, LOW);   
digitalWrite(f, LOW);   
digitalWrite(g, HIGH);     
 
  }





 //Buton Baþlangýç
void button()
   {

digitalWrite(yesilotob,HIGH);
butonDurumu=digitalRead(Buton);//Butona basýldýðýný Sorgula
if(butonDurumu==HIGH) 
  {
    sayac=sayac+1; 
    Serial.println(sayac);//Ekrana Sayacý Bastýr 
if(sayac==2) //2 Sefer Basýnca Deðiþ
    {
    digitalWrite(yesilotob,LOW);
    digitalWrite(sariotob,HIGH);
    delay(200);
    digitalWrite( kirmiziotob,HIGH);
    delay(200);
    digitalWrite(kirmiziyayab,LOW);
    digitalWrite(yesilyayab,HIGH);
    }
  }
  
while(butonDurumu==HIGH) 
  {
  delay(10);//10 ms Bekle 
  butonDurumu=digitalRead(Buton); 
  
  }
while(butonDurumu==LOW)
  {
  delay(10); 
  butonDurumu=digitalRead(Buton);   
  }//Buton HIGH olana kadar bu loop içerisinde dön. HIGH olduðundaysa void loop'un ilk satýrýna tekrar dön.
   }
//Buton Bitiþ