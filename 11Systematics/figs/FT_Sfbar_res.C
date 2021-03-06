void S_fbar_res()
{
//=========Macro generated from canvas: canvas_toystudy/canvas
//=========  (Wed Aug  8 10:59:33 2018) by ROOT version6.06/02
   TCanvas *canvas_toystudy = new TCanvas("canvas_toystudy", "canvas",1,1,800,576);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas_toystudy->SetHighLightColor(2);
   canvas_toystudy->Range(-0.08633013,-11.00365,0.06872446,57.76914);
   canvas_toystudy->SetFillColor(0);
   canvas_toystudy->SetBorderMode(0);
   canvas_toystudy->SetBorderSize(2);
   canvas_toystudy->SetTickx(1);
   canvas_toystudy->SetTicky(1);
   canvas_toystudy->SetLeftMargin(0.14);
   canvas_toystudy->SetRightMargin(0.05);
   canvas_toystudy->SetTopMargin(0.05);
   canvas_toystudy->SetBottomMargin(0.16);
   canvas_toystudy->SetFrameBorderMode(0);
   canvas_toystudy->SetFrameBorderMode(0);

   TH1D *frame_1b57cda0__37 = new TH1D("frame_1b57cda0__37","A RooPlot of \"Residual of #it{S}_{#bar#kern[-0.1]{#it{f}}}\"",81,-0.06462249,0.06097173);
   frame_1b57cda0__37->SetBinContent(1,41.7927);
   frame_1b57cda0__37->SetMaximum(54.3305);
   frame_1b57cda0__37->SetEntries(1);
   frame_1b57cda0__37->SetDirectory(0);
   frame_1b57cda0__37->SetStats(0);
   frame_1b57cda0__37->SetMarkerStyle(20);
   frame_1b57cda0__37->GetXaxis()->SetTitle("Residual of #it{S}_{#bar#kern[-0.1]{#it{f}}}");
   frame_1b57cda0__37->GetXaxis()->SetNdivisions(505);
   frame_1b57cda0__37->GetXaxis()->SetLabelFont(132);
   frame_1b57cda0__37->GetXaxis()->SetLabelOffset(0.01);
   frame_1b57cda0__37->GetXaxis()->SetLabelSize(0.06);
   frame_1b57cda0__37->GetXaxis()->SetTitleSize(0.072);
   frame_1b57cda0__37->GetXaxis()->SetTitleOffset(0.95);
   frame_1b57cda0__37->GetXaxis()->SetTitleFont(132);
   frame_1b57cda0__37->GetYaxis()->SetTitle("Pseudo-experiments / 0.002");
   frame_1b57cda0__37->GetYaxis()->SetLabelFont(132);
   frame_1b57cda0__37->GetYaxis()->SetLabelOffset(0.01);
   frame_1b57cda0__37->GetYaxis()->SetLabelSize(0.06);
   frame_1b57cda0__37->GetYaxis()->SetTitleSize(0.072);
   frame_1b57cda0__37->GetYaxis()->SetTitleOffset(0.95);
   frame_1b57cda0__37->GetYaxis()->SetTitleFont(132);
   frame_1b57cda0__37->GetZaxis()->SetLabelFont(132);
   frame_1b57cda0__37->GetZaxis()->SetLabelSize(0.06);
   frame_1b57cda0__37->GetZaxis()->SetTitleSize(0.072);
   frame_1b57cda0__37->GetZaxis()->SetTitleOffset(1.2);
   frame_1b57cda0__37->GetZaxis()->SetTitleFont(132);
   frame_1b57cda0__37->Draw("FUNC");

   Double_t h_fit_plot_dataset_fx3019[81] = {
   -0.06384721,
   -0.06229667,
   -0.06074612,
   -0.05919558,
   -0.05764503,
   -0.05609448,
   -0.05454394,
   -0.05299339,
   -0.05144285,
   -0.0498923,
   -0.04834175,
   -0.04679121,
   -0.04524066,
   -0.04369012,
   -0.04213957,
   -0.04058902,
   -0.03903848,
   -0.03748793,
   -0.03593739,
   -0.03438684,
   -0.03283629,
   -0.03128575,
   -0.0297352,
   -0.02818466,
   -0.02663411,
   -0.02508357,
   -0.02353302,
   -0.02198247,
   -0.02043193,
   -0.01888138,
   -0.01733084,
   -0.01578029,
   -0.01422974,
   -0.0126792,
   -0.01112865,
   -0.009578106,
   -0.00802756,
   -0.006477014,
   -0.004926468,
   -0.003375922,
   -0.001825376,
   -0.0002748304,
   0.001275716,
   0.002826261,
   0.004376807,
   0.005927353,
   0.007477899,
   0.009028445,
   0.01057899,
   0.01212954,
   0.01368008,
   0.01523063,
   0.01678117,
   0.01833172,
   0.01988227,
   0.02143281,
   0.02298336,
   0.0245339,
   0.02608445,
   0.027635,
   0.02918554,
   0.03073609,
   0.03228663,
   0.03383718,
   0.03538773,
   0.03693827,
   0.03848882,
   0.04003936,
   0.04158991,
   0.04314046,
   0.044691,
   0.04624155,
   0.04779209,
   0.04934264,
   0.05089319,
   0.05244373,
   0.05399428,
   0.05554482,
   0.05709537,
   0.05864592,
   0.06019646};
   Double_t h_fit_plot_dataset_fy3019[81] = {
   1,
   0,
   1,
   0,
   1,
   0,
   1,
   1,
   1,
   3,
   1,
   0,
   0,
   1,
   2,
   0,
   7,
   6,
   4,
   3,
   9,
   9,
   6,
   6,
   12,
   9,
   11,
   19,
   17,
   14,
   11,
   20,
   19,
   22,
   15,
   16,
   24,
   21,
   28,
   19,
   22,
   33,
   25,
   23,
   19,
   32,
   23,
   17,
   23,
   20,
   16,
   33,
   15,
   8,
   12,
   13,
   16,
   16,
   13,
   11,
   9,
   9,
   8,
   2,
   9,
   5,
   11,
   6,
   2,
   3,
   5,
   3,
   2,
   1,
   1,
   1,
   1,
   1,
   2,
   0,
   1};
   Double_t h_fit_plot_dataset_felx3019[81] = {
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273};
   Double_t h_fit_plot_dataset_fely3019[81] = {
   0.8272462,
   0,
   0.8272462,
   0,
   0.8272462,
   0,
   0.8272462,
   0.8272462,
   0.8272462,
   1.632705,
   0.8272462,
   0,
   0,
   0.8272462,
   1.291815,
   0,
   2.58147,
   2.379931,
   1.914339,
   1.632705,
   2.943461,
   2.943461,
   2.379931,
   2.379931,
   3.415266,
   2.943461,
   3.265579,
   4.320219,
   4.082184,
   3.6965,
   3.265579,
   4.434448,
   4.320219,
   4.654502,
   3.82938,
   3.957801,
   4.864612,
   4.545807,
   5.259711,
   4.320219,
   4.654502,
   5.715302,
   4.966335,
   4.760717,
   4.320219,
   5.627135,
   4.760717,
   4.082184,
   4.760717,
   4.434448,
   3.957801,
   5.715302,
   3.82938,
   2.768386,
   3.415266,
   3.558662,
   3.957801,
   3.957801,
   3.558662,
   3.265579,
   2.943461,
   2.943461,
   2.768386,
   1.291815,
   2.943461,
   2.159691,
   3.265579,
   2.379931,
   1.291815,
   1.632705,
   2.159691,
   1.632705,
   1.291815,
   0.8272462,
   0.8272462,
   0.8272462,
   0.8272462,
   0.8272462,
   1.291815,
   0,
   0.8272462};
   Double_t h_fit_plot_dataset_fehx3019[81] = {
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273,
   0.000775273};
   Double_t h_fit_plot_dataset_fehy3019[81] = {
   2.299527,
   1.147874,
   2.299527,
   1.147874,
   2.299527,
   1.147874,
   2.299527,
   2.299527,
   2.299527,
   2.918186,
   2.299527,
   1.147874,
   1.147874,
   2.299527,
   2.63786,
   1.147874,
   3.770281,
   3.583642,
   3.162753,
   2.918186,
   4.110204,
   4.110204,
   3.583642,
   3.583642,
   4.559819,
   4.110204,
   4.416521,
   5.435196,
   5.203719,
   4.830381,
   4.416521,
   5.546519,
   5.435196,
   5.761366,
   4.958738,
   5.083066,
   5.966932,
   5.655182,
   6.354446,
   5.435196,
   5.761366,
   6.802567,
   6.066589,
   5.865235,
   5.435196,
   6.715753,
   5.865235,
   5.203719,
   5.865235,
   5.546519,
   5.083066,
   6.802567,
   4.958738,
   3.945142,
   4.559819,
   4.697573,
   5.083066,
   5.083066,
   4.697573,
   4.416521,
   4.110204,
   4.110204,
   3.945142,
   2.63786,
   4.110204,
   3.382473,
   4.416521,
   3.583642,
   2.63786,
   2.918186,
   3.382473,
   2.918186,
   2.63786,
   2.299527,
   2.299527,
   2.299527,
   2.299527,
   2.299527,
   2.63786,
   1.147874,
   2.299527};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(81,h_fit_plot_dataset_fx3019,h_fit_plot_dataset_fy3019,h_fit_plot_dataset_felx3019,h_fit_plot_dataset_fehx3019,h_fit_plot_dataset_fely3019,h_fit_plot_dataset_fehy3019);
   grae->SetName("h_fit_plot_dataset");
   grae->SetTitle("Histogram of fit_plot_dataset_plot__S_fbar_res");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(8);

   TH1F *Graph_h_fit_plot_dataset3019 = new TH1F("Graph_h_fit_plot_dataset3019","Histogram of fit_plot_dataset_plot__S_fbar_res",100,-0.07718191,0.07353116);
   Graph_h_fit_plot_dataset3019->SetMinimum(0);
   Graph_h_fit_plot_dataset3019->SetMaximum(43.78282);
   Graph_h_fit_plot_dataset3019->SetDirectory(0);
   Graph_h_fit_plot_dataset3019->SetStats(0);
   Graph_h_fit_plot_dataset3019->SetMarkerStyle(20);
   Graph_h_fit_plot_dataset3019->GetXaxis()->SetNdivisions(505);
   Graph_h_fit_plot_dataset3019->GetXaxis()->SetLabelFont(132);
   Graph_h_fit_plot_dataset3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_h_fit_plot_dataset3019->GetXaxis()->SetLabelSize(0.06);
   Graph_h_fit_plot_dataset3019->GetXaxis()->SetTitleSize(0.072);
   Graph_h_fit_plot_dataset3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_h_fit_plot_dataset3019->GetXaxis()->SetTitleFont(132);
   Graph_h_fit_plot_dataset3019->GetYaxis()->SetLabelFont(132);
   Graph_h_fit_plot_dataset3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_h_fit_plot_dataset3019->GetYaxis()->SetLabelSize(0.06);
   Graph_h_fit_plot_dataset3019->GetYaxis()->SetTitleSize(0.072);
   Graph_h_fit_plot_dataset3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_h_fit_plot_dataset3019->GetYaxis()->SetTitleFont(132);
   Graph_h_fit_plot_dataset3019->GetZaxis()->SetLabelFont(132);
   Graph_h_fit_plot_dataset3019->GetZaxis()->SetLabelSize(0.06);
   Graph_h_fit_plot_dataset3019->GetZaxis()->SetTitleSize(0.072);
   Graph_h_fit_plot_dataset3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_h_fit_plot_dataset3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_h_fit_plot_dataset3019);

   grae->Draw("p");

   Double_t pdf_pull_Norm_fx9[87] = {
   -0.06617303,
   -0.06617303,
   -0.06462249,
   -0.06307194,
   -0.06152139,
   -0.05997085,
   -0.0584203,
   -0.05686976,
   -0.05531921,
   -0.05376867,
   -0.05221812,
   -0.05066757,
   -0.04911703,
   -0.04756648,
   -0.04601594,
   -0.04446539,
   -0.04291484,
   -0.0413643,
   -0.03981375,
   -0.03826321,
   -0.03671266,
   -0.03516211,
   -0.03361157,
   -0.03206102,
   -0.03051048,
   -0.02895993,
   -0.02740938,
   -0.02585884,
   -0.02430829,
   -0.02275775,
   -0.0212072,
   -0.01965665,
   -0.01810611,
   -0.01655556,
   -0.01500502,
   -0.01345447,
   -0.01190392,
   -0.01035338,
   -0.008802833,
   -0.007252287,
   -0.005701741,
   -0.004151195,
   -0.002600649,
   -0.001050103,
   0.0005004426,
   0.002050989,
   0.003601534,
   0.00515208,
   0.006702626,
   0.008253172,
   0.009803718,
   0.01135426,
   0.01290481,
   0.01445536,
   0.0160059,
   0.01755645,
   0.01910699,
   0.02065754,
   0.02220809,
   0.02375863,
   0.02530918,
   0.02685972,
   0.02841027,
   0.02996082,
   0.03151136,
   0.03306191,
   0.03461245,
   0.036163,
   0.03771354,
   0.03926409,
   0.04081464,
   0.04236518,
   0.04391573,
   0.04546627,
   0.04701682,
   0.04856737,
   0.05011791,
   0.05166846,
   0.053219,
   0.05476955,
   0.0563201,
   0.05787064,
   0.05942119,
   0.06097173,
   0.06097173,
   0.06252228,
   0.06252228};
   Double_t pdf_pull_Norm_fy9[87] = {
   0,
   0.15467,
   0.15467,
   0.195456,
   0.2456295,
   0.3069733,
   0.381513,
   0.471527,
   0.5795521,
   0.7083812,
   0.8610535,
   1.040835,
   1.251187,
   1.495723,
   1.778151,
   2.102204,
   2.471551,
   2.889702,
   3.359889,
   3.884951,
   4.467193,
   5.108254,
   5.808967,
   6.569222,
   7.387841,
   8.262467,
   9.189472,
   10.16389,
   11.17939,
   12.22826,
   13.30148,
   14.38877,
   15.47876,
   16.55912,
   17.6168,
   18.63825,
   19.60975,
   20.51765,
   21.34871,
   22.09044,
   22.73137,
   23.26138,
   23.67195,
   23.95638,
   24.10998,
   24.13022,
   24.01675,
   23.77145,
   23.39838,
   22.90365,
   22.29523,
   21.58281,
   20.77746,
   19.89142,
   18.93771,
   17.9299,
   16.88173,
   15.80682,
   14.7184,
   13.62905,
   12.55044,
   11.4932,
   10.46674,
   9.479182,
   8.537264,
   7.646367,
   6.810519,
   6.032452,
   5.313689,
   4.65465,
   4.054773,
   3.512648,
   3.026156,
   2.592606,
   2.208872,
   1.871514,
   1.5769,
   1.321307,
   1.101012,
   0.9123661,
   0.751856,
   0.6161534,
   0.5021478,
   0.4069705,
   0.4069705,
   0.4069705,
   0};
   TGraph *graph = new TGraph(87,pdf_pull_Norm_fx9,pdf_pull_Norm_fy9);
   graph->SetName("pdf_pull_Norm[S_fbar_res]");
   graph->SetTitle("Projection of Gaussian PDF of pull");
   graph->SetFillColor(1);
   graph->SetLineColor(214);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);

   TH1F *Graph_pdf_pull_NormoBS_fbar_rescB9 = new TH1F("Graph_pdf_pull_NormoBS_fbar_rescB9","Projection of Gaussian PDF of pull",100,-0.07904256,0.07539181);
   Graph_pdf_pull_NormoBS_fbar_rescB9->SetMinimum(0);
   Graph_pdf_pull_NormoBS_fbar_rescB9->SetMaximum(26.54324);
   Graph_pdf_pull_NormoBS_fbar_rescB9->SetDirectory(0);
   Graph_pdf_pull_NormoBS_fbar_rescB9->SetStats(0);
   Graph_pdf_pull_NormoBS_fbar_rescB9->SetMarkerStyle(20);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetXaxis()->SetNdivisions(505);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetXaxis()->SetLabelFont(132);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetXaxis()->SetLabelOffset(0.01);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetXaxis()->SetLabelSize(0.06);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetXaxis()->SetTitleSize(0.072);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetXaxis()->SetTitleOffset(0.95);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetXaxis()->SetTitleFont(132);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetYaxis()->SetLabelFont(132);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetYaxis()->SetLabelOffset(0.01);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetYaxis()->SetLabelSize(0.06);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetYaxis()->SetTitleSize(0.072);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetYaxis()->SetTitleOffset(0.95);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetYaxis()->SetTitleFont(132);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetZaxis()->SetLabelFont(132);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetZaxis()->SetLabelSize(0.06);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetZaxis()->SetTitleSize(0.072);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetZaxis()->SetTitleOffset(1.2);
   Graph_pdf_pull_NormoBS_fbar_rescB9->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_pdf_pull_NormoBS_fbar_rescB9);

   graph->Draw("l");

   TH1D *frame_1b57cda0__38 = new TH1D("frame_1b57cda0__38","A RooPlot of \"Residual of #it{S}_{#bar#kern[-0.1]{#it{f}}}\"",81,-0.06462249,0.06097173);
   frame_1b57cda0__38->SetBinContent(1,41.7927);
   frame_1b57cda0__38->SetMaximum(54.3305);
   frame_1b57cda0__38->SetEntries(1);
   frame_1b57cda0__38->SetDirectory(0);
   frame_1b57cda0__38->SetStats(0);
   frame_1b57cda0__38->SetMarkerStyle(20);
   frame_1b57cda0__38->GetXaxis()->SetTitle("Residual of #it{S}_{#bar#kern[-0.1]{#it{f}}}");
   frame_1b57cda0__38->GetXaxis()->SetNdivisions(505);
   frame_1b57cda0__38->GetXaxis()->SetLabelFont(132);
   frame_1b57cda0__38->GetXaxis()->SetLabelOffset(0.01);
   frame_1b57cda0__38->GetXaxis()->SetLabelSize(0.06);
   frame_1b57cda0__38->GetXaxis()->SetTitleSize(0.072);
   frame_1b57cda0__38->GetXaxis()->SetTitleOffset(0.95);
   frame_1b57cda0__38->GetXaxis()->SetTitleFont(132);
   frame_1b57cda0__38->GetYaxis()->SetTitle("Pseudo-experiments / 0.002");
   frame_1b57cda0__38->GetYaxis()->SetLabelFont(132);
   frame_1b57cda0__38->GetYaxis()->SetLabelOffset(0.01);
   frame_1b57cda0__38->GetYaxis()->SetLabelSize(0.06);
   frame_1b57cda0__38->GetYaxis()->SetTitleSize(0.072);
   frame_1b57cda0__38->GetYaxis()->SetTitleOffset(0.95);
   frame_1b57cda0__38->GetYaxis()->SetTitleFont(132);
   frame_1b57cda0__38->GetZaxis()->SetLabelFont(132);
   frame_1b57cda0__38->GetZaxis()->SetLabelSize(0.06);
   frame_1b57cda0__38->GetZaxis()->SetTitleSize(0.072);
   frame_1b57cda0__38->GetZaxis()->SetTitleOffset(1.2);
   frame_1b57cda0__38->GetZaxis()->SetTitleFont(132);
   frame_1b57cda0__38->Draw("AXISSAME");

   TPaveText *pt = new TPaveText(0.57,0.77,0.92,0.92,"NB NDC");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(133);
   pt->SetTextSize(30);
   TText *AText = pt->AddText("m = 0.0015 #pm 0.0007");
   AText = pt->AddText("s = 0.0208 #pm 0.0005");
   pt->Draw();
   canvas_toystudy->Modified();
   canvas_toystudy->cd();
   canvas_toystudy->SetSelected(canvas_toystudy);

   canvas_toystudy->SaveAs("S_fbar_res.pdf");
   canvas_toystudy->SaveAs("S_fbar_res.tex");
}
