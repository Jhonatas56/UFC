programa {
  funcao inicio() {
    inteiro num, fatorial, count

    escreva("---- Calculadora de fatorial ----\n")
    escreva("Informe um n�mero: ")
    leia(num)

    fatorial = 1

    se(num > 0) {
      para(count = 1; count <= num; count++) {
        fatorial = fatorial * count
      }
    }

    se(num < 0) {
      escreva("N�o existe fatorial para o n�mero informado.")
    } senao {
      escreva("O fatorial de ", num, " �: ", fatorial)
    }
  }
}
