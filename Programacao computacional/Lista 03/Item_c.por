programa {
  funcao inicio() {
    real number, result
    inteiro count

    result = 0
    escreva("---- Média de 10 números ----\n")

    para(count = 1; count <= 10; count++) {
      escreva("Escreva o seu ", count, "º número: ")
      leia(number)
      result = result + number
    }

    result = result/10
    escreva("A sua média é: ", result)
  }
}
