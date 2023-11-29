import time

# Definir la lista de elementos para la animación
animacion = ["-", "\\", "|", "/"]

# Repetir la animación 5 veces
for i in range(5):
    for elemento in animacion:
        # Mostrar el elemento en la consola y esperar 0.1 segundos
        print(elemento, end="\r")
        time.sleep(0.1)
