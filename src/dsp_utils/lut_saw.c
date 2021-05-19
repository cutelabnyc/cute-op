#include "lut.h"

const uint16_t saw_lut_fixed8[LUT_SIZE] = { 255,255,255,255,254,254,254,254,253,253,253,253,252,252,252,252,251,251,251,251,250,250,250,250,249,249,249,249,248,248,248,248,247,247,247,247,246,246,246,246,245,245,245,245,244,244,244,244,243,243,243,243,242,242,242,242,241,241,241,241,240,240,240,240,239,239,239,239,238,238,238,238,237,237,237,237,236,236,236,236,235,235,235,235,234,234,234,234,233,233,233,233,232,232,232,232,231,231,231,231,230,230,230,230,229,229,229,229,228,228,228,228,227,227,227,227,226,226,226,226,225,225,225,225,224,224,224,224,223,223,223,223,222,222,222,222,221,221,221,221,220,220,220,220,219,219,219,219,218,218,218,218,217,217,217,217,216,216,216,216,215,215,215,215,214,214,214,214,213,213,213,213,212,212,212,212,211,211,211,211,210,210,210,210,209,209,209,209,208,208,208,208,207,207,207,207,206,206,206,206,205,205,205,205,204,204,204,204,203,203,203,203,202,202,202,202,201,201,201,201,200,200,200,200,199,199,199,199,198,198,198,198,197,197,197,197,196,196,196,196,195,195,195,195,194,194,194,194,193,193,193,193,192,192,192,192,191,191,191,191,190,190,190,190,189,189,189,189,188,188,188,188,187,187,187,187,186,186,186,186,185,185,185,185,184,184,184,184,183,183,183,183,182,182,182,182,181,181,181,181,180,180,180,180,179,179,179,179,178,178,178,178,177,177,177,177,176,176,176,176,175,175,175,175,174,174,174,174,173,173,173,173,172,172,172,172,171,171,171,171,170,170,170,170,169,169,169,169,168,168,168,168,167,167,167,167,166,166,166,166,165,165,165,165,164,164,164,164,163,163,163,163,162,162,162,162,161,161,161,161,160,160,160,160,159,159,159,159,158,158,158,158,157,157,157,157,156,156,156,156,155,155,155,155,154,154,154,154,153,153,153,153,152,152,152,152,151,151,151,151,150,150,150,150,149,149,149,149,148,148,148,148,147,147,147,147,146,146,146,146,145,145,145,145,144,144,144,144,143,143,143,143,142,142,142,142,141,141,141,141,140,140,140,140,139,139,139,139,138,138,138,138,137,137,137,137,136,136,136,136,135,135,135,135,134,134,134,134,133,133,133,133,132,132,132,132,131,131,131,131,130,130,130,130,129,129,129,129,128,128,128,128,127,127,127,127,126,126,126,126,125,125,125,125,124,124,124,124,123,123,123,123,122,122,122,122,121,121,121,121,120,120,120,120,119,119,119,119,118,118,118,118,117,117,117,117,116,116,116,116,115,115,115,115,114,114,114,114,113,113,113,113,112,112,112,112,111,111,111,111,110,110,110,110,109,109,109,109,108,108,108,108,107,107,107,107,106,106,106,106,105,105,105,105,104,104,104,104,103,103,103,103,102,102,102,102,101,101,101,101,100,100,100,100,99,99,99,99,98,98,98,98,97,97,97,97,96,96,96,96,95,95,95,95,94,94,94,94,93,93,93,93,92,92,92,92,91,91,91,91,90,90,90,90,89,89,89,89,88,88,88,88,87,87,87,87,86,86,86,86,85,85,85,85,84,84,84,84,83,83,83,83,82,82,82,82,81,81,81,81,80,80,80,80,79,79,79,79,78,78,78,78,77,77,77,77,76,76,76,76,75,75,75,75,74,74,74,74,73,73,73,73,72,72,72,72,71,71,71,71,70,70,70,70,69,69,69,69,68,68,68,68,67,67,67,67,66,66,66,66,65,65,65,65,64,64,64,64,63,63,63,63,62,62,62,62,61,61,61,61,60,60,60,60,59,59,59,59,58,58,58,58,57,57,57,57,56,56,56,56,55,55,55,55,54,54,54,54,53,53,53,53,52,52,52,52,51,51,51,51,50,50,50,50,49,49,49,49,48,48,48,48,47,47,47,47,46,46,46,46,45,45,45,45,44,44,44,44,43,43,43,43,42,42,42,42,41,41,41,41,40,40,40,40,39,39,39,39,38,38,38,38,37,37,37,37,36,36,36,36,35,35,35,35,34,34,34,34,33,33,33,33,32,32,32,32,31,31,31,31,30,30,30,30,29,29,29,29,28,28,28,28,27,27,27,27,26,26,26,26,25,25,25,25,24,24,24,24,23,23,23,23,22,22,22,22,21,21,21,21,20,20,20,20,19,19,19,19,18,18,18,18,17,17,17,17,16,16,16,16,15,15,15,15,14,14,14,14,13,13,13,13,12,12,12,12,11,11,11,11,10,10,10,10,9,9,9,9,8,8,8,8,7,7,7,7,6,6,6,6,5,5,5,5,4,4,4,4,3,3,3,3,2,2,2,2,1,1,1,1,0,0,0,0 };

