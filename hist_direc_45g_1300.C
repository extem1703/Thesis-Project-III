void hist_direc_45g_1300(){
    
    gStyle -> SetLegendBorderSize(0);
    gStyle -> SetLegendFillColor(kWhite);
    gStyle -> SetLegendFont(62);
    gStyle -> SetGridColor(kGray);
    gStyle -> SetGridStyle(3);
    //gStyle -> SetPadGridX(kTRUE);
    //gStyle -> SetPadGridY(kTRUE);
    
    TFile *input = new TFile("trigger_FC_45g_8H_1300.root", "read");
    TTree *tree = (TTree*)input->Get("datatree_1300");
    
    Double_t cin, num, tch0, wch0, tch1, wch1, tch2, wch2, tch3, wch3, tch4, wch4, tch5, wch5, tch6, wch6, tch7, wch7, tch8, wch8, tch9, wch9, tch10, wch10, tch11, wch11, tch12, wch12, tch13, wch13, tch14, wch14, tch15, wch15;
    
    tree -> SetBranchAddress("cin", &cin);
    tree -> SetBranchAddress("num", &num);
    tree -> SetBranchAddress("tch0", &tch0);
    tree -> SetBranchAddress("wch0", &wch0);
    tree -> SetBranchAddress("tch1", &tch1);
    tree -> SetBranchAddress("wch1", &wch1);
    tree -> SetBranchAddress("tch2", &tch2);
    tree -> SetBranchAddress("wch2", &wch2);
    tree -> SetBranchAddress("tch3", &tch3);
    tree -> SetBranchAddress("wch3", &wch3);
    tree -> SetBranchAddress("tch4", &tch4);
    tree -> SetBranchAddress("wch4", &wch4);
    tree -> SetBranchAddress("tch5", &tch5);
    tree -> SetBranchAddress("wch5", &wch5);
    tree -> SetBranchAddress("tch6", &tch6);
    tree -> SetBranchAddress("wch6", &wch6);
    tree -> SetBranchAddress("tch7", &tch7);
    tree -> SetBranchAddress("wch7", &wch7);
    tree -> SetBranchAddress("tch8", &tch8);
    tree -> SetBranchAddress("wch8", &wch8);
    tree -> SetBranchAddress("tch9", &tch9);
    tree -> SetBranchAddress("wch9", &wch9);
    tree -> SetBranchAddress("tch10", &tch10);
    tree -> SetBranchAddress("wch10", &wch10);
    tree -> SetBranchAddress("tch11", &tch11);
    tree -> SetBranchAddress("wch11", &wch11);
    tree -> SetBranchAddress("tch12", &tch12);
    tree -> SetBranchAddress("wch12", &wch12);
    tree -> SetBranchAddress("tch13", &tch13);
    tree -> SetBranchAddress("wch13", &wch13);
    tree -> SetBranchAddress("tch14", &tch14);
    tree -> SetBranchAddress("wch14", &wch14);
    tree -> SetBranchAddress("tch15", &tch15);
    tree -> SetBranchAddress("wch15", &wch15);
    
    Int_t entries = tree -> GetEntries();
    
    TH2D *signals_1300 = new TH2D("signals_1300", "signals_1300", 7, 22.7, 67.3, 7, -22.3, 22.3);
    
    TH2D *signals_div_accept_1300 = new TH2D("signals_1300_div_accept", "signals_1300_div_accept", 7, 22.7, 67.3, 7, -22.3, 22.3);
    
    Double_t traj[7][7] = {0};
    
    Int_t corte = 10;

    for (int i=0; i<entries; i++){
        tree -> GetEntry(i);
        //#########################################
        //#########################################
        if (wch3>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[0][0] = traj[0][0]+1;
        }
        //#########################################
        if (wch2>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[1][0] = traj[1][0]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[1][0] = traj[1][0]+1;
        }
        //#########################################
        if (wch1>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[2][0] = traj[2][0]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[2][0] = traj[2][0]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[2][0] = traj[2][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[4][0] = traj[4][0]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[4][0] = traj[4][0]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[4][0] = traj[4][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[5][0] = traj[5][0]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[5][0] = traj[5][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[6][0] = traj[6][0]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[0][1] = traj[0][1]+1;
        }
        if (wch3>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[0][1] = traj[0][1]+1;
        }
        //#########################################
        if (wch2>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[1][1] = traj[1][1]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[1][1] = traj[1][1]+1;
        }
        if (wch2>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[1][1] = traj[1][1]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[1][1] = traj[1][1]+1;
        }
        //#########################################
        if (wch1>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch1>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[2][1] = traj[2][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch0>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch0>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[4][1] = traj[4][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[5][1] = traj[5][1]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[5][1] = traj[5][1]+1;
        }
        if (wch0>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[5][1] = traj[5][1]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[5][1] = traj[5][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[6][1] = traj[6][1]+1;
        }
        if (wch0>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[6][1] = traj[6][1]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[0][2] = traj[0][2]+1;
        }
        if (wch3>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[0][2] = traj[0][2]+1;
        }
        if (wch3>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[0][2] = traj[0][2]+1;
        }
        //#########################################
        if (wch2>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch2>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch2>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[1][2] = traj[1][2]+1;
        }
        //#########################################
        if (wch1>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch1>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch1>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[2][2] = traj[2][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch0>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch0>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch0>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch0>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[4][2] = traj[4][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch0>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch0>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[5][2] = traj[5][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[6][2] = traj[6][2]+1;
        }
        if (wch0>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[6][2] = traj[6][2]+1;
        }
        if (wch0>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[6][2] = traj[6][2]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[0][3] = traj[0][3]+1;
        }
        if (wch3>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[0][3] = traj[0][3]+1;
        }
        if (wch3>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[0][3] = traj[0][3]+1;
        }
        if (wch3>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[0][3] = traj[0][3]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch2>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch2>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch2>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[1][3] = traj[1][3]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch1>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch1>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch1>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[2][3] = traj[2][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch0>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch0>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch0>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch0>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch0>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch0>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[4][3] = traj[4][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch0>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch0>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch0>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[5][3] = traj[5][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[6][3] = traj[6][3]+1;
        }
        if (wch0>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[6][3] = traj[6][3]+1;
        }
        if (wch0>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[6][3] = traj[6][3]+1;
        }
        if (wch0>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[6][3] = traj[6][3]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[0][4] = traj[0][4]+1;
        }
        if (wch3>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[0][4] = traj[0][4]+1;
        }
        if (wch3>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[0][4] = traj[0][4]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch2>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch2>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[1][4] = traj[1][4]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch1>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch1>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[2][4] = traj[2][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch0>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch0>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch0>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch0>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[4][4] = traj[4][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch0>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch0>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[5][4] = traj[5][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[6][4] = traj[6][4]+1;
        }
        if (wch0>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[6][4] = traj[6][4]+1;
        }
        if (wch0>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[6][4] = traj[6][4]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[0][5] = traj[0][5]+1;
        }
        if (wch3>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[0][5] = traj[0][5]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[1][5] = traj[1][5]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[1][5] = traj[1][5]+1;
        }
        if (wch2>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[1][5] = traj[1][5]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[1][5] = traj[1][5]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch1>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[2][5] = traj[2][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch0>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch0>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[4][5] = traj[4][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[5][5] = traj[5][5]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[5][5] = traj[5][5]+1;
        }
        if (wch0>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[5][5] = traj[5][5]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[5][5] = traj[5][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[6][5] = traj[6][5]+1;
        }
        if (wch0>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[6][5] = traj[6][5]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[0][6] = traj[0][6]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[1][6] = traj[1][6]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[1][6] = traj[1][6]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[2][6] = traj[2][6]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[2][6] = traj[2][6]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[2][6] = traj[2][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[4][6] = traj[4][6]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[4][6] = traj[4][6]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[4][6] = traj[4][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[5][6] = traj[5][6]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[5][6] = traj[5][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[6][6] = traj[6][6]+1;
        }
        //#########################################
    }
    
    
    cout << endl;
    
    Double_t probe[7][7] = {{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1}};
    
    cout<< "Counts per trajectory: "<<endl;
    
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << traj[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i=1;i<=7;i++){
        for (int j=1;j<=7;j++){
            signals_1300 -> SetBinContent(i,j,traj[i-1][j-1]);
        }
    }
    
    Double_t acceptance[7][7] = {{0.14852259, 0.3107742,  0.47945721, 0.64541247, 0.47945721, 0.3107742, 0.14852259},{0.3107742,  0.65166759, 1.00677331, 1.35589885, 1.00677331, 0.65166759, 0.3107742},{0.47945721, 1.00677331, 1.55677875, 2.09728614, 1.55677875, 1.00677331, 0.47945721},{0.64541247, 1.35589885, 2.09728614, 2.825761, 2.09728614, 1.35589885, 0.64541247},{0.47945721, 1.00677331, 1.55677875, 2.09728614, 1.55677875, 1.00677331, 0.47945721},{0.3107742, 0.65166759, 1.00677331, 1.35589885, 1.00677331, 0.65166759, 0.3107742},{0.14852259, 0.3107742, 0.47945721, 0.64541247, 0.47945721, 0.3107742, 0.14852259}};
    
    //Double_t acceptance[10] = {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0};
    
    cout << "Acceptance: "<< endl;
    
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << acceptance[i][j] << " ";
        }
        cout << endl;
    }
    
    Double_t traj_div_accept[7][7] = {0};
    
    for (int i=0;i<7;i++){
        for (int j=0;j<7;j++){
            traj_div_accept[i][j] = traj[i][j]/acceptance[i][j];
        }
    }
    
    cout<< "Counts divided per acceptance: "<<endl;
    
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << traj_div_accept[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i=1;i<=7;i++){
        for (int j=1;j<=7;j++){
            signals_div_accept_1300 -> SetBinContent(i,j,traj_div_accept[i-1][j-1]);
        }
    }
    
    /*for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << probe[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i=1;i<=7;i++){
        for (int j=1;j<=7;j++){
            signals_1300 -> SetBinContent(i,j,probe[i-1][j-1]);
        }
    }*/
    
    Double_t value[28] = {0};
    
    for (int i=0; i<7; i++){
        for (int j=0; j<7; j++){
            if ((i==6 && j==0) || (i==6 && j==6)){
                value[27] = value[27] + traj_div_accept[i][j];
            }
            if ((i==6 && j==1) || (i==6 && j==5)){
                value[26] = value[26] + traj_div_accept[i][j];
            }
            if ((i==6 && j==2) || (i==6 && j==4)){
                value[25] = value[25] + traj_div_accept[i][j];
            }
            if ((i==6 && j==3)){
                value[24] = value[24] + traj_div_accept[i][j];
            }
            if ((i==5 && j==0) || (i==5 && j==6)){
                value[23] = value[23] + traj_div_accept[i][j];
            }
            if ((i==5 && j==1) || (i==5 && j==5)){
                value[22] = value[22] + traj_div_accept[i][j];
            }
            if ((i==5 && j==2) || (i==5 && j==4)){
                value[21] = value[21] + traj_div_accept[i][j];
            }
            if ((i==5 && j==3)){
                value[20] = value[20] + traj_div_accept[i][j];
            }

            if ((i==4 && j==0) || (i==4 && j==6)){
                value[19] = value[19] + traj_div_accept[i][j];
            }
            if ((i==4 && j==1) || (i==4 && j==5)){
                value[18] = value[18] + traj_div_accept[i][j];
            }
            if ((i==4 && j==2) || (i==4 && j==4)){
                value[17] = value[17] + traj_div_accept[i][j];
            }
            if ((i==4 && j==3)){
                value[16] = value[16] + traj_div_accept[i][j];
            }
            
            if ((i==3 && j==0) || (i==3 && j==6)){
                value[15] = value[15] + traj_div_accept[i][j];
            }
            if ((i==3 && j==1) || (i==3 && j==5)){
                value[14] = value[14] + traj_div_accept[i][j];
            }
            if ((i==3 && j==2) || (i==3 && j==4)){
                value[13] = value[13] + traj_div_accept[i][j];
            }
            if ((i==3 && j==3)){
                value[12] = value[12] + traj_div_accept[i][j];
            }
            
            if ((i==2 && j==0) || (i==2 && j==6)){
                value[11] = value[11] + traj_div_accept[i][j];
            }
            if ((i==2 && j==1) || (i==2 && j==5)){
                value[10] = value[10] + traj_div_accept[i][j];
            }
            if ((i==2 && j==2) || (i==2 && j==4)){
                value[9] = value[9] + traj_div_accept[i][j];
            }
            if ((i==2 && j==3)){
                value[8] = value[8] + traj_div_accept[i][j];
            }
            
            if ((i==1 && j==0) || (i==1 && j==6)){
                value[7] = value[7] + traj_div_accept[i][j];
            }
            if ((i==1 && j==1) || (i==1 && j==5)){
                value[6] = value[6] + traj_div_accept[i][j];
            }
            if ((i==1 && j==2) || (i==1 && j==4)){
                value[5] = value[5] + traj_div_accept[i][j];
            }
            if ((i==1 && j==3)){
                value[4] = value[4] + traj_div_accept[i][j];
            }
            
            if ((i==0 && j==0) || (i==0 && j==6)){
                value[3] = value[3] + traj_div_accept[i][j];
            }
            if ((i==0 && j==1) || (i==0 && j==5)){
                value[2] = value[2] + traj_div_accept[i][j];
            }
            if ((i==0 && j==2) || (i==0 && j==4)){
                value[1] = value[1] + traj_div_accept[i][j];
            }
            if ((i==0 && j==3)){
                value[0] = value[0] + traj_div_accept[i][j];
            }
            

        }
    }
    Double_t cant_traj[28] = {0.0};
    
    for (int i=0;i<28;i++){
        if (i%4 == 0){
            cant_traj[i] = 1.0;
        }
        else{
            cant_traj[i] = 2.0;
        }
    }
    
    for (int i=0;i<28;i++){
        cout<< cant_traj[i] << "\t";
    }
    cout << endl;
    
    Double_t angles[28] = {27.907337049732508, 28.418517908105343, 29.863474839606052, 32.02221307932275, 33.41487377514494, 33.84693207280689, 35.07847785275335, 36.943359504465136, 39.14762101108436, 39.509278457828856, 40.546212312786665, 42.132043183418794, 45.29785794457578, 45.0, 46.155686451534656, 47.477915285037774, 50.85237898891562, 51.09256494095825, 51.7868553700686, 52.8641614007563, 56.58512622485505, 56.7740566660139, 58.17727418056477, 57.32197120827737, 62.657501068926095, 62.23716634634965, 63.31734310496381, 62.092662950267474};
    
    cout<< "Flujo: "<<endl;
    
    Double_t flux[28] = {0};
    Double_t time = 28800; // en segundos
    
    for (int i=0;i<28;i++){
        flux[i] = value[i]/(cant_traj[i]*time);
    }
    
    for (int i=0;i<28;i++){
        cout << flux[i]<< ", ";
    }
    cout << endl;
    
    TGraph* hist_zenit_muon = new TGraph(28, angles, flux);
    
    TCanvas *C_signals = new TCanvas("C_signals", "C_signals", 600, 600);
    TGaxis::SetMaxDigits(3);
    signals_1300->SetStats(0);
    //signals_1300->SetTitle(0);
    signals_1300->GetXaxis()->SetTitle("#Theta_{x} (deg)");
    signals_1300->GetYaxis()->SetTitle("#Theta_{y} (deg)");
    signals_1300->GetZaxis()->SetTitle("Cuentas");
    signals_1300->Draw("colz"); // "colz" para mostrar colores, "Lego2" para verlo en 3D
    C_signals->SetLeftMargin(0.12);
    C_signals->SetRightMargin(0.18);
    C_signals->SaveAs("./graphs_1300/fitting/direc_signals_1300.png");
    C_signals->SaveAs("./graphs_1300/fitting/direc_signals_1300.pdf");
    
    TCanvas *C_signals_div_accept = new TCanvas("C_signals_div_accept", "C_signals_div_accept", 600, 600);
    TGaxis::SetMaxDigits(3);
    signals_div_accept_1300->SetStats(0);
    //signals_1300->SetTitle(0);
    signals_div_accept_1300->GetXaxis()->SetTitle("#Theta_{x} (deg)");
    signals_div_accept_1300->GetYaxis()->SetTitle("#Theta_{y} (deg)");
    signals_div_accept_1300->GetZaxis()->SetTitle("Cuentas por acceptancia");
    signals_div_accept_1300->Draw("colz"); // "colz" para mostrar colores,  "Lego2" para verlo en 3D
    C_signals_div_accept->SetLeftMargin(0.12);
    C_signals_div_accept->SetRightMargin(0.18);
    C_signals_div_accept->SaveAs("./graphs_1300/fitting/direc_signals_div_accept_1300.png");
    C_signals_div_accept->SaveAs("./graphs_1300/fitting/direc_signals_div_accept_1300.pdf");
    
    TF1 *cos2_fit = new TF1("cos2_fit", "[0] * pow(cos(x* TMath::Pi() / 180.0),[1])", -2.0, 90.0);
    cos2_fit->SetParameter(0, 1);
    cos2_fit->SetParameter(1, 2);
    //cos2_fit->SetParLimits(0,0,10);
    cos2_fit->SetParLimits(1,1.0,3.0);
    cos2_fit->SetLineColor(kBlue);
    cos2_fit->SetTitle(";#acute{A}ngulo (deg);Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    //cos2_fit->GetYaxis()->SetTitle("Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    //cos2_fit->GetXaxis()->SetTitle("#acute{A}ngulo (deg)");
    
    TCanvas *C_zenit_distr = new TCanvas("C_zenit_distr", "Zenital distribution", 800, 500);
    hist_zenit_muon -> SetFillColor(kBlue);
    hist_zenit_muon -> SetLineColor(kBlue);
    hist_zenit_muon -> SetFillStyle(3002);
    hist_zenit_muon -> SetMarkerStyle(21);
    hist_zenit_muon -> SetMarkerColor(2);
    hist_zenit_muon -> SetStats(0);
    hist_zenit_muon->GetYaxis()->SetTitle("Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    hist_zenit_muon->GetXaxis()->SetTitle("#acute{A}ngulo (deg)");
    
    hist_zenit_muon->Fit("cos2_fit");
    
    cos2_fit->Draw();
    hist_zenit_muon->Draw("p same");
    //C_zenit_distr->Update();
    
    auto lzenit_muon = new TLegend(0.35, 0.75, 0.65, 0.89);
    lzenit_muon -> SetHeader("Trigger 1300", "C");
    lzenit_muon -> AddEntry(hist_zenit_muon, "data", "p");
    lzenit_muon -> AddEntry(cos2_fit, "ajuste", "l");
    lzenit_muon -> Draw();
    //C_zenit_distr -> SetLeftMargin(0.20);
    //C_zenit_distr -> SetLogy();
    C_zenit_distr -> SaveAs("./graphs_1300/fitting/zenit_distr.pdf");
    C_zenit_distr -> SaveAs("./graphs_1300/fitting/zenit_distr.png");
}
