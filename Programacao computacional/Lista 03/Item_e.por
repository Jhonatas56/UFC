programa {
  funcao inicio() {
    inteiro a,b,c, menor, maior
    real media
    
    escreva("Informe seu 1º número: ")
    leia(a)
    escreva("Informe seu 2º número: ")
    leia(b)
    escreva("Informe seu 3º número: ")
    leia(c)

    se(a >= b e a >= c) {
      maior = a

      se(b >= c) {
        menor = c
      } senao {
        menor = b
      }
    } senao se (b >= a e b >= c){
      maior = b

      se(a >= c) {
        menor = c
      } senao {
        menor = a
      }
    } senao {
      maior = c

      se(b >= a) {
        menor = a
      } senao {
        menor = b
      }
    }

    media = (maior+menor)/2

    escreva("O menor número é: ", menor, "\n")
    escreva("O maior número é: ", maior, "\n")
    escreva("A média entre o maior e o menor número é: ", media, "\n")
  }
}
