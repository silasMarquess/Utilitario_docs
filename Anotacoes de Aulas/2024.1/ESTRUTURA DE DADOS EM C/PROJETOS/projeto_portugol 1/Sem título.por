programa {
  funcao inicio() {

    real resultado
    real n1
    real n2
    inteiro op
    escreva("Informe  dois numesos")
    leia(n1)
    leia(n2)
    escreva("Informe uma opção:\n 1 soma 2 subtração 3 - mult 4 div")
    leia(op)
    se(op ==1){
      resultado = n1 + n2

    }senao se(op==2){
resultado = n1 -n2
    }senao se(op==3){
resultado = n1 * n2
    }senao{
resultado = n1/n2
    }
escreva("Resultado: ",resultado)

  }
}
