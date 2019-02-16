# women-safety
# BACKGROUND:
Safety of Women from sexual assualt and other incidents of sexual violence is an unrelenting and 
increasingly frequent problem in modern Indian cities. Urban areas have opened up new employment opportunities 
for women which has also led to a increasing number of working women in urban areas; many of whom are new 
migrants to these cities and without local presence of family. Urban areas also see an increased interaction 
of women and men in workspaces, in transit (buses, trains, cabs, Uber, Ola etc.) and other public spaces; 
and during all times of the day and night. When a women is in a situation where she is alone and vulnerable 
to incidents of sexual assault, it is important that she is able to inform her friends and family of the 
situation immediately, without any delay and on a real-time basis so that help can arrive quickly. 

# OUR SOLUTION:
# 1 
USE Shake app (download from playstore and link it with our Women Safety app). When you shake the shakeApp, it should
open WomenSafety app. When the shaking continues, a message is sent to the predefined numbers "HEY am in DANGER".
The message shall also contain (a) Coordinates (b) Exact address. The shake in WomenSafety app also triggers the 
voice recorder which can record upto any seconds (for the project, we have given 10s) and the audio gets stored in
the device and also in the database. Either you can keep it with you for the privacy concers, or you can upload in the
cloud and send the link to the contacts aswell. At last, if the person is safe, she can use the amSafe button which will
messages to the phone number about her safety. 
We have also used the pulse sensor, to measure the pulse rate and can be seen when you click on the pulse button. (Make 
necessary changes in the backend)
# 2
(a) We used Alexa developer platform to use our own intents to trigger any Alexa integrated device.
(b) We have used Google Assistant, IFTTT and ADAFRUITS platform with the ESP to send the real-time location (you can use the ESP with UBIDOTS to send your location or use an additional GSM/GPS module) which shall be triggered by voice with some specific keywords (I have used IN DANGER) and then it shall send your location to the number you provide. 
Note: Connect with your app or a site for sending the messages.
