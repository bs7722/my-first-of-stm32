/*安裝步驟(先別問為什麼,至少比起我或你/妳模仿網路教學文章,卻沒一個模仿/重複實驗成功的來得好)*/
/*你若沒有取得下面描述的任何一項工具,或許,這些步驟不會有幫助*/
//安裝ST-LINK utility：「[ STM32 ST-LINK utility ]en.stsw-link004」
//安裝ST-link v2 driver：「[ ST-link v2 driver ]en.stsw-link009」
//安裝Programmer：「我自載的ST stm32CubeProgrammer(for 不同的OS環境)」的en.stm32cubeprg-win64_v2-6-0
//記得板子要跳線!
//記得參考githum.com/stm32duino「 https://github.com/stm32duino/Arduino_Core_STM32 」
//  檔案>偏好設定>額外開發管理員網址「 https://github.com/stm32duino/BoardManagerFiles/raw/master/package_stmicroelectronics_index.json 」
//  工具>開發版>開發版管理員, 鍵入STM32
//  工具>開發版:>選「Generic STM32F1 series」(選下去大概要等個1~3秒,讓IDE自己調整選項)
//  工具>Board part number:>選「Generic F103C8Tx」
//  工具>U(S)ART support:>選「Enabled(generic 'Serial')」
//  工具>USB support(if available):>維持「"無"」
//  工具>USB speed(if available):>維持「"Low/Full Speed"」
//  工具>Optimize:>維持「"Smallest(-Os default)"」
//  工具>C Runtime Library:>維持「"Newlib Nano(default)"」
//  工具>Upload method:>選「"STM32CubeProgrammer(SWD)"」
//以上設定完畢!就能直接編譯/燒錄了!!
//以上軟硬體環境：ACER Aspire V5-472g(notebook), OS:win10 64bit(20H2版)


//STM32上pin 13(PC13)接的LED預設是LOW=1,HIGH=0
//LED顯示的電壓值與人類習慣性直觀不同，其原因與硬體有關，在此不多做解釋，懂的人自己想通，不懂的自己再上網查(pull-up/pull-down circuit)。
#define pinLED PC13

void setup() 
{
  //Serial.begin(9600);
  pinMode(pinLED, OUTPUT);
}

void loop() 
{
  
//STM32上pin 13(PC13)接的LED預設是LOW=1,HIGH=0
  digitalWrite(pinLED, LOW);
  delay(1700);
  digitalWrite(pinLED, HIGH);
  delay(700);
  digitalWrite(pinLED, LOW);
  delay(300);
  digitalWrite(pinLED, HIGH);
  delay(300);
  digitalWrite(pinLED, LOW);
  delay(700);
  digitalWrite(pinLED, HIGH);
  delay(3300);
  //Serial.println("Hello World"); 
}
