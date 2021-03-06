void S_fbar_res()
{
//=========Macro generated from canvas: canvas_toystudy/canvas
//=========  (Wed Aug  8 11:02:06 2018) by ROOT version6.06/02
   TCanvas *canvas_toystudy = new TCanvas("canvas_toystudy", "canvas",1,1,800,576);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas_toystudy->SetHighLightColor(2);
   canvas_toystudy->Range(-0.07966538,-10.70319,0.07610286,56.19175);
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

   TH1D *frame_1d2e9910__37 = new TH1D("frame_1d2e9910__37","A RooPlot of \"Residual of #it{S}_{#bar#kern[-0.1]{#it{f}}}\"",93,-0.05785783,0.06831445);
   frame_1d2e9910__37->SetBinContent(1,40.65154);
   frame_1d2e9910__37->SetMaximum(52.847);
   frame_1d2e9910__37->SetEntries(1);
   frame_1d2e9910__37->SetDirectory(0);
   frame_1d2e9910__37->SetStats(0);
   frame_1d2e9910__37->SetMarkerStyle(20);
   frame_1d2e9910__37->GetXaxis()->SetTitle("Residual of #it{S}_{#bar#kern[-0.1]{#it{f}}}");
   frame_1d2e9910__37->GetXaxis()->SetNdivisions(505);
   frame_1d2e9910__37->GetXaxis()->SetLabelFont(132);
   frame_1d2e9910__37->GetXaxis()->SetLabelOffset(0.01);
   frame_1d2e9910__37->GetXaxis()->SetLabelSize(0.06);
   frame_1d2e9910__37->GetXaxis()->SetTitleSize(0.072);
   frame_1d2e9910__37->GetXaxis()->SetTitleOffset(0.95);
   frame_1d2e9910__37->GetXaxis()->SetTitleFont(132);
   frame_1d2e9910__37->GetYaxis()->SetTitle("Pseudo-experiments / 0.001");
   frame_1d2e9910__37->GetYaxis()->SetLabelFont(132);
   frame_1d2e9910__37->GetYaxis()->SetLabelOffset(0.01);
   frame_1d2e9910__37->GetYaxis()->SetLabelSize(0.06);
   frame_1d2e9910__37->GetYaxis()->SetTitleSize(0.072);
   frame_1d2e9910__37->GetYaxis()->SetTitleOffset(0.95);
   frame_1d2e9910__37->GetYaxis()->SetTitleFont(132);
   frame_1d2e9910__37->GetZaxis()->SetLabelFont(132);
   frame_1d2e9910__37->GetZaxis()->SetLabelSize(0.06);
   frame_1d2e9910__37->GetZaxis()->SetTitleSize(0.072);
   frame_1d2e9910__37->GetZaxis()->SetTitleOffset(1.2);
   frame_1d2e9910__37->GetZaxis()->SetTitleFont(132);
   frame_1d2e9910__37->Draw("FUNC");

   Double_t h_fit_plot_dataset_fx3019[93] = {
   -0.05717948,
   -0.05582279,
   -0.0544661,
   -0.05310941,
   -0.05175272,
   -0.05039603,
   -0.04903933,
   -0.04768264,
   -0.04632595,
   -0.04496926,
   -0.04361257,
   -0.04225588,
   -0.04089919,
   -0.0395425,
   -0.03818581,
   -0.03682911,
   -0.03547242,
   -0.03411573,
   -0.03275904,
   -0.03140235,
   -0.03004566,
   -0.02868897,
   -0.02733228,
   -0.02597559,
   -0.02461889,
   -0.0232622,
   -0.02190551,
   -0.02054882,
   -0.01919213,
   -0.01783544,
   -0.01647875,
   -0.01512206,
   -0.01376537,
   -0.01240867,
   -0.01105198,
   -0.009695292,
   -0.008338601,
   -0.00698191,
   -0.005625219,
   -0.004268528,
   -0.002911837,
   -0.001555146,
   -0.0001984546,
   0.001158236,
   0.002514928,
   0.003871619,
   0.00522831,
   0.006585001,
   0.007941692,
   0.009298383,
   0.01065507,
   0.01201177,
   0.01336846,
   0.01472515,
   0.01608184,
   0.01743853,
   0.01879522,
   0.02015191,
   0.0215086,
   0.02286529,
   0.02422199,
   0.02557868,
   0.02693537,
   0.02829206,
   0.02964875,
   0.03100544,
   0.03236213,
   0.03371882,
   0.03507551,
   0.03643221,
   0.0377889,
   0.03914559,
   0.04050228,
   0.04185897,
   0.04321566,
   0.04457235,
   0.04592904,
   0.04728573,
   0.04864243,
   0.04999912,
   0.05135581,
   0.0527125,
   0.05406919,
   0.05542588,
   0.05678257,
   0.05813926,
   0.05949595,
   0.06085265,
   0.06220934,
   0.06356603,
   0.06492272,
   0.06627941,
   0.0676361};
   Double_t h_fit_plot_dataset_fy3019[93] = {
   1,
   0,
   0,
   1,
   0,
   0,
   2,
   2,
   3,
   2,
   4,
   1,
   4,
   3,
   7,
   4,
   3,
   9,
   4,
   7,
   10,
   14,
   9,
   13,
   9,
   8,
   5,
   21,
   18,
   14,
   21,
   20,
   21,
   22,
   20,
   22,
   21,
   29,
   23,
   28,
   23,
   27,
   25,
   26,
   26,
   21,
   32,
   24,
   23,
   23,
   20,
   21,
   16,
   17,
   24,
   14,
   16,
   15,
   11,
   11,
   13,
   9,
   9,
   9,
   11,
   13,
   5,
   10,
   1,
   2,
   3,
   2,
   3,
   5,
   4,
   1,
   5,
   2,
   2,
   2,
   0,
   2,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   1,
   0,
   0,
   2};
   Double_t h_fit_plot_dataset_felx3019[93] = {
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456};
   Double_t h_fit_plot_dataset_fely3019[93] = {
   0.8272462,
   0,
   0,
   0.8272462,
   0,
   0,
   1.291815,
   1.291815,
   1.632705,
   1.291815,
   1.914339,
   0.8272462,
   1.914339,
   1.632705,
   2.58147,
   1.914339,
   1.632705,
   2.943461,
   1.914339,
   2.58147,
   3.108694,
   3.6965,
   2.943461,
   3.558662,
   2.943461,
   2.768386,
   2.159691,
   4.545807,
   4.202887,
   3.6965,
   4.545807,
   4.434448,
   4.545807,
   4.654502,
   4.434448,
   4.654502,
   4.545807,
   5.353932,
   4.760717,
   5.259711,
   4.760717,
   5.163771,
   4.966335,
   5.066015,
   5.066015,
   4.545807,
   5.627135,
   4.864612,
   4.760717,
   4.760717,
   4.434448,
   4.545807,
   3.957801,
   4.082184,
   4.864612,
   3.6965,
   3.957801,
   3.82938,
   3.265579,
   3.265579,
   3.558662,
   2.943461,
   2.943461,
   2.943461,
   3.265579,
   3.558662,
   2.159691,
   3.108694,
   0.8272462,
   1.291815,
   1.632705,
   1.291815,
   1.632705,
   2.159691,
   1.914339,
   0.8272462,
   2.159691,
   1.291815,
   1.291815,
   1.291815,
   0,
   1.291815,
   0,
   0.8272462,
   0,
   0,
   0,
   0,
   0,
   0.8272462,
   0,
   0,
   1.291815};
   Double_t h_fit_plot_dataset_fehx3019[93] = {
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456,
   0.0006783456};
   Double_t h_fit_plot_dataset_fehy3019[93] = {
   2.299527,
   1.147874,
   1.147874,
   2.299527,
   1.147874,
   1.147874,
   2.63786,
   2.63786,
   2.918186,
   2.63786,
   3.162753,
   2.299527,
   3.162753,
   2.918186,
   3.770281,
   3.162753,
   2.918186,
   4.110204,
   3.162753,
   3.770281,
   4.26695,
   4.830381,
   4.110204,
   4.697573,
   4.110204,
   3.945142,
   3.382473,
   5.655182,
   5.321007,
   4.830381,
   5.655182,
   5.546519,
   5.655182,
   5.761366,
   5.546519,
   5.761366,
   5.655182,
   6.44702,
   5.865235,
   6.354446,
   5.865235,
   6.260244,
   6.066589,
   6.164324,
   6.164324,
   5.655182,
   6.715753,
   5.966932,
   5.865235,
   5.865235,
   5.546519,
   5.655182,
   5.083066,
   5.203719,
   5.966932,
   4.830381,
   5.083066,
   4.958738,
   4.416521,
   4.416521,
   4.697573,
   4.110204,
   4.110204,
   4.110204,
   4.416521,
   4.697573,
   3.382473,
   4.26695,
   2.299527,
   2.63786,
   2.918186,
   2.63786,
   2.918186,
   3.382473,
   3.162753,
   2.299527,
   3.382473,
   2.63786,
   2.63786,
   2.63786,
   1.147874,
   2.63786,
   1.147874,
   2.299527,
   1.147874,
   1.147874,
   1.147874,
   1.147874,
   1.147874,
   2.299527,
   1.147874,
   1.147874,
   2.63786};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(93,h_fit_plot_dataset_fx3019,h_fit_plot_dataset_fy3019,h_fit_plot_dataset_felx3019,h_fit_plot_dataset_fehx3019,h_fit_plot_dataset_fely3019,h_fit_plot_dataset_fehy3019);
   grae->SetName("h_fit_plot_dataset");
   grae->SetTitle("Histogram of fit_plot_dataset_plot__S_fbar_res");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(8);

   TH1F *Graph_h_fit_plot_dataset3019 = new TH1F("Graph_h_fit_plot_dataset3019","Histogram of fit_plot_dataset_plot__S_fbar_res",100,-0.07047505,0.08093167);
   Graph_h_fit_plot_dataset3019->SetMinimum(0);
   Graph_h_fit_plot_dataset3019->SetMaximum(42.58733);
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

   Double_t pdf_pull_Norm_fx9[99] = {
   -0.05921452,
   -0.05921452,
   -0.05785783,
   -0.05650114,
   -0.05514444,
   -0.05378775,
   -0.05243106,
   -0.05107437,
   -0.04971768,
   -0.04836099,
   -0.0470043,
   -0.04564761,
   -0.04429092,
   -0.04293422,
   -0.04157753,
   -0.04022084,
   -0.03886415,
   -0.03750746,
   -0.03615077,
   -0.03479408,
   -0.03343739,
   -0.0320807,
   -0.030724,
   -0.02936731,
   -0.02801062,
   -0.02665393,
   -0.02529724,
   -0.02394055,
   -0.02258386,
   -0.02122717,
   -0.01987048,
   -0.01851378,
   -0.01715709,
   -0.0158004,
   -0.01444371,
   -0.01308702,
   -0.01173033,
   -0.01037364,
   -0.009016947,
   -0.007660256,
   -0.006303565,
   -0.004946874,
   -0.003590182,
   -0.002233491,
   -0.0008768002,
   0.0004798909,
   0.001836582,
   0.003193273,
   0.004549964,
   0.005906655,
   0.007263347,
   0.008620038,
   0.009976729,
   0.01133342,
   0.01269011,
   0.0140468,
   0.01540349,
   0.01676018,
   0.01811688,
   0.01947357,
   0.02083026,
   0.02218695,
   0.02354364,
   0.02490033,
   0.02625702,
   0.02761371,
   0.0289704,
   0.0303271,
   0.03168379,
   0.03304048,
   0.03439717,
   0.03575386,
   0.03711055,
   0.03846724,
   0.03982393,
   0.04118062,
   0.04253732,
   0.04389401,
   0.0452507,
   0.04660739,
   0.04796408,
   0.04932077,
   0.05067746,
   0.05203415,
   0.05339084,
   0.05474754,
   0.05610423,
   0.05746092,
   0.05881761,
   0.0601743,
   0.06153099,
   0.06288768,
   0.06424437,
   0.06560106,
   0.06695776,
   0.06831445,
   0.06831445,
   0.06967114,
   0.06967114};
   Double_t pdf_pull_Norm_fy9[99] = {
   0,
   0.4025291,
   0.4025291,
   0.4873837,
   0.5874589,
   0.7048827,
   0.8419552,
   1.001138,
   1.185037,
   1.396376,
   1.63797,
   1.912679,
   2.223368,
   2.572843,
   2.963794,
   3.398722,
   3.87986,
   4.409093,
   4.987872,
   5.617126,
   6.297177,
   7.027655,
   7.807425,
   8.634517,
   9.506071,
   10.4183,
   11.36647,
   12.34489,
   13.34693,
   14.3651,
   15.39106,
   16.41577,
   17.42958,
   18.42237,
   19.3837,
   20.30303,
   21.16985,
   21.97392,
   22.70545,
   23.3553,
   23.91518,
   24.37781,
   24.73709,
   24.98822,
   25.12782,
   25.15401,
   25.06642,
   24.86626,
   24.5562,
   24.14042,
   23.62443,
   23.01498,
   22.31993,
   21.54804,
   20.70883,
   19.81236,
   18.86903,
   17.88941,
   16.88399,
   15.86306,
   14.83651,
   13.81367,
   12.80323,
   11.81307,
   10.85023,
   9.920824,
   9.030035,
   8.182085,
   7.380254,
   6.626917,
   5.923583,
   5.270967,
   4.669055,
   4.117186,
   3.614138,
   3.158216,
   2.747336,
   2.37911,
   2.050927,
   1.760024,
   1.503557,
   1.278657,
   1.082483,
   0.9122642,
   0.7653378,
   0.6391732,
   0.5313942,
   0.4397925,
   0.3623362,
   0.2971723,
   0.2426263,
   0.197197,
   0.1595495,
   0.128506,
   0.1030349,
   0.082239,
   0.082239,
   0.082239,
   0};
   TGraph *graph = new TGraph(99,pdf_pull_Norm_fx9,pdf_pull_Norm_fy9);
   graph->SetName("pdf_pull_Norm[S_fbar_res]");
   graph->SetTitle("Projection of Gaussian PDF of pull");
   graph->SetFillColor(1);
   graph->SetLineColor(214);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);

   TH1F *Graph_pdf_pull_NormoBS_fbar_rescB9 = new TH1F("Graph_pdf_pull_NormoBS_fbar_rescB9","Projection of Gaussian PDF of pull",100,-0.07210308,0.0825597);
   Graph_pdf_pull_NormoBS_fbar_rescB9->SetMinimum(0);
   Graph_pdf_pull_NormoBS_fbar_rescB9->SetMaximum(27.66941);
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

   TH1D *frame_1d2e9910__38 = new TH1D("frame_1d2e9910__38","A RooPlot of \"Residual of #it{S}_{#bar#kern[-0.1]{#it{f}}}\"",93,-0.05785783,0.06831445);
   frame_1d2e9910__38->SetBinContent(1,40.65154);
   frame_1d2e9910__38->SetMaximum(52.847);
   frame_1d2e9910__38->SetEntries(1);
   frame_1d2e9910__38->SetDirectory(0);
   frame_1d2e9910__38->SetStats(0);
   frame_1d2e9910__38->SetMarkerStyle(20);
   frame_1d2e9910__38->GetXaxis()->SetTitle("Residual of #it{S}_{#bar#kern[-0.1]{#it{f}}}");
   frame_1d2e9910__38->GetXaxis()->SetNdivisions(505);
   frame_1d2e9910__38->GetXaxis()->SetLabelFont(132);
   frame_1d2e9910__38->GetXaxis()->SetLabelOffset(0.01);
   frame_1d2e9910__38->GetXaxis()->SetLabelSize(0.06);
   frame_1d2e9910__38->GetXaxis()->SetTitleSize(0.072);
   frame_1d2e9910__38->GetXaxis()->SetTitleOffset(0.95);
   frame_1d2e9910__38->GetXaxis()->SetTitleFont(132);
   frame_1d2e9910__38->GetYaxis()->SetTitle("Pseudo-experiments / 0.001");
   frame_1d2e9910__38->GetYaxis()->SetLabelFont(132);
   frame_1d2e9910__38->GetYaxis()->SetLabelOffset(0.01);
   frame_1d2e9910__38->GetYaxis()->SetLabelSize(0.06);
   frame_1d2e9910__38->GetYaxis()->SetTitleSize(0.072);
   frame_1d2e9910__38->GetYaxis()->SetTitleOffset(0.95);
   frame_1d2e9910__38->GetYaxis()->SetTitleFont(132);
   frame_1d2e9910__38->GetZaxis()->SetLabelFont(132);
   frame_1d2e9910__38->GetZaxis()->SetLabelSize(0.06);
   frame_1d2e9910__38->GetZaxis()->SetTitleSize(0.072);
   frame_1d2e9910__38->GetZaxis()->SetTitleOffset(1.2);
   frame_1d2e9910__38->GetZaxis()->SetTitleFont(132);
   frame_1d2e9910__38->Draw("AXISSAME");

   TPaveText *pt = new TPaveText(0.57,0.77,0.92,0.92,"NB NDC");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(133);
   pt->SetTextSize(30);
   TText *AText = pt->AddText("m = 0.0001 #pm 0.0007");
   AText = pt->AddText("s = 0.0202 #pm 0.0005");
   pt->Draw();
   canvas_toystudy->Modified();
   canvas_toystudy->cd();
   canvas_toystudy->SetSelected(canvas_toystudy);

   canvas_toystudy->SaveAs("S_fbar_res.pdf");
   canvas_toystudy->SaveAs("S_fbar_res.tex");
}
