#include "lut.h"

const uint16_t tri_lut_uint16[LUT_SIZE] = { 65535,65435,65303,65177,65048,64920,64792,64664,64536,64408,64279,64151,64023,63895,63767,63639,63511,63383,63255,63127,62999,62870,62742,62614,62486,62358,62230,62102,61974,61846,61717,61589,61461,61333,61205,61077,60949,60821,60693,60565,60437,60308,60180,60052,59924,59796,59668,59540,59412,59284,59156,59027,58899,58771,58643,58515,58387,58259,58131,58003,57875,57747,57618,57490,57362,57234,57106,56978,56850,56722,56594,56466,56337,56209,56081,55953,55825,55697,55569,55441,55313,55185,55056,54928,54800,54672,54544,54416,54288,54160,54032,53904,53776,53647,53519,53391,53263,53135,53007,52879,52751,52623,52495,52366,52238,52110,51982,51854,51726,51598,51470,51342,51214,51085,50957,50829,50701,50573,50445,50317,50189,50061,49933,49804,49676,49548,49420,49292,49164,49036,48908,48780,48652,48523,48395,48267,48139,48011,47883,47755,47627,47499,47371,47243,47114,46986,46858,46730,46602,46474,46346,46218,46090,45962,45833,45705,45577,45449,45321,45193,45065,44937,44809,44681,44552,44424,44296,44168,44040,43912,43784,43656,43528,43400,43272,43143,43015,42887,42759,42631,42503,42375,42247,42119,41991,41862,41734,41606,41478,41350,41222,41094,40966,40838,40710,40581,40453,40325,40197,40069,39941,39813,39685,39557,39429,39300,39172,39044,38916,38788,38660,38532,38404,38276,38148,38019,37891,37763,37635,37507,37379,37251,37123,36995,36867,36739,36610,36482,36354,36226,36098,35970,35842,35714,35586,35458,35329,35201,35073,34945,34817,34689,34561,34433,34305,34177,34048,33920,33792,33664,33536,33408,33280,33152,33024,32896,32768,32639,32511,32383,32255,32127,31999,31871,31743,31615,31486,31358,31230,31102,30974,30846,30718,30590,30462,30334,30205,30077,29949,29821,29693,29565,29437,29309,29181,29053,28924,28796,28668,28540,28412,28284,28156,28028,27900,27772,27643,27515,27387,27259,27131,27003,26875,26747,26619,26491,26362,26234,26106,25978,25850,25722,25594,25466,25338,25210,25081,24953,24825,24697,24569,24441,24313,24185,24057,23929,23800,23672,23544,23416,23288,23160,23032,22904,22776,22647,22519,22391,22263,22135,22007,21879,21751,21623,21495,21366,21238,21110,20982,20854,20726,20598,20470,20342,20214,20085,19957,19829,19701,19573,19445,19317,19189,19061,18933,18804,18676,18548,18420,18292,18164,18036,17908,17780,17652,17523,17395,17267,17139,17011,16883,16755,16627,16499,16371,16242,16114,15986,15858,15730,15602,15474,15346,15218,15089,14961,14833,14705,14577,14449,14321,14193,14065,13937,13808,13680,13552,13424,13296,13168,13040,12912,12784,12656,12527,12399,12271,12143,12015,11887,11759,11631,11503,11375,11246,11118,10990,10862,10734,10606,10478,10350,10222,10094,9965,9837,9709,9581,9453,9325,9197,9069,8941,8813,8684,8556,8428,8300,8172,8044,7916,7788,7660,7532,7403,7275,7147,7019,6891,6763,6635,6507,6379,6251,6122,5994,5866,5738,5610,5482,5354,5226,5098,4969,4841,4713,4585,4457,4329,4201,4073,3945,3817,3688,3560,3432,3304,3176,3048,2920,2792,2664,2536,2407,2279,2151,2023,1895,1767,1639,1511,1383,1255,1126,998,870,742,614,486,357,231,99,0,99,231,357,486,614,742,870,998,1126,1255,1383,1511,1639,1767,1895,2023,2151,2279,2407,2536,2664,2792,2920,3048,3176,3304,3432,3560,3688,3817,3945,4073,4201,4329,4457,4585,4713,4841,4969,5098,5226,5354,5482,5610,5738,5866,5994,6122,6251,6379,6507,6635,6763,6891,7019,7147,7275,7403,7532,7660,7788,7916,8044,8172,8300,8428,8556,8684,8813,8941,9069,9197,9325,9453,9581,9709,9837,9965,10094,10222,10350,10478,10606,10734,10862,10990,11118,11246,11375,11503,11631,11759,11887,12015,12143,12271,12399,12527,12656,12784,12912,13040,13168,13296,13424,13552,13680,13808,13937,14065,14193,14321,14449,14577,14705,14833,14961,15089,15218,15346,15474,15602,15730,15858,15986,16114,16242,16371,16499,16627,16755,16883,17011,17139,17267,17395,17523,17652,17780,17908,18036,18164,18292,18420,18548,18676,18804,18933,19061,19189,19317,19445,19573,19701,19829,19957,20085,20214,20342,20470,20598,20726,20854,20982,21110,21238,21366,21495,21623,21751,21879,22007,22135,22263,22391,22519,22647,22776,22904,23032,23160,23288,23416,23544,23672,23800,23929,24057,24185,24313,24441,24569,24697,24825,24953,25081,25210,25338,25466,25594,25722,25850,25978,26106,26234,26362,26491,26619,26747,26875,27003,27131,27259,27387,27515,27643,27772,27900,28028,28156,28284,28412,28540,28668,28796,28924,29053,29181,29309,29437,29565,29693,29821,29949,30077,30205,30334,30462,30590,30718,30846,30974,31102,31230,31358,31486,31615,31743,31871,31999,32127,32255,32383,32511,32639,32767,32896,33024,33152,33280,33408,33536,33664,33792,33920,34048,34177,34305,34433,34561,34689,34817,34945,35073,35201,35329,35458,35586,35714,35842,35970,36098,36226,36354,36482,36610,36739,36867,36995,37123,37251,37379,37507,37635,37763,37891,38019,38148,38276,38404,38532,38660,38788,38916,39044,39172,39300,39429,39557,39685,39813,39941,40069,40197,40325,40453,40581,40710,40838,40966,41094,41222,41350,41478,41606,41734,41862,41991,42119,42247,42375,42503,42631,42759,42887,43015,43143,43272,43400,43528,43656,43784,43912,44040,44168,44296,44424,44552,44681,44809,44937,45065,45193,45321,45449,45577,45705,45833,45962,46090,46218,46346,46474,46602,46730,46858,46986,47114,47243,47371,47499,47627,47755,47883,48011,48139,48267,48395,48523,48652,48780,48908,49036,49164,49292,49420,49548,49676,49804,49933,50061,50189,50317,50445,50573,50701,50829,50957,51085,51214,51342,51470,51598,51726,51854,51982,52110,52238,52366,52495,52623,52751,52879,53007,53135,53263,53391,53519,53647,53776,53904,54032,54160,54288,54416,54544,54672,54800,54928,55056,55185,55313,55441,55569,55697,55825,55953,56081,56209,56337,56466,56594,56722,56850,56978,57106,57234,57362,57490,57618,57747,57875,58003,58131,58259,58387,58515,58643,58771,58899,59027,59156,59284,59412,59540,59668,59796,59924,60052,60180,60308,60437,60565,60693,60821,60949,61077,61205,61333,61461,61589,61717,61846,61974,62102,62230,62358,62486,62614,62742,62870,62999,63127,63255,63383,63511,63639,63767,63895,64023,64151,64279,64408,64536,64664,64792,64920,65048,65177,65303,65435 };
