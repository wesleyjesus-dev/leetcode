# Queue (Fila) - Estrutura de Dados

## Tipos de Queue
- **Fila Simples (FIFO)**: Primeiro a entrar, primeiro a sair.
- **Deque (Double-Ended Queue)**: Inserção e remoção em ambas as extremidades.
- **Fila de Prioridade**: Elemento com maior prioridade é removido primeiro.
- **Fila Circular**: Reutiliza o espaço do início quando o final é atingido.

## Operações Básicas
- **Enqueue (Inserção)**: Inserir um elemento no final da fila.
- **Dequeue (Remoção)**: Remover o primeiro elemento da fila.
- **Peek (Consultar)**: Verificar o primeiro elemento sem removê-lo.

## Complexidade de Tempo
- **Enqueue**: O(1) em implementações eficientes.
- **Dequeue**: O(1) em implementações com deque ou lista encadeada.
- **Peek**: O(1).

## Implementações
- **Array Contíguo**:
  - Problema: O(n) para remoção devido ao deslocamento de elementos.
  - Solução: Fila Circular.
- **Lista Encadeada**:
  - Armazenamento não contíguo.
  - Operações de O(1) para inserção e remoção.

## Exemplos de Implementação

### Fila com `deque` (Python):
```python
from collections import deque

class Queue:
    def __init__(self):
        self.queue = deque()

    def enqueue(self, item):
        self.queue.append(item)

    def dequeue(self):
        if len(self.queue) < 1:
            return None
        return self.queue.popleft()

    def peek(self):
        return self.queue[0] if len(self.queue) > 0 else None

    def is_empty(self):
        return len(self.queue) == 0

    def size(self):
        return len(self.queue)

### Usos Comuns
BFS (Busca em Largura) em grafos.
Sistemas de buffer (teclado, impressora).
Simulações de filas de espera (caixa de supermercado, filas de atendimento).


### 2. **Flashcards (Anki ou Quizlet)**
- **Flashcards** são excelentes para memorização de conceitos importantes. Você pode criar cartões com perguntas de um lado e respostas do outro, utilizando ferramentas como **Anki** (muito popular para estudo de algoritmos e programação) ou **Quizlet**.

#### Exemplo de flashcards para Queue:
- **Pergunta:** O que é uma fila (Queue)?
  - **Resposta:** Uma estrutura de dados que segue a ordem FIFO (First In, First Out).

- **Pergunta:** Qual é a complexidade de tempo para `enqueue` e `dequeue` em uma fila implementada com `deque`?
  - **Resposta:** O(1) para ambas as operações.

- **Pergunta:** Quando usar uma lista encadeada ao invés de um array para uma fila?
  - **Resposta:** Quando a fila precisa crescer dinamicamente ou quando a eficiência da remoção é importante.

#### Estrutura sugerida:
- **Fila (Queue)** no centro do mapa.
  - Tipos de Fila:
    - Fila Simples
    - Fila Circular
    - Deque
    - Fila de Prioridade
  - Implementações:
    - Array
    - Lista Encadeada
  - Complexidade de Tempo:
    - Enqueue: O(1)
    - Dequeue: O(1) ou O(n)
  - Exemplos de Uso:
    - BFS
    - Sistemas de buffer