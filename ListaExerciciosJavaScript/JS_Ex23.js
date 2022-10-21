dataNascimento = prompt('Data de nascimento');
anoAtual = prompt('Ano atual');

anos = anoAtual - dataNascimento;
meses = anos*12;
dias = meses*30;
semanas = dias/7;

alert('Sua idade e: ' + anos + ' anos ou ' + meses + ' meses ou ' + semanas + ' semanas ou ' + dias + ' dias');

