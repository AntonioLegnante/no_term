import os 

file = 'file'

if not os.path.isfile(file):
    print("file inesistente o altro: creazione in corso")
    valore = 0
else:
    f = open (file, 'r')
    valore_letto = f.readline()
    cast = int(valore_letto)
    valore = int(input ("inserisci un valore"))
    
somma = cast + valore

f.close()

f = open (file, 'w')
f.write(str(somma))
f.close()