programa {
  funcao inicio() {
    real number, result
    inteiro count

    result = 0
    escreva("---- M�dia de 10 n�meros ----\n")

    para(count = 1; count <= 10; count++) {
      escreva("Escreva o seu ", count, "� n�mero: ")
      leia(number)
      result = result + number
    }

    result = result/10
    escreva("A sua m�dia �: ", result)
  }
}
