programa {
  funcao inicio() {
    inteiro n, count
    real numberToCalc, result

    result = 0
    escreva("---- Calculadora de m�dia ----\n")
    escreva("Informe quantos n�meros voc� quer usar na sua m�dia: ")
    leia(n)

    se(n > 0) {
      para(count = 1; count <= n; count ++) {
        escreva("Informe seu ", count, "� n�mero: ")
        leia(numberToCalc)

        result = result + numberToCalc
      }

      result = result/n

      escreva("Sua m�dia de ", n, " n�mero(s) �: ", result)
    } senao {
      escreva("N�o foi � poss�vel calcular um m�dia com a quantidade de n�meros desejada")
    }
  }
}
