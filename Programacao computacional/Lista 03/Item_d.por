programa {
  funcao inicio() {
    inteiro n, count
    real numberToCalc, result

    result = 0
    escreva("---- Calculadora de média ----\n")
    escreva("Informe quantos números você quer usar na sua média: ")
    leia(n)

    se(n > 0) {
      para(count = 1; count <= n; count ++) {
        escreva("Informe seu ", count, "º número: ")
        leia(numberToCalc)

        result = result + numberToCalc
      }

      result = result/n

      escreva("Sua média de ", n, " número(s) é: ", result)
    } senao {
      escreva("Não foi é possível calcular um média com a quantidade de números desejada")
    }
  }
}
