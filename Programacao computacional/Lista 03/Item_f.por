programa {
  funcao inicio() {
    inteiro num, fatorial, count

    escreva("---- Calculadora de fatorial ----\n")
    escreva("Informe um número: ")
    leia(num)

    fatorial = 1

    se(num > 0) {
      para(count = 1; count <= num; count++) {
        fatorial = fatorial * count
      }
    }

    se(num < 0) {
      escreva("Não existe fatorial para o número informado.")
    } senao {
      escreva("O fatorial de ", num, " é: ", fatorial)
    }
  }
}
