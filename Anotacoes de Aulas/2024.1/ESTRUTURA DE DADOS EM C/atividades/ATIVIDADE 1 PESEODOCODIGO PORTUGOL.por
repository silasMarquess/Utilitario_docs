programa
{
	
	funcao inicio()
	{
		//CODIGO CALCULA NOTA
		real notaAvaliando
		real notaAV
		real avs
		real nc
		real soma
		const real media =6
		real maiorNota =0

		escreva("Informe a nota do Avaliando Aprendizado: ")
		leia(notaAvaliando)
		escreva("Informe a nota da AV: ")
		leia(notaAV)
		maiorNota = notaAV
	
		se(notaAV<media){
           escreva("Aluno de NC \n")
           escreva("Informe a Nota NC: ")
           leia(nc)
           
           se(nc>maiorNota){
           	maiorNota = nc
           }
           
           se(nc<media){
           	escreva("Aluno ficou de AVS\n")
           	escreva("Informe a nota AVS do aluno:")
           	leia(avs)
           	
           	se(avs>maiorNota){
           		maiorNota = avs
           	}
           	         	
           	se(avs<media){
           		
           		escreva("Aluno Reprovado com: ",maiorNota+notaAvaliando)
           		
           	}senao{
           		escreva("Aluno Aprovado com: ",avs+notaAvaliando)
           	}
      	
           }senao{
           	escreva("Aluno Aprovado na NC com: ",nc + notaAvaliando)
           }
           
		}senao{
			escreva("Aluno aprovado com: ", notaAV + notaAvaliando)
		}
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1090; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */