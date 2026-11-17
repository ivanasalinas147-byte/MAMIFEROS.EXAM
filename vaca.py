
from mamifero import Mamifero, ISonido


class Vaca(Mamifero, ISonido):

    def __init__(self, n, p, l):
        super().__init__(n, p)
        self.__litrosDeLeche = l

    def getLitrosDeLeche(self):
        return self.__litrosDeLeche

    def setLitrosDeLeche(self, n):
        self.__litrosDeLeche = n

    def alimentarse(self):
        print("La vaca come pasto")

    def emitirSonido(self):
        print("Muuu")
