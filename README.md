# bypasscounter2
Passer-by counter made during an IOT-course in Haaga-Helia university. This version also recognizes by RFID-tag, whether the bypasser is a customer or staff(for example). Information about bypasses is sent here using a python3 script.
RFID reader code is based on an example by https://hobbycomponents.com/(https://community.particle.io/t/getting-the-rfid-rc522-to-work-solved/3571/3).
Mark Laatikainen’s RFID project(https://github.com/marklaatikainen/IoT-workshop/blob/master/iot_tyo.ino) has also been studied to get this working.

By: Miikka Kukko(https://mjmblogweb.wordpress.com/2017/05/31/passer-by-counter-and-calculator-version-2-iot-workshop-ohikulkutunnistin-ja-laskuri-versio-2-iot-tyopaja/).
Based on my earlier project(https://github.com/jotakinhan/bypasscounter) in which i collaborated with Juha Kulmala(https://jkmala.wordpress.com/2017/03/24/ohikulkusensori-iot-projekti/).
Teacher: Tero Karvinen(http://terokarvinen.com/2017/create-interent-of-things-for-8-eur-esp8266-12e-and-arduino).

Created based on an example and a library found here:(https://community.particle.io/t/getting-the-rfid-rc522-to-work-solved/3571/3).
Published according to these statements found there:

"This is an example of how to use the RC522 RFID module. The module allows reading
and writing to various types of RFID devices and can be found in our MFRC-522 
(HCMODU0016) and Ultimate RFID (HCARDU0068) kits. This example Arduino sketch uses
the RFID library written by Miguel Balboa to read the pre-programmed serial number 
from RFID cards and tags supplied with our RFID kits. Snapshots and links to the 
library are available on our support forum."

and

"You may copy, alter and reuse this code in any way you like, but please leave
reference to HobbyComponents.com in your comments if you redistribute this code.
This software may not be used directly for the purpose of selling products that
directly compete with Hobby Components Ltd's own range of products.

THIS SOFTWARE IS PROVIDED "AS IS". HOBBY COMPONENTS MAKES NO WARRANTIES, WHETHER
EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ACCURACY OR LACK OF NEGLIGENCE.
HOBBY COMPONENTS SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR ANY DAMAGES,
INCLUDING, BUT NOT LIMITED TO, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY
REASON WHATSOEVER."
