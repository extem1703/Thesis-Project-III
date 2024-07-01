void graphs_chanels_trigger(){
    
    gStyle -> SetLegendBorderSize(0);
    gStyle -> SetLegendFillColor(kWhite);
    gStyle -> SetLegendFont(62);
    gStyle -> SetGridColor(kGray);
    gStyle -> SetGridStyle(3);
    gStyle -> SetPadGridX(kTRUE);
    gStyle -> SetPadGridY(kTRUE);
    
    TFile *input_1300 = new TFile("trigger_FC_90g_8H_1300.root", "read");
    TTree *tree_1300 = (TTree*)input_1300->Get("datatree_1300");
    TFile *input_1400 = new TFile("trigger_FC_90g_8H_1400.root", "read");
    TTree *tree_1400 = (TTree*)input_1400->Get("datatree_1400");
    TFile *input_1500 = new TFile("trigger_FC_90g_8H_1500.root", "read");
    TTree *tree_1500 = (TTree*)input_1500->Get("datatree_1500");
    TFile *input_1600 = new TFile("trigger_FC_90g_8H_1600.root", "read");
    TTree *tree_1600 = (TTree*)input_1600->Get("datatree_1600");
    TFile *input_1700 = new TFile("trigger_FC_90g_8H_1700.root", "read");
    TTree *tree_1700 = (TTree*)input_1700->Get("datatree_1700");
    
    Double_t wch_1300_0, wch_1300_1, wch_1300_2, wch_1300_3, wch_1300_4, wch_1300_5, wch_1300_6, wch_1300_7, wch_1300_8, wch_1300_9, wch_1300_10, wch_1300_11, wch_1300_12, wch_1300_13, wch_1300_14, wch_1300_15;
    Double_t wch_1400_0, wch_1400_1, wch_1400_2, wch_1400_3, wch_1400_4, wch_1400_5, wch_1400_6, wch_1400_7, wch_1400_8, wch_1400_9, wch_1400_10, wch_1400_11, wch_1400_12, wch_1400_13, wch_1400_14, wch_1400_15;
    Double_t wch_1500_0, wch_1500_1, wch_1500_2, wch_1500_3, wch_1500_4, wch_1500_5, wch_1500_6, wch_1500_7, wch_1500_8, wch_1500_9, wch_1500_10, wch_1500_11, wch_1500_12, wch_1500_13, wch_1500_14, wch_1500_15;
    Double_t wch_1600_0, wch_1600_1, wch_1600_2, wch_1600_3, wch_1600_4, wch_1600_5, wch_1600_6, wch_1600_7, wch_1600_8, wch_1600_9, wch_1600_10, wch_1600_11, wch_1600_12, wch_1600_13, wch_1600_14, wch_1600_15;
    Double_t wch_1700_0, wch_1700_1, wch_1700_2, wch_1700_3, wch_1700_4, wch_1700_5, wch_1700_6, wch_1700_7, wch_1700_8, wch_1700_9, wch_1700_10, wch_1700_11, wch_1700_12, wch_1700_13, wch_1700_14, wch_1700_15;
    
    tree_1300 -> SetBranchAddress("wch0", &wch_1300_0);
    tree_1300 -> SetBranchAddress("wch1", &wch_1300_1);
    tree_1300 -> SetBranchAddress("wch2", &wch_1300_2);
    tree_1300 -> SetBranchAddress("wch3", &wch_1300_3);
    tree_1300 -> SetBranchAddress("wch4", &wch_1300_4);
    tree_1300 -> SetBranchAddress("wch5", &wch_1300_5);
    tree_1300 -> SetBranchAddress("wch6", &wch_1300_6);
    tree_1300 -> SetBranchAddress("wch7", &wch_1300_7);
    tree_1300 -> SetBranchAddress("wch8", &wch_1300_8);
    tree_1300 -> SetBranchAddress("wch9", &wch_1300_9);
    tree_1300 -> SetBranchAddress("wch10", &wch_1300_10);
    tree_1300 -> SetBranchAddress("wch11", &wch_1300_11);
    tree_1300 -> SetBranchAddress("wch12", &wch_1300_12);
    tree_1300 -> SetBranchAddress("wch13", &wch_1300_13);
    tree_1300 -> SetBranchAddress("wch14", &wch_1300_14);
    tree_1300 -> SetBranchAddress("wch15", &wch_1300_15);

    tree_1400 -> SetBranchAddress("wch0", &wch_1400_0);
    tree_1400 -> SetBranchAddress("wch1", &wch_1400_1);
    tree_1400 -> SetBranchAddress("wch2", &wch_1400_2);
    tree_1400 -> SetBranchAddress("wch3", &wch_1400_3);
    tree_1400 -> SetBranchAddress("wch4", &wch_1400_4);
    tree_1400 -> SetBranchAddress("wch5", &wch_1400_5);
    tree_1400 -> SetBranchAddress("wch6", &wch_1400_6);
    tree_1400 -> SetBranchAddress("wch7", &wch_1400_7);
    tree_1400 -> SetBranchAddress("wch8", &wch_1400_8);
    tree_1400 -> SetBranchAddress("wch9", &wch_1400_9);
    tree_1400 -> SetBranchAddress("wch10", &wch_1400_10);
    tree_1400 -> SetBranchAddress("wch11", &wch_1400_11);
    tree_1400 -> SetBranchAddress("wch12", &wch_1400_12);
    tree_1400 -> SetBranchAddress("wch13", &wch_1400_13);
    tree_1400 -> SetBranchAddress("wch14", &wch_1400_14);
    tree_1400 -> SetBranchAddress("wch15", &wch_1400_15);

    tree_1500 -> SetBranchAddress("wch0", &wch_1500_0);
    tree_1500 -> SetBranchAddress("wch1", &wch_1500_1);
    tree_1500 -> SetBranchAddress("wch2", &wch_1500_2);
    tree_1500 -> SetBranchAddress("wch3", &wch_1500_3);
    tree_1500 -> SetBranchAddress("wch4", &wch_1500_4);
    tree_1500 -> SetBranchAddress("wch5", &wch_1500_5);
    tree_1500 -> SetBranchAddress("wch6", &wch_1500_6);
    tree_1500 -> SetBranchAddress("wch7", &wch_1500_7);
    tree_1500 -> SetBranchAddress("wch8", &wch_1500_8);
    tree_1500 -> SetBranchAddress("wch9", &wch_1500_9);
    tree_1500 -> SetBranchAddress("wch10", &wch_1500_10);
    tree_1500 -> SetBranchAddress("wch11", &wch_1500_11);
    tree_1500 -> SetBranchAddress("wch12", &wch_1500_12);
    tree_1500 -> SetBranchAddress("wch13", &wch_1500_13);
    tree_1500 -> SetBranchAddress("wch14", &wch_1500_14);
    tree_1500 -> SetBranchAddress("wch15", &wch_1500_15);

    tree_1600 -> SetBranchAddress("wch0", &wch_1600_0);
    tree_1600 -> SetBranchAddress("wch1", &wch_1600_1);
    tree_1600 -> SetBranchAddress("wch2", &wch_1600_2);
    tree_1600 -> SetBranchAddress("wch3", &wch_1600_3);
    tree_1600 -> SetBranchAddress("wch4", &wch_1600_4);
    tree_1600 -> SetBranchAddress("wch5", &wch_1600_5);
    tree_1600 -> SetBranchAddress("wch6", &wch_1600_6);
    tree_1600 -> SetBranchAddress("wch7", &wch_1600_7);
    tree_1600 -> SetBranchAddress("wch8", &wch_1600_8);
    tree_1600 -> SetBranchAddress("wch9", &wch_1600_9);
    tree_1600 -> SetBranchAddress("wch10", &wch_1600_10);
    tree_1600 -> SetBranchAddress("wch11", &wch_1600_11);
    tree_1600 -> SetBranchAddress("wch12", &wch_1600_12);
    tree_1600 -> SetBranchAddress("wch13", &wch_1600_13);
    tree_1600 -> SetBranchAddress("wch14", &wch_1600_14);
    tree_1600 -> SetBranchAddress("wch15", &wch_1600_15);

    tree_1700 -> SetBranchAddress("wch0", &wch_1700_0);
    tree_1700 -> SetBranchAddress("wch1", &wch_1700_1);
    tree_1700 -> SetBranchAddress("wch2", &wch_1700_2);
    tree_1700 -> SetBranchAddress("wch3", &wch_1700_3);
    tree_1700 -> SetBranchAddress("wch4", &wch_1700_4);
    tree_1700 -> SetBranchAddress("wch5", &wch_1700_5);
    tree_1700 -> SetBranchAddress("wch6", &wch_1700_6);
    tree_1700 -> SetBranchAddress("wch7", &wch_1700_7);
    tree_1700 -> SetBranchAddress("wch8", &wch_1700_8);
    tree_1700 -> SetBranchAddress("wch9", &wch_1700_9);
    tree_1700 -> SetBranchAddress("wch10", &wch_1700_10);
    tree_1700 -> SetBranchAddress("wch11", &wch_1700_11);
    tree_1700 -> SetBranchAddress("wch12", &wch_1700_12);
    tree_1700 -> SetBranchAddress("wch13", &wch_1700_13);
    tree_1700 -> SetBranchAddress("wch14", &wch_1700_14);
    tree_1700 -> SetBranchAddress("wch15", &wch_1700_15);
    
    Int_t entries_1300 = tree_1300 -> GetEntries();
    Int_t entries_1400 = tree_1400 -> GetEntries();
    Int_t entries_1500 = tree_1500 -> GetEntries();
    Int_t entries_1600 = tree_1600 -> GetEntries();
    Int_t entries_1700 = tree_1700 -> GetEntries();
    
    // 1300
    
    TH1D* hist_wch_1300_0 = new TH1D("hist_wch_1300_0", "Canal 0", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_1 = new TH1D("hist_wch_1300_1", "Canal 1", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_2 = new TH1D("hist_wch_1300_2", "Canal 2", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_3 = new TH1D("hist_wch_1300_3", "Canal 3", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_4 = new TH1D("hist_wch_1300_4", "Canal 4", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_5 = new TH1D("hist_wch_1300_5", "Canal 5", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_6 = new TH1D("hist_wch_1300_6", "Canal 6", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_7 = new TH1D("hist_wch_1300_7", "Canal 7", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_8 = new TH1D("hist_wch_1300_8", "Canal 8", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_9 = new TH1D("hist_wch_1300_9", "Canal 9", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_10 = new TH1D("hist_wch_1300_10", "Canal 10", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_11 = new TH1D("hist_wch_1300_11", "Canal 11", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_12 = new TH1D("hist_wch_1300_12", "Canal 12", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_13 = new TH1D("hist_wch_1300_13", "Canal 13", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_14 = new TH1D("hist_wch_1300_14", "Canal 14", 59, 1.0, 60.0);

    TH1D* hist_wch_1300_15 = new TH1D("hist_wch_1300_15", "Canal 15", 59, 1.0, 60.0);
    
    // 1400

    TH1D* hist_wch_1400_0 = new TH1D("hist_wch_1400_0", "Canal 0", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_1 = new TH1D("hist_wch_1400_1", "Canal 1", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_2 = new TH1D("hist_wch_1400_2", "Canal 2", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_3 = new TH1D("hist_wch_1400_3", "Canal 3", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_4 = new TH1D("hist_wch_1400_4", "Canal 4", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_5 = new TH1D("hist_wch_1400_5", "Canal 5", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_6 = new TH1D("hist_wch_1400_6", "Canal 6", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_7 = new TH1D("hist_wch_1400_7", "Canal 7", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_8 = new TH1D("hist_wch_1400_8", "Canal 8", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_9 = new TH1D("hist_wch_1400_9", "Canal 9", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_10 = new TH1D("hist_wch_1400_10", "Canal 10", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_11 = new TH1D("hist_wch_1400_11", "Canal 11", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_12 = new TH1D("hist_wch_1400_12", "Canal 12", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_13 = new TH1D("hist_wch_1400_13", "Canal 13", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_14 = new TH1D("hist_wch_1400_14", "Canal 14", 59, 1.0, 60.0);

    TH1D* hist_wch_1400_15 = new TH1D("hist_wch_1400_15", "Canal 15", 59, 1.0, 60.0);

    // 1500

    TH1D* hist_wch_1500_0 = new TH1D("hist_wch_1500_0", "Canal 0", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_1 = new TH1D("hist_wch_1500_1", "Canal 1", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_2 = new TH1D("hist_wch_1500_2", "Canal 2", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_3 = new TH1D("hist_wch_1500_3", "Canal 3", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_4 = new TH1D("hist_wch_1500_4", "Canal 4", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_5 = new TH1D("hist_wch_1500_5", "Canal 5", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_6 = new TH1D("hist_wch_1500_6", "Canal 6", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_7 = new TH1D("hist_wch_1500_7", "Canal 7", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_8 = new TH1D("hist_wch_1500_8", "Canal 8", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_9 = new TH1D("hist_wch_1500_9", "Canal 9", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_10 = new TH1D("hist_wch_1500_10", "Canal 10", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_11 = new TH1D("hist_wch_1500_11", "Canal 11", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_12 = new TH1D("hist_wch_1500_12", "Canal 12", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_13 = new TH1D("hist_wch_1500_13", "Canal 13", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_14 = new TH1D("hist_wch_1500_14", "Canal 14", 59, 1.0, 60.0);

    TH1D* hist_wch_1500_15 = new TH1D("hist_wch_1500_15", "Canal 15", 59, 1.0, 60.0);
    
    // 1600

    TH1D* hist_wch_1600_0 = new TH1D("hist_wch_1600_0", "Canal 0", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_1 = new TH1D("hist_wch_1600_1", "Canal 1", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_2 = new TH1D("hist_wch_1600_2", "Canal 2", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_3 = new TH1D("hist_wch_1600_3", "Canal 3", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_4 = new TH1D("hist_wch_1600_4", "Canal 4", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_5 = new TH1D("hist_wch_1600_5", "Canal 5", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_6 = new TH1D("hist_wch_1600_6", "Canal 6", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_7 = new TH1D("hist_wch_1600_7", "Canal 7", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_8 = new TH1D("hist_wch_1600_8", "Canal 8", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_9 = new TH1D("hist_wch_1600_9", "Canal 9", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_10 = new TH1D("hist_wch_1600_10", "Canal 10", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_11 = new TH1D("hist_wch_1600_11", "Canal 11", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_12 = new TH1D("hist_wch_1600_12", "Canal 12", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_13 = new TH1D("hist_wch_1600_13", "Canal 13", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_14 = new TH1D("hist_wch_1600_14", "Canal 14", 59, 1.0, 60.0);

    TH1D* hist_wch_1600_15 = new TH1D("hist_wch_1600_15", "Canal 15", 59, 1.0, 60.0);
    
    // 1700

    TH1D* hist_wch_1700_0 = new TH1D("hist_wch_1700_0", "Canal 0", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_1 = new TH1D("hist_wch_1700_1", "Canal 1", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_2 = new TH1D("hist_wch_1700_2", "Canal 2", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_3 = new TH1D("hist_wch_1700_3", "Canal 3", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_4 = new TH1D("hist_wch_1700_4", "Canal 4", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_5 = new TH1D("hist_wch_1700_5", "Canal 5", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_6 = new TH1D("hist_wch_1700_6", "Canal 6", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_7 = new TH1D("hist_wch_1700_7", "Canal 7", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_8 = new TH1D("hist_wch_1700_8", "Canal 8", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_9 = new TH1D("hist_wch_1700_9", "Canal 9", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_10 = new TH1D("hist_wch_1700_10", "Canal 10", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_11 = new TH1D("hist_wch_1700_11", "Canal 11", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_12 = new TH1D("hist_wch_1700_12", "Canal 12", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_13 = new TH1D("hist_wch_1700_13", "Canal 13", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_14 = new TH1D("hist_wch_1700_14", "Canal 14", 59, 1.0, 60.0);

    TH1D* hist_wch_1700_15 = new TH1D("hist_wch_1700_15", "Canal 15", 59, 1.0, 60.0);
    
    //
    
    for (int i=0; i<entries_1300; i++){
        tree_1300 -> GetEntry(i);
        if (wch_1300_0 > 0 && wch_1300_0 <= 60){
            hist_wch_1300_0 -> Fill(wch_1300_0);
        }
        
        if (wch_1300_1 > 0 && wch_1300_1 <= 60){
            hist_wch_1300_1 -> Fill(wch_1300_1);
        }
        
        if (wch_1300_2 > 0 && wch_1300_2 <= 60){
            hist_wch_1300_2 -> Fill(wch_1300_2);
        }
        
        if (wch_1300_3 > 0 && wch_1300_3 <= 60){
            hist_wch_1300_3 -> Fill(wch_1300_3);
        }
        
        if (wch_1300_4 > 0 && wch_1300_4 <= 60){
            hist_wch_1300_4 -> Fill(wch_1300_4);
        }
        
        if (wch_1300_5 > 0 && wch_1300_5 <= 60){
            hist_wch_1300_5 -> Fill(wch_1300_5);
        }
        
        if (wch_1300_6 > 0 && wch_1300_6 <= 60){
            hist_wch_1300_6 -> Fill(wch_1300_6);
        }
        
        if (wch_1300_7 > 0 && wch_1300_7 <= 60){
            hist_wch_1300_7 -> Fill(wch_1300_7);
        }
        
        if (wch_1300_8 > 0 && wch_1300_8 <= 60){
            hist_wch_1300_8 -> Fill(wch_1300_8);
        }
        
        if (wch_1300_9 > 0 && wch_1300_9 <= 60){
            hist_wch_1300_9 -> Fill(wch_1300_9);
        }
        
        if (wch_1300_10 > 0 && wch_1300_10 <= 60){
            hist_wch_1300_10 -> Fill(wch_1300_10);
        }
        
        if (wch_1300_11 > 0 && wch_1300_11 <= 60){
            hist_wch_1300_11 -> Fill(wch_1300_11);
        }
        
        if (wch_1300_12 > 0 && wch_1300_12 <= 60){
            hist_wch_1300_12 -> Fill(wch_1300_12);
        }
        
        if (wch_1300_13 > 0 && wch_1300_13 <= 60){
            hist_wch_1300_13 -> Fill(wch_1300_13);
        }
        
        if (wch_1300_14 > 0 && wch_1300_14 <= 60){
            hist_wch_1300_14 -> Fill(wch_1300_14);
        }
        
        if (wch_1300_15 > 0 && wch_1300_15 <= 60){
            hist_wch_1300_15 -> Fill(wch_1300_15);
        }
    }
    
    for (int i=0; i<entries_1400; i++){
        tree_1400 -> GetEntry(i);
        if (wch_1400_0 > 0 && wch_1400_0 <= 60){
            hist_wch_1400_0 -> Fill(wch_1400_0);
        }
        
        if (wch_1400_1 > 0 && wch_1400_1 <= 60){
            hist_wch_1400_1 -> Fill(wch_1400_1);
        }
        
        if (wch_1400_2 > 0 && wch_1400_2 <= 60){
            hist_wch_1400_2 -> Fill(wch_1400_2);
        }
        
        if (wch_1400_3 > 0 && wch_1400_3 <= 60){
            hist_wch_1400_3 -> Fill(wch_1400_3);
        }
        
        if (wch_1400_4 > 0 && wch_1400_4 <= 60){
            hist_wch_1400_4 -> Fill(wch_1400_4);
        }
        
        if (wch_1400_5 > 0 && wch_1400_5 <= 60){
            hist_wch_1400_5 -> Fill(wch_1400_5);
        }
        
        if (wch_1400_6 > 0 && wch_1400_6 <= 60){
            hist_wch_1400_6 -> Fill(wch_1400_6);
        }
        
        if (wch_1400_7 > 0 && wch_1400_7 <= 60){
            hist_wch_1400_7 -> Fill(wch_1400_7);
        }
        
        if (wch_1400_8 > 0 && wch_1400_8 <= 60){
            hist_wch_1400_8 -> Fill(wch_1400_8);
        }
        
        if (wch_1400_9 > 0 && wch_1400_9 <= 60){
            hist_wch_1400_9 -> Fill(wch_1400_9);
        }
        
        if (wch_1400_10 > 0 && wch_1400_10 <= 60){
            hist_wch_1400_10 -> Fill(wch_1400_10);
        }
        
        if (wch_1400_11 > 0 && wch_1400_11 <= 60){
            hist_wch_1400_11 -> Fill(wch_1400_11);
        }
        
        if (wch_1400_12 > 0 && wch_1400_12 <= 60){
            hist_wch_1400_12 -> Fill(wch_1400_12);
        }
        
        if (wch_1400_13 > 0 && wch_1400_13 <= 60){
            hist_wch_1400_13 -> Fill(wch_1400_13);
        }
        
        if (wch_1400_14 > 0 && wch_1400_14 <= 60){
            hist_wch_1400_14 -> Fill(wch_1400_14);
        }
        
        if (wch_1400_15 > 0 && wch_1400_15 <= 60){
            hist_wch_1400_15 -> Fill(wch_1400_15);
        }
    }
    
    for (int i=0; i<entries_1500; i++){
        tree_1500 -> GetEntry(i);
        if (wch_1500_0 > 0 && wch_1500_0 <= 60){
            hist_wch_1500_0 -> Fill(wch_1500_0);
        }
        
        if (wch_1500_1 > 0 && wch_1500_1 <= 60){
            hist_wch_1500_1 -> Fill(wch_1500_1);
        }
        
        if (wch_1500_2 > 0 && wch_1500_2 <= 60){
            hist_wch_1500_2 -> Fill(wch_1500_2);
        }
        
        if (wch_1500_3 > 0 && wch_1500_3 <= 60){
            hist_wch_1500_3 -> Fill(wch_1500_3);
        }
        
        if (wch_1500_4 > 0 && wch_1500_4 <= 60){
            hist_wch_1500_4 -> Fill(wch_1500_4);
        }
        
        if (wch_1500_5 > 0 && wch_1500_5 <= 60){
            hist_wch_1500_5 -> Fill(wch_1500_5);
        }
        
        if (wch_1500_6 > 0 && wch_1500_6 <= 60){
            hist_wch_1500_6 -> Fill(wch_1500_6);
        }
        
        if (wch_1500_7 > 0 && wch_1500_7 <= 60){
            hist_wch_1500_7 -> Fill(wch_1500_7);
        }
        
        if (wch_1500_8 > 0 && wch_1500_8 <= 60){
            hist_wch_1500_8 -> Fill(wch_1500_8);
        }
        
        if (wch_1500_9 > 0 && wch_1500_9 <= 60){
            hist_wch_1500_9 -> Fill(wch_1500_9);
        }
        
        if (wch_1500_10 > 0 && wch_1500_10 <= 60){
            hist_wch_1500_10 -> Fill(wch_1500_10);
        }
        
        if (wch_1500_11 > 0 && wch_1500_11 <= 60){
            hist_wch_1500_11 -> Fill(wch_1500_11);
        }
        
        if (wch_1500_12 > 0 && wch_1500_12 <= 60){
            hist_wch_1500_12 -> Fill(wch_1500_12);
        }
        
        if (wch_1500_13 > 0 && wch_1500_13 <= 60){
            hist_wch_1500_13 -> Fill(wch_1500_13);
        }
        
        if (wch_1500_14 > 0 && wch_1500_14 <= 60){
            hist_wch_1500_14 -> Fill(wch_1500_14);
        }
        
        if (wch_1500_15 > 0 && wch_1500_15 <= 60){
            hist_wch_1500_15 -> Fill(wch_1500_15);
        }
    }
    
    for (int i=0; i<entries_1600; i++){
        tree_1600 -> GetEntry(i);
        if (wch_1600_0 > 0 && wch_1600_0 <= 60){
            hist_wch_1600_0 -> Fill(wch_1600_0);
        }
        
        if (wch_1600_1 > 0 && wch_1600_1 <= 60){
            hist_wch_1600_1 -> Fill(wch_1600_1);
        }
        
        if (wch_1600_2 > 0 && wch_1600_2 <= 60){
            hist_wch_1600_2 -> Fill(wch_1600_2);
        }
        
        if (wch_1600_3 > 0 && wch_1600_3 <= 60){
            hist_wch_1600_3 -> Fill(wch_1600_3);
        }
        
        if (wch_1600_4 > 0 && wch_1600_4 <= 60){
            hist_wch_1600_4 -> Fill(wch_1600_4);
        }
        
        if (wch_1600_5 > 0 && wch_1600_5 <= 60){
            hist_wch_1600_5 -> Fill(wch_1600_5);
        }
        
        if (wch_1600_6 > 0 && wch_1600_6 <= 60){
            hist_wch_1600_6 -> Fill(wch_1600_6);
        }
        
        if (wch_1600_7 > 0 && wch_1600_7 <= 60){
            hist_wch_1600_7 -> Fill(wch_1600_7);
        }
        
        if (wch_1600_8 > 0 && wch_1600_8 <= 60){
            hist_wch_1600_8 -> Fill(wch_1600_8);
        }
        
        if (wch_1600_9 > 0 && wch_1600_9 <= 60){
            hist_wch_1600_9 -> Fill(wch_1600_9);
        }
        
        if (wch_1600_10 > 0 && wch_1600_10 <= 60){
            hist_wch_1600_10 -> Fill(wch_1600_10);
        }
        
        if (wch_1600_11 > 0 && wch_1600_11 <= 60){
            hist_wch_1600_11 -> Fill(wch_1600_11);
        }
        
        if (wch_1600_12 > 0 && wch_1600_12 <= 60){
            hist_wch_1600_12 -> Fill(wch_1600_12);
        }
        
        if (wch_1600_13 > 0 && wch_1600_13 <= 60){
            hist_wch_1600_13 -> Fill(wch_1600_13);
        }
        
        if (wch_1600_14 > 0 && wch_1600_14 <= 60){
            hist_wch_1600_14 -> Fill(wch_1600_14);
        }
        
        if (wch_1600_15 > 0 && wch_1600_15 <= 60){
            hist_wch_1600_15 -> Fill(wch_1600_15);
        }
    }

    for (int i=0; i<entries_1700; i++){
        tree_1700 -> GetEntry(i);
        if (wch_1700_0 > 0 && wch_1700_0 <= 60){
            hist_wch_1700_0 -> Fill(wch_1700_0);
        }
        
        if (wch_1700_1 > 0 && wch_1700_1 <= 60){
            hist_wch_1700_1 -> Fill(wch_1700_1);
        }
        
        if (wch_1700_2 > 0 && wch_1700_2 <= 60){
            hist_wch_1700_2 -> Fill(wch_1700_2);
        }
        
        if (wch_1700_3 > 0 && wch_1700_3 <= 60){
            hist_wch_1700_3 -> Fill(wch_1700_3);
        }
        
        if (wch_1700_4 > 0 && wch_1700_4 <= 60){
            hist_wch_1700_4 -> Fill(wch_1700_4);
        }
        
        if (wch_1700_5 > 0 && wch_1700_5 <= 60){
            hist_wch_1700_5 -> Fill(wch_1700_5);
        }
        
        if (wch_1700_6 > 0 && wch_1700_6 <= 60){
            hist_wch_1700_6 -> Fill(wch_1700_6);
        }
        
        if (wch_1700_7 > 0 && wch_1700_7 <= 60){
            hist_wch_1700_7 -> Fill(wch_1700_7);
        }
        
        if (wch_1700_8 > 0 && wch_1700_8 <= 60){
            hist_wch_1700_8 -> Fill(wch_1700_8);
        }
        
        if (wch_1700_9 > 0 && wch_1700_9 <= 60){
            hist_wch_1700_9 -> Fill(wch_1700_9);
        }
        
        if (wch_1700_10 > 0 && wch_1700_10 <= 60){
            hist_wch_1700_10 -> Fill(wch_1700_10);
        }
        
        if (wch_1700_11 > 0 && wch_1700_11 <= 60){
            hist_wch_1700_11 -> Fill(wch_1700_11);
        }
        
        if (wch_1700_12 > 0 && wch_1700_12 <= 60){
            hist_wch_1700_12 -> Fill(wch_1700_12);
        }
        
        if (wch_1700_13 > 0 && wch_1700_13 <= 60){
            hist_wch_1700_13 -> Fill(wch_1700_13);
        }
        
        if (wch_1700_14 > 0 && wch_1700_14 <= 60){
            hist_wch_1700_14 -> Fill(wch_1700_14);
        }
        
        if (wch_1700_15 > 0 && wch_1700_15 <= 60){
            hist_wch_1700_15 -> Fill(wch_1700_15);
        }
    }
    
    auto Cwch0 = new TCanvas("Cwch0", "wch0", 800, 500);
    hist_wch_1300_0 -> SetFillStyle(3002);
    hist_wch_1300_0 -> SetMarkerStyle(21);
    hist_wch_1300_0 -> SetMarkerColor(kBlue);
    hist_wch_1300_0 -> SetStats(0);
    hist_wch_1300_0->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_0->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");
    
    hist_wch_1400_0 -> SetFillStyle(3002);
    hist_wch_1400_0 -> SetMarkerStyle(21);
    hist_wch_1400_0 -> SetMarkerColor(kGreen);
    hist_wch_1400_0 -> SetStats(0);
    hist_wch_1400_0->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_0->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");
    
    hist_wch_1500_0 -> SetFillStyle(3002);
    hist_wch_1500_0 -> SetMarkerStyle(21);
    hist_wch_1500_0 -> SetMarkerColor(kRed);
    hist_wch_1500_0 -> SetStats(0);
    hist_wch_1500_0->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_0->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");
    
    hist_wch_1600_0 -> SetFillStyle(3002);
    hist_wch_1600_0 -> SetMarkerStyle(21);
    hist_wch_1600_0 -> SetMarkerColor(kOrange);
    hist_wch_1600_0 -> SetStats(0);
    hist_wch_1600_0->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_0->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");
    
    hist_wch_1700_0 -> SetFillStyle(3002);
    hist_wch_1700_0 -> SetMarkerStyle(21);
    hist_wch_1700_0 -> SetMarkerColor(kViolet);
    hist_wch_1700_0 -> SetStats(0);
    hist_wch_1700_0->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_0->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");
    
    hist_wch_1300_0 -> Draw("ep");
    hist_wch_1400_0 -> Draw("ep same");
    hist_wch_1500_0 -> Draw("ep same");
    hist_wch_1600_0 -> Draw("ep same");
    hist_wch_1700_0 -> Draw("ep same");
    
    auto lwch0 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch0 -> SetHeader("trigger", "C");
    lwch0 -> AddEntry(hist_wch_1300_0, "1300", "p");
    lwch0 -> AddEntry(hist_wch_1400_0, "1400", "p");
    lwch0 -> AddEntry(hist_wch_1500_0, "1500", "p");
    lwch0 -> AddEntry(hist_wch_1600_0, "1600", "p");
    lwch0 -> AddEntry(hist_wch_1700_0, "1700", "p");
    lwch0 -> Draw();
    Cwch0 -> SetLogy();
    
    auto Cwch1 = new TCanvas("Cwch1", "wch1", 800, 500);
    hist_wch_1300_1 -> SetFillStyle(3002);
    hist_wch_1300_1 -> SetMarkerStyle(21);
    hist_wch_1300_1 -> SetMarkerColor(kBlue);
    hist_wch_1300_1 -> SetStats(0);
    hist_wch_1300_1->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_1->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_1 -> SetFillStyle(3002);
    hist_wch_1400_1 -> SetMarkerStyle(21);
    hist_wch_1400_1 -> SetMarkerColor(kGreen);
    hist_wch_1400_1 -> SetStats(0);
    hist_wch_1400_1->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_1->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_1 -> SetFillStyle(3002);
    hist_wch_1500_1 -> SetMarkerStyle(21);
    hist_wch_1500_1 -> SetMarkerColor(kRed);
    hist_wch_1500_1 -> SetStats(0);
    hist_wch_1500_1->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_1->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_1 -> SetFillStyle(3002);
    hist_wch_1600_1 -> SetMarkerStyle(21);
    hist_wch_1600_1 -> SetMarkerColor(kOrange);
    hist_wch_1600_1 -> SetStats(0);
    hist_wch_1600_1->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_1->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_1 -> SetFillStyle(3002);
    hist_wch_1700_1 -> SetMarkerStyle(21);
    hist_wch_1700_1 -> SetMarkerColor(kViolet);
    hist_wch_1700_1 -> SetStats(0);
    hist_wch_1700_1->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_1->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_1 -> Draw("ep");
    hist_wch_1400_1 -> Draw("ep same");
    hist_wch_1500_1 -> Draw("ep same");
    hist_wch_1600_1 -> Draw("ep same");
    hist_wch_1700_1 -> Draw("ep same");

    auto lwch1 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch1 -> SetHeader("trigger", "C");
    lwch1 -> AddEntry(hist_wch_1300_1, "1300", "p");
    lwch1 -> AddEntry(hist_wch_1400_1, "1400", "p");
    lwch1 -> AddEntry(hist_wch_1500_1, "1500", "p");
    lwch1 -> AddEntry(hist_wch_1600_1, "1600", "p");
    lwch1 -> AddEntry(hist_wch_1700_1, "1700", "p");
    lwch1 -> Draw();
    Cwch1 -> SetLogy();
    
    auto Cwch2 = new TCanvas("Cwch2", "wch2", 800, 500);
    hist_wch_1300_2 -> SetFillStyle(3002);
    hist_wch_1300_2 -> SetMarkerStyle(21);
    hist_wch_1300_2 -> SetMarkerColor(kBlue);
    hist_wch_1300_2 -> SetStats(0);
    hist_wch_1300_2->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_2->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_2 -> SetFillStyle(3002);
    hist_wch_1400_2 -> SetMarkerStyle(21);
    hist_wch_1400_2 -> SetMarkerColor(kGreen);
    hist_wch_1400_2 -> SetStats(0);
    hist_wch_1400_2->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_2->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_2 -> SetFillStyle(3002);
    hist_wch_1500_2 -> SetMarkerStyle(21);
    hist_wch_1500_2 -> SetMarkerColor(kRed);
    hist_wch_1500_2 -> SetStats(0);
    hist_wch_1500_2->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_2->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_2 -> SetFillStyle(3002);
    hist_wch_1600_2 -> SetMarkerStyle(21);
    hist_wch_1600_2 -> SetMarkerColor(kOrange);
    hist_wch_1600_2 -> SetStats(0);
    hist_wch_1600_2->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_2->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_2 -> SetFillStyle(3002);
    hist_wch_1700_2 -> SetMarkerStyle(21);
    hist_wch_1700_2 -> SetMarkerColor(kViolet);
    hist_wch_1700_2 -> SetStats(0);
    hist_wch_1700_2->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_2->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_2 -> Draw("ep");
    hist_wch_1400_2 -> Draw("ep same");
    hist_wch_1500_2 -> Draw("ep same");
    hist_wch_1600_2 -> Draw("ep same");
    hist_wch_1700_2 -> Draw("ep same");

    auto lwch2 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch2 -> SetHeader("trigger", "C");
    lwch2 -> AddEntry(hist_wch_1300_2, "1300", "p");
    lwch2 -> AddEntry(hist_wch_1400_2, "1400", "p");
    lwch2 -> AddEntry(hist_wch_1500_2, "1500", "p");
    lwch2 -> AddEntry(hist_wch_1600_2, "1600", "p");
    lwch2 -> AddEntry(hist_wch_1700_2, "1700", "p");
    lwch2 -> Draw();
    Cwch2 -> SetLogy();
    
    auto Cwch3 = new TCanvas("Cwch3", "wch3", 800, 500);
    hist_wch_1300_3 -> SetFillStyle(3002);
    hist_wch_1300_3 -> SetMarkerStyle(21);
    hist_wch_1300_3 -> SetMarkerColor(kBlue);
    hist_wch_1300_3 -> SetStats(0);
    hist_wch_1300_3->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_3->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_3 -> SetFillStyle(3002);
    hist_wch_1400_3 -> SetMarkerStyle(21);
    hist_wch_1400_3 -> SetMarkerColor(kGreen);
    hist_wch_1400_3 -> SetStats(0);
    hist_wch_1400_3->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_3->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_3 -> SetFillStyle(3002);
    hist_wch_1500_3 -> SetMarkerStyle(21);
    hist_wch_1500_3 -> SetMarkerColor(kRed);
    hist_wch_1500_3 -> SetStats(0);
    hist_wch_1500_3->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_3->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_3 -> SetFillStyle(3002);
    hist_wch_1600_3 -> SetMarkerStyle(21);
    hist_wch_1600_3 -> SetMarkerColor(kOrange);
    hist_wch_1600_3 -> SetStats(0);
    hist_wch_1600_3->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_3->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_3 -> SetFillStyle(3002);
    hist_wch_1700_3 -> SetMarkerStyle(21);
    hist_wch_1700_3 -> SetMarkerColor(kViolet);
    hist_wch_1700_3 -> SetStats(0);
    hist_wch_1700_3->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_3->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_3 -> Draw("ep");
    hist_wch_1400_3 -> Draw("ep same");
    hist_wch_1500_3 -> Draw("ep same");
    hist_wch_1600_3 -> Draw("ep same");
    hist_wch_1700_3 -> Draw("ep same");

    auto lwch3 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch3 -> SetHeader("trigger", "C");
    lwch3 -> AddEntry(hist_wch_1300_3, "1300", "p");
    lwch3 -> AddEntry(hist_wch_1400_3, "1400", "p");
    lwch3 -> AddEntry(hist_wch_1500_3, "1500", "p");
    lwch3 -> AddEntry(hist_wch_1600_3, "1600", "p");
    lwch3 -> AddEntry(hist_wch_1700_3, "1700", "p");
    lwch3 -> Draw();
    Cwch3 -> SetLogy();

    auto Cwch4 = new TCanvas("Cwch4", "wch4", 800, 500);
    hist_wch_1300_4 -> SetFillStyle(3002);
    hist_wch_1300_4 -> SetMarkerStyle(21);
    hist_wch_1300_4 -> SetMarkerColor(kBlue);
    hist_wch_1300_4 -> SetStats(0);
    hist_wch_1300_4->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_4->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_4 -> SetFillStyle(3002);
    hist_wch_1400_4 -> SetMarkerStyle(21);
    hist_wch_1400_4 -> SetMarkerColor(kGreen);
    hist_wch_1400_4 -> SetStats(0);
    hist_wch_1400_4->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_4->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_4 -> SetFillStyle(3002);
    hist_wch_1500_4 -> SetMarkerStyle(21);
    hist_wch_1500_4 -> SetMarkerColor(kRed);
    hist_wch_1500_4 -> SetStats(0);
    hist_wch_1500_4->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_4->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_4 -> SetFillStyle(3002);
    hist_wch_1600_4 -> SetMarkerStyle(21);
    hist_wch_1600_4 -> SetMarkerColor(kOrange);
    hist_wch_1600_4 -> SetStats(0);
    hist_wch_1600_4->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_4->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_4 -> SetFillStyle(3002);
    hist_wch_1700_4 -> SetMarkerStyle(21);
    hist_wch_1700_4 -> SetMarkerColor(kViolet);
    hist_wch_1700_4 -> SetStats(0);
    hist_wch_1700_4->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_4->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_4 -> Draw("ep");
    hist_wch_1400_4 -> Draw("ep same");
    hist_wch_1500_4 -> Draw("ep same");
    hist_wch_1600_4 -> Draw("ep same");
    hist_wch_1700_4 -> Draw("ep same");

    auto lwch4 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch4 -> SetHeader("trigger", "C");
    lwch4 -> AddEntry(hist_wch_1300_4, "1300", "p");
    lwch4 -> AddEntry(hist_wch_1400_4, "1400", "p");
    lwch4 -> AddEntry(hist_wch_1500_4, "1500", "p");
    lwch4 -> AddEntry(hist_wch_1600_4, "1600", "p");
    lwch4 -> AddEntry(hist_wch_1700_4, "1700", "p");
    lwch4 -> Draw();
    Cwch4 -> SetLogy();
    
    auto Cwch5 = new TCanvas("Cwch5", "wch5", 800, 500);
    hist_wch_1300_5 -> SetFillStyle(3002);
    hist_wch_1300_5 -> SetMarkerStyle(21);
    hist_wch_1300_5 -> SetMarkerColor(kBlue);
    hist_wch_1300_5 -> SetStats(0);
    hist_wch_1300_5->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_5->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_5 -> SetFillStyle(3002);
    hist_wch_1400_5 -> SetMarkerStyle(21);
    hist_wch_1400_5 -> SetMarkerColor(kGreen);
    hist_wch_1400_5 -> SetStats(0);
    hist_wch_1400_5->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_5->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_5 -> SetFillStyle(3002);
    hist_wch_1500_5 -> SetMarkerStyle(21);
    hist_wch_1500_5 -> SetMarkerColor(kRed);
    hist_wch_1500_5 -> SetStats(0);
    hist_wch_1500_5->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_5->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_5 -> SetFillStyle(3002);
    hist_wch_1600_5 -> SetMarkerStyle(21);
    hist_wch_1600_5 -> SetMarkerColor(kOrange);
    hist_wch_1600_5 -> SetStats(0);
    hist_wch_1600_5->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_5->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_5 -> SetFillStyle(3002);
    hist_wch_1700_5 -> SetMarkerStyle(21);
    hist_wch_1700_5 -> SetMarkerColor(kViolet);
    hist_wch_1700_5 -> SetStats(0);
    hist_wch_1700_5->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_5->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_5 -> Draw("ep");
    hist_wch_1400_5 -> Draw("ep same");
    hist_wch_1500_5 -> Draw("ep same");
    hist_wch_1600_5 -> Draw("ep same");
    hist_wch_1700_5 -> Draw("ep same");

    auto lwch5 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch5 -> SetHeader("trigger", "C");
    lwch5 -> AddEntry(hist_wch_1300_5, "1300", "p");
    lwch5 -> AddEntry(hist_wch_1400_5, "1400", "p");
    lwch5 -> AddEntry(hist_wch_1500_5, "1500", "p");
    lwch5 -> AddEntry(hist_wch_1600_5, "1600", "p");
    lwch5 -> AddEntry(hist_wch_1700_5, "1700", "p");
    lwch5 -> Draw();
    Cwch5 -> SetLogy();
    
    auto Cwch6 = new TCanvas("Cwch6", "wch6", 800, 500);
    hist_wch_1300_6 -> SetFillStyle(3002);
    hist_wch_1300_6 -> SetMarkerStyle(21);
    hist_wch_1300_6 -> SetMarkerColor(kBlue);
    hist_wch_1300_6 -> SetStats(0);
    hist_wch_1300_6->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_6->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_6 -> SetFillStyle(3002);
    hist_wch_1400_6 -> SetMarkerStyle(21);
    hist_wch_1400_6 -> SetMarkerColor(kGreen);
    hist_wch_1400_6 -> SetStats(0);
    hist_wch_1400_6->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_6->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_6 -> SetFillStyle(3002);
    hist_wch_1500_6 -> SetMarkerStyle(21);
    hist_wch_1500_6 -> SetMarkerColor(kRed);
    hist_wch_1500_6 -> SetStats(0);
    hist_wch_1500_6->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_6->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_6 -> SetFillStyle(3002);
    hist_wch_1600_6 -> SetMarkerStyle(21);
    hist_wch_1600_6 -> SetMarkerColor(kOrange);
    hist_wch_1600_6 -> SetStats(0);
    hist_wch_1600_6->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_6->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_6 -> SetFillStyle(3002);
    hist_wch_1700_6 -> SetMarkerStyle(21);
    hist_wch_1700_6 -> SetMarkerColor(kViolet);
    hist_wch_1700_6 -> SetStats(0);
    hist_wch_1700_6->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_6->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_6 -> Draw("ep");
    hist_wch_1400_6 -> Draw("ep same");
    hist_wch_1500_6 -> Draw("ep same");
    hist_wch_1600_6 -> Draw("ep same");
    hist_wch_1700_6 -> Draw("ep same");

    auto lwch6 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch6 -> SetHeader("trigger", "C");
    lwch6 -> AddEntry(hist_wch_1300_6, "1300", "p");
    lwch6 -> AddEntry(hist_wch_1400_6, "1400", "p");
    lwch6 -> AddEntry(hist_wch_1500_6, "1500", "p");
    lwch6 -> AddEntry(hist_wch_1600_6, "1600", "p");
    lwch6 -> AddEntry(hist_wch_1700_6, "1700", "p");
    lwch6 -> Draw();
    Cwch6 -> SetLogy();
    
    auto Cwch7 = new TCanvas("Cwch7", "wch7", 800, 500);
    hist_wch_1300_7 -> SetFillStyle(3002);
    hist_wch_1300_7 -> SetMarkerStyle(21);
    hist_wch_1300_7 -> SetMarkerColor(kBlue);
    hist_wch_1300_7 -> SetStats(0);
    hist_wch_1300_7->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_7->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_7 -> SetFillStyle(3002);
    hist_wch_1400_7 -> SetMarkerStyle(21);
    hist_wch_1400_7 -> SetMarkerColor(kGreen);
    hist_wch_1400_7 -> SetStats(0);
    hist_wch_1400_7->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_7->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_7 -> SetFillStyle(3002);
    hist_wch_1500_7 -> SetMarkerStyle(21);
    hist_wch_1500_7 -> SetMarkerColor(kRed);
    hist_wch_1500_7 -> SetStats(0);
    hist_wch_1500_7->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_7->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_7 -> SetFillStyle(3002);
    hist_wch_1600_7 -> SetMarkerStyle(21);
    hist_wch_1600_7 -> SetMarkerColor(kOrange);
    hist_wch_1600_7 -> SetStats(0);
    hist_wch_1600_7->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_7->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_7 -> SetFillStyle(3002);
    hist_wch_1700_7 -> SetMarkerStyle(21);
    hist_wch_1700_7 -> SetMarkerColor(kViolet);
    hist_wch_1700_7 -> SetStats(0);
    hist_wch_1700_7->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_7->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_7 -> Draw("ep");
    hist_wch_1400_7 -> Draw("ep same");
    hist_wch_1500_7 -> Draw("ep same");
    hist_wch_1600_7 -> Draw("ep same");
    hist_wch_1700_7 -> Draw("ep same");

    auto lwch7 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch7 -> SetHeader("trigger", "C");
    lwch7 -> AddEntry(hist_wch_1300_7, "1300", "p");
    lwch7 -> AddEntry(hist_wch_1400_7, "1400", "p");
    lwch7 -> AddEntry(hist_wch_1500_7, "1500", "p");
    lwch7 -> AddEntry(hist_wch_1600_7, "1600", "p");
    lwch7 -> AddEntry(hist_wch_1700_7, "1700", "p");
    lwch7 -> Draw();
    Cwch7 -> SetLogy();
    
    auto Cwch8 = new TCanvas("Cwch8", "wch8", 800, 500);
    hist_wch_1300_8 -> SetFillStyle(3002);
    hist_wch_1300_8 -> SetMarkerStyle(21);
    hist_wch_1300_8 -> SetMarkerColor(kBlue);
    hist_wch_1300_8 -> SetStats(0);
    hist_wch_1300_8->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_8->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_8 -> SetFillStyle(3002);
    hist_wch_1400_8 -> SetMarkerStyle(21);
    hist_wch_1400_8 -> SetMarkerColor(kGreen);
    hist_wch_1400_8 -> SetStats(0);
    hist_wch_1400_8->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_8->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_8 -> SetFillStyle(3002);
    hist_wch_1500_8 -> SetMarkerStyle(21);
    hist_wch_1500_8 -> SetMarkerColor(kRed);
    hist_wch_1500_8 -> SetStats(0);
    hist_wch_1500_8->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_8->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_8 -> SetFillStyle(3002);
    hist_wch_1600_8 -> SetMarkerStyle(21);
    hist_wch_1600_8 -> SetMarkerColor(kOrange);
    hist_wch_1600_8 -> SetStats(0);
    hist_wch_1600_8->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_8->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_8 -> SetFillStyle(3002);
    hist_wch_1700_8 -> SetMarkerStyle(21);
    hist_wch_1700_8 -> SetMarkerColor(kViolet);
    hist_wch_1700_8 -> SetStats(0);
    hist_wch_1700_8->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_8->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_8 -> Draw("ep");
    hist_wch_1400_8 -> Draw("ep same");
    hist_wch_1500_8 -> Draw("ep same");
    hist_wch_1600_8 -> Draw("ep same");
    hist_wch_1700_8 -> Draw("ep same");

    auto lwch8 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch8 -> SetHeader("trigger", "C");
    lwch8 -> AddEntry(hist_wch_1300_8, "1300", "p");
    lwch8 -> AddEntry(hist_wch_1400_8, "1400", "p");
    lwch8 -> AddEntry(hist_wch_1500_8, "1500", "p");
    lwch8 -> AddEntry(hist_wch_1600_8, "1600", "p");
    lwch8 -> AddEntry(hist_wch_1700_8, "1700", "p");
    lwch8 -> Draw();
    Cwch8 -> SetLogy();
    
    auto Cwch9 = new TCanvas("Cwch9", "wch9", 800, 500);
    hist_wch_1300_9 -> SetFillStyle(3002);
    hist_wch_1300_9 -> SetMarkerStyle(21);
    hist_wch_1300_9 -> SetMarkerColor(kBlue);
    hist_wch_1300_9 -> SetStats(0);
    hist_wch_1300_9->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_9->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_9 -> SetFillStyle(3002);
    hist_wch_1400_9 -> SetMarkerStyle(21);
    hist_wch_1400_9 -> SetMarkerColor(kGreen);
    hist_wch_1400_9 -> SetStats(0);
    hist_wch_1400_9->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_9->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_9 -> SetFillStyle(3002);
    hist_wch_1500_9 -> SetMarkerStyle(21);
    hist_wch_1500_9 -> SetMarkerColor(kRed);
    hist_wch_1500_9 -> SetStats(0);
    hist_wch_1500_9->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_9->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_9 -> SetFillStyle(3002);
    hist_wch_1600_9 -> SetMarkerStyle(21);
    hist_wch_1600_9 -> SetMarkerColor(kOrange);
    hist_wch_1600_9 -> SetStats(0);
    hist_wch_1600_9->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_9->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_9 -> SetFillStyle(3002);
    hist_wch_1700_9 -> SetMarkerStyle(21);
    hist_wch_1700_9 -> SetMarkerColor(kViolet);
    hist_wch_1700_9 -> SetStats(0);
    hist_wch_1700_9->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_9->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_9 -> Draw("ep");
    hist_wch_1400_9 -> Draw("ep same");
    hist_wch_1500_9 -> Draw("ep same");
    hist_wch_1600_9 -> Draw("ep same");
    hist_wch_1700_9 -> Draw("ep same");

    auto lwch9 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch9 -> SetHeader("trigger", "C");
    lwch9 -> AddEntry(hist_wch_1300_9, "1300", "p");
    lwch9 -> AddEntry(hist_wch_1400_9, "1400", "p");
    lwch9 -> AddEntry(hist_wch_1500_9, "1500", "p");
    lwch9 -> AddEntry(hist_wch_1600_9, "1600", "p");
    lwch9 -> AddEntry(hist_wch_1700_9, "1700", "p");
    lwch9 -> Draw();
    Cwch9 -> SetLogy();
    
    auto Cwch10 = new TCanvas("Cwch10", "wch10", 800, 500);
    hist_wch_1300_10 -> SetFillStyle(3002);
    hist_wch_1300_10 -> SetMarkerStyle(21);
    hist_wch_1300_10 -> SetMarkerColor(kBlue);
    hist_wch_1300_10 -> SetStats(0);
    hist_wch_1300_10->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_10->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_10 -> SetFillStyle(3002);
    hist_wch_1400_10 -> SetMarkerStyle(21);
    hist_wch_1400_10 -> SetMarkerColor(kGreen);
    hist_wch_1400_10 -> SetStats(0);
    hist_wch_1400_10->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_10->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_10 -> SetFillStyle(3002);
    hist_wch_1500_10 -> SetMarkerStyle(21);
    hist_wch_1500_10 -> SetMarkerColor(kRed);
    hist_wch_1500_10 -> SetStats(0);
    hist_wch_1500_10->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_10->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_10 -> SetFillStyle(3002);
    hist_wch_1600_10 -> SetMarkerStyle(21);
    hist_wch_1600_10 -> SetMarkerColor(kOrange);
    hist_wch_1600_10 -> SetStats(0);
    hist_wch_1600_10->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_10->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_10 -> SetFillStyle(3002);
    hist_wch_1700_10 -> SetMarkerStyle(21);
    hist_wch_1700_10 -> SetMarkerColor(kViolet);
    hist_wch_1700_10 -> SetStats(0);
    hist_wch_1700_10->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_10->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_10 -> Draw("ep");
    hist_wch_1400_10 -> Draw("ep same");
    hist_wch_1500_10 -> Draw("ep same");
    hist_wch_1600_10 -> Draw("ep same");
    hist_wch_1700_10 -> Draw("ep same");

    auto lwch10 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch10 -> SetHeader("trigger", "C");
    lwch10 -> AddEntry(hist_wch_1300_10, "1300", "p");
    lwch10 -> AddEntry(hist_wch_1400_10, "1400", "p");
    lwch10 -> AddEntry(hist_wch_1500_10, "1500", "p");
    lwch10 -> AddEntry(hist_wch_1600_10, "1600", "p");
    lwch10 -> AddEntry(hist_wch_1700_10, "1700", "p");
    lwch10 -> Draw();
    Cwch10 -> SetLogy();
    
    auto Cwch11 = new TCanvas("Cwch11", "wch11", 800, 500);
    hist_wch_1300_11 -> SetFillStyle(3002);
    hist_wch_1300_11 -> SetMarkerStyle(21);
    hist_wch_1300_11 -> SetMarkerColor(kBlue);
    hist_wch_1300_11 -> SetStats(0);
    hist_wch_1300_11->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_11->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_11 -> SetFillStyle(3002);
    hist_wch_1400_11 -> SetMarkerStyle(21);
    hist_wch_1400_11 -> SetMarkerColor(kGreen);
    hist_wch_1400_11 -> SetStats(0);
    hist_wch_1400_11->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_11->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_11 -> SetFillStyle(3002);
    hist_wch_1500_11 -> SetMarkerStyle(21);
    hist_wch_1500_11 -> SetMarkerColor(kRed);
    hist_wch_1500_11 -> SetStats(0);
    hist_wch_1500_11->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_11->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_11 -> SetFillStyle(3002);
    hist_wch_1600_11 -> SetMarkerStyle(21);
    hist_wch_1600_11 -> SetMarkerColor(kOrange);
    hist_wch_1600_11 -> SetStats(0);
    hist_wch_1600_11->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_11->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_11 -> SetFillStyle(3002);
    hist_wch_1700_11 -> SetMarkerStyle(21);
    hist_wch_1700_11 -> SetMarkerColor(kViolet);
    hist_wch_1700_11 -> SetStats(0);
    hist_wch_1700_11->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_11->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_11 -> Draw("ep");
    hist_wch_1400_11 -> Draw("ep same");
    hist_wch_1500_11 -> Draw("ep same");
    hist_wch_1600_11 -> Draw("ep same");
    hist_wch_1700_11 -> Draw("ep same");

    auto lwch11 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch11 -> SetHeader("trigger", "C");
    lwch11 -> AddEntry(hist_wch_1300_11, "1300", "p");
    lwch11 -> AddEntry(hist_wch_1400_11, "1400", "p");
    lwch11 -> AddEntry(hist_wch_1500_11, "1500", "p");
    lwch11 -> AddEntry(hist_wch_1600_11, "1600", "p");
    lwch11 -> AddEntry(hist_wch_1700_11, "1700", "p");
    lwch11 -> Draw();
    Cwch11 -> SetLogy();
    
    auto Cwch12 = new TCanvas("Cwch12", "wch12", 800, 500);
    hist_wch_1300_12 -> SetFillStyle(3002);
    hist_wch_1300_12 -> SetMarkerStyle(21);
    hist_wch_1300_12 -> SetMarkerColor(kBlue);
    hist_wch_1300_12 -> SetStats(0);
    hist_wch_1300_12->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_12->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_12 -> SetFillStyle(3002);
    hist_wch_1400_12 -> SetMarkerStyle(21);
    hist_wch_1400_12 -> SetMarkerColor(kGreen);
    hist_wch_1400_12 -> SetStats(0);
    hist_wch_1400_12->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_12->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_12 -> SetFillStyle(3002);
    hist_wch_1500_12 -> SetMarkerStyle(21);
    hist_wch_1500_12 -> SetMarkerColor(kRed);
    hist_wch_1500_12 -> SetStats(0);
    hist_wch_1500_12->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_12->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_12 -> SetFillStyle(3002);
    hist_wch_1600_12 -> SetMarkerStyle(21);
    hist_wch_1600_12 -> SetMarkerColor(kOrange);
    hist_wch_1600_12 -> SetStats(0);
    hist_wch_1600_12->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_12->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_12 -> SetFillStyle(3002);
    hist_wch_1700_12 -> SetMarkerStyle(21);
    hist_wch_1700_12 -> SetMarkerColor(kViolet);
    hist_wch_1700_12 -> SetStats(0);
    hist_wch_1700_12->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_12->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_12 -> Draw("ep");
    hist_wch_1400_12 -> Draw("ep same");
    hist_wch_1500_12 -> Draw("ep same");
    hist_wch_1600_12 -> Draw("ep same");
    hist_wch_1700_12 -> Draw("ep same");

    auto lwch12 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch12 -> SetHeader("trigger", "C");
    lwch12 -> AddEntry(hist_wch_1300_12, "1300", "p");
    lwch12 -> AddEntry(hist_wch_1400_12, "1400", "p");
    lwch12 -> AddEntry(hist_wch_1500_12, "1500", "p");
    lwch12 -> AddEntry(hist_wch_1600_12, "1600", "p");
    lwch12 -> AddEntry(hist_wch_1700_12, "1700", "p");
    lwch12 -> Draw();
    Cwch12 -> SetLogy();
    
    auto Cwch13 = new TCanvas("Cwch13", "wch13", 800, 500);
    hist_wch_1300_13 -> SetFillStyle(3002);
    hist_wch_1300_13 -> SetMarkerStyle(21);
    hist_wch_1300_13 -> SetMarkerColor(kBlue);
    hist_wch_1300_13 -> SetStats(0);
    hist_wch_1300_13->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_13->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_13 -> SetFillStyle(3002);
    hist_wch_1400_13 -> SetMarkerStyle(21);
    hist_wch_1400_13 -> SetMarkerColor(kGreen);
    hist_wch_1400_13 -> SetStats(0);
    hist_wch_1400_13->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_13->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_13 -> SetFillStyle(3002);
    hist_wch_1500_13 -> SetMarkerStyle(21);
    hist_wch_1500_13 -> SetMarkerColor(kRed);
    hist_wch_1500_13 -> SetStats(0);
    hist_wch_1500_13->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_13->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_13 -> SetFillStyle(3002);
    hist_wch_1600_13 -> SetMarkerStyle(21);
    hist_wch_1600_13 -> SetMarkerColor(kOrange);
    hist_wch_1600_13 -> SetStats(0);
    hist_wch_1600_13->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_13->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_13 -> SetFillStyle(3002);
    hist_wch_1700_13 -> SetMarkerStyle(21);
    hist_wch_1700_13 -> SetMarkerColor(kViolet);
    hist_wch_1700_13 -> SetStats(0);
    hist_wch_1700_13->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_13->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_13 -> Draw("ep");
    hist_wch_1400_13 -> Draw("ep same");
    hist_wch_1500_13 -> Draw("ep same");
    hist_wch_1600_13 -> Draw("ep same");
    hist_wch_1700_13 -> Draw("ep same");

    auto lwch13 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch13 -> SetHeader("trigger", "C");
    lwch13 -> AddEntry(hist_wch_1300_13, "1300", "p");
    lwch13 -> AddEntry(hist_wch_1400_13, "1400", "p");
    lwch13 -> AddEntry(hist_wch_1500_13, "1500", "p");
    lwch13 -> AddEntry(hist_wch_1600_13, "1600", "p");
    lwch13 -> AddEntry(hist_wch_1700_13, "1700", "p");
    lwch13 -> Draw();
    Cwch13 -> SetLogy();
    
    auto Cwch14 = new TCanvas("Cwch14", "wch14", 800, 500);
    hist_wch_1300_14 -> SetFillStyle(3002);
    hist_wch_1300_14 -> SetMarkerStyle(21);
    hist_wch_1300_14 -> SetMarkerColor(kBlue);
    hist_wch_1300_14 -> SetStats(0);
    hist_wch_1300_14->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_14->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_14 -> SetFillStyle(3002);
    hist_wch_1400_14 -> SetMarkerStyle(21);
    hist_wch_1400_14 -> SetMarkerColor(kGreen);
    hist_wch_1400_14 -> SetStats(0);
    hist_wch_1400_14->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_14->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_14 -> SetFillStyle(3002);
    hist_wch_1500_14 -> SetMarkerStyle(21);
    hist_wch_1500_14 -> SetMarkerColor(kRed);
    hist_wch_1500_14 -> SetStats(0);
    hist_wch_1500_14->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_14->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_14 -> SetFillStyle(3002);
    hist_wch_1600_14 -> SetMarkerStyle(21);
    hist_wch_1600_14 -> SetMarkerColor(kOrange);
    hist_wch_1600_14 -> SetStats(0);
    hist_wch_1600_14->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_14->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_14 -> SetFillStyle(3002);
    hist_wch_1700_14 -> SetMarkerStyle(21);
    hist_wch_1700_14 -> SetMarkerColor(kViolet);
    hist_wch_1700_14 -> SetStats(0);
    hist_wch_1700_14->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_14->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_14 -> Draw("ep");
    hist_wch_1400_14 -> Draw("ep same");
    hist_wch_1500_14 -> Draw("ep same");
    hist_wch_1600_14 -> Draw("ep same");
    hist_wch_1700_14 -> Draw("ep same");

    auto lwch14 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch14 -> SetHeader("trigger", "C");
    lwch14 -> AddEntry(hist_wch_1300_14, "1300", "p");
    lwch14 -> AddEntry(hist_wch_1400_14, "1400", "p");
    lwch14 -> AddEntry(hist_wch_1500_14, "1500", "p");
    lwch14 -> AddEntry(hist_wch_1600_14, "1600", "p");
    lwch14 -> AddEntry(hist_wch_1700_14, "1700", "p");
    lwch14 -> Draw();
    Cwch14 -> SetLogy();
    
    auto Cwch15 = new TCanvas("Cwch15", "wch15", 800, 500);
    hist_wch_1300_15 -> SetFillStyle(3002);
    hist_wch_1300_15 -> SetMarkerStyle(21);
    hist_wch_1300_15 -> SetMarkerColor(kBlue);
    hist_wch_1300_15 -> SetStats(0);
    hist_wch_1300_15->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1300_15->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1400_15 -> SetFillStyle(3002);
    hist_wch_1400_15 -> SetMarkerStyle(21);
    hist_wch_1400_15 -> SetMarkerColor(kGreen);
    hist_wch_1400_15 -> SetStats(0);
    hist_wch_1400_15->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1400_15->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1500_15 -> SetFillStyle(3002);
    hist_wch_1500_15 -> SetMarkerStyle(21);
    hist_wch_1500_15 -> SetMarkerColor(kRed);
    hist_wch_1500_15 -> SetStats(0);
    hist_wch_1500_15->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1500_15->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1600_15 -> SetFillStyle(3002);
    hist_wch_1600_15 -> SetMarkerStyle(21);
    hist_wch_1600_15 -> SetMarkerColor(kOrange);
    hist_wch_1600_15 -> SetStats(0);
    hist_wch_1600_15->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1600_15->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1700_15 -> SetFillStyle(3002);
    hist_wch_1700_15 -> SetMarkerStyle(21);
    hist_wch_1700_15 -> SetMarkerColor(kViolet);
    hist_wch_1700_15 -> SetStats(0);
    hist_wch_1700_15->GetYaxis()->SetTitle("Cuentas");
    hist_wch_1700_15->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");

    hist_wch_1300_15 -> Draw("ep");
    hist_wch_1400_15 -> Draw("ep same");
    hist_wch_1500_15 -> Draw("ep same");
    hist_wch_1600_15 -> Draw("ep same");
    hist_wch_1700_15 -> Draw("ep same");

    auto lwch15 = new TLegend(0.6, 0.65, 0.8, 0.89);
    lwch15 -> SetHeader("trigger", "C");
    lwch15 -> AddEntry(hist_wch_1300_15, "1300", "p");
    lwch15 -> AddEntry(hist_wch_1400_15, "1400", "p");
    lwch15 -> AddEntry(hist_wch_1500_15, "1500", "p");
    lwch15 -> AddEntry(hist_wch_1600_15, "1600", "p");
    lwch15 -> AddEntry(hist_wch_1700_15, "1700", "p");
    lwch15 -> Draw();
    Cwch15 -> SetLogy();
    
    auto Cwch0_1_2_3 = new TCanvas("Cwch0_1_2_3", "wch0_1_2_3", 1600, 1000);
    Cwch0_1_2_3 -> Divide(2,2);

    Cwch0_1_2_3 -> cd(1);

    hist_wch_1300_0 -> Draw("ep");
    hist_wch_1400_0 -> Draw("ep same");
    hist_wch_1500_0 -> Draw("ep same");
    hist_wch_1600_0 -> Draw("ep same");
    hist_wch_1700_0 -> Draw("ep same");
    lwch0 -> Draw();
    //Cwch0_1_2_3 -> cd(1) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(1) -> SetLogy();

    Cwch0_1_2_3 -> cd(2);

    hist_wch_1300_1 -> Draw("ep");
    hist_wch_1400_1 -> Draw("ep same");
    hist_wch_1500_1 -> Draw("ep same");
    hist_wch_1600_1 -> Draw("ep same");
    hist_wch_1700_1 -> Draw("ep same");
    lwch1 -> Draw();
    //Cwch0_1_2_3 -> cd(2) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(2) -> SetLogy();

    Cwch0_1_2_3 -> cd(3);

    hist_wch_1300_2 -> Draw("ep");
    hist_wch_1400_2 -> Draw("ep same");
    hist_wch_1500_2 -> Draw("ep same");
    hist_wch_1600_2 -> Draw("ep same");
    hist_wch_1700_2 -> Draw("ep same");
    lwch2 -> Draw();
    //Cwch0_1_2_3 -> cd(3) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(3) -> SetLogy();

    Cwch0_1_2_3 -> cd(4);

    hist_wch_1300_3 -> Draw("ep");
    hist_wch_1400_3 -> Draw("ep same");
    hist_wch_1500_3 -> Draw("ep same");
    hist_wch_1600_3 -> Draw("ep same");
    hist_wch_1700_3 -> Draw("ep same");
    lwch3 -> Draw();
    //Cwch0_1_2_3 -> cd(4) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(4) -> SetLogy();

    Cwch0_1_2_3 -> Draw();
    Cwch0_1_2_3 -> SaveAs("wch0_1_2_3.pdf");
    Cwch0_1_2_3 -> SaveAs("wch0_1_2_3.png");

    auto Cwch4_5_6_7 = new TCanvas("Cwch4_5_6_7", "wch4_5_6_7", 1600, 1000);
    Cwch4_5_6_7 -> Divide(2,2);

    Cwch4_5_6_7 -> cd(1);

    hist_wch_1300_4 -> Draw("ep");
    hist_wch_1400_4 -> Draw("ep same");
    hist_wch_1500_4 -> Draw("ep same");
    hist_wch_1600_4 -> Draw("ep same");
    hist_wch_1700_4 -> Draw("ep same");
    lwch4 -> Draw();
    //Cwch4_5_6_7 -> cd(1) -> SetLeftMargin(0.20);
    Cwch4_5_6_7 -> cd(1) -> SetLogy();

    Cwch4_5_6_7 -> cd(2);

    hist_wch_1300_5 -> Draw("ep");
    hist_wch_1400_5 -> Draw("ep same");
    hist_wch_1500_5 -> Draw("ep same");
    hist_wch_1600_5 -> Draw("ep same");
    hist_wch_1700_5 -> Draw("ep same");
    lwch5 -> Draw();
    //Cwch4_5_6_7 -> cd(2) -> SetLeftMargin(0.20);
    Cwch4_5_6_7 -> cd(2) -> SetLogy();

    Cwch4_5_6_7 -> cd(3);

    hist_wch_1300_6 -> Draw("ep");
    hist_wch_1400_6 -> Draw("ep same");
    hist_wch_1500_6 -> Draw("ep same");
    hist_wch_1600_6 -> Draw("ep same");
    hist_wch_1700_6 -> Draw("ep same");
    lwch6 -> Draw();
    //Cwch4_5_6_7 -> cd(3) -> SetLeftMargin(0.20);
    Cwch4_5_6_7 -> cd(3) -> SetLogy();

    Cwch4_5_6_7 -> cd(4);

    hist_wch_1300_7 -> Draw("ep");
    hist_wch_1400_7 -> Draw("ep same");
    hist_wch_1500_7 -> Draw("ep same");
    hist_wch_1600_7 -> Draw("ep same");
    hist_wch_1700_7 -> Draw("ep same");
    lwch7 -> Draw();
    //Cwch4_5_6_7 -> cd(4) -> SetLeftMargin(0.20);
    Cwch4_5_6_7 -> cd(4) -> SetLogy();

    Cwch4_5_6_7 -> Draw();
    Cwch4_5_6_7 -> SaveAs("wch4_5_6_7.pdf");
    Cwch4_5_6_7 -> SaveAs("wch4_5_6_7.png");

    auto Cwch8_9_10_11 = new TCanvas("Cwch8_9_10_11", "wch8_9_10_11", 1600, 1000);
    Cwch8_9_10_11 -> Divide(2,2);

    Cwch8_9_10_11 -> cd(1);

    hist_wch_1300_8 -> Draw("ep");
    hist_wch_1400_8 -> Draw("ep same");
    hist_wch_1500_8 -> Draw("ep same");
    hist_wch_1600_8 -> Draw("ep same");
    hist_wch_1700_8 -> Draw("ep same");
    lwch8 -> Draw();
    //Cwch8_9_10_11 -> cd(1) -> SetLeftMargin(0.20);
    Cwch8_9_10_11 -> cd(1) -> SetLogy();

    Cwch8_9_10_11 -> cd(2);

    hist_wch_1300_9 -> Draw("ep");
    hist_wch_1400_9 -> Draw("ep same");
    hist_wch_1500_9 -> Draw("ep same");
    hist_wch_1600_9 -> Draw("ep same");
    hist_wch_1700_9 -> Draw("ep same");
    lwch9 -> Draw();
    //Cwch8_9_10_11 -> cd(2) -> SetLeftMargin(0.20);
    Cwch8_9_10_11 -> cd(2) -> SetLogy();

    Cwch8_9_10_11 -> cd(3);

    hist_wch_1300_10 -> Draw("ep");
    hist_wch_1400_10 -> Draw("ep same");
    hist_wch_1500_10 -> Draw("ep same");
    hist_wch_1600_10 -> Draw("ep same");
    hist_wch_1700_10 -> Draw("ep same");
    lwch10 -> Draw();
    //Cwch8_9_10_11 -> cd(3) -> SetLeftMargin(0.20);
    Cwch8_9_10_11 -> cd(3) -> SetLogy();

    Cwch8_9_10_11 -> cd(4);

    hist_wch_1300_11 -> Draw("ep");
    hist_wch_1400_11 -> Draw("ep same");
    hist_wch_1500_11 -> Draw("ep same");
    hist_wch_1600_11 -> Draw("ep same");
    hist_wch_1700_11 -> Draw("ep same");
    lwch11 -> Draw();
    //Cwch8_9_10_11 -> cd(4) -> SetLeftMargin(0.20);
    Cwch8_9_10_11 -> cd(4) -> SetLogy();

    Cwch8_9_10_11 -> Draw();
    Cwch8_9_10_11 -> SaveAs("wch8_9_10_11.pdf");
    Cwch8_9_10_11 -> SaveAs("wch8_9_10_11.png");

    auto Cwch12_13_14_15 = new TCanvas("Cwch12_13_14_15", "wch12_13_14_15", 1600, 1000);
    Cwch12_13_14_15 -> Divide(2,2);

    Cwch12_13_14_15 -> cd(1);

    hist_wch_1300_12 -> Draw("ep");
    hist_wch_1400_12 -> Draw("ep same");
    hist_wch_1500_12 -> Draw("ep same");
    hist_wch_1600_12 -> Draw("ep same");
    hist_wch_1700_12 -> Draw("ep same");
    lwch12 -> Draw();
    //Cwch12_13_14_15 -> cd(1) -> SetLeftMargin(0.20);
    Cwch12_13_14_15 -> cd(1) -> SetLogy();

    Cwch12_13_14_15 -> cd(2);

    hist_wch_1300_13 -> Draw("ep");
    hist_wch_1400_13 -> Draw("ep same");
    hist_wch_1500_13 -> Draw("ep same");
    hist_wch_1600_13 -> Draw("ep same");
    hist_wch_1700_13 -> Draw("ep same");
    lwch13 -> Draw();
    //Cwch12_13_14_15 -> cd(2) -> SetLeftMargin(0.20);
    Cwch12_13_14_15 -> cd(2) -> SetLogy();

    Cwch12_13_14_15 -> cd(3);

    hist_wch_1300_14 -> Draw("ep");
    hist_wch_1400_14 -> Draw("ep same");
    hist_wch_1500_14 -> Draw("ep same");
    hist_wch_1600_14 -> Draw("ep same");
    hist_wch_1700_14 -> Draw("ep same");
    lwch14 -> Draw();
    //Cwch12_13_14_15 -> cd(3) -> SetLeftMargin(0.20);
    Cwch12_13_14_15 -> cd(3) -> SetLogy();

    Cwch12_13_14_15 -> cd(4);

    hist_wch_1300_15 -> Draw("ep");
    hist_wch_1400_15 -> Draw("ep same");
    hist_wch_1500_15 -> Draw("ep same");
    hist_wch_1600_15 -> Draw("ep same");
    hist_wch_1700_15 -> Draw("ep same");
    lwch15 -> Draw();
    //Cwch12_13_14_15 -> cd(4) -> SetLeftMargin(0.20);
    Cwch12_13_14_15 -> cd(4) -> SetLogy();

    Cwch12_13_14_15 -> Draw();
    Cwch12_13_14_15 -> SaveAs("wch12_13_14_15.pdf");
    Cwch12_13_14_15 -> SaveAs("wch12_13_14_15.png");

    
}
