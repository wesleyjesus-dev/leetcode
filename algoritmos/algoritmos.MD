No estudos dos algoritmos utilizamos a notação Big O para descrever sua performance.

O pior desempenho de um algoritmo é uma medida da complexidade no cenario mais desfavoravel.

Tipos de complexidades da mais rapida para a mais lenta

1. O(1) — Tempo constante
Exemplo: Acessar diretamente um elemento em um array (por índice).
O tempo de execução não aumenta à medida que a entrada cresce.
Pior caso: O mesmo número de operações, independentemente do tamanho da entrada.

2. O(logn) — Tempo logarítmico
Exemplo: Busca binária.
O número de operações aumenta logaritmicamente conforme a entrada aumenta.
Pior caso: Executa operações proporcionalmente ao logaritmo do tamanho da entrada.

3. O(n) — Tempo linear
Exemplo: Percorrer uma lista para encontrar um elemento.
O tempo de execução cresce linearmente com o tamanho da entrada.
Pior caso: Para uma entrada de tamanho 𝑛 n, você precisa realizar 𝑛 n operações.

4. O(n logn) — Tempo linearítmico
Exemplo: Algoritmos de ordenação eficientes, como Merge Sort ou Quick Sort.
O tempo de execução cresce mais rápido que linear, mas ainda é considerado eficiente.
Pior caso: Realiza 𝑛 log 𝑛
nlogn operações.

5. O(n 2) — Tempo quadrático
Exemplo: Bubble Sort, Insertion Sort no pior caso.
O tempo de execução cresce proporcionalmente ao quadrado do tamanho da entrada.
Pior caso: Muito ineficiente para entradas grandes.

6. O(n 3) — Tempo cúbico
Exemplo: Algoritmos de multiplicação de matrizes.
O tempo de execução cresce proporcionalmente ao cubo do tamanho da entrada.
Pior caso: Cada aumento no tamanho da entrada resulta em um crescimento cúbico nas operações.

7. O(2 n) — Tempo exponencial
Exemplo: Resolver o problema da Mochila (Knapsack Problem) usando força bruta, alguns algoritmos de backtracking.
O tempo de execução dobra para cada incremento no tamanho da entrada.
Pior caso: Extremamente ineficiente para entradas grandes, pois o tempo de execução cresce muito rápido.

8. O(n!) — Tempo fatorial
Exemplo: Resolver o problema do Caixeiro Viajante (TSP) com força bruta.
O tempo de execução cresce fatorialmente com o tamanho da entrada.
Pior caso: Uma das piores possíveis, pois o número de operações explode mesmo para entradas relativamente pequenas.

Cada uma dessas classes de complexidade reflete diferentes níveis de desempenho, sendo os tempos exponenciais e fatoriais os mais ineficientes.