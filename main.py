
from gato import Gato
from vaca import Vaca
from ballena import Ballena


gato = Gato("Michi", 5.5, 12)
vaca = Vaca("Lola", 450.0, 25.5)
ballena = Ballena("Willy", 1200.0)


print("----- GATO -----")
print(gato.getNombre())
print(gato.getPeso())
print(gato.getBigotes())
gato.comer()
gato.alimentarse()
gato.emitirSonido()


print("\n----- VACA -----")
print(vaca.getNombre())
print(vaca.getPeso())
print(vaca.getLitrosDeLeche())
vaca.comer()
vaca.alimentarse()
vaca.emitirSonido()


print("\n----- BALLENA -----")
print(ballena.getNombre())
print(ballena.getPeso())
ballena.comer()
ballena.alimentarse()
ballena.emitirSonido()
