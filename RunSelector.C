#include <TROOT.h>
#include <TFile.h>
#include <TSelector.h>
#include "TTree.h"

void RunSelector(){

  TFile *file = TFile::Open("MuonInfo_Run2017B_PRv1.root","READ");
  TTree *tree = (TTree*)(file->Get("MuonPogTree/MUONPOGTREE"));
  tree->Process("MUONPOGTREE.C+");

}
