class Node:
    def __init__(self, data):
        self.data = data # Dado que foi enviado como parâmetro
        self.next = None # Inicializa o próximo Node como None

class LinkedList:
    def __init__(self):
        self.head = None # Inicia a cabeça da lista como None, pois está vazia
        self.tail = None # Inicia o rabo da lista como None, pois está vazia
        
    def insert_at_beginning(self, new_data):
        new_node = Node(new_data) # Cria um novo Node (new_node)
        if not self.head: # Se não tiver nenhum dado na lista,
            self.head = self.tail = new_node # A cabeça da lista, e o rabo da lista são a mesma coisa (o new_node)
        else: # Senão,
            new_node.next = self.head # O ponteiro next do new_node aponta para a cabeça da lista (inserção no início)
            self.head = new_node # A nova cabeça da lista é o new_node
    
    def delete_at_end(self):
        if not self.head: # Se não tiver cabeça da lista,
            print("Lista vazia.") # A lista está vazia.
            return
        if self.head == self.tail: # Se a cabeça da lista for igual ao rabo da lista,
            self.head = self.tail = None # A lista contém apenas um item, deletando ele, a lista se torna vazia (self.head == None && self.tail == None)
            return

        current = self.head # Ponteiro para o node atual, começando do ínicio da lista (cabeça da lista)
        while current.next != self.tail: # Enquanto o ponteiro para o próximo node da lista não for o tail,
            current = current.next # O ponteiro do node atual vira o ponteiro do próximo node (Está navegando toda a lista, node por node, até chegar no tail)
        
        current.next = None # Saiu do loop, então current.next == self.tail, então deleta o current.next, deletando assim o self.tail (current.next == None)
        self.tail = current # O novo tail se torna o ponteiro current.
    
    def print_list(self):
        current = self.head # Ponteiro para o node atual, começando do início da lista (cabeça da lista)
        while current: # Enquanto current tiver valor,
            print(current.data, end=" -> ") # Printa os dados do ponteiro current
            current = current.next # O current vira o próximo node
        print("None") # Saiu do loop, então quer dizer que, ao chegar no self.tail (rabo da lista), ele viu que o próximo node era inexistente, então, printa None.

if __name__ == '__main__':
    linkedlist = LinkedList() # Inicializa a lista
    
    linkedlist.insert_at_beginning('1') # Adiciona itens a lista
    linkedlist.insert_at_beginning('2')
    linkedlist.insert_at_beginning('3')
    linkedlist.insert_at_beginning('4')
    linkedlist.insert_at_beginning('5')
    
    print("--- Linked List ----")
    linkedlist.print_list()
    
    linkedlist.delete_at_end() # Deleta os 2 últimos itens da lista
    linkedlist.delete_at_end()
    
    print("\n--- Linked List após deletar os dois últimos itens ---")
    linkedlist.print_list()
    
    