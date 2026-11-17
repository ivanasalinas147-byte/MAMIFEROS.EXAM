
from mamifero import Mamifero, ISonido


class Ballena(Mamifero, ISonido):

    def __init__(self, n, p):
        super().__init__(n, p)

    def alimentarse(self):
        print("La ballena come krill")

    def emitirSonido(self):
        print("La ballena emite sonidos bajo el agua")
