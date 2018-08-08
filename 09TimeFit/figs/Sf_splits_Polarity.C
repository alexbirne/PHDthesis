void S_f_splits_Polarity()
{
//=========Macro generated from canvas: c_S_f/
//=========  (Wed Aug  8 14:53:09 2018) by ROOT version6.06/02
   TCanvas *c_S_f = new TCanvas("c_S_f", "",0,0,700,500);
   gStyle->SetOptStat(0);
   c_S_f->SetHighLightColor(2);
   c_S_f->Range(0.75,-0.08625,3.25,0.17625);
   c_S_f->SetFillColor(0);
   c_S_f->SetBorderMode(0);
   c_S_f->SetBorderSize(2);
   c_S_f->SetGridx();
   c_S_f->SetGridy();
   c_S_f->SetLeftMargin(0.14);
   c_S_f->SetFrameBorderMode(0);
   c_S_f->SetFrameBorderMode(0);

   TH1F *h_dummy__2 = new TH1F("h_dummy__2","",2,1,3);
   h_dummy__2->SetMinimum(-0.06);
   h_dummy__2->SetMaximum(0.15);
   h_dummy__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_dummy__2->SetLineColor(ci);
   h_dummy__2->GetXaxis()->SetBinLabel(1,"magnet up");
   h_dummy__2->GetXaxis()->SetBinLabel(2,"magnet down");
   h_dummy__2->GetXaxis()->SetLabelFont(132);
   h_dummy__2->GetXaxis()->SetLabelSize(0.08);
   h_dummy__2->GetXaxis()->SetTitleSize(0.035);
   h_dummy__2->GetXaxis()->SetTitleFont(42);
   h_dummy__2->GetYaxis()->SetTitle("#it{S}_{#it{f}}");
   h_dummy__2->GetYaxis()->SetLabelFont(132);
   h_dummy__2->GetYaxis()->SetLabelSize(0.06);
   h_dummy__2->GetYaxis()->SetTitleOffset(0.95);
   h_dummy__2->GetYaxis()->SetTitleSize(0.072);
   h_dummy__2->GetYaxis()->SetTitleFont(132);
   h_dummy__2->GetZaxis()->SetLabelFont(42);
   h_dummy__2->GetZaxis()->SetLabelSize(0.06);
   h_dummy__2->GetZaxis()->SetTitleSize(0.035);
   h_dummy__2->GetZaxis()->SetTitleFont(42);
   h_dummy__2->Draw("TEXT45");

   Double_t Graph0_fx3010[2] = {
   1.5,
   2.5};
   Double_t Graph0_fy3010[2] = {
   0.058253,
   0.058253};
   Double_t Graph0_felx3010[2] = {
   0,
   0};
   Double_t Graph0_fely3010[2] = {
   0.021151,
   0.021151};
   Double_t Graph0_fehx3010[2] = {
   0,
   0};
   Double_t Graph0_fehy3010[2] = {
   0.021056,
   0.021056};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph0_fx3010,Graph0_fy3010,Graph0_felx3010,Graph0_fehx3010,Graph0_fely3010,Graph0_fehy3010);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","Graph",100,1.4,2.6);
   Graph_Graph3010->SetMinimum(0.0328813);
   Graph_Graph3010->SetMaximum(0.0835297);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3010->SetLineColor(ci);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);

   grae->Draw("3");

   Double_t Graph1_fx3011[2] = {
   1.5,
   2.5};
   Double_t Graph1_fy3011[2] = {
   0.032913,
   0.079609};
   Double_t Graph1_felx3011[2] = {
   0,
   0};
   Double_t Graph1_fely3011[2] = {
   0.029464,
   0.028643};
   Double_t Graph1_fehx3011[2] = {
   0,
   0};
   Double_t Graph1_fehy3011[2] = {
   0.029232,
   0.028613};
   grae = new TGraphAsymmErrors(2,Graph1_fx3011,Graph1_fy3011,Graph1_felx3011,Graph1_fehx3011,Graph1_fely3011,Graph1_fehy3011);
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

   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","Graph",100,1.4,2.6);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(0.1186993);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3011->SetLineColor(ci);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);


   TF1 *f_p3012 = new TF1("f_p","[0]",1.4,2.6);
   f_p3012->SetFillColor(19);
   f_p3012->SetLineColor(kBlack);
   f_p3012->SetFillStyle(0);
   f_p3012->SetLineWidth(2);
   f_p3012->SetChisquare(1.301854);
   f_p3012->SetNDF(1);
   f_p3012->GetXaxis()->SetLabelFont(42);
   f_p3012->GetXaxis()->SetLabelSize(0.035);
   f_p3012->GetXaxis()->SetTitleSize(0.035);
   f_p3012->GetXaxis()->SetTitleFont(42);
   f_p3012->GetYaxis()->SetLabelFont(42);
   f_p3012->GetYaxis()->SetLabelSize(0.035);
   f_p3012->GetYaxis()->SetTitleSize(0.035);
   f_p3012->GetYaxis()->SetTitleFont(42);
   f_p3012->SetParameter(0,0.05673536);
   f_p3012->SetParError(0,0.02045872);
   f_p3012->SetParLimits(0,0,0);
   f_p3012->Draw("SAME");
   grae->GetListOfFunctions()->Add(f_p3012);
   grae->Draw("p");

   TF1 *f_p3013 = new TF1("f_p","[0]",1.5,2.5);
   f_p3013->SetFillColor(19);
   f_p3013->SetLineColor(kBlack);
   f_p3013->SetFillStyle(0);
   f_p3013->SetLineWidth(2);
   f_p3013->SetChisquare(1.301854);
   f_p3013->SetNDF(1);
   f_p3013->GetXaxis()->SetLabelFont(42);
   f_p3013->GetXaxis()->SetLabelSize(0.035);
   f_p3013->GetXaxis()->SetTitleSize(0.035);
   f_p3013->GetXaxis()->SetTitleFont(42);
   f_p3013->GetYaxis()->SetLabelFont(42);
   f_p3013->GetYaxis()->SetLabelSize(0.035);
   f_p3013->GetYaxis()->SetTitleSize(0.035);
   f_p3013->GetYaxis()->SetTitleFont(42);
   f_p3013->SetParameter(0,0.05673536);
   f_p3013->SetParError(0,0.02045872);
   f_p3013->SetParLimits(0,0,0);
   f_p3013->Draw("SAME");


   grae->GetListOfFunctions()->Remove(f_p3012);
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
   c_S_f->Modified();
   c_S_f->cd();
   c_S_f->SetSelected(c_S_f);

   c_S_f->SaveAs("S_f_splits_Polarity.pdf");
   c_S_f->SaveAs("S_f_splits_Polarity.tex");
}
