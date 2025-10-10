Faça um programa que abra e reproduza o áudio de um arquivo MP3

Resolução:

```python
import pygame  
pygame.init()  
pygame.mixer.music.load('ex021.mp3')  
pygame.mixer.music.play()  
pygame.event.wait()
```

Observación:
No hice este desafío por que no había conseguido desgargar la biblioteca "playsound" y tampoco tengo archivos mp3;
La biblioteca "pygame" tiene funciones de poner archivos mp3 y fotos.