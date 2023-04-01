# Neural Amp Modeler Plug-in with enhancements

Based on the work of https://github.com/sdatkinson/NeuralAmpModelerPlugin

Added NAM/IR folder nav buttons.

Once a NAM/IR is selected, nav buttons (up/down) will appear to quickly load the files in the selected NAM/IR's containing folder. If the NAM/IR is cleared, the nav buttons will become hidden, but will re-appear upon new selection. If the NAM/IR selected is the only file in the folder, the buttons will not appear.


The .vst3 file (Windows 64-bit only) is in NeuralAmpModeler-\vst3\

Grab it from this page https://github.com/d3NNEb/NeuralAmpModeler-/tree/main/vst3
Copy it to C:\Program Files\Common Files\VST3\NeuralAmpModeler.vst3\Contents\x86_64-win on your computer


To install locally (currently only in the NeuralAmpModeler-app project, only for Windows 64-bit):

1) Download Zip and unzip, or clone this repo to your computer

2) Download and install InnoSetup from https://jrsoftware.org/isdl.php

3) After installation, open InnoSetup and from the folder you used in 1), 
	navigate to and open \NeuralAmpModeler-\NeuralAmpModeler\installer\NeuralAmpModeler.iss
	
4) From the top menu, select Build -> Compile, then hit F9 to run the installer

5) Should install to C:\Program Files\NeuralAmpModeler - enjoy!



For compiling the project in Visual Studio, see https://www.youtube.com/watch?v=W8Ff3xcsD1Y
