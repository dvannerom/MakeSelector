#include <TROOT.h>
#include <TFile.h>
#include <TSelector.h>
#include "TTree.h"

// This small script only intends to make those three lines run in one shot

void RunSelector(){

  // Open your root file
  TFile *file = TFile::Open("MuonInfo_Run2017B_PRv1.root","READ");
  // Pick up the tree
  TTree *tree = (TTree*)(file->Get("MuonPogTree/MUONPOGTREE"));
  // This is how you run the Selector 
  tree->Process("MUONPOGTREE.C+");

}
