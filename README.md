# SlamBot

## Installation

The project is currently made up of the following components:

1. Arduino source which physically drives the robot.
2. A SLAM algorithm for extracting landmarks.

### Arduino Source

The Arduino source code is located under the *Robot* directory, inside this directory
you will find something similar to the following:

* AFMOTOR 		<- Library for the Adafruit motor shield.
* HMC588CL              <- Compass library.
* ps2                   <- PS/2 Arduino device library.
* SharpIR 		<- Library for getting readings from a Sharp infra red range finder.
* Robot.ino		<- Main driver program on the Arduino board.

*Copy* any directories you see here into your local Arduino sketchbook->libraries directory,
normally located under *Documents* or *My Documents* in Windows. In order to compile the 
Robot.ino sketch in the Arduino IDE it must be able to locate these libraries.

Start the Arduino IDE and open the Robot.ino file, attempt to compile it. If you have done
this properly then you shouldn't have any issues, otherwise double check you put the libraries
into the correct directory. 

If you make any changes to the libraries ensure that you change the versions under the Git repository
not the ones that you moved into your local sketchbook->libraries directory. Simply overwrite the ones
in your libraries folder to test your changes.

### SLAM Algorithm

As of current the project also contains the *SLAM for Dummies* algorithm which is implemented in C#, I
ported the code to Mono under Linux and I also added a GUI front end using GTK# and Cairo. To run this 
example you will need the following:

* MonoDevelop v4.2.2 or later.
* Mono runtime environment.
* A Linux environment that supports GTK# or if using Windows you'll need the GTK+ library installed.

This code can be run under Windows if you install the GTK+ GUI library but I haven't tried this myself. When 
you open the project simply compile and run it. Refer to the source code for more information.
