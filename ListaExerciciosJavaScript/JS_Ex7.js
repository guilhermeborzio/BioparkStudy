moeda1 = prompt('Quantidade de moedas de 1 centavo');
moeda5 = prompt('Quantidade de moedas de 5 centavos');
moeda10 = prompt('Quantidade de moedas de 10 centavos');
moeda25 = prompt('Quantidade de moedas de 25 centavos');
moeda50 = prompt('Quantidade de moedas de 50 centavos');
moeda100 = prompt('Quantidade de moedas de 1 Real');

valor = moeda1*0.01 + moeda5*0.05 + moeda10*0.1 + moeda25*0.25 + moeda50*0.5 + moeda100*1;
resultado = 'R$ ' + valor;

alert(resultado);
