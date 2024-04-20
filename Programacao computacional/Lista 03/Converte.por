programa {
  inclua biblioteca Texto --> tx

  funcao inicio() {
    cadeia binario = ""
    inteiro numero, numeroOriginal, count = 1

    escreva("---- Conversor de binário ----\n")
    escreva("Informe um número: ")
    leia(numero)

    numeroOriginal = numero

    se(numero < 0) {
      numero = numero * (-1)
    }

    se(numero == 0 ou numero == 1) {
      escreva("O binário de ",numero," é: ", numero)
    } senao {
      enquanto(numero > 1) {
        se(numero % 2 == 1) {
          binario = tx.preencher_a_esquerda('1', count, binario)
        } senao {
          binario = tx.preencher_a_esquerda('0', count, binario)
        }

        numero = numero/2

        count++

        se(numero == 1) {
          binario = tx.preencher_a_esquerda('1', count, binario)
          count++
        }
      }

      escreva("O binário de ", numeroOriginal, " é igual a: ", binario)
    }
  }
}
