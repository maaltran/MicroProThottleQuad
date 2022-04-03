# MicroProThottleQuad

Lista de Componentes

1 Arduino Pro Micro

https://produto.mercadolivre.com.br/MLB-2157419794-1-arduino-pro-micro-atmega32u4-16mhz-5v-leonardo-compativel-_JM#backend=item_decorator&backend_type=function&client=bookmarks-polycard


6 potenciômetros deslizantes 10k Linear
https://produto.mercadolivre.com.br/MLB-1234683681-10un-potenciometro-deslizante-duplo-gsl60v-10kb-5905-_JM#backend=item_decorator&backend_type=function&client=history-polycard

1 potenciômetro rotativo 10k Linear (para o Compensador)
https://produto.mercadolivre.com.br/MLB-1471278933-potencimetro-10k-linear-com-eixo-l15-estriado-resistor-ohms-_JM#position=2&search_layout=grid&type=item&tracking_id=30bbf3b8-bb9a-437f-9391-5d3c2018854e

6 knobs diversos
https://www.soldafria.com.br/index.php?route=product/search&search=Knob%20AD-31F

1 caixa patola PB-114/2 36x97x147 (ou similar)
https://www.soldafria.com.br/index.php?route=product/search&search=Caixa%20Patola%20PB-114%2F2%2036x97x147

Fios diversos…. Qualquer fiozinho de eletrònica serve… pesquisar por “fio Jumper” na internet que você encontra vários….. Serve até os fios internos do cabo de rede.

Em abril/2022 eu gastei em torno de R$ 130 nesses itens, sem contar o frete.

Comece com ligação elétrica.
- Faça o barramento, ligando todos os pinos “1” ao VCC e todos os pinos “3” ao GND
- Ligar cada um dos pinos “3” dos potenciômetros nas entradas A0, A1, A2, A3, 4, 6 e 8
    IMPORTANTE: Para ocupar menos espaço e simplificar o desenho do esquema, utilizei somente imagens de potenciômetros rotativos. 
     Os potenciômetros deslizantes têm exatamente os mesmos pinos 1, 2 e 3.
     
Com a ligação elétrica pronta, baixe a IDE do arduino em https://www.arduino.cc/en/software
- Conecte o Micro Pro na USB, abra este arquivo Throttle_Quadrant_-_7_Axis.ino  pela IDE do Arduino
- Baixe a biblioteca “Joystick” zipada em https://github.com/MHeironimus/ArduinoJoystickLibrary
- Importe a biblioteca Joystick em “Sketch > Incluir Biblioteca > Adicionar Biblioteca ZIP
- Vá em Ferramentas > Placa > Arduino AVR Boards > selecione “Arduino Micro”
- Vá em Sketch > Carregar
Ao abrir o painel de conbtrole > Exibir impressoras e dispositívos, já deverá ver o Micro pró conectado como controle.
Faça a calibração para ver se está funcionando.


Fazer as trilhas na caixa utilizando uma micro retífica ou uma furadeira. Esse material ABS da caixa é bastante fácil de furar/ajustar.

Depois disso, é montar, parafusar, encaixar os knobs e se divertir!
