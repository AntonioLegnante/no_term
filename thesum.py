import os 

file = 'file'



if not os.path.isfile(file):
    print("file inesistente o altro: creazione in corso")
    somma = 0
else:
    f = open (file, 'r')
    valore_letto = f.readline()
    somma = int(valore_letto)
    f.close()

valore = int(input ("inserisci un valore"))

somma += valore

f = open (file, 'w')
f.write(str(somma))
f.close()