# 🧠 Estrutura de Dados 1 - FCTE/UnB
Nesse repositório, planejo manter guardado os estudos e conteúdos de **ED1**, tanto em sala de aula quanto fora. Aqui, estarão principalmente os códigos para as estruturas de dados e para os algoritmos relacionados.

## 💡 Ideia inicial
<div align=center><img src="./icons/C.svg" alt="C Icon" width="80" height="100"> <img src="./icons/Python-Dark.svg" alt="Python Logo" width="80" height="100"> <img src="./icons/TypeScript.svg" alt="TypeScript Logo" width="80" height="100"></div>

 Quero conseguir construir os algoritmos em 3 *linguagens diferentes*, para solidificar o conhecimento (tanto dos algoritmos, quanto das linguagens):
- O **C** foi escolhido por ser uma linguagem de baixo nível, permitindo entender profundamente como **ponteiros, alocação de memória e estruturas de dados** funcionam na prática. Além disso, a eficiência do C em tempo de execução ajuda a analisar a complexidade e o desempenho dos algoritmos.  
- O **Python** foi utilizado para implementar algoritmos de forma mais intuitiva e legível, focando na lógica sem se preocupar com gerenciamento de memória ou tipagem explícita. Sua vasta biblioteca padrão e estruturas embutidas, como listas e dicionários, permitem testar conceitos rapidamente.  
- O **TypeScript** traz os benefícios do **JavaScript**, mas com **tipagem estática**, tornando o código mais seguro e fácil de manter.

## 📂 Estrutura do Repositório
Dentro da pasta `algorithms`, existem outras pastas (**ex:** `binary-search`, `linear-search`) com **3 implementações** daquele algoritmo em específico.

## 💻 Como Rodar?

Para os arquivos em **C**, é necessário ter o *GCC* instalado. Após isso, rode:
```bash
cd algorithms/<caminho-do-algoritmo>
```
```bash
gcc algoritmo.c -o <nome-do-arquivo> && ./binary
```

Para os arquivos em **Python**, é necessário ter o *Python* instalado. Então, rode:
```bash
python3 algorithms/<caminho-do-algoritmo>/<algoritmo.py>
```

Para os arquivos em **TypeScript**, é necessário ter o *Node.JS* instalado. Rode:
```bash
tsc algorithms/<caminho-do-algoritmo>/<algoritmo.ts> && node <algoritmo.js>
```