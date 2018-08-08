void S_fbar_splits_Tagging()
{
//=========Macro generated from canvas: c_S_fbar/
//=========  (Wed Aug  8 15:28:55 2018) by ROOT version6.06/02
   TCanvas *c_S_fbar = new TCanvas("c_S_fbar", "",0,0,700,500);
   gStyle->SetOptStat(0);
   c_S_fbar->SetHighLightColor(2);
   c_S_fbar->Range(0.625,-0.13125,4.375,0.18125);
   c_S_fbar->SetFillColor(0);
   c_S_fbar->SetBorderMode(0);
   c_S_fbar->SetBorderSize(2);
   c_S_fbar->SetGridx();
   c_S_fbar->SetGridy();
   c_S_fbar->SetLeftMargin(0.14);
   c_S_fbar->SetFrameBorderMode(0);
   c_S_fbar->SetFrameBorderMode(0);

   TH1F *h_dummy__7 = new TH1F("h_dummy__7","",3,1,4);
   h_dummy__7->SetMinimum(-0.1);
   h_dummy__7->SetMaximum(0.15);
   h_dummy__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_dummy__7->SetLineColor(ci);
   h_dummy__7->GetXaxis()->SetBinLabel(1,"OS exclusive");
   h_dummy__7->GetXaxis()->SetBinLabel(2,"SS exclusive");
   h_dummy__7->GetXaxis()->SetBinLabel(3,"overlap");
   h_dummy__7->GetXaxis()->SetLabelFont(132);
   h_dummy__7->GetXaxis()->SetLabelSize(0.08);
   h_dummy__7->GetXaxis()->SetTitleSize(0.035);
   h_dummy__7->GetXaxis()->SetTitleFont(42);
   h_dummy__7->GetYaxis()->SetTitle("#it{S}_{#bar#kern[-0.1]{#it{f}}}");
   h_dummy__7->GetYaxis()->SetLabelFont(132);
   h_dummy__7->GetYaxis()->SetLabelSize(0.06);
   h_dummy__7->GetYaxis()->SetTitleOffset(0.95);
   h_dummy__7->GetYaxis()->SetTitleSize(0.072);
   h_dummy__7->GetYaxis()->SetTitleFont(132);
   h_dummy__7->GetZaxis()->SetLabelFont(42);
   h_dummy__7->GetZaxis()->SetLabelSize(0.035);
   h_dummy__7->GetZaxis()->SetTitleSize(0.035);
   h_dummy__7->GetZaxis()->SetTitleFont(42);
   h_dummy__7->Draw("TEXT45");

   Double_t Graph0_fx3031[3] = {
   1.5,
   2.5,
   3.5};
   Double_t Graph0_fy3031[3] = {
   0.037611,
   0.037611,
   0.037611};
   Double_t Graph0_felx3031[3] = {
   0,
   0,
   0};
   Double_t Graph0_fely3031[3] = {
   0.020853,
   0.020853,
   0.020853};
   Double_t Graph0_fehx3031[3] = {
   0,
   0,
   0};
   Double_t Graph0_fehy3031[3] = {
   0.020886,
   0.020886,
   0.020886};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph0_fx3031,Graph0_fy3031,Graph0_felx3031,Graph0_fehx3031,Graph0_fely3031,Graph0_fehy3031);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","Graph",100,1.3,3.7);
   Graph_Graph3031->SetMinimum(0.0125841);
   Graph_Graph3031->SetMaximum(0.0626709);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3031->SetLineColor(ci);
   Graph_Graph3031->GetXaxis()->SetLabelFont(42);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3031->GetXaxis()->SetTitleFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3031->GetYaxis()->SetTitleFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3031);

   grae->Draw("3");

   Double_t Graph1_fx3032[3] = {
   1.5,
   2.5,
   3.5};
   Double_t Graph1_fy3032[3] = {
   -0.014562,
   0.018582,
   0.047385};
   Double_t Graph1_felx3032[3] = {
   0,
   0,
   0};
   Double_t Graph1_fely3032[3] = {
   0.059106,
   0.042373,
   0.025495};
   Double_t Graph1_fehx3032[3] = {
   0,
   0,
   0};
   Double_t Graph1_fehy3032[3] = {
   0.05974,
   0.042464,
   0.025696};
   grae = new TGraphAsymmErrors(3,Graph1_fx3032,Graph1_fy3032,Graph1_felx3032,Graph1_fehx3032,Graph1_fely3032,Graph1_fehy3032);
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

   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","Graph",100,1.3,3.7);
   Graph_Graph3032->SetMinimum(-0.0883429);
   Graph_Graph3032->SetMaximum(0.0877559);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3032->SetLineColor(ci);
   Graph_Graph3032->GetXaxis()->SetLabelFont(42);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3032->GetXaxis()->SetTitleFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3032->GetYaxis()->SetTitleFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3032);


   TF1 *f_p3033 = new TF1("f_p","[0]",1.3,3.7);
   f_p3033->SetFillColor(19);
   f_p3033->SetLineColor(kBlack);
   f_p3033->SetFillStyle(0);
   f_p3033->SetLineWidth(2);
   f_p3033->SetChisquare(1.067217);
   f_p3033->SetNDF(2);
   f_p3033->GetXaxis()->SetLabelFont(42);
   f_p3033->GetXaxis()->SetLabelSize(0.035);
   f_p3033->GetXaxis()->SetTitleSize(0.035);
   f_p3033->GetXaxis()->SetTitleFont(42);
   f_p3033->GetYaxis()->SetLabelFont(42);
   f_p3033->GetYaxis()->SetLabelSize(0.035);
   f_p3033->GetYaxis()->SetTitleSize(0.035);
   f_p3033->GetYaxis()->SetTitleFont(42);
   f_p3033->SetParameter(0,0.03334054);
   f_p3033->SetParError(0,0.02052715);
   f_p3033->SetParLimits(0,0,0);
   f_p3033->Draw("SAME");
   grae->GetListOfFunctions()->Add(f_p3033);
   grae->Draw("p");

   TF1 *f_p3034 = new TF1("f_p","[0]",1.5,3.5);
   f_p3034->SetFillColor(19);
   f_p3034->SetLineColor(kBlack);
   f_p3034->SetFillStyle(0);
   f_p3034->SetLineWidth(2);
   f_p3034->SetChisquare(1.067217);
   f_p3034->SetNDF(2);
   f_p3034->GetXaxis()->SetLabelFont(42);
   f_p3034->GetXaxis()->SetLabelSize(0.035);
   f_p3034->GetXaxis()->SetTitleSize(0.035);
   f_p3034->GetXaxis()->SetTitleFont(42);
   f_p3034->GetYaxis()->SetLabelFont(42);
   f_p3034->GetYaxis()->SetLabelSize(0.035);
   f_p3034->GetYaxis()->SetTitleSize(0.035);
   f_p3034->GetYaxis()->SetTitleFont(42);
   f_p3034->SetParameter(0,0.03334054);
   f_p3034->SetParError(0,0.02052715);
   f_p3034->SetParLimits(0,0,0);
   f_p3034->Draw("SAME");

   grae->GetListOfFunctions()->Remove(f_p3033);
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

   c_S_fbar->SaveAs("S_fbar_splits_Tagging.pdf");
   c_S_fbar->SaveAs("S_fbar_splits_Tagging.tex");
}
