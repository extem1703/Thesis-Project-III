void graphs_chanels(){
    
    gStyle -> SetLegendBorderSize(0);
    gStyle -> SetLegendFillColor(kWhite);
    gStyle -> SetLegendFont(62);
    gStyle -> SetGridColor(kGray);
    gStyle -> SetGridStyle(3);
    gStyle -> SetPadGridX(kTRUE);
    gStyle -> SetPadGridY(kTRUE);
    
    TFile *input = new TFile("trigger_FC_90g_8H_1300.root", "read");
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
    
    TH1D* hist_wch0 = new TH1D("hist_wch0", "", 59, 1.0, 60.0);
    
    TH1D* hist_wch1 = new TH1D("hist_wch1", "Canal 1", 59, 1.0, 60.0);
    
    TH1D* hist_wch2 = new TH1D("hist_wch2", "Canal 2", 59, 1.0, 60.0);
    
    TH1D* hist_wch3 = new TH1D("hist_wch3", "Canal 3", 59, 1.0, 60.0);
    
    TH1D* hist_wch4 = new TH1D("hist_wch4", "", 59, 1.0, 60.0);
    
    TH1D* hist_wch5 = new TH1D("hist_wch5", "Canal 5", 59, 1.0, 60.0);
    
    TH1D* hist_wch6 = new TH1D("hist_wch6", "Canal 6", 59, 1.0, 60.0);
    
    TH1D* hist_wch7 = new TH1D("hist_wch7", "Canal 7", 59, 1.0, 60.0);
    
    TH1D* hist_wch8 = new TH1D("hist_wch8", "", 59, 1.0, 60.0);
    
    TH1D* hist_wch9 = new TH1D("hist_wch9", "Canal 9", 59, 1.0, 60.0);
    
    TH1D* hist_wch10 = new TH1D("hist_wch10", "Canal 10", 59, 1.0, 60.0);
    
    TH1D* hist_wch11 = new TH1D("hist_wch11", "Canal 11", 59, 1.0, 60.0);
    
    TH1D* hist_wch12 = new TH1D("hist_wch12", "", 59, 1.0, 60.0);
    
    TH1D* hist_wch13 = new TH1D("hist_wch13", "Canal 13", 59, 1.0, 60.0);
    
    TH1D* hist_wch14 = new TH1D("hist_wch14", "Canal 14", 59, 1.0, 60.0);
    
    TH1D* hist_wch15 = new TH1D("hist_wch15", "Canal 15", 59, 1.0, 60.0);
    for (int i=0; i<entries; i++){
        tree -> GetEntry(i);
        if (wch0 > 0 && wch0 <= 60){
            hist_wch0 -> Fill(wch0);
        }
        
        if (wch1 > 0 && wch1 <= 60){
            hist_wch1 -> Fill(wch1);
        }
        
        if (wch2 > 0 && wch2 <= 60){
            hist_wch2 -> Fill(wch2);
        }
        
        if (wch3 > 0 && wch3 <= 60){
            hist_wch3 -> Fill(wch3);
        }
        
        if (wch4 > 0 && wch4 <= 60){
            hist_wch4 -> Fill(wch4);
        }
        
        if (wch5 > 0 && wch5 <= 60){
            hist_wch5 -> Fill(wch5);
        }
        
        if (wch6 > 0 && wch6 <= 60){
            hist_wch6 -> Fill(wch6);
        }
        
        if (wch7 > 0 && wch7 <= 60){
            hist_wch7 -> Fill(wch7);
        }
        
        if (wch8 > 0 && wch8 <= 60){
            hist_wch8 -> Fill(wch8);
        }
        
        if (wch9 > 0 && wch9 <= 60){
            hist_wch9 -> Fill(wch9);
        }
        
        if (wch10 > 0 && wch10 <= 60){
            hist_wch10 -> Fill(wch10);
        }
        
        if (wch11 > 0 && wch11 <= 60){
            hist_wch11 -> Fill(wch11);
        }
        
        if (wch12 > 0 && wch12 <= 60){
            hist_wch12 -> Fill(wch12);
        }
        
        if (wch13 > 0 && wch13 <= 60){
            hist_wch13 -> Fill(wch13);
        }
        
        if (wch14 > 0 && wch14 <= 60){
            hist_wch14 -> Fill(wch14);
        }
        
        if (wch15 > 0 && wch15 <= 60){
            hist_wch15 -> Fill(wch15);
        }
    }
    
    //auto Cwch0_1_2_3 = new TCanvas("Cwch0_1_2_3", "wch0_1_2_3", 1600, 1000);
    //Cwch0_1_2_3 -> Divide(2,2);
    
    //Cwch0_1_2_3 -> cd(1);
    auto Cwch0 = new TCanvas("Cwch0", "wch0", 800, 500);
    hist_wch0 -> SetFillColor(kBlue);
    hist_wch0 -> SetLineColor(kBlue);
    hist_wch0 -> SetFillStyle(3002);
    hist_wch0 -> SetMarkerStyle(21);
    hist_wch0 -> SetMarkerColor(2);
    hist_wch0 -> SetStats(0);
    hist_wch0->GetYaxis()->SetTitle("Cuentas");
    hist_wch0->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");
    hist_wch0 -> Draw("hist");
    
    auto lwch0 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch0 -> SetHeader("trigger 1300", "C");
    lwch0 -> AddEntry(hist_wch0, "wch0", "f");
    lwch0 -> Draw();
    //Cwch0 -> SetLeftMargin(0.20);
    Cwch0 -> SetLogy();
    //Cwch0_1_2_3 -> cd(1) -> SetLeftMargin(0.20);
    //Cwch0_1_2_3 -> cd(1) -> SetLogy();
    Cwch0 -> SaveAs("./graphs_1300/wch0.pdf");
    Cwch0 -> SaveAs("./graphs_1300/wch0.png");
    
    //Cwch0_1_2_3 -> cd(2);
    auto Cwch1 = new TCanvas("Cwch1", "wch1", 800, 500);
    hist_wch1 -> SetFillColor(kBlue);
    hist_wch1 -> SetLineColor(kBlue);
    hist_wch1 -> SetFillStyle(3002);
    hist_wch1 -> SetMarkerStyle(21);
    hist_wch1 -> SetMarkerColor(2);
    hist_wch1 -> SetStats(0);
    hist_wch1->GetYaxis()->SetTitle("Cuentas");
    hist_wch1->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch1 -> Draw("hist");
    
    auto lwch1 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch1 -> SetHeader("trigger 1300", "C");
    lwch1 -> AddEntry(hist_wch1, "wch1", "f");
    lwch1 -> Draw();
    //Cwch1 -> SetLeftMargin(0.20);
    Cwch1 -> SetLogy();
    //Cwch0_1_2_3 -> cd(2) -> SetLeftMargin(0.20);
    //Cwch0_1_2_3 -> cd(2) -> SetLogy();
    Cwch1 -> SaveAs("./graphs_1300/wch1.pdf");
    Cwch1 -> SaveAs("./graphs_1300/wch1.png");
    
    //Cwch0_1_2_3 -> cd(3);
    auto Cwch2 = new TCanvas("Cwch2", "wch2", 800, 500);
    hist_wch2 -> SetFillColor(kBlue);
    hist_wch2 -> SetLineColor(kBlue);
    hist_wch2 -> SetFillStyle(3002);
    hist_wch2 -> SetMarkerStyle(21);
    hist_wch2 -> SetMarkerColor(2);
    hist_wch2 -> SetStats(0);
    hist_wch2->GetYaxis()->SetTitle("Cuentas");
    hist_wch2->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch2 -> Draw("hist");
    
    auto lwch2 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch2 -> SetHeader("trigger 1300", "C");
    lwch2 -> AddEntry(hist_wch2, "wch2", "f");
    lwch2 -> Draw();
    //Cwch2 -> SetLeftMargin(0.20);
    Cwch2 -> SetLogy();
    //Cwch0_1_2_3 -> cd(3) -> SetLeftMargin(0.20);
    //Cwch0_1_2_3 -> cd(3) -> SetLogy();
    Cwch2 -> SaveAs("./graphs_1300/wch2.pdf");
    Cwch2 -> SaveAs("./graphs_1300/wch2.png");
    
    //Cwch0_1_2_3 -> cd(4);
    auto Cwch3 = new TCanvas("Cwch3", "wch3", 800, 500);
    hist_wch3 -> SetFillColor(kBlue);
    hist_wch3 -> SetLineColor(kBlue);
    hist_wch3 -> SetFillStyle(3002);
    hist_wch3 -> SetMarkerStyle(21);
    hist_wch3 -> SetMarkerColor(2);
    hist_wch3 -> SetStats(0);
    hist_wch3->GetYaxis()->SetTitle("Cuentas");
    hist_wch3->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch3 -> Draw("hist");
    
    auto lwch3 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch3 -> SetHeader("trigger 1300", "C");
    lwch3 -> AddEntry(hist_wch3, "wch3", "f");
    lwch3 -> Draw();
    //Cwch3 -> SetLeftMargin(0.20);
    Cwch3 -> SetLogy();
    //Cwch0_1_2_3 -> cd(4) -> SetLeftMargin(0.20);
    //Cwch0_1_2_3 -> cd(4) -> SetLogy();
    Cwch3 -> SaveAs("./graphs_1300/wch3.pdf");
    Cwch3 -> SaveAs("./graphs_1300/wch3.png");
    
    //Cwch0_1_2_3 -> Draw();
    
    //auto Cwch4_5_6_7 = new TCanvas("Cwch4_5_6_7", "wch4_5_6_7", 1600, 1000);
    //Cwch4_5_6_7 -> Divide(2,2);
    
    //Cwch4_5_6_7 -> cd(1);
    auto Cwch4 = new TCanvas("Cwch4", "wch4", 800, 500);
    hist_wch4 -> SetFillColor(kBlue);
    hist_wch4 -> SetLineColor(kBlue);
    hist_wch4 -> SetFillStyle(3002);
    hist_wch4 -> SetMarkerStyle(21);
    hist_wch4 -> SetMarkerColor(2);
    hist_wch4 -> SetStats(0);
    hist_wch4->GetYaxis()->SetTitle("Cuentas");
    hist_wch4->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");
    hist_wch4 -> Draw("hist");
    
    auto lwch4 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch4 -> SetHeader("trigger 1300", "C");
    lwch4 -> AddEntry(hist_wch4, "wch4", "f");
    lwch4 -> Draw();
    //Cwch4 -> SetLeftMargin(0.20);
    Cwch4 -> SetLogy();
    //Cwch4_5_6_7 -> cd(1) -> SetLeftMargin(0.20);
    //Cwch4_5_6_7 -> cd(1) -> SetLogy();
    Cwch4 -> SaveAs("./graphs_1300/wch4.pdf");
    Cwch4 -> SaveAs("./graphs_1300/wch4.png");
    
    //Cwch4_5_6_7 -> cd(2);
    auto Cwch5 = new TCanvas("Cwch5", "wch5", 800, 500);
    hist_wch5 -> SetFillColor(kBlue);
    hist_wch5 -> SetLineColor(kBlue);
    hist_wch5 -> SetFillStyle(3002);
    hist_wch5 -> SetMarkerStyle(21);
    hist_wch5 -> SetMarkerColor(2);
    hist_wch5 -> SetStats(0);
    hist_wch5->GetYaxis()->SetTitle("Cuentas");
    hist_wch5->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch5 -> Draw("hist");
    
    auto lwch5 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch5 -> SetHeader("trigger 1300", "C");
    lwch5 -> AddEntry(hist_wch5, "wch5", "f");
    lwch5 -> Draw();
    //Cwch5 -> SetLeftMargin(0.20);
    Cwch5 -> SetLogy();
    //Cwch4_5_6_7 -> cd(2) -> SetLeftMargin(0.20);
    //Cwch4_5_6_7 -> cd(2) -> SetLogy();
    Cwch5 -> SaveAs("./graphs_1300/wch5.pdf");
    Cwch5 -> SaveAs("./graphs_1300/wch5.png");
    
    
    //Cwch4_5_6_7 -> cd(3);
    auto Cwch6 = new TCanvas("Cwch6", "wch6", 800, 500);
    hist_wch6 -> SetFillColor(kBlue);
    hist_wch6 -> SetLineColor(kBlue);
    hist_wch6 -> SetFillStyle(3002);
    hist_wch6 -> SetMarkerStyle(21);
    hist_wch6 -> SetMarkerColor(2);
    hist_wch6 -> SetStats(0);
    hist_wch6->GetYaxis()->SetTitle("Cuentas");
    hist_wch6->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch6 -> Draw("hist");
    
    auto lwch6 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch6 -> SetHeader("trigger 1300", "C");
    lwch6 -> AddEntry(hist_wch6, "wch6", "f");
    lwch6 -> Draw();
    //Cwch6 -> SetLeftMargin(0.20);
    Cwch6 -> SetLogy();
    //Cwch4_5_6_7 -> cd(3) -> SetLeftMargin(0.20);
    //Cwch4_5_6_7 -> cd(3) -> SetLogy();
    Cwch6 -> SaveAs("./graphs_1300/wch6.pdf");
    Cwch6 -> SaveAs("./graphs_1300/wch6.png");
    
    //Cwch4_5_6_7 -> cd(4);
    auto Cwch7 = new TCanvas("Cwch7", "wch7", 800, 500);
    hist_wch7 -> SetFillColor(kBlue);
    hist_wch7 -> SetLineColor(kBlue);
    hist_wch7 -> SetFillStyle(3002);
    hist_wch7 -> SetMarkerStyle(21);
    hist_wch7 -> SetMarkerColor(2);
    hist_wch7 -> SetStats(0);
    hist_wch7->GetYaxis()->SetTitle("Cuentas");
    hist_wch7->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch7 -> Draw("hist");
    
    auto lwch7 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch7 -> SetHeader("trigger 1300", "C");
    lwch7 -> AddEntry(hist_wch7, "wch7", "f");
    lwch7 -> Draw();
    //Cwch7 -> SetLeftMargin(0.20);
    Cwch7 -> SetLogy();
    //Cwch4_5_6_7 -> cd(4) -> SetLeftMargin(0.20);
    //Cwch4_5_6_7 -> cd(4) -> SetLogy();
    Cwch7 -> SaveAs("./graphs_1300/wch7.pdf");
    Cwch7 -> SaveAs("./graphs_1300/wch7.png");
    
    //Cwch4_5_6_7 -> Draw();
    
    //auto Cwch8_9_10_11 = new TCanvas("Cwch8_9_10_11", "wch8_9_10_11", 1600, 1000);
    //Cwch8_9_10_11 -> Divide(2,2);
    
    //Cwch8_9_10_11 -> cd(1);
    auto Cwch8 = new TCanvas("Cwch8", "wch8", 800, 500);
    hist_wch8 -> SetFillColor(kBlue);
    hist_wch8 -> SetLineColor(kBlue);
    hist_wch8 -> SetFillStyle(3002);
    hist_wch8 -> SetMarkerStyle(21);
    hist_wch8 -> SetMarkerColor(2);
    hist_wch8 -> SetStats(0);
    hist_wch8->GetYaxis()->SetTitle("Cuentas");
    hist_wch8->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");
    hist_wch8 -> Draw("hist");
    
    auto lwch8 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch8 -> SetHeader("trigger 1300", "C");
    lwch8 -> AddEntry(hist_wch8, "wch8", "f");
    lwch8 -> Draw();
    //Cwch8 -> SetLeftMargin(0.20);
    Cwch8 -> SetLogy();
    //Cwh8_9_10_11 -> cd(1) -> SetLeftMargin(0.20);
    //Cwch8_9_10_11 -> cd(1) -> SetLogy();
    Cwch8 -> SaveAs("./graphs_1300/wch8.pdf");
    Cwch8 -> SaveAs("./graphs_1300/wch8.png");
    
    //Cwch8_9_10_11 -> cd(2);
    auto Cwch9 = new TCanvas("Cwch9", "wch9", 800, 500);
    hist_wch9 -> SetFillColor(kBlue);
    hist_wch9 -> SetLineColor(kBlue);
    hist_wch9 -> SetFillStyle(3002);
    hist_wch9 -> SetMarkerStyle(21);
    hist_wch9 -> SetMarkerColor(2);
    hist_wch9 -> SetStats(0);
    hist_wch9->GetYaxis()->SetTitle("Cuentas");
    hist_wch9->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch9 -> Draw("hist");
    
    auto lwch9 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch9 -> SetHeader("trigger 1300", "C");
    lwch9 -> AddEntry(hist_wch9, "wch9", "f");
    lwch9 -> Draw();
    //Cwch9 -> SetLeftMargin(0.20);
    Cwch9 -> SetLogy();
    //Cwch8_9_10_11 -> cd(2) -> SetLeftMargin(0.20);
    //Cwch8_9_10_11 -> cd(2) -> SetLogy();
    Cwch9 -> SaveAs("./graphs_1300/wch9.pdf");
    Cwch9 -> SaveAs("./graphs_1300/wch9.pdf");
    
    //Cwch8_9_10_11 -> cd(3);
    auto Cwch10 = new TCanvas("Cwch10", "wch10", 800, 500);
    hist_wch10 -> SetFillColor(kBlue);
    hist_wch10 -> SetLineColor(kBlue);
    hist_wch10 -> SetFillStyle(3002);
    hist_wch10 -> SetMarkerStyle(21);
    hist_wch10 -> SetMarkerColor(2);
    hist_wch10 -> SetStats(0);
    hist_wch10->GetYaxis()->SetTitle("Cuentas");
    hist_wch10->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch10 -> Draw("hist");
    
    auto lwch10 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch10 -> SetHeader("trigger 1300", "C");
    lwch10 -> AddEntry(hist_wch10, "wch10", "f");
    lwch10 -> Draw();
    //Cwch10 -> SetLeftMargin(0.20);
    Cwch10 -> SetLogy();
    //Cwch8_9_10_11 -> cd(3) -> SetLeftMargin(0.20);
    //Cwch8_9_10_11 -> cd(3) -> SetLogy();
    Cwch10 -> SaveAs("./graphs_1300/wch10.pdf");
    Cwch10 -> SaveAs("./graphs_1300/wch10.png");
    
    //Cwch8_9_10_11 -> cd(4);
    auto Cwch11 = new TCanvas("Cwch11", "wch11", 800, 500);
    hist_wch11 -> SetFillColor(kBlue);
    hist_wch11 -> SetLineColor(kBlue);
    hist_wch11 -> SetFillStyle(3002);
    hist_wch11 -> SetMarkerStyle(21);
    hist_wch11 -> SetMarkerColor(2);
    hist_wch11 -> SetStats(0);
    hist_wch11->GetYaxis()->SetTitle("Cuentas");
    hist_wch11->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch11 -> Draw("hist");
    
    auto lwch11 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch11 -> SetHeader("trigger 1300", "C");
    lwch11 -> AddEntry(hist_wch11, "wch11", "f");
    lwch11 -> Draw();
    //Cwch11 -> SetLeftMargin(0.20);
    Cwch11 -> SetLogy();
    //Cwch8_9_10_11 -> cd(4) -> SetLeftMargin(0.20);
    //Cwch8_9_10_11 -> cd(4) -> SetLogy();
    Cwch11 -> SaveAs("./graphs_1300/wch11.pdf");
    Cwch11 -> SaveAs("./graphs_1300/wch11.png");
    
    //Cwch8_9_10_11 -> Draw();
    
    //auto Cwch12_13_14_15 = new TCanvas("Cwch12_13_14_15", "wch12_13_14_15", 1600, 1000);
    //Cwch12_13_14_15 -> Divide(2,2);
    
    //Cwch12_13_14_15 -> cd(1);
    auto Cwch12 = new TCanvas("Cwch12", "wch12", 800, 500);
    hist_wch12 -> SetFillColor(kBlue);
    hist_wch12 -> SetLineColor(kBlue);
    hist_wch12 -> SetFillStyle(3002);
    hist_wch12 -> SetMarkerStyle(21);
    hist_wch12 -> SetMarkerColor(2);
    hist_wch12 -> SetStats(0);
    hist_wch12->GetYaxis()->SetTitle("Cuentas");
    hist_wch12->GetXaxis()->SetTitle("Ancho de la se#tilde{n}al [10ns]");
    hist_wch12 -> Draw("hist");
    
    auto lwch12 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch12 -> SetHeader("trigger 1300", "C");
    lwch12 -> AddEntry(hist_wch12, "wch12", "f");
    lwch12 -> Draw();
    //Cwch12 -> SetLeftMargin(0.20);
    Cwch12 -> SetLogy();
    //Cwch12_13_14_15 -> cd(1) -> SetLeftMargin(0.20);
    //Cwch12_13_14_15 -> cd(1) -> SetLogy();
    Cwch12 -> SaveAs("./graphs_1300/wch12.pdf");
    Cwch12 -> SaveAs("./graphs_1300/wch12.png");
    
    //Cwch12_13_14_15 -> cd(2);
    auto Cwch13 = new TCanvas("Cwch13", "wch13", 800, 500);
    hist_wch13 -> SetFillColor(kBlue);
    hist_wch13 -> SetLineColor(kBlue);
    hist_wch13 -> SetFillStyle(3002);
    hist_wch13 -> SetMarkerStyle(21);
    hist_wch13 -> SetMarkerColor(2);
    hist_wch13 -> SetStats(0);
    hist_wch13->GetYaxis()->SetTitle("Cuentas");
    hist_wch13->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch13 -> Draw("hist");
    
    auto lwch13 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch13 -> SetHeader("trigger 1300", "C");
    lwch13 -> AddEntry(hist_wch13, "wch13", "f");
    lwch13 -> Draw();
    //Cwch13 -> SetLeftMargin(0.20);
    Cwch13 -> SetLogy();
    //Cwch12_13_14_15 -> cd(2) -> SetLeftMargin(0.20);
    //Cwch12_13_14_15 -> cd(2) -> SetLogy();
    Cwch13 -> SaveAs("./graphs_1300/wch13.pdf");
    Cwch13 -> SaveAs("./graphs_1300/wch13.png");
    
    //Cwch12_13_14_15 -> cd(3);
    auto Cwch14 = new TCanvas("Cwch14", "wch14", 800, 500);
    hist_wch14 -> SetFillColor(kBlue);
    hist_wch14 -> SetLineColor(kBlue);
    hist_wch14 -> SetFillStyle(3002);
    hist_wch14 -> SetMarkerStyle(21);
    hist_wch14 -> SetMarkerColor(2);
    hist_wch14 -> SetStats(0);
    hist_wch14->GetYaxis()->SetTitle("Cuentas");
    hist_wch14->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch14 -> Draw("hist");
    
    auto lwch14 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch14 -> SetHeader("trigger 1300", "C");
    lwch14 -> AddEntry(hist_wch14, "wch14", "f");
    lwch14 -> Draw();
    //Cwch14 -> SetLeftMargin(0.20);
    Cwch14 -> SetLogy();
    //Cwch12_13_14_15 -> cd(3) -> SetLeftMargin(0.20);
    //Cwch12_13_14_15 -> cd(3) -> SetLogy();
    Cwch14 -> SaveAs("./graphs_1300/wch14.pdf");
    Cwch14 -> SaveAs("./graphs_1300/wch14.png");
    
    //Cwch12_13_14_15 -> cd(4);
    auto Cwch15 = new TCanvas("Cwch15", "wch15", 800, 500);
    hist_wch15 -> SetFillColor(kBlue);
    hist_wch15 -> SetLineColor(kBlue);
    hist_wch15 -> SetFillStyle(3002);
    hist_wch15 -> SetMarkerStyle(21);
    hist_wch15 -> SetMarkerColor(2);
    hist_wch15 -> SetStats(0);
    hist_wch15->GetYaxis()->SetTitle("Cuentas");
    hist_wch15->GetXaxis()->SetTitle("Ancho [10ns]");
    hist_wch15 -> Draw("hist");
    
    auto lwch15 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch15 -> SetHeader("trigger 1300", "C");
    lwch15 -> AddEntry(hist_wch15, "wch15", "f");
    lwch15 -> Draw();
    //Cwch15 -> SetLeftMargin(0.20);
    Cwch15 -> SetLogy();
    //Cwch12_13_14_15 -> cd(4) -> SetLeftMargin(0.20);
    //Cwch12_13_14_15 -> cd(4) -> SetLogy();
    Cwch15 -> SaveAs("./graphs_1300/wch15.pdf");
    Cwch15 -> SaveAs("./graphs_1300/wch15.png");
    
    //Cwch12_13_14_15 -> Draw();
    
    auto Cwch0_1_2_3 = new TCanvas("Cwch0_1_2_3", "wch0_1_2_3", 1600, 1000);
    Cwch0_1_2_3 -> Divide(2,2);
    
    Cwch0_1_2_3 -> cd(1);
    hist_wch0 -> SetMaximum(5e6);
    hist_wch0 -> SetMarkerStyle(21);
    hist_wch0 -> SetMarkerColor(kBlue+1);
    hist_wch1 -> SetMarkerStyle(21);
    hist_wch1 -> SetMarkerColor(kGreen+1);
    hist_wch2 -> SetMarkerStyle(21);
    hist_wch2 -> SetMarkerColor(kRed+1);
    hist_wch3 -> SetMarkerStyle(21);
    hist_wch3 -> SetMarkerColor(kOrange);
    hist_wch0 -> Draw("ep");
    hist_wch1 -> Draw("ep same");
    hist_wch2 -> Draw("ep same");
    hist_wch3 -> Draw("ep same");
    auto lwch0_1_2_3 = new TLegend(0.35, 0.75, 0.65, 0.89);
    //lwch0_1_2_3 -> SetHeader("", "C");
    lwch0_1_2_3 -> AddEntry(hist_wch0, "Canal 0", "p");
    lwch0_1_2_3 -> AddEntry(hist_wch1, "Canal 1", "p");
    lwch0_1_2_3 -> AddEntry(hist_wch2, "Canal 2", "p");
    lwch0_1_2_3 -> AddEntry(hist_wch3, "Canal 3", "p");
    lwch0_1_2_3 -> Draw();
    //Cwch0_1_2_3 -> cd(1) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(1) -> SetLogy();
    
    Cwch0_1_2_3 -> cd(2);
    hist_wch4 -> SetMaximum(5e6);
    hist_wch4 -> SetMarkerStyle(21);
    hist_wch4 -> SetMarkerColor(kBlue+1);
    hist_wch5 -> SetMarkerStyle(21);
    hist_wch5 -> SetMarkerColor(kGreen+1);
    hist_wch6 -> SetMarkerStyle(21);
    hist_wch6 -> SetMarkerColor(kRed+1);
    hist_wch7 -> SetMarkerStyle(21);
    hist_wch7 -> SetMarkerColor(kOrange);
    hist_wch4 -> Draw("ep");
    hist_wch5 -> Draw("ep same");
    hist_wch6 -> Draw("ep same");
    hist_wch7 -> Draw("ep same");
    auto lwch4_5_6_7 = new TLegend(0.35, 0.75, 0.65, 0.89);
    //lwch4_5_6_7 -> SetHeader("", "C");
    lwch4_5_6_7 -> AddEntry(hist_wch4, "Canal 4", "p");
    lwch4_5_6_7 -> AddEntry(hist_wch5, "Canal 5", "p");
    lwch4_5_6_7 -> AddEntry(hist_wch6, "Canal 6", "p");
    lwch4_5_6_7 -> AddEntry(hist_wch7, "Canal 7", "p");
    lwch4_5_6_7 -> Draw();
    //Cwch0_1_2_3 -> cd(2) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(2) -> SetLogy();
    
    Cwch0_1_2_3 -> cd(3);
    hist_wch8 -> SetMaximum(5e6);
    hist_wch8 -> SetMarkerStyle(21);
    hist_wch8 -> SetMarkerColor(kBlue+1);
    hist_wch9 -> SetMarkerStyle(21);
    hist_wch9 -> SetMarkerColor(kGreen+1);
    hist_wch10 -> SetMarkerStyle(21);
    hist_wch10 -> SetMarkerColor(kRed+1);
    hist_wch11 -> SetMarkerStyle(21);
    hist_wch11 -> SetMarkerColor(kOrange);
    hist_wch8 -> Draw("ep");
    hist_wch9 -> Draw("ep same");
    hist_wch10 -> Draw("ep same");
    hist_wch11 -> Draw("ep same");
    auto lwch8_9_10_11 = new TLegend(0.35, 0.75, 0.65, 0.89);
    //lwch8_9_10_11 -> SetHeader("", "C");
    lwch8_9_10_11 -> AddEntry(hist_wch8, "Canal 8", "p");
    lwch8_9_10_11 -> AddEntry(hist_wch9, "Canal 9", "p");
    lwch8_9_10_11 -> AddEntry(hist_wch10, "Canal 10", "p");
    lwch8_9_10_11 -> AddEntry(hist_wch11, "Canal 11", "p");
    lwch8_9_10_11 -> Draw();
    //Cwch0_1_2_3 -> cd(3) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(3) -> SetLogy();
    
    Cwch0_1_2_3 -> cd(4);
    hist_wch12 -> SetMaximum(5e6);
    hist_wch12 -> SetMarkerStyle(21);
    hist_wch12 -> SetMarkerColor(kBlue+1);
    hist_wch13 -> SetMarkerStyle(21);
    hist_wch13 -> SetMarkerColor(kGreen+1);
    hist_wch14 -> SetMarkerStyle(21);
    hist_wch14 -> SetMarkerColor(kRed+1);
    hist_wch15 -> SetMarkerStyle(21);
    hist_wch15 -> SetMarkerColor(kOrange);
    hist_wch12 -> Draw("ep");
    hist_wch13 -> Draw("ep same");
    hist_wch14 -> Draw("ep same");
    hist_wch15 -> Draw("ep same");
    auto lwch12_13_14_15 = new TLegend(0.35, 0.75, 0.65, 0.89);
    //lwch12_13_14_15 -> SetHeader("", "C");
    lwch12_13_14_15 -> AddEntry(hist_wch12, "Canal 12", "p");
    lwch12_13_14_15 -> AddEntry(hist_wch13, "Canal 13", "p");
    lwch12_13_14_15 -> AddEntry(hist_wch14, "Canal 14", "p");
    lwch12_13_14_15 -> AddEntry(hist_wch15, "Canal 15", "p");
    lwch12_13_14_15 -> Draw();
    //Cwch0_1_2_3 -> cd(4) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(4) -> SetLogy();
    
    Cwch0_1_2_3 -> Draw();
    Cwch0_1_2_3 -> SaveAs("./graphs_1300/wch0_1_2_3.pdf");
    Cwch0_1_2_3 -> SaveAs("./graphs_1300/wch0_1_2_3.png");
}
