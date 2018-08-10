void S_fbar_splits_Year()
{
//=========Macro generated from canvas: c_S_fbar/
//=========  (Wed Aug  8 14:53:09 2018) by ROOT version6.06/02
   TCanvas *c_S_fbar = new TCanvas("c_S_fbar", "",0,0,700,500);
   gStyle->SetOptStat(0);
   c_S_fbar->SetHighLightColor(2);
   c_S_fbar->Range(0.75,-0.08625,3.25,0.17625);
   c_S_fbar->SetFillColor(0);
   c_S_fbar->SetBorderMode(0);
   c_S_fbar->SetBorderSize(2);
   c_S_fbar->SetGridx();
   c_S_fbar->SetGridy();
   c_S_fbar->SetLeftMargin(0.14);
   c_S_fbar->SetFrameBorderMode(0);
   c_S_fbar->SetFrameBorderMode(0);

   TH1F *h_dummy__6 = new TH1F("h_dummy__6","",2,1,3);
   h_dummy__6->SetMinimum(-0.06);
   h_dummy__6->SetMaximum(0.15);
   h_dummy__6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_dummy__6->SetLineColor(ci);
   h_dummy__6->GetXaxis()->SetBinLabel(1,"2011");
   h_dummy__6->GetXaxis()->SetBinLabel(2,"2012");
   h_dummy__6->GetXaxis()->SetLabelFont(132);
   h_dummy__6->GetXaxis()->SetLabelSize(0.08);
   h_dummy__6->GetXaxis()->SetTitleSize(0.035);
   h_dummy__6->GetXaxis()->SetTitleFont(42);
   h_dummy__6->GetYaxis()->SetTitle("#it{S}_{#bar#kern[-0.1]{#it{f}}}");
   h_dummy__6->GetYaxis()->SetLabelFont(132);
   h_dummy__6->GetYaxis()->SetLabelSize(0.06);
   h_dummy__6->GetYaxis()->SetTitleOffset(0.95);
   h_dummy__6->GetYaxis()->SetTitleSize(0.072);
   h_dummy__6->GetYaxis()->SetTitleFont(132);
   h_dummy__6->GetZaxis()->SetLabelFont(42);
   h_dummy__6->GetZaxis()->SetLabelSize(0.035);
   h_dummy__6->GetZaxis()->SetTitleSize(0.035);
   h_dummy__6->GetZaxis()->SetTitleFont(42);
   h_dummy__6->Draw("TEXT45");

   Double_t Graph0_fx3028[2] = {
   1.5,
   2.5};
   Double_t Graph0_fy3028[2] = {
   0.037611,
   0.037611};
   Double_t Graph0_felx3028[2] = {
   0,
   0};
   Double_t Graph0_fely3028[2] = {
   0.020853,
   0.020853};
   Double_t Graph0_fehx3028[2] = {
   0,
   0};
   Double_t Graph0_fehy3028[2] = {
   0.020886,
   0.020886};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph0_fx3028,Graph0_fy3028,Graph0_felx3028,Graph0_fehx3028,Graph0_fely3028,Graph0_fehy3028);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","Graph",100,1.4,2.6);
   Graph_Graph3028->SetMinimum(0.0125841);
   Graph_Graph3028->SetMaximum(0.0626709);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3028->SetLineColor(ci);
   Graph_Graph3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3028);

   grae->Draw("3");

   Double_t Graph1_fx3029[2] = {
   1.5,
   2.5};
   Double_t Graph1_fy3029[2] = {
   0.030667,
   0.041219};
   Double_t Graph1_felx3029[2] = {
   0,
   0};
   Double_t Graph1_fely3029[2] = {
   0.038513,
   0.024506};
   Double_t Graph1_fehx3029[2] = {
   0,
   0};
   Double_t Graph1_fehy3029[2] = {
   0.038673,
   0.024235};
   grae = new TGraphAsymmErrors(2,Graph1_fx3029,Graph1_fy3029,Graph1_felx3029,Graph1_fehx3029,Graph1_fely3029,Graph1_fehy3029);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(2);
   grae->SetMarkerSize(3);

   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","Graph",100,1.4,2.6);
   Graph_Graph3029->SetMinimum(-0.0155646);
   Graph_Graph3029->SetMaximum(0.0770586);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3029->SetLineColor(ci);
   Graph_Graph3029->GetXaxis()->SetLabelFont(42);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3029->GetXaxis()->SetTitleFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3029->GetYaxis()->SetTitleFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3029);


   TF1 *f_p3030 = new TF1("f_p","[0]",1.4,2.6);
   f_p3030->SetFillColor(19);
   f_p3030->SetLineColor(kBlack);
   f_p3030->SetFillStyle(0);
   f_p3030->SetLineWidth(2);
   f_p3030->SetChisquare(0.0531188);
   f_p3030->SetNDF(1);
   f_p3030->GetXaxis()->SetLabelFont(42);
   f_p3030->GetXaxis()->SetLabelSize(0.035);
   f_p3030->GetXaxis()->SetTitleSize(0.035);
   f_p3030->GetXaxis()->SetTitleFont(42);
   f_p3030->GetYaxis()->SetLabelFont(42);
   f_p3030->GetYaxis()->SetLabelSize(0.035);
   f_p3030->GetYaxis()->SetTitleSize(0.035);
   f_p3030->GetYaxis()->SetTitleFont(42);
   f_p3030->SetParameter(0,0.03819583);
   f_p3030->SetParError(0,0.02069997);
   f_p3030->SetParLimits(0,0,0);
   f_p3030->Draw("SAME");
   grae->GetListOfFunctions()->Add(f_p3030);
   grae->Draw("p");

   TF1 *f_p3031 = new TF1("f_p","[0]",1.5,2.5);
   f_p3031->SetFillColor(19);
   f_p3031->SetLineColor(kBlack);
   f_p3031->SetFillStyle(0);
   f_p3031->SetLineWidth(2);
   f_p3031->SetChisquare(0.0531188);
   f_p3031->SetNDF(1);
   f_p3031->GetXaxis()->SetLabelFont(42);
   f_p3031->GetXaxis()->SetLabelSize(0.035);
   f_p3031->GetXaxis()->SetTitleSize(0.035);
   f_p3031->GetXaxis()->SetTitleFont(42);
   f_p3031->GetYaxis()->SetLabelFont(42);
   f_p3031->GetYaxis()->SetLabelSize(0.035);
   f_p3031->GetYaxis()->SetTitleSize(0.035);
   f_p3031->GetYaxis()->SetTitleFont(42);
   f_p3031->SetParameter(0,0.03819583);
   f_p3031->SetParError(0,0.02069997);
   f_p3031->SetParLimits(0,0,0);
   f_p3031->Draw("SAME");

   grae->GetListOfFunctions()->Remove(f_p3030);
   grae->Draw("SAMEP");

   TLegend *leg = new TLegend(0.7,0.1,0.9,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("f_p","Average","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Graph0","Nominal fit","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   c_S_fbar->Modified();
   c_S_fbar->cd();
   c_S_fbar->SetSelected(c_S_fbar);

   c_S_fbar->SaveAs("S_fbar_splits_Year.pdf");
   c_S_fbar->SaveAs("S_fbar_splits_Year.tex");
}
