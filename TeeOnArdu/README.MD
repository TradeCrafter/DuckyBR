  
  
  Este trabalho é o resultado das buscas de um meio para utilizar o Arduino Leonardo emulando um teclado pt-BR ABNT2.
  O Arduino Leonardo tem a capacidade de emular um teclado HID USB, podendo assim ser utilizado para, furtivamente, executar códigos maliciosos e comprometer a segurança de um computador.
  
                        >>> "https://www.youtube.com/watch?v=4UxkpEODDXI" <<<

  É sabido que o Arduino Leonardo, utilizando a Lib Keyboard.h, não é capaz de emular outro layout de teclado que não o en-US, tornando o seu uso em computadores rodando Windows pt-BR, deveras complicado.
  Diversos artifícios já foram utilizados de modo a contornar, porém nenhuma solução definitiva foi encontrada, ainda.
  O presente trabalho, alcança o melhor método encontrado, onde se utiliza a Sintaxe do USBDriveBy, criado por Samy Kankar utilizando um Teensy, no entanto alguns caracteres são negados, a saber:(Ç,#,*), porém como todos os outros são escritos corretamente pelo Arduino e a maioria dos scripts não faz uso desses caracteres, este foi considerado o melhor método de usar o Arduino Leonardo como um USB RubberDucky. 
  
  O Arduino Utilizado nesse intento foi o CJMCU Beetle, trata-se de uma placa de desenvolvimento do ATmega 32U4, contando em seu barramento com interface SPI e I²C, algumas GPIOs e um pino de RESET que necessita ser utilizado em conjunto com o GND por meio de um microSwitch a ser soldado, com a finalidade de colocar a placa em modo de gravação pela IDE do Arduíno, toda a vez que vc desejar fazer o upload de algum script.
  ![alt tag](https://github.com/TradeCrafter/DuckyBR/blob/master/TeeOnArdu/CJMCUswitched.jpg)
  
  A IDE Arduíno utilizada é portable da Adafruit de versão 1.6.4, com as libs TeeOnArdu e TeensyDuino, que permitem ao compilador oferecer a placa TeeOnArdu, que possui o menu "Keyboard Layout", contendo diversos idiomas diferentes. Deve ser criada as pastas /hardware/avr dentro da pasta Arduino de "Meus Documentos", em uma maquina Windows, o arquivo zipado contendo a bilbioteca TeeOnArdu deverá ser extraído alí, criando então uma nova placa na IDE.
  ![alt tag](https://github.com/TradeCrafter/DuckyBR/blob/master/TeeOnArdu/Sem%20t%C3%ADtulo.jpg)
  
  
*** O Presente trabalho destina-se a intenções educacionais , apenas. O Proprietário deste Repositório não se responsabiliza pelo mal uso desta ferramenta. ***
