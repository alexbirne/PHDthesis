void S_fbar_splits_Polarity()
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

   TH1F *h_dummy__5 = new TH1F("h_dummy__5","",2,1,3);
   h_dummy__5->SetMinimum(-0.06);
   h_dummy__5->SetMaximum(0.15);
   h_dummy__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_dummy__5->SetLineColor(ci);
   h_dummy__5->GetXaxis()->SetBinLabel(1,"magnet up");
   h_dummy__5->GetXaxis()->SetBinLabel(2,"magnet down");
   h_dummy__5->GetXaxis()->SetLabelFont(132);
   h_dummy__5->GetXaxis()->SetLabelSize(0.08);
   h_dummy__5->GetXaxis()->SetTitleSize(0.035);
   h_dummy__5->GetXaxis()->SetTitleFont(42);
   h_dummy__5->GetYaxis()->SetTitle("#it{S}_{#bar#kern[-0.1]{#it{f}}}");
   h_dummy__5->GetYaxis()->SetLabelFont(132);
   h_dummy__5->GetYaxis()->SetLabelSize(0.06);
   h_dummy__5->GetYaxis()->SetTitleOffset(0.95);
   h_dummy__5->GetYaxis()->SetTitleSize(0.072);
   h_dummy__5->GetYaxis()->SetTitleFont(132);
   h_dummy__5->GetZaxis()->SetLabelFont(42);
   h_dummy__5->GetZaxis()->SetLabelSize(0.035);
   h_dummy__5->GetZaxis()->SetTitleSize(0.035);
   h_dummy__5->GetZaxis()->SetTitleFont(42);
   h_dummy__5->Draw("TEXT45");

   Double_t Graph0_fx3025[2] = {
   1.5,
   2.5};
   Double_t Graph0_fy3025[2] = {
   0.037611,
   0.037611};
   Double_t Graph0_felx3025[2] = {
   0,
   0};
   Double_t Graph0_fely3025[2] = {
   0.020853,
   0.020853};
   Double_t Graph0_fehx3025[2] = {
   0,
   0};
   Double_t Graph0_fehy3025[2] = {
   0.020886,
   0.020886};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph0_fx3025,Graph0_fy3025,Graph0_felx3025,Graph0_fehx3025,Graph0_fely3025,Graph0_fehy3025);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","Graph",100,1.4,2.6);
   Graph_Graph3025->SetMinimum(0.0125841);
   Graph_Graph3025->SetMaximum(0.0626709);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3025->SetLineColor(ci);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);

   grae->Draw("3");

   Double_t Graph1_fx3026[2] = {
   1.5,
   2.5};
   Double_t Graph1_fy3026[2] = {
   -0.010576,
   0.07981};
   Double_t Graph1_felx3026[2] = {
   0,
   0};
   Double_t Graph1_fely3026[2] = {
   0.029237,
   0.02845};
   Double_t Graph1_fehx3026[2] = {
   0,
   0};
   Double_t Graph1_fehy3026[2] = {
   0.029345,
   0.028613};
   grae = new TGraphAsymmErrors(2,Graph1_fx3026,Graph1_fy3026,Graph1_felx3026,Graph1_fehx3026,Graph1_fely3026,Graph1_fehy3026);
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

   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","Graph",100,1.4,2.6);
   Graph_Graph3026->SetMinimum(-0.0546366);
   Graph_Graph3026->SetMaximum(0.1232466);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3026->SetLineColor(ci);
   Graph_Graph3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3026);


   TF1 *f_p3027 = new TF1("f_p","[0]",1.4,2.6);
   f_p3027->SetFillColor(19);
   f_p3027->SetLineColor(kBlack);
   f_p3027->SetFillStyle(0);
   f_p3027->SetLineWidth(2);
   f_p3027->SetChisquare(4.890437);
   f_p3027->SetNDF(1);
   f_p3027->GetXaxis()->SetLabelFont(42);
   f_p3027->GetXaxis()->SetLabelSize(0.035);
   f_p3027->GetXaxis()->SetTitleSize(0.035);
   f_p3027->GetXaxis()->SetTitleFont(42);
   f_p3027->GetYaxis()->SetLabelFont(42);
   f_p3027->GetYaxis()->SetLabelSize(0.035);
   f_p3027->GetYaxis()->SetTitleSize(0.035);
   f_p3027->GetYaxis()->SetTitleFont(42);
   f_p3027->SetParameter(0,0.03601636);
   f_p3027->SetParError(0,0.02042627);
   f_p3027->SetParLimits(0,0,0);
   grae->GetListOfFunctions()->Add(f_p3027);
   grae->Draw("p");

   TF1 *f_p3028 = new TF1("f_p","[0]",1.5,2.5);
   f_p3028->SetFillColor(19);
   f_p3028->SetLineColor(kBlack);
   f_p3028->SetFillStyle(0);
   f_p3028->SetLineWidth(2);
   f_p3028->SetChisquare(4.890437);
   f_p3028->SetNDF(1);
   f_p3028->GetXaxis()->SetLabelFont(42);
   f_p3028->GetXaxis()->SetLabelSize(0.035);
   f_p3028->GetXaxis()->SetTitleSize(0.035);
   f_p3028->GetXaxis()->SetTitleFont(42);
   f_p3028->GetYaxis()->SetLabelFont(42);
   f_p3028->GetYaxis()->SetLabelSize(0.035);
   f_p3028->GetYaxis()->SetTitleSize(0.035);
   f_p3028->GetYaxis()->SetTitleFont(42);
   f_p3028->SetParameter(0,0.03601636);
   f_p3028->SetParError(0,0.02042627);
   f_p3028->SetParLimits(0,0,0);
   f_p3028->Draw("SAME");

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

   c_S_fbar->SaveAs("S_fbar_splits_Polarity.pdf");
   c_S_fbar->SaveAs("S_fbar_splits_Polarity.tex");
}
