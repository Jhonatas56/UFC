programa {
  funcao inicio() {
    inteiro a,b,c, menor, maior
    real media
    
    escreva("Informe seu 1� n�mero: ")
    leia(a)
    escreva("Informe seu 2� n�mero: ")
    leia(b)
    escreva("Informe seu 3� n�mero: ")
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

    escreva("O menor n�mero �: ", menor, "\n")
    escreva("O maior n�mero �: ", maior, "\n")
    escreva("A m�dia entre o maior e o menor n�mero �: ", media, "\n")
  }
}
