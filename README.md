# Sistema Robô Explorador 
## Proposta de Projeto
## Instituto Federal de Santa Catarina 
## Projeto Integrador III - Engenharia de Telecomunicações

Guilherme Medeiros, Jhonatan Constantino

--------------------------
### RESUMO
Sistema de funcionamento de um robô explorador para ambientes hostis constituído de um sistema de movimentação, ativação e recepção de dados de uma câmera, medição de temperatura, pressão e angulação do robô.

### DESAFIO
Desenvolvimento de um sistema de um robô explorador de ambientes hostis com funcionalidades motoras (capacidade de se mover com ordens externas) e fazer leituras visuais com uma câmera. Além disso, algumas informações de estado do robô são interessantes, como sua temperatura, a pressão no ambiente externo ao robô e a angulação para determinar se, por algum motivo, o robô está em uma posição inoperante com a transmissão dos dados feita por LoRa.

### SOLUÇÃO PROPOSTA
O objetivo do trabalho é apresentar todas as funcionalidades do robô para um usuário através de outro sistema. Algumas das tecnologias ainda não estão decididas, entretanto, é necessário que o robô consiga se comunicar via LoRa com um controlador utilizando alguma tecnologia que possibilite alguma interface com o usuário. Além disso, dentre suas funcionalidades estão a de tirar uma fotografia (recolher amostra do experimento) e se mover. Na parte de sensoriamento, ele deve ser capaz de extrair e mostrar para o usuário utilizando o controlador, os dados de temperatura, pressão e angulação. Uma representação do projeto pode ser visto na figura 1.

### TECNOLOGIAS
São necessários três sensores, um de temperatura, um de pressão e um de tilt. Um ou dois (ainda não decidido) motores para a movimentação. 
Um módulo de câmera e dois transmissores LoRa, um para o controlador e outro para o robô. O robô em si deve ser um controlador (raspberry, FPGA ou outro), assim como o controlador.

![Figura 1](/imagens/figura1.png "Representação do Sistema do Robô (criada pelos autores)") 

### RISCOS
Algumas das tecnologias utilizadas nunca foram vistas pelos desenvolvedores (câmera, raspberry e motor e LoRa, por exemplo), com isso muito estudo é necessário para tornar viável o funcionamento do projeto final.

### ORÇAMENTO

### CRONOGRAMA
|Cronograma     |Tarefa                              |
|---------------|------------------------------------|
| 12/04 - 19/04 | Fase II do planejamento do projeto |
| 19/04 - 30/04 | Estudo do funcionamento das partes |
| 02/05 - 24/05 | Primeira fase de desenvolvimento   |
| 24/05         | Apresentação do primeiro ciclo     |
| 25/05 - 28/06 | Segunda fase de desenvolvimento    |
| 28/06         | Apresentação do segundo ciclo      |
| 28/06 - 12/07 | Ajustes e testes I                 |
| 12/07 - 26/07 | Testes finais e término do projeto |
