# Vi-Char Augmented Reality Repo

This is where the AR team's code will be developed and live for a while. It seems possible that the AR team's
code will be integrated with the mobile group's in the coming weeks.

## Developer Installation Instructions

The following instructions will allow the user to download this project and run the application on a phone. They will not
enable the user to modify the code. If you would like this functionality, see the installation notes below. These instructions assume
that the user has a current versions of the Eclipse IDE, Git, and the Android SDK installed.

If you need any of these, you can get them here:

* [Eclipse](http://www.eclipse.org/downloads/)

* [Git](http://git-scm.com/downloads)

* [Android SDK](http://developer.android.com/sdk/index.html) - Be sure to follow the installation instructions thoroughly.
To run this application, you will need the Android 2.2 (API 8) package installed. You can download it though the Android SDK manager.
It is also recommended that you install the Eclipse ADT plugin. You will find instructions in the Android SDK installation instructions.

Once you have all of the above installed, download the Augmented Reality repository from
https://github.com/UPS-CS240-F12/augmented-reality.git and follow the steps below:

1. Find the ImageTargets folder under augmented-reality/samples/ and import it as existing Android code. You should have a project named
com.qualcomm.QCARSamples.ImageTargets.ImageTargets.

2. You will likely need to add a new class path variable to the Java build path. Open then Eclipse Preferences pane. Got to Java->Build Path->Classpath Variables.
Create a new classpath variable named 'QCAR_SDK_ROOT' and point its path at the root of the augmented reality repository (by default it is augmented-reality/).

3. At this point you may have a build error. If all you want to do is install the application on a phone and run it, this is easily resolved. If you want to modify
any of the JNI resources or code, then you will need to install the android native development kit. See notes below. Otherwise, select the project, then open the project
properties under the Project->Properties menu. In the properties window, select builders, and then remove the offending builder from the list (most likely an unrecognized
external builder).

4. Clean the project.

5. Connect an Android (API 8 or newer) device with USB debugging enabled (Settings->Applications->Development).

6. Run as an Android application on the connected device.

### Installation Notes

1. We have only been able to run this application directly on an Android device. We are not currently able to run it in the emulator.

2. If you want to be able to modify the JNI resources (i.e. C++ code), you will need to install and set up the [Android NDK](http://developer.android.com/tools/sdk/ndk/index.html).
This should allow you to edit, and re-build the project.

3. If you want the full monty, follow the [Vuforia SDK](https://ar.qualcomm.at/qdevnet/) instalation instruction. They are long but thorough. Pay attention and don't skip steps.

git-flow
========
This project uses [git-flow](https://github.com/nvie/gitflow/).

Here are the [installation instructions](https://github.com/nvie/gitflow/wiki/Installation).

Here are [usage instruction](http://jeffkreeftmeijer.com/2010/why-arent-you-using-git-flow/).

Here's an explanation of the [branching model](http://nvie.com/posts/a-successful-git-branching-model/) git-flow uses.

Also, it's best to to use `git pull --rebase` when pulling the develop branch so as to keep commit history clean.

