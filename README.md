# MakeSelector
Instructions on how to create a TTreeReader environment

### First step: create the TSelector

- Open the file you want to make the Selector with: root myfile.root
- Get the tree: TTree *tree = (TTree*)(file->Get("mytree"))
- Make the Selector: tree->MakeSelector()
  Options are referenced here: https://root.cern.ch/doc/master/classTTree.html#abe2c6509820373c42a88f343434cbcb4

You now have the SelectorFile.h and SelectorFile.C files

### Second step: run the Selector

- Run the RunSelector.C script with "root RunSelector.C+" to run your Selector
