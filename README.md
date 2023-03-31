# Neural Amp Modeler Plug-in with enhancements

Based on the work of https://github.com/sdatkinson/NeuralAmpModelerPlugin

Added NAM/IR folder nav buttons.

Once a NAM/IR is selected, nav buttons (up/down) will appear to quickly load the files in the selected NAM/IR's containing folder. If the NAM/IR is cleared, the nav buttons will become hidden, but will re-appear upon new selection. If the NAM/IR selected is the only file in the folder, the buttons will not appear.

This is currently only in the NeuralAmpModeler-app project, only for Windows 64-bit.


To install locally:

1) Download Zip and unzip, or clone this repo to your computer

2) Download InnoSetup from https://jrsoftware.org/isdl.php

3) After installation, open InnoSetup and from the folder you used in 1), 
	navigate to and open \NeuralAmpModeler-\NeuralAmpModeler\installer\NeuralAmpModeler.iss
	
4) From the top menu, select Build -> Compile, then hit F9 to run the installer

5) Should install to C:\Program Files\NeuralAmpModeler - enjoy!


For compiling the project in Visual Studio, see https://www.youtube.com/watch?v=W8Ff3xcsD1Y
