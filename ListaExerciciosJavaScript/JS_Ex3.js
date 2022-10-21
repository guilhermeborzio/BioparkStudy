regular = prompt('Quantidade de horas regulares');
irregular = prompt('Quantidade de horas extras');

bruto = regular * 10 + irregular * 15;
liquido = bruto * 0.9;
resultado = 'Salario Bruto: ' + bruto + ' Salario Liquido: ' + liquido;

alert(resultado);
