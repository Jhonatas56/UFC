programa {
  inclua biblioteca Texto --> tx

  funcao inicio() {
    cadeia binario = ""
    inteiro numero, numeroOriginal, count = 1

    escreva("---- Conversor de bin�rio ----\n")
    escreva("Informe um n�mero: ")
    leia(numero)

    numeroOriginal = numero

    se(numero < 0) {
      numero = numero * (-1)
    }

    se(numero == 0 ou numero == 1) {
      escreva("O bin�rio de ",numero," �: ", numero)
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

      escreva("O bin�rio de ", numeroOriginal, " � igual a: ", binario)
    }
  }
}
