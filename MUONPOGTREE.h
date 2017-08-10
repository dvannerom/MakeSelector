//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Aug  9 17:32:27 2017 by ROOT version 6.08/07
// from TTree MUONPOGTREE/Muon POG Tree
// found on file: MuonInfo_Run2017B_PRv1.root
//////////////////////////////////////////////////////////

#ifndef MUONPOGTREE_h
#define MUONPOGTREE_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector


class MUONPOGTREE : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<Int_t> runNumber = {fReader, "runNumber"};
   TTreeReaderValue<Int_t> luminosityBlockNumber = {fReader, "luminosityBlockNumber"};
   TTreeReaderValue<Int_t> eventNumber = {fReader, "eventNumber"};
   TTreeReaderValue<Int_t> bxId = {fReader, "bxId"};
   TTreeReaderValue<ULong64_t> orbit = {fReader, "orbit"};
   TTreeReaderValue<Float_t> instLumi = {fReader, "instLumi"};
   TTreeReaderValue<Int_t> nVtx = {fReader, "nVtx"};
   TTreeReaderArray<Float_t> primaryVertex = {fReader, "primaryVertex[3]"};
   TTreeReaderArray<Float_t> cov_primaryVertex = {fReader, "cov_primaryVertex[3][3]"};
   TTreeReaderArray<Float_t> genInfos_trueNumberOfInteractions = {fReader, "genInfos.trueNumberOfInteractions"};
   TTreeReaderArray<Int_t> genInfos_actualNumberOfInteractions = {fReader, "genInfos.actualNumberOfInteractions"};
   TTreeReaderArray<Float_t> genInfos_genWeight = {fReader, "genInfos.genWeight"};
   TTreeReaderArray<Int_t> genParticles_pdgId = {fReader, "genParticles.pdgId"};
   TTreeReaderArray<Int_t> genParticles_status = {fReader, "genParticles.status"};
   TTreeReaderArray<Float_t> genParticles_energy = {fReader, "genParticles.energy"};
   TTreeReaderArray<Float_t> genParticles_pt = {fReader, "genParticles.pt"};
   TTreeReaderArray<Float_t> genParticles_eta = {fReader, "genParticles.eta"};
   TTreeReaderArray<Float_t> genParticles_phi = {fReader, "genParticles.phi"};
   TTreeReaderArray<Float_t> genParticles_vx = {fReader, "genParticles.vx"};
   TTreeReaderArray<Float_t> genParticles_vy = {fReader, "genParticles.vy"};
   TTreeReaderArray<Float_t> genParticles_vz = {fReader, "genParticles.vz"};
   TTreeReaderArray<vector<int>> genParticles_mothers = {fReader, "genParticles.mothers"};
   TTreeReaderArray<vector<bool>> genParticles_flags = {fReader, "genParticles.flags"};
   TTreeReaderArray<Float_t> muons_pt = {fReader, "muons.pt"};
   TTreeReaderArray<Float_t> muons_eta = {fReader, "muons.eta"};
   TTreeReaderArray<Float_t> muons_phi = {fReader, "muons.phi"};
   TTreeReaderArray<Int_t> muons_charge = {fReader, "muons.charge"};
   TTreeReaderArray<Int_t> muons_isGlobal = {fReader, "muons.isGlobal"};
   TTreeReaderArray<Int_t> muons_isTracker = {fReader, "muons.isTracker"};
   TTreeReaderArray<Int_t> muons_isTrackerArb = {fReader, "muons.isTrackerArb"};
   TTreeReaderArray<Int_t> muons_isRPC = {fReader, "muons.isRPC"};
   TTreeReaderArray<Int_t> muons_isStandAlone = {fReader, "muons.isStandAlone"};
   TTreeReaderArray<Int_t> muons_isPF = {fReader, "muons.isPF"};
   TTreeReaderArray<Int_t> muons_isSoft = {fReader, "muons.isSoft"};
   TTreeReaderArray<Int_t> muons_isLoose = {fReader, "muons.isLoose"};
   TTreeReaderArray<Int_t> muons_isTight = {fReader, "muons.isTight"};
   TTreeReaderArray<Int_t> muons_isMedium = {fReader, "muons.isMedium"};
   TTreeReaderArray<Int_t> muons_isHighPt = {fReader, "muons.isHighPt"};
   TTreeReaderArray<Float_t> muons_trackerIso = {fReader, "muons.trackerIso"};
   TTreeReaderArray<Float_t> muons_EMCalIso = {fReader, "muons.EMCalIso"};
   TTreeReaderArray<Float_t> muons_HCalIso = {fReader, "muons.HCalIso"};
   TTreeReaderArray<Float_t> muons_chargedHadronIso = {fReader, "muons.chargedHadronIso"};
   TTreeReaderArray<Float_t> muons_chargedHadronIsoPU = {fReader, "muons.chargedHadronIsoPU"};
   TTreeReaderArray<Float_t> muons_photonIso = {fReader, "muons.photonIso"};
   TTreeReaderArray<Float_t> muons_neutralHadronIso = {fReader, "muons.neutralHadronIso"};
   TTreeReaderArray<Float_t> muons_isoPflow04 = {fReader, "muons.isoPflow04"};
   TTreeReaderArray<Float_t> muons_isoPflow03 = {fReader, "muons.isoPflow03"};
   TTreeReaderArray<Float_t> muons_dxy = {fReader, "muons.dxy"};
   TTreeReaderArray<Float_t> muons_dz = {fReader, "muons.dz"};
   TTreeReaderArray<Float_t> muons_edxy = {fReader, "muons.edxy"};
   TTreeReaderArray<Float_t> muons_edz = {fReader, "muons.edz"};
   TTreeReaderArray<Float_t> muons_dxybs = {fReader, "muons.dxybs"};
   TTreeReaderArray<Float_t> muons_dzbs = {fReader, "muons.dzbs"};
   TTreeReaderArray<Int_t> muons_nHitsGlobal = {fReader, "muons.nHitsGlobal"};
   TTreeReaderArray<Int_t> muons_nHitsTracker = {fReader, "muons.nHitsTracker"};
   TTreeReaderArray<Int_t> muons_nHitsStandAlone = {fReader, "muons.nHitsStandAlone"};
   TTreeReaderArray<Float_t> muons_glbNormChi2 = {fReader, "muons.glbNormChi2"};
   TTreeReaderArray<Float_t> muons_trkNormChi2 = {fReader, "muons.trkNormChi2"};
   TTreeReaderArray<Int_t> muons_trkMuonMatchedStations = {fReader, "muons.trkMuonMatchedStations"};
   TTreeReaderArray<Int_t> muons_glbMuonValidHits = {fReader, "muons.glbMuonValidHits"};
   TTreeReaderArray<Int_t> muons_trkPixelValidHits = {fReader, "muons.trkPixelValidHits"};
   TTreeReaderArray<Int_t> muons_trkPixelLayersWithMeas = {fReader, "muons.trkPixelLayersWithMeas"};
   TTreeReaderArray<Int_t> muons_trkTrackerLayersWithMeas = {fReader, "muons.trkTrackerLayersWithMeas"};
   TTreeReaderArray<Float_t> muons_bestMuPtErr = {fReader, "muons.bestMuPtErr"};
   TTreeReaderArray<Float_t> muons_trkValidHitFrac = {fReader, "muons.trkValidHitFrac"};
   TTreeReaderArray<Float_t> muons_trkStaChi2 = {fReader, "muons.trkStaChi2"};
   TTreeReaderArray<Float_t> muons_trkKink = {fReader, "muons.trkKink"};
   TTreeReaderArray<Float_t> muons_muSegmComp = {fReader, "muons.muSegmComp"};
   TTreeReaderArray<Int_t> muons_isTrkMuOST = {fReader, "muons.isTrkMuOST"};
   TTreeReaderArray<Int_t> muons_isTrkHP = {fReader, "muons.isTrkHP"};
   TTreeReaderArray<Float_t> muons_dxyBest = {fReader, "muons.dxyBest"};
   TTreeReaderArray<Float_t> muons_dzBest = {fReader, "muons.dzBest"};
   TTreeReaderArray<Float_t> muons_dxyInner = {fReader, "muons.dxyInner"};
   TTreeReaderArray<Float_t> muons_dzInner = {fReader, "muons.dzInner"};
   TTreeReaderArray<Float_t> muons_muonTimeDof = {fReader, "muons.muonTimeDof"};
   TTreeReaderArray<Float_t> muons_muonTime = {fReader, "muons.muonTime"};
   TTreeReaderArray<Float_t> muons_muonTimeErr = {fReader, "muons.muonTimeErr"};
   TTreeReaderArray<Float_t> muons_muonRpcTimeDof = {fReader, "muons.muonRpcTimeDof"};
   TTreeReaderArray<Float_t> muons_muonRpcTime = {fReader, "muons.muonRpcTime"};
   TTreeReaderArray<Float_t> muons_muonRpcTimeErr = {fReader, "muons.muonRpcTimeErr"};
   //TTreeReaderArray<vector<muon_pog::HitInfo>> muons_hits = {fReader, "muons.hits"};
   //TTreeReaderArray<vector<muon_pog::ChambMatch>> muons_matches = {fReader, "muons.matches"};
   //TTreeReaderArray<vector<muon_pog::MuonFit>> muons_fits = {fReader, "muons.fits"};
   TTreeReaderValue<Float_t> mets_pfMet = {fReader, "mets.pfMet"};
   TTreeReaderValue<Float_t> mets_pfChMet = {fReader, "mets.pfChMet"};
   TTreeReaderValue<Float_t> mets_caloMet = {fReader, "mets.caloMet"};
   TTreeReaderArray<string> hlt_triggers = {fReader, "hlt.triggers"};
   //TTreeReaderArray<muon_pog::HLTObject> hlt_objects = {fReader, "hlt.objects"};
   TTreeReaderArray<Float_t> l1muons_pt = {fReader, "l1muons.pt"};
   TTreeReaderArray<Float_t> l1muons_eta = {fReader, "l1muons.eta"};
   TTreeReaderArray<Float_t> l1muons_phi = {fReader, "l1muons.phi"};
   TTreeReaderArray<Int_t> l1muons_charge = {fReader, "l1muons.charge"};
   TTreeReaderArray<Int_t> l1muons_quality = {fReader, "l1muons.quality"};
   TTreeReaderArray<Int_t> l1muons_bx = {fReader, "l1muons.bx"};
   TTreeReaderArray<Int_t> l1muons_tfIndex = {fReader, "l1muons.tfIndex"};

   TH1F *H_nVtx;
   TH1F *H_muonpt; 

   MUONPOGTREE(TTree * /*tree*/ =0) { }
   virtual ~MUONPOGTREE() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(MUONPOGTREE,0);

};

#endif

#ifdef MUONPOGTREE_cxx
void MUONPOGTREE::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t MUONPOGTREE::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef MUONPOGTREE_cxx
