void nPV()
{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Jul 30 20:14:14 2018) by ROOT version6.06/02
   TCanvas *canv = new TCanvas("canv", "canv",0,0,2000,1200);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv->SetHighLightColor(2);
   canv->Range(-0.4545455,-0.09631201,9.935065,0.5056381);
   canv->SetFillColor(0);
   canv->SetBorderMode(0);
   canv->SetBorderSize(2);
   canv->SetTickx(1);
   canv->SetTicky(1);
   canv->SetLeftMargin(0.14);
   canv->SetTopMargin(0.06);
   canv->SetBottomMargin(0.16);
   canv->SetFrameBorderMode(0);
   canv->SetFrameBorderMode(0);
   
   TH1D *histdata2nPV__10 = new TH1D("histdata2nPV__10","histdata2nPV",8,1,9);
   histdata2nPV__10->SetBinContent(1,0.3145782);
   histdata2nPV__10->SetBinContent(2,0.3912676);
   histdata2nPV__10->SetBinContent(3,0.2139049);
   histdata2nPV__10->SetBinContent(4,0.06565675);
   histdata2nPV__10->SetBinContent(5,0.01266767);
   histdata2nPV__10->SetBinContent(6,0.001724332);
   histdata2nPV__10->SetBinContent(7,0.0001903207);
   histdata2nPV__10->SetBinContent(8,1.027486e-05);
   histdata2nPV__10->SetBinError(1,0.000867861);
   histdata2nPV__10->SetBinError(2,0.0009710177);
   histdata2nPV__10->SetBinError(3,0.0007194721);
   histdata2nPV__10->SetBinError(4,0.0003989051);
   histdata2nPV__10->SetBinError(5,0.0001748089);
   histdata2nPV__10->SetBinError(6,6.361329e-05);
   histdata2nPV__10->SetBinError(7,2.091674e-05);
   histdata2nPV__10->SetBinError(8,4.663402e-06);
   histdata2nPV__10->SetMinimum(0);
   histdata2nPV__10->SetMaximum(0.4695211);
   histdata2nPV__10->SetEntries(497682);
   histdata2nPV__10->SetStats(0);
   histdata2nPV__10->SetLineColor(4);
   histdata2nPV__10->SetLineWidth(2);
   histdata2nPV__10->SetMarkerColor(4);
   histdata2nPV__10->SetMarkerStyle(20);
   histdata2nPV__10->GetXaxis()->SetTitle("#PVs");
   histdata2nPV__10->GetXaxis()->SetNdivisions(505);
   histdata2nPV__10->GetXaxis()->SetLabelFont(132);
   histdata2nPV__10->GetXaxis()->SetLabelOffset(0.01);
   histdata2nPV__10->GetXaxis()->SetLabelSize(0.06);
   histdata2nPV__10->GetXaxis()->SetTitleSize(0.072);
   histdata2nPV__10->GetXaxis()->SetTitleOffset(0.95);
   histdata2nPV__10->GetXaxis()->SetTitleFont(132);
   histdata2nPV__10->GetYaxis()->SetTitle("Candidates (arbitrary scale)");
   histdata2nPV__10->GetYaxis()->SetLabelFont(132);
   histdata2nPV__10->GetYaxis()->SetLabelOffset(0.01);
   histdata2nPV__10->GetYaxis()->SetLabelSize(0.06);
   histdata2nPV__10->GetYaxis()->SetTitleSize(0.066);
   histdata2nPV__10->GetYaxis()->SetTitleOffset(1.1);
   histdata2nPV__10->GetYaxis()->SetTitleFont(132);
   histdata2nPV__10->GetZaxis()->SetLabelFont(132);
   histdata2nPV__10->GetZaxis()->SetLabelSize(0.06);
   histdata2nPV__10->GetZaxis()->SetTitleSize(0.072);
   histdata2nPV__10->GetZaxis()->SetTitleOffset(1.2);
   histdata2nPV__10->GetZaxis()->SetTitleFont(132);
   histdata2nPV__10->Draw("E1");
   
   TH1D *histdata3nPV__11 = new TH1D("histdata3nPV__11","histdata3nPV",8,1,9);
   histdata3nPV__11->SetBinContent(1,0.3135254);
   histdata3nPV__11->SetBinContent(2,0.3911969);
   histdata3nPV__11->SetBinContent(3,0.2144107);
   histdata3nPV__11->SetBinContent(4,0.06601473);
   histdata3nPV__11->SetBinContent(5,0.01285563);
   histdata3nPV__11->SetBinContent(6,0.001759311);
   histdata3nPV__11->SetBinContent(7,0.0002212279);
   histdata3nPV__11->SetBinContent(8,1.610861e-05);
   histdata3nPV__11->SetBinContent(9,1.05795e-06);
   histdata3nPV__11->SetBinError(1,0.001359797);
   histdata3nPV__11->SetBinError(2,0.001466022);
   histdata3nPV__11->SetBinError(3,0.001042856);
   histdata3nPV__11->SetBinError(4,0.0005335793);
   histdata3nPV__11->SetBinError(5,0.0002167517);
   histdata3nPV__11->SetBinError(6,7.374278e-05);
   histdata3nPV__11->SetBinError(7,2.37136e-05);
   histdata3nPV__11->SetBinError(8,4.308e-06);
   histdata3nPV__11->SetBinError(9,1.05795e-06);
   histdata3nPV__11->SetMinimum(0);
   histdata3nPV__11->SetMaximum(0.4694363);
   histdata3nPV__11->SetEntries(440137);
   histdata3nPV__11->SetStats(0);
   histdata3nPV__11->SetLineColor(3);
   histdata3nPV__11->SetLineWidth(2);
   histdata3nPV__11->SetMarkerColor(3);
   histdata3nPV__11->SetMarkerStyle(20);
   histdata3nPV__11->GetXaxis()->SetTitle("#PVs");
   histdata3nPV__11->GetXaxis()->SetNdivisions(505);
   histdata3nPV__11->GetXaxis()->SetLabelFont(132);
   histdata3nPV__11->GetXaxis()->SetLabelOffset(0.01);
   histdata3nPV__11->GetXaxis()->SetLabelSize(0.06);
   histdata3nPV__11->GetXaxis()->SetTitleSize(0.072);
   histdata3nPV__11->GetXaxis()->SetTitleOffset(0.95);
   histdata3nPV__11->GetXaxis()->SetTitleFont(132);
   histdata3nPV__11->GetYaxis()->SetTitle("Candidates (arbitrary scale)");
   histdata3nPV__11->GetYaxis()->SetLabelFont(132);
   histdata3nPV__11->GetYaxis()->SetLabelOffset(0.01);
   histdata3nPV__11->GetYaxis()->SetLabelSize(0.06);
   histdata3nPV__11->GetYaxis()->SetTitleSize(0.066);
   histdata3nPV__11->GetYaxis()->SetTitleOffset(1.1);
   histdata3nPV__11->GetYaxis()->SetTitleFont(132);
   histdata3nPV__11->GetZaxis()->SetLabelFont(132);
   histdata3nPV__11->GetZaxis()->SetLabelSize(0.06);
   histdata3nPV__11->GetZaxis()->SetTitleSize(0.072);
   histdata3nPV__11->GetZaxis()->SetTitleOffset(1.2);
   histdata3nPV__11->GetZaxis()->SetTitleFont(132);
   histdata3nPV__11->Draw("Same E1");
   
   TH1D *histdata1nPV__12 = new TH1D("histdata1nPV__12","histdata1nPV",8,1,9);
   histdata1nPV__12->SetBinContent(1,0.3032407);
   histdata1nPV__12->SetBinContent(2,0.3751634);
   histdata1nPV__12->SetBinContent(3,0.2191566);
   histdata1nPV__12->SetBinContent(4,0.07917489);
   histdata1nPV__12->SetBinContent(5,0.01946911);
   histdata1nPV__12->SetBinContent(6,0.003270163);
   histdata1nPV__12->SetBinContent(7,0.0004728554);
   histdata1nPV__12->SetBinContent(8,5.221532e-05);
   histdata1nPV__12->SetBinContent(9,3.202598e-06);
   histdata1nPV__12->SetBinError(1,0.001028986);
   histdata1nPV__12->SetBinError(2,0.001151893);
   histdata1nPV__12->SetBinError(3,0.0008886084);
   histdata1nPV__12->SetBinError(4,0.0005369544);
   histdata1nPV__12->SetBinError(5,0.0002670995);
   histdata1nPV__12->SetBinError(6,0.0001114324);
   histdata1nPV__12->SetBinError(7,4.292105e-05);
   histdata1nPV__12->SetBinError(8,1.449722e-05);
   histdata1nPV__12->SetBinError(9,3.202598e-06);
   histdata1nPV__12->SetMinimum(0);
   histdata1nPV__12->SetMaximum(0.4501961);
   histdata1nPV__12->SetEntries(440137);
   histdata1nPV__12->SetStats(0);
   histdata1nPV__12->SetLineWidth(2);
   histdata1nPV__12->SetMarkerStyle(20);
   histdata1nPV__12->GetXaxis()->SetTitle("#PVs");
   histdata1nPV__12->GetXaxis()->SetNdivisions(505);
   histdata1nPV__12->GetXaxis()->SetLabelFont(132);
   histdata1nPV__12->GetXaxis()->SetLabelOffset(0.01);
   histdata1nPV__12->GetXaxis()->SetLabelSize(0.06);
   histdata1nPV__12->GetXaxis()->SetTitleSize(0.072);
   histdata1nPV__12->GetXaxis()->SetTitleOffset(0.95);
   histdata1nPV__12->GetXaxis()->SetTitleFont(132);
   histdata1nPV__12->GetYaxis()->SetTitle("Candidates (arbitrary scale)");
   histdata1nPV__12->GetYaxis()->SetLabelFont(132);
   histdata1nPV__12->GetYaxis()->SetLabelOffset(0.01);
   histdata1nPV__12->GetYaxis()->SetLabelSize(0.06);
   histdata1nPV__12->GetYaxis()->SetTitleSize(0.066);
   histdata1nPV__12->GetYaxis()->SetTitleOffset(1.1);
   histdata1nPV__12->GetYaxis()->SetTitleFont(132);
   histdata1nPV__12->GetZaxis()->SetLabelFont(132);
   histdata1nPV__12->GetZaxis()->SetLabelSize(0.06);
   histdata1nPV__12->GetZaxis()->SetTitleSize(0.072);
   histdata1nPV__12->GetZaxis()->SetTitleOffset(1.2);
   histdata1nPV__12->GetZaxis()->SetTitleFont(132);
   histdata1nPV__12->Draw("Same E1");
   TLatex *   tex = new TLatex(0.565,0.84,"LHCb");
tex->SetNDC();
   tex->SetTextFont(132);
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.55,0.62,0.7,0.82,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.06);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("histdata1nPV","#it{B}^{#kern[-0.0]{0}}#rightarrow#it{J}/#it{#psi}#it{K}^{*0}","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("histdata2nPV","#it{B}^{#kern[-0.0]{0}}#rightarrow#it{D}^{#pm}#it{#pi}^{#mp}","ep");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("histdata3nPV","#it{B}^{#kern[-0.]{0}}#rightarrow#it{J}/#it{#psi}#it{K}^{*0} weighted","ep");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
