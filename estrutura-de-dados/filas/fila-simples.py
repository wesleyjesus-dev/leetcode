# FIFO

class Fila:
    def __init__(self):
        self.queue = []

    # adiciona o elemento no final da fila
    def enqueue(self, item: object):
        self.queue.append(item)

    # Remove o primeiro elemento da fila
    def dequeue(self):
        if len(self.queue) < 1:
            return None
        return self.queue.pop(0)
    
    def peek(self):
        if len(self.queue) < 1:
            return None
        return self.queue[0]
    
fila = Fila()

print("adicionando um item 1 na lista")
fila.enqueue(1)

print("adicionando o item 2 na lista")
fila.enqueue(2)

print("removendo item da fila")
fila.dequeue()

print("fila tem:", fila.peek())


