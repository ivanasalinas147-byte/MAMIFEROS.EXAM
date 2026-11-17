
from abc import ABC, abstractmethod


class ISonido(ABC):

    @abstractmethod
    def emitirSonido(self):
        pass


class Mamifero(ABC):

    def __init__(self, n, p):
        self.__nombre = n
        self.__peso = p

    def comer(self, comida=None, cantidad=None):
        if comida is None:
            print("Esta comiendo")
        elif cantidad is None:
            print(self.__nombre, "come", comida)
        else:
            print(self.__nombre, "come", cantidad, comida)

    def getNombre(self):
        return self.__nombre

    def setNombre(self, n):
        self.__nombre = n

    def getPeso(self):
        return self.__peso

    def setPeso(self, n):
        self.__peso = n

    @abstractmethod
    def alimentarse(self):
        pass