const uint32_t saw_lut_fixed16[LUT_SIZE] = { 65535,65471,65407,65343,65279,65215,65151,65087,65023,64959,64895,64831,64767,64703,64639,64575,64510,64446,64382,64318,64254,64190,64126,64062,63998,63934,63870,63806,63742,63678,63614,63550,63485,63421,63357,63293,63229,63165,63101,63037,62973,62909,62845,62781,62717,62653,62589,62525,62460,62396,62332,62268,62204,62140,62076,62012,61948,61884,61820,61756,61692,61628,61564,61500,61435,61371,61307,61243,61179,61115,61051,60987,60923,60859,60795,60731,60667,60603,60539,60475,60410,60346,60282,60218,60154,60090,60026,59962,59898,59834,59770,59706,59642,59578,59514,59450,59385,59321,59257,59193,59129,59065,59001,58937,58873,58809,58745,58681,58617,58553,58489,58425,58360,58296,58232,58168,58104,58040,57976,57912,57848,57784,57720,57656,57592,57528,57464,57400,57335,57271,57207,57143,57079,57015,56951,56887,56823,56759,56695,56631,56567,56503,56439,56375,56310,56246,56182,56118,56054,55990,55926,55862,55798,55734,55670,55606,55542,55478,55414,55350,55285,55221,55157,55093,55029,54965,54901,54837,54773,54709,54645,54581,54517,54453,54389,54325,54260,54196,54132,54068,54004,53940,53876,53812,53748,53684,53620,53556,53492,53428,53364,53300,53235,53171,53107,53043,52979,52915,52851,52787,52723,52659,52595,52531,52467,52403,52339,52275,52210,52146,52082,52018,51954,51890,51826,51762,51698,51634,51570,51506,51442,51378,51314,51250,51185,51121,51057,50993,50929,50865,50801,50737,50673,50609,50545,50481,50417,50353,50289,50225,50160,50096,50032,49968,49904,49840,49776,49712,49648,49584,49520,49456,49392,49328,49264,49200,49135,49071,49007,48943,48879,48815,48751,48687,48623,48559,48495,48431,48367,48303,48239,48175,48110,48046,47982,47918,47854,47790,47726,47662,47598,47534,47470,47406,47342,47278,47214,47150,47085,47021,46957,46893,46829,46765,46701,46637,46573,46509,46445,46381,46317,46253,46189,46125,46060,45996,45932,45868,45804,45740,45676,45612,45548,45484,45420,45356,45292,45228,45164,45100,45035,44971,44907,44843,44779,44715,44651,44587,44523,44459,44395,44331,44267,44203,44139,44075,44010,43946,43882,43818,43754,43690,43626,43562,43498,43434,43370,43306,43242,43178,43114,43050,42985,42921,42857,42793,42729,42665,42601,42537,42473,42409,42345,42281,42217,42153,42089,42025,41960,41896,41832,41768,41704,41640,41576,41512,41448,41384,41320,41256,41192,41128,41064,41000,40935,40871,40807,40743,40679,40615,40551,40487,40423,40359,40295,40231,40167,40103,40039,39975,39910,39846,39782,39718,39654,39590,39526,39462,39398,39334,39270,39206,39142,39078,39014,38950,38885,38821,38757,38693,38629,38565,38501,38437,38373,38309,38245,38181,38117,38053,37989,37925,37860,37796,37732,37668,37604,37540,37476,37412,37348,37284,37220,37156,37092,37028,36964,36900,36835,36771,36707,36643,36579,36515,36451,36387,36323,36259,36195,36131,36067,36003,35939,35875,35810,35746,35682,35618,35554,35490,35426,35362,35298,35234,35170,35106,35042,34978,34914,34850,34785,34721,34657,34593,34529,34465,34401,34337,34273,34209,34145,34081,34017,33953,33889,33825,33760,33696,33632,33568,33504,33440,33376,33312,33248,33184,33120,33056,32992,32928,32864,32800,32735,32671,32607,32543,32479,32415,32351,32287,32223,32159,32095,32031,31967,31903,31839,31775,31710,31646,31582,31518,31454,31390,31326,31262,31198,31134,31070,31006,30942,30878,30814,30750,30685,30621,30557,30493,30429,30365,30301,30237,30173,30109,30045,29981,29917,29853,29789,29725,29660,29596,29532,29468,29404,29340,29276,29212,29148,29084,29020,28956,28892,28828,28764,28700,28635,28571,28507,28443,28379,28315,28251,28187,28123,28059,27995,27931,27867,27803,27739,27675,27610,27546,27482,27418,27354,27290,27226,27162,27098,27034,26970,26906,26842,26778,26714,26650,26585,26521,26457,26393,26329,26265,26201,26137,26073,26009,25945,25881,25817,25753,25689,25625,25560,25496,25432,25368,25304,25240,25176,25112,25048,24984,24920,24856,24792,24728,24664,24600,24535,24471,24407,24343,24279,24215,24151,24087,24023,23959,23895,23831,23767,23703,23639,23575,23510,23446,23382,23318,23254,23190,23126,23062,22998,22934,22870,22806,22742,22678,22614,22550,22485,22421,22357,22293,22229,22165,22101,22037,21973,21909,21845,21781,21717,21653,21589,21525,21460,21396,21332,21268,21204,21140,21076,21012,20948,20884,20820,20756,20692,20628,20564,20500,20435,20371,20307,20243,20179,20115,20051,19987,19923,19859,19795,19731,19667,19603,19539,19475,19410,19346,19282,19218,19154,19090,19026,18962,18898,18834,18770,18706,18642,18578,18514,18450,18385,18321,18257,18193,18129,18065,18001,17937,17873,17809,17745,17681,17617,17553,17489,17425,17360,17296,17232,17168,17104,17040,16976,16912,16848,16784,16720,16656,16592,16528,16464,16400,16335,16271,16207,16143,16079,16015,15951,15887,15823,15759,15695,15631,15567,15503,15439,15375,15310,15246,15182,15118,15054,14990,14926,14862,14798,14734,14670,14606,14542,14478,14414,14350,14285,14221,14157,14093,14029,13965,13901,13837,13773,13709,13645,13581,13517,13453,13389,13325,13260,13196,13132,13068,13004,12940,12876,12812,12748,12684,12620,12556,12492,12428,12364,12300,12235,12171,12107,12043,11979,11915,11851,11787,11723,11659,11595,11531,11467,11403,11339,11275,11210,11146,11082,11018,10954,10890,10826,10762,10698,10634,10570,10506,10442,10378,10314,10250,10185,10121,10057,9993,9929,9865,9801,9737,9673,9609,9545,9481,9417,9353,9289,9225,9160,9096,9032,8968,8904,8840,8776,8712,8648,8584,8520,8456,8392,8328,8264,8200,8135,8071,8007,7943,7879,7815,7751,7687,7623,7559,7495,7431,7367,7303,7239,7175,7110,7046,6982,6918,6854,6790,6726,6662,6598,6534,6470,6406,6342,6278,6214,6150,6085,6021,5957,5893,5829,5765,5701,5637,5573,5509,5445,5381,5317,5253,5189,5125,5060,4996,4932,4868,4804,4740,4676,4612,4548,4484,4420,4356,4292,4228,4164,4100,4035,3971,3907,3843,3779,3715,3651,3587,3523,3459,3395,3331,3267,3203,3139,3075,3010,2946,2882,2818,2754,2690,2626,2562,2498,2434,2370,2306,2242,2178,2114,2050,1985,1921,1857,1793,1729,1665,1601,1537,1473,1409,1345,1281,1217,1153,1089,1025,960,896,832,768,704,640,576,512,448,384,320,256,192,128,64,0 };