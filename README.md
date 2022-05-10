# grafika

Varga-Molnár Bertalan | PY7QFH - Számítógépi grafika előrehaladás

# Féléves beadandó
A projektem témája a Naprendszer, a bolygók sorrendjének és kinézetének bemutatása. A bolygók (és a Nap) direkt nem méretarányosan vannak megjelenítve, mert olyan különbségek vannak, hogy a program lényegét venné el, ha mondjuk a Nap után az egyik kicsi bolygót szeretnénk megnézni a kamerával odanavigálni sok időbe telne és ez nem egy csillagászati szimulátor applikáció.

A scene tehát tartalmazza a Napot és a Naprendszer bolygóit, továbbá egy űr témájú égboltot és egy groundot, hogy ne a feketeség közepén legyenek a modellek. Lighting egy helyen található, az "égbolt" tetején, közepén. Van egy üveglap a bolygók és a föld között, ami nem egy modell, hanem egy poligon glVertex3f() függvényhívásokkal előállítva. Textúra tartozik minden modellhez továbbá a help menühöz, ami az irányítást ismerteti és az F1 megnyomásával érhető el (toggle of/off).

A K és L billenytűvel a fényerőt lehet szabályozni, nem a fényforrást állítjuk vele, hanem, hogy hogyan "reagál" az égbolt, föld és az anyagok a fényre. 

A kamerával nem tudunk kimenni egy láthatatlan falakkal körülvett térből (ez egyébként direkt egyezik azzal a téglalappal ami a kamera mozgási síkjára vetített képe az üveglapnak), melynek határán ütközés ellenőrzés van a Collided függvénnyel.

A modell fájlokat Blenderből exportáltam, triangulated mesh opció használatával.

Felhasznált kész kód:
https://gitlab.com/imre-piller/me-courses/-/tree/grafika/grafika (Piller Imre)