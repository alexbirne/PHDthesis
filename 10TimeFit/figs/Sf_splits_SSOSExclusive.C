void S_f_splits_Tagging()
{
//=========Macro generated from canvas: c_S_f/
//=========  (Wed Aug  8 15:28:55 2018) by ROOT version6.06/02
   TCanvas *c_S_f = new TCanvas("c_S_f", "",0,0,700,500);
   gStyle->SetOptStat(0);
   c_S_f->SetHighLightColor(2);
   c_S_f->Range(0.625,-0.13125,4.375,0.18125);
   c_S_f->SetFillColor(0);
   c_S_f->SetBorderMode(0);
   c_S_f->SetBorderSize(2);
   c_S_f->SetGridx();
   c_S_f->SetGridy();
   c_S_f->SetLeftMargin(0.14);
   c_S_f->SetFrameBorderMode(0);
   c_S_f->SetFrameBorderMode(0);

   TH1F *h_dummy__3 = new TH1F("h_dummy__3","",3,1,4);
   h_dummy__3->SetMinimum(-0.1);
   h_dummy__3->SetMaximum(0.15);
   h_dummy__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_dummy__3->SetLineColor(ci);
   h_dummy__3->GetXaxis()->SetBinLabel(1,"OS exclusive");
   h_dummy__3->GetXaxis()->SetBinLabel(2,"SS exclusive");
   h_dummy__3->GetXaxis()->SetBinLabel(3,"overlap");
   h_dummy__3->GetXaxis()->SetLabelFont(132);
   h_dummy__3->GetXaxis()->SetLabelSize(0.08);
   h_dummy__3->GetXaxis()->SetTitleSize(0.035);
   h_dummy__3->GetXaxis()->SetTitleFont(42);
   h_dummy__3->GetYaxis()->SetTitle("#it{S}_{#it{f}}");
   h_dummy__3->GetYaxis()->SetLabelFont(132);
   h_dummy__3->GetYaxis()->SetLabelSize(0.06);
   h_dummy__3->GetYaxis()->SetTitleOffset(0.95);
   h_dummy__3->GetYaxis()->SetTitleSize(0.072);
   h_dummy__3->GetYaxis()->SetTitleFont(132);
   h_dummy__3->GetZaxis()->SetLabelFont(42);
   h_dummy__3->GetZaxis()->SetLabelSize(0.035);
   h_dummy__3->GetZaxis()->SetTitleSize(0.035);
   h_dummy__3->GetZaxis()->SetTitleFont(42);
   h_dummy__3->Draw("TEXT45");

   Double_t Graph0_fx3013[3] = {
   1.5,
   2.5,
   3.5};
   Double_t Graph0_fy3013[3] = {
   0.058253,
   0.058253,
   0.058253};
   Double_t Graph0_felx3013[3] = {
   0,
   0,
   0};
   Double_t Graph0_fely3013[3] = {
   0.021151,
   0.021151,
   0.021151};
   Double_t Graph0_fehx3013[3] = {
   0,
   0,
   0};
   Double_t Graph0_fehy3013[3] = {
   0.021056,
   0.021056,
   0.021056};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph0_fx3013,Graph0_fy3013,Graph0_felx3013,Graph0_fehx3013,Graph0_fely3013,Graph0_fehy3013);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","Graph",100,1.3,3.7);
   Graph_Graph3013->SetMinimum(0.0328813);
   Graph_Graph3013->SetMaximum(0.0835297);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3013->SetLineColor(ci);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);

   grae->Draw("3");

   Double_t Graph1_fx3014[3] = {
   1.5,
   2.5,
   3.5};
   Double_t Graph1_fy3014[3] = {
   0.048126,
   0.037403,
   0.064285};
   Double_t Graph1_felx3014[3] = {
   0,
   0,
   0};
   Double_t Graph1_fely3014[3] = {
   0.059639,
   0.042487,
   0.02571};
   Double_t Graph1_fehx3014[3] = {
   0,
   0,
   0};
   Double_t Graph1_fehy3014[3] = {
   0.059052,
   0.041949,
   0.025722};
   grae = new TGraphAsymmErrors(3,Graph1_fx3014,Graph1_fy3014,Graph1_felx3014,Graph1_fehx3014,Graph1_fely3014,Graph1_fehy3014);
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

   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","Graph",100,1.3,3.7);
   Graph_Graph3014->SetMinimum(-0.0233821);
   Graph_Graph3014->SetMaximum(0.1190471);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3014->SetLineColor(ci);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);


   TF1 *f_p3015 = new TF1("f_p","[0]",1.3,3.7);
   f_p3015->SetFillColor(19);
   f_p3015->SetLineColor(kBlack);
   f_p3015->SetFillStyle(0);
   f_p3015->SetLineWidth(2);
   f_p3015->SetChisquare(0.3181236);
   f_p3015->SetNDF(2);
   f_p3015->GetXaxis()->SetLabelFont(42);
   f_p3015->GetXaxis()->SetLabelSize(0.035);
   f_p3015->GetXaxis()->SetTitleSize(0.035);
   f_p3015->GetXaxis()->SetTitleFont(42);
   f_p3015->GetYaxis()->SetLabelFont(42);
   f_p3015->GetYaxis()->SetLabelSize(0.035);
   f_p3015->GetYaxis()->SetTitleSize(0.035);
   f_p3015->GetYaxis()->SetTitleFont(42);
   f_p3015->SetParameter(0,0.05587579);
   f_p3015->SetParError(0,0.02055035);
   f_p3015->SetParLimits(0,0,0);
   f_p3015->Draw("SAME");
   grae->GetListOfFunctions()->Add(f_p3015);
   grae->Draw("p");

   TF1 *f_p3016 = new TF1("f_p","[0]",1.5,3.5);
   f_p3016->SetFillColor(19);
   f_p3016->SetLineColor(kBlack);
   f_p3016->SetFillStyle(0);
   f_p3016->SetLineWidth(2);
   f_p3016->SetChisquare(0.3181236);
   f_p3016->SetNDF(2);
   f_p3016->GetXaxis()->SetLabelFont(42);
   f_p3016->GetXaxis()->SetLabelSize(0.035);
   f_p3016->GetXaxis()->SetTitleSize(0.035);
   f_p3016->GetXaxis()->SetTitleFont(42);
   f_p3016->GetYaxis()->SetLabelFont(42);
   f_p3016->GetYaxis()->SetLabelSize(0.035);
   f_p3016->GetYaxis()->SetTitleSize(0.035);
   f_p3016->GetYaxis()->SetTitleFont(42);
   f_p3016->SetParameter(0,0.05587579);
   f_p3016->SetParError(0,0.02055035);
   f_p3016->SetParLimits(0,0,0);
   f_p3016->Draw("SAME");

   grae->GetListOfFunctions()->Remove(f_p3015);
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

   c_S_f->SaveAs("S_f_splits_Tagging.pdf");
   c_S_f->SaveAs("S_f_splits_Tagging.tex");
}
