
from mamifero import Mamifero, ISonido


class Gato(Mamifero, ISonido):

    def __init__(self, n, p, b):
        super().__init__(n, p)
        self.__nBigotes = b

    def getBigotes(self):
        return self.__nBigotes

    def setBigotes(self, n):
        self.__nBigotes = n

    def alimentarse(self):
        print("El gato come pescado")

    def emitirSonido(self):
        print("Miau")
