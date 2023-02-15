#pragma once

#include <array>

/* This file was autogenerated on 2023-02-12T14:29 DO NOT EDIT! */

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 32.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<32>()
{
    // clang-format off
  return {{{1.53846153846153846154e-2, -1.49253731343283582090e-2, 7.24637681159420289855e-3, -2.34741784037558685446e-3, 5.70776255707762557078e-4, -1.11111111111111111111e-4, 1.80375180375180375180e-5},
           {1.39622504057619681306e-2, -1.35442916928413016608e-2, 6.57531346101908244911e-3, -2.12986632056158314494e-3, 5.17840525682266693969e-4, -1.00799289973823959546e-4, 1.63624425587216778286e-5},
           {1.26714952969645081732e-2, -1.22911030617777420476e-2, 5.96644007640867619913e-3, -1.93249061100647418106e-3, 4.69817417789191349616e-4, -9.14450601808649600477e-5, 1.48430157979265774304e-5},
           {1.15001629828698475472e-2, -1.11539553413705222473e-2, 5.41398932508933578706e-3, -1.75341838350292805911e-3, 4.26250742397883653715e-4, -8.29594444357543286950e-5, 1.34647667594240251585e-5},
           {1.04371957323595599548e-2, -1.01220957096651905521e-2, 4.91272906995531954272e-3, -1.59095117045727173222e-3, 3.86726696831174465187e-4, -7.52617376310254842468e-5, 1.22145705617883845495e-5},
           {9.47256043302103188652e-3, -9.18576843373364315681e-3, 4.45791267376036831616e-3, -1.44354821104958537005e-3, 3.50869924770418300901e-4, -6.82787373761626514195e-5, 1.10805231567089621045e-5},
           {8.59715358330747150828e-3, -8.33612235079929549120e-3, 4.04523392063596727575e-3, -1.30981179913014760680e-3, 3.18339942201962774505e-4, -6.19440461375852363928e-5, 1.00518277132416196368e-5},
           {7.80271510010213577985e-3, -7.56512693944947061525e-3, 3.67078612560891659813e-3, -1.18847399316915477638e-3, 2.88827895793169423660e-4, -5.61974383227575836289e-5, 9.11869158076265659714e-6},
           {7.08175012322861344854e-3, -6.86549618289890740269e-3, 3.33102504281412511999e-3, -1.07838456157580251001e-3, 2.62053622762248284404e-4, -5.09842862616531470373e-5, 8.27223284518807159779e-6},
           {6.42745807448319786404e-3, -6.23061950044929632742e-3, 3.02273521930658843268e-3, -9.78500048491674637510e-4, 2.37762984186441197684e-4, -4.62550396020640022408e-5, 7.50439558485866838701e-6},
           {5.83366829773208830229e-3, -5.65449909057169023546e-3, 2.74299947421520516969e-3, -8.87873855854661624479e-4, 2.15725446305072053946e-4, -4.19647531460162081683e-5, 6.80787301576636123016e-6},
           {5.29478166917259854968e-3, -5.13169309006331324924e-3, 2.48917121276418179879e-3, -8.05647247225569490547e-4, 1.95731886742670489233e-4, -3.80726586177235413176e-5, 6.17603779130826684857e-6},
           {4.80571762359990970609e-3, -4.65726400908000361112e-3, 2.25884931169962038106e-3, -7.31041187662881853000e-4, 1.77592604725443456871e-4, -3.45417762735237467305e-5, 5.60287879022662842904e-6},
           {4.36186609398981576385e-3, -4.22673195204823805293e-3, 2.04985533715756765641e-3, -6.63348941905880459292e-4, 1.61135516312379536638e-4, -3.13385626451165771661e-5, 5.08294378848108855073e-6},
           {3.95904390839374627220e-3, -3.83603217999537501187e-3, 1.86021287822922738210e-3, -6.01929360358744976536e-4, 1.46204517428852868348e-4, -2.84325910528089855433e-5, 4.61128746710040280293e-6},
           {3.59345523048988473025e-3, -3.48147661113757875273e-3, 1.68812879963133478239e-3, -5.46200788927469083750e-4, 1.32657999092667999762e-4, -2.57962618386794022567e-5, 4.18342425911335466662e-6},
           {3.26165566854673578956e-3, -3.15971889402576417219e-3, 1.53197623516732029346e-3, -4.95635544710148535398e-4, 1.20367500675363657461e-4, -2.34045395535984227745e-5, 3.79528558495246368226e-6},
           {2.96051971239892413798e-3, -2.86772272152809081305e-3, 1.39027916024227660326e-3, -4.49754904936253878736e-4, 1.09216488359186456644e-4, -2.12347145896080100318e-5, 3.44318106770324227974e-6},
           {2.68721118964115966016e-3, -2.60273308474692202305e-3, 1.26169839673018441099e-3, -4.08124561443471193210e-4, 9.90992471450493879817e-5, -1.92661869827316203419e-5, 3.12376335763816353195e-6},
           {2.43915646091601287168e-3, -2.36225019392259302786e-3, 1.14501891712878397546e-3, -3.70350497418298041895e-4, 8.99198758504385798219e-5, -1.74802703230996239693e-5, 2.83399622999329570944e-6},
           {2.21402010017756386423e-3, -2.14400581873226084989e-3, 1.03913832730610734487e-3, -3.36075247151256515689e-4, 8.15913755189860495035e-5, -1.58600139013561139412e-5, 2.57112565124736392358e-6},
           {2.00968282940346349222e-3, -1.94594182339125629580e-3, 9.43056418360990657973e-4, -3.04974503207733034851e-4, 7.40348225546868285007e-5, -1.43900413945029201942e-5, 2.33265353754776311659e-6},
           {1.82422149862719032085e-3, -1.76619069282580839000e-3, 8.55865688294925428155e-4, -2.76754038725980633633e-4, 6.71786187020259449197e-5, -1.30564045523023683601e-5, 2.11631395466777533736e-6},
           {1.65589092157390066484e-3, -1.60305786510866955970e-3, 7.76742743421434192475e-4, -2.51146915556313865721e-4, 6.09578107263231036258e-5, -1.18464504886130925730e-5, 1.92005153222045937242e-6},
           {1.50310739479193812736e-3, -1.45500570251323757022e-3, 7.04940497809843297575e-4, -2.27910951678678738285e-4, 5.53134733134089644083e-5, -1.07487013119445826506e-5, 1.74200188602106790016e-6},
           {1.36443374414542840239e-3, -1.32063894911082471868e-3, 6.39781096652654161262e-4, -2.06826423805585150363e-4, 5.01921493106712994807e-5, -9.75274494732900995467e-6, 1.58047386168399169805e-6},
           {1.23856575702331649438e-3, -1.19869153695803336811e-3, 5.80649496332157912491e-4, -1.87693983317435296367e-4, 4.55453419783143580559e-5, -8.84913610845025626242e-6, 1.43393342994618215145e-6},
           {1.12431987176459576711e-3, -1.08801461573130317864e-3, 5.26987640208112029586e-4, -1.70332765708943145418e-4, 4.13290544155871182640e-5, -8.02930647586259232940e-6, 1.30098907999321982175e-6},
           {1.02062200772333878766e-3, -9.87565692285558016650e-4, 4.78289174813793772044e-4, -1.54578675568025345529e-4, 3.75033717764948265269e-5, -7.28548322500155725608e-6, 1.18037857137800607171e-6},
           {9.26497430213869387766e-4, -8.96398777154197730875e-4, 4.34094656286559217508e-4, -1.40282830779827754090e-4, 3.40320822974099913404e-5, -6.61061512737809030445e-6, 1.07095691810240606440e-6},
           {8.41061554388866671784e-4, -8.13655444568743189092e-4, 3.93987201520159765512e-4, -1.27310151164393420406e-4, 3.08823335289425083758e-5, -5.99830552061582972961e-6, 9.71685490203377943641e-7},
           {7.63511601004672707353e-4, -7.38556721249351930819e-4, 3.57588542753938356308e-4, -1.15538078131337382162e-4, 2.80243204999460962653e-5, -5.44275150853201680870e-6, 8.81622128859856462819e-7},
           {6.93119025103199754012e-4, -6.70395727084661528956e-4, 3.24555448148919367148e-4, -1.04855413181893672393e-4, 2.54310028458369093802e-5, -4.93868881190117783679e-6, 7.99912180717111739119e-7},
           {6.29222645965369330179e-4, -6.08530997955918128220e-4, 2.94576474379285426029e-4, -9.51612642197334056976e-5, 2.30778482093843515812e-5, -4.48134174444625718928e-6, 7.25780365904117282060e-7},
           {5.71222413336572570203e-4, -5.52380427433998778992e-4, 2.67369020422933358246e-4, -8.63640896578132528753e-5, 2.09425994724413158340e-5, -4.06637783748916884180e-6, 6.58523402180657624612e-7},
           {5.18573750953398352435e-4, -5.01415769950348984285e-4, 2.42676654596781041793e-4, -7.83808312389841846390e-5, 1.90050636041000736124e-5, -3.68986668102962177125e-6, 5.97503314870664585167e-7},
           {4.70782423870089086065e-4, -4.55157653369900262914e-4, 2.20266689478528085097e-4, -7.11361273320453572000e-5, 1.72469201166597917738e-5, -3.34824258923083531618e-6, 5.42141368785688275493e-7},
           {4.27399881044839750985e-4, -4.13171053726383739543e-4, 1.99927981711375954074e-4, -6.45615992304175858414e-5, 1.56515473075368797260e-5, -3.03827073475818948471e-6, 4.91912564280097859825e-7},
           {3.88019029147270778143e-4, -3.75061189264085136693e-4, 1.81468935824220556656e-4, -5.85952036749316741357e-5, 1.42038646346235787772e-5, -2.75701642949008798636e-6, 4.46340644964408809394e-7},
           {3.52270397631945125002e-4, -3.40469794906678006625e-4, 1.64715693137376960114e-4, -5.31806454520015005945e-5, 1.28901897262195035631e-5, -2.50181725911562883972e-6, 4.04993569486523024309e-7},
           {3.19818658827436433194e-4, -3.09071741881152385958e-4, 1.49510488581441251896e-4, -4.82668444896822325255e-5, 1.16981086659921104762e-5, -2.27025780633753176060e-6, 3.67479404219381706383e-7},
           {2.90359470151372602541e-4, -2.80571970497316483528e-4, 1.35710159851157389490e-4, -4.38074523922457779936e-5, 1.06163583197940914913e-5, -2.06014672207116162223e-6, 3.33442597709896828134e-7},
           {2.63616608610993678925e-4, -2.54702707052011762499e-4, 1.23184794762327108359e-4, -3.97604138238779822052e-5, 9.63471958578536857973e-6, -1.86949592640701828011e-6, 3.02560601386487092035e-7},
           {2.39339370515001770246e-4, -2.31220938520255081192e-4, 1.11816503991637582627e-4, -3.60875685783926760286e-5, 8.74392055326724118103e-6, -1.69650174139853391848e-6, 2.74540804325885682829e-7},
           {2.17300211832127546183e-4, -2.09906121138619825234e-4, 1.01498307569266533394e-4, -3.27542905585292276746e-5, 7.93554864992904803074e-6, -1.53952777614323327270e-6, 2.49117752875736135755e-7},
           {1.97292606908688243714e-4, -1.90558101202492011792e-4, 9.21331245735921715344e-5, -2.97291602391372457846e-5, 7.20197094273222830326e-6, -1.39708940131903635874e-6, 2.26050628646454001057e-7},
           {1.79129105323086798692e-4, -1.72995228409462818058e-4, 8.36328564565446563482e-5, -2.69836675066952583679e-5, 6.53626183522914373835e-6, -1.26783966547814750968e-6, 2.05120960849900697768e-7},
           {1.62639568529294455904e-4, -1.57052643905140036510e-4, 7.59175553164127386299e-5, -2.44919420561903665944e-5, 5.93213747447372997815e-6, -1.15055651913311225938e-6, 1.86130551197131883681e-7},
           {1.47669569641649156859e-4, -1.42580726842412165278e-4, 6.89146692407071746918e-5, -2.22305087881519857938e-5, 5.38389624449959756426e-6, -1.04413122512435625863e-6, 1.68899591594208285670e-7},
           {1.34078941255923015947e-4, -1.29443684766392352837e-4, 6.25583575726498407246e-5, -2.01780658860770055712e-5, 4.88636478122641991419e-6, -9.47557845054709871911e-7, 1.53264956713157314199e-7},
           {1.21740457601187733005e-4, -1.17518274499172316262e-4, 5.67888696179533571714e-5, -1.83152834698680925868e-5, 4.43484899615970440412e-6, -8.59923701821935803026e-7, 1.39078655182214353010e-7},
           {1.10538638586814928614e-4, -1.06692641434051165841e-4, 5.15519809100872409896e-5, -1.66246209162808872381e-5, 4.02508964387259261775e-6, -7.80400727572820499809e-7, 1.26206424651380289012e-7},
           {1.00368664461028054397e-4, -9.68652662698113366829e-5, 4.67984816979122113766e-5, -1.50901611146009573115e-5, 3.65322201145521533946e-6, -7.08237614830730760744e-7, 1.14526457360549042944e-7},
           {9.11353908426932392316e-5, -8.79440092325311183457e-5, 4.24837128145922636783e-5, -1.36974600865330496804e-5, 3.31573934729893484509e-6, -6.42752696193006880266e-7, 1.03928244081083857728e-7},
           {8.27524548364112202611e-5, -7.98452427550043768081e-5, 3.85671445357690736186e-5, -1.24334105451149693362e-5, 3.00945968212305293751e-6, -5.83327484928169440771e-7, 9.43115254296353620684e-8},
           {7.51414638014358330894e-5, -7.24930644208407985859e-5, 3.50119944423751537654e-5, -1.12861180997528775475e-5, 2.73149572738880451304e-6, -5.29400815091746539935e-7, 8.55853405759643228820e-8},
           {6.82312591256529734273e-5, -6.58185827396873143714e-5, 3.17848806730404196221e-5, -1.02447889344737129484e-5, 2.47922756548681932941e-6, -4.80463525483603221692e-7, 7.76671642943308094804e-8},
           {6.19572480642044756422e-5, -5.97592690089477756319e-5, 2.88555072863252043977e-5, -9.29962789534490498098e-6, 2.25027787260834463516e-6, -4.36053636943372513908e-7, 7.04821241494963341522e-8},
           {5.62607973450450106066e-5, -5.42583691424221702267e-5, 2.61963787571748796344e-5, -8.44174602175725420053e-6, 2.04248943926998057901e-6, -3.95751977173260488435e-7, 6.39622903715896816797e-8},
           {5.10886828268630074326e-5, -4.92643699133654973496e-5, 2.37825409079281998703e-5, -7.66307664584335622784e-6, 1.85390477528562057618e-6, -3.59178211533915875671e-7, 5.80460316662971886300e-8},
           {4.63925900239062306081e-5, -4.47305145739611257250e-5, 2.15913458245426885627e-5, -6.95629926556277036498e-6, 1.68274760577558592768e-6, -3.25987242119761164941e-7, 5.26774308346619654423e-8},
           {4.21286607923340592147e-5, -4.06143632799916881517e-5, 1.96022385358044473516e-5, -6.31477047069943990098e-6, 1.52740608276006555197e-6, -2.95865940922008284867e-7, 4.78057546462044256130e-8},
           {3.82570819083221148080e-5, -3.68773941729993141739e-5, 1.77965634393229017046e-5, -5.73246126788728475811e-6, 1.38641755317283878069e-6, -2.68530186063889600290e-7, 4.33849729255443901609e-8},
           {3.47417116633918232897e-5, -3.34846413564722438058e-5, 1.61573886450286600817e-5, -5.20390021144228447634e-6, 1.25845473890706199106e-6, -2.43722172973713453272e-7, 3.93733222811400501828e-8},
           {3.15497409610697687439e-5, -3.04043663512179562194e-5, 1.46693465764710094691e-5, -4.72412180181060036715e-6, 1.14231319790810737736e-6, -2.21207974974647582494e-7, 3.57329103296314120778e-8},
           {2.86513857243945607733e-5, -2.76077599313895358354e-5, 1.33184893240583134195e-5, -4.28861966336492865959e-6, 1.03689994748678527563e-6, -2.00775330140554558323e-7, 3.24293566546376385093e-8},
           {2.60196077190596417343e-5, -2.50686715296192053971e-5, 1.20921573839615002603e-5, -3.89330405857050015374e-6, 9.41223142055335361304e-7, -1.82231633417325965430e-7, 2.94314670883870349973e-8},
           {2.36298611649051875381e-5, -2.27633636601005194381e-5, 1.09788605430315093611e-5, -3.53446333662758257658e-6, 8.54382707493345000360e-7, -1.65402114959483933884e-7, 2.67109382215863371227e-8},
           {2.14598627515837253631e-5, -2.06702890447154732424e-5, 9.96816978496782005095e-6, -3.20872895196994078294e-6, 7.75561843426418520590e-7, -1.50128187400902860590e-7, 2.42420893344887562859e-8},
           {1.94893828948226317365e-5, -1.87698883416631925099e-5, 9.05061919720706088439e-6, -2.91304372181226181040e-6, 7.04019312933286649174e-7, -1.36265946383212025546e-7, 2.20016192029377204881e-8},
           {1.77000562698788998356e-5, -1.70444065705431739945e-5, 8.21761695256673489773e-6, -2.64463302261530229748e-6, 6.39082446665460113924e-7, -1.23684810121048933633e-7, 1.99683854697337684361e-8},
           {1.60752098404193134588e-5, -1.54777265043199883585e-5, 7.46136452547632580219e-6, -2.40097865316691708767e-6, 5.80140795138483352940e-7, -1.12266285103703840938e-7, 1.81232044862502699048e-8},
           {1.45997067658807838560e-5, -1.40552174587197663855e-5, 6.77478338047007213604e-6, -2.17979511722434667439e-6, 5.26640369099783629134e-7, -1.01902846230402073761e-7, 1.64486697238553622971e-8},
           {1.32598047199283391599e-5, -1.27635980548966597637e-5, 6.15144844124060050149e-6, -1.97900810156794795678e-6, 4.78078413453467628599e-7, -9.24969207629136539507e-8, 1.49289870312378405923e-8},
           {1.20430272883463835665e-5, -1.15908116630362399973e-5, 5.58552771263004499674e-6, -1.79673494609648003466e-6, 4.33998665280185498739e-7, -8.39599664646994681346e-8, 1.35498251738660601275e-8},
           {1.09380472378542863740e-5, -1.05259133541792942600e-5, 5.07172748607244677343e-6, -1.63126692144620353281e-6, 3.93987051078454248772e-7, -7.62116351897847535013e-8, 1.22981802370577293713e-8},
           {9.93458055909434594507e-6, -9.55896729608660513169e-6, 4.60524261174955900104e-6, -1.48105314671955149196e-6, 3.57667782516209036324e-7, -6.91790139954946033963e-8, 1.11622526058877413164e-8},
           {9.02329028845414941450e-6, -8.68095362744920020961e-6, 4.18171136858098823073e-6, -1.34468599542612928874e-6, 3.24699813757383826247e-7, -6.27959365888173435723e-8, 1.01313353546675751097e-8},
           {8.19569920541439617416e-6, -7.88368393411182270889e-6, 3.79717450659297250297e-6, -1.22088785181665464887e-6, 2.94773626853909223194e-7, -5.70023585834710007029e-8, 9.19571298713031168696e-9},
           {7.44411058562638528802e-6, -7.15972453206470641499e-6, 3.44803807560894427653e-6, -1.10849909256267545856e-6, 2.67608314801179001314e-7, -5.17437906500912118054e-8, 8.34656956678342133707e-9},
           {6.76153626570945290503e-6, -6.50232683553741236079e-6, 3.13103968995283672686e-6, -1.00646718032266213978e-6, 2.42948934674318362610e-7, -4.69707841910884770981e-8, 7.57590536608336556438e-9},
           {6.14163134453286501557e-6, -5.90536415529418462597e-6, 2.84321791129135774515e-6, -9.13836766248323170724e-7, 2.20564105820255244023e-7, -4.26384646698646276900e-8, 6.87646124399102051166e-9},
           {5.57863490815849621160e-6, -5.36327433281441754624e-6, 2.58188446117134551863e-6, -8.29740708023373177215e-7, 2.00243830400943067112e-7, -3.87061081759687363214e-8, 6.24165003485542630327e-9},
           {5.06731622225902726984e-6, -4.87100767101696100278e-6, 2.34459900151148046800e-6, -7.53391918681014669264e-7, 1.81797515688145010136e-7, -3.51367572177082239232e-8, 5.66549429814413527322e-9},
           {4.60292588722581474844e-6, -4.42397967207301791380e-6, 2.12914624553693165873e-6, -6.84075969298068257697e-7, 1.65052179419954807980e-7, -3.18968721056099173460e-8, 5.14256983892509747451e-9},
           {4.18115149782608795252e-6, -4.01802813812051553969e-6, 1.93351518363022333830e-6, -6.21144375787488758180e-7, 1.49850821261821717614e-7, -2.89560146274826881059e-8, 4.66795446378245396739e-9},
           {3.79807739160069156512e-6, -3.64937423177111885285e-6, 1.75588022851986186943e-6, -5.64008506474410937482e-7, 1.36050944986718276024e-7, -2.62865610218744022815e-8, 4.23718148653810713248e-9},
           {3.45014810861047255985e-6, -3.31458713057729287147e-6, 1.59458410232881636982e-6, -5.12134053005180564898e-7, 1.23523217415160764982e-7, -2.38634415343514676181e-8, 3.84619754322536706303e-9},
           {3.13413522000399593444e-6, -3.01055194345346192295e-6, 1.44812230442906598817e-6, -4.65036012459586127388e-7, 1.12150251449585440203e-7, -2.16639040928952982404e-8, 3.49132431664921428618e-9},
           {2.84710721452020945417e-6, -2.73444058774157859414e-6, 1.31512901395146810370e-6, -4.22274133364130086389e-7, 1.01825501711390313122e-7, -1.96672998672014496151e-8, 3.16922380795876656387e-9},
           {2.58640216075530279867e-6, -2.48368535346740226165e-6, 1.19436429432318099534e-6, -3.83448782684421452626e-7, 9.24522623538937241357e-8, -1.78548886839538799723e-8, 2.87686682630428022715e-9},
           {2.34960288908402791205e-6, -2.25595490661238087560e-6, 1.08470247947563225154e-6, -3.48197194849091177773e-7, 8.39427575906510208957e-8, -1.62096624581978528668e-8, 2.61150439817339421635e-9},
           {2.13451446077766645380e-6, -2.04913250616594430669e-6, 9.85121632500632907759e-7, -3.16190067463698822520e-7, 7.62173163551646949732e-8, -1.47161849715369437205e-8, 2.37064182568972693200e-9},
           {1.93914371332666657510e-6, -1.86129623054077882171e-6, 8.94693977635950272405e-7, -2.87128471645038581510e-7, 6.92036233033413691385e-8, -1.33604464826519928967e-8, 2.15201514827457391367e-9},
           {1.76168069045779637132e-6, -1.69070102782569765481e-6, 8.12577215630002350518e-7, -2.60741047875059233004e-7, 6.28360390916258337860e-8, -1.21297317960526732342e-8, 1.95356978485818617081e-9},
           {1.60048178301713765166e-6, -1.53576242149537253148e-6, 7.38006640854949863060e-7, -2.36781460967379000167e-7, 5.70549835184245250760e-8, -1.10125005423587300191e-8, 1.77344115449756522805e-9},
           {1.45405442293775719092e-6, -1.39504171875516493351e-6, 6.70287986087005214582e-7, -2.15026090183608253014e-7, 5.18063757104211421037e-8, -9.99827853897690501149e-9, 1.60993709200933832799e-9},
           {1.32104318707567159022e-6, -1.26723258281935397019e-6, 6.08790927723544875771e-7, -1.95271932754519050542e-7, 4.70411260743168423502e-8, -9.07755920488828874748e-9, 1.46152189223735737383e-9},
           {1.20021718091680434581e-6, -1.15114884323542298050e-6, 5.52943190423350671453e-7, -1.77334701073506809629e-7, 4.27146752235032366527e-8, -8.24171409838422026914e-9, 1.32680183200680209395e-9},
           {1.09045858415549564532e-6, -1.04571342999651489579e-6, 5.02225195797734205220e-7, -1.61047095655817244572e-7, 3.87865755328323243385e-8, -7.48291173288973170422e-9, 1.20451203281645336698e-9},
           {9.90752251034675213276e-7, -9.49948327738409308726e-7, 4.56165204899692728444e-7, -1.46257237613932441582e-7, 3.52201113771864971735e-8, -6.79404390431043015235e-9, 1.09350454002140077300e-9},
           {9.00176268221498235015e-7, -8.62965455895836849558e-7, 4.14334908903949850118e-7, -1.32827245902999872544e-7, 3.19819544747864051662e-8, -6.16865883437470807428e-9, 9.92737505780450674718e-10},
           {8.17893381963102251890e-7, -7.83958389385991398144e-7, 3.76345426586617362213e-7, -1.20631945954458857177e-7, 2.90418510875654671034e-8, -5.60090049889186141102e-9, 9.01265373495323626054e-10},
           {7.43143214409487789622e-7, -7.12194842276555795738e-7, 3.41843671039067513365e-7, -1.09557697553977831596e-7, 2.63723381316239847625e-8, -5.08545356831940229270e-9, 8.18229970951655213374e-10},
           {6.75235196381014260161e-7, -6.47009844055849896214e-7, 3.10509051522540704314e-7, -9.95013309431600476722e-8, 2.39484855236016082697e-8, -4.61749344108404373246e-9, 7.42852427974902672887e-10},
           {6.13542150566049080593e-7, -5.87799544621212847963e-7, 2.82050479520798635989e-7, -9.03691811438292532444e-8, 2.17476623363562493708e-8, -4.19264089823350160816e-9, 6.74425842219166138263e-10},
           {5.57494465223043993022e-7, -5.34015589999723976975e-7, 2.56203650907494989555e-7, -8.20762114286996511790e-8, 1.97493245619542756605e-8, -3.80692095166673689621e-9, 6.12308623787796078078e-10},
           {5.06574803987922923415e-7, -4.85160016168332382735e-7, 2.32728578739850506674e-7, -7.45452177016097944433e-8, 1.79348224837871866630e-8, -3.45672549781249287728e-9, 5.55918455808655719762e-10},
           {4.60313302404117815303e-7, -4.40780613198855761623e-7, 2.11407353545161222803e-7, -6.77061063121903758057e-8, 1.62872258445615775379e-8, -3.13877942457542805833e-9, 5.04726813915025190567e-10},
           {4.18283206346006970416e-7, -4.00466716362820564944e-7, 1.92042110103853381560e-7, -6.14952385210305582029e-8, 1.47911651647133994761e-8, -2.85010985198658689070e-9, 4.58253992870687338307e-10},
           {3.80096911639666986788e-7, -3.63845384833287458640e-7, 1.74453181672368932112e-7, -5.58548354586430522572e-8, 1.34326877180604331470e-8, -2.58801821658933855512e-9, 4.16064593374874703416e-10},
           {3.45402367936585895394e-7, -3.30577932253275505834e-7, 1.58477424349416442948e-7, -5.07324379907214832236e-8, 1.21991268096696417374e-8, -2.35005493644363523507e-9, 3.77763426435019192006e-10},
           {3.13879813301507848261e-7, -3.00356776737354808862e-7, 1.43966695886640724084e-7, -4.60804164187139622059e-8, 1.10789831262851172050e-8, -2.13399641799488901708e-9, 3.42991796643894655374e-10},
           {2.85238809066885850164e-7, -2.72902580865445276711e-7, 1.30786474694608802127e-7, -4.18555254134771332551e-8, 1.00618170434231959228e-8, -1.93782418815963158655e-9, 3.11424129280246097910e-10},
           {2.59215547312516678151e-7, -2.47961654943964085081e-7, 1.18814606110841853650e-7, -3.80185000051532729472e-8, 9.13815087646945512747e-9, -1.75970595503774713503e-9, 2.82764909402322062242e-10},
           {2.35570405876163784580e-7, -2.25303599274769300563e-7, 1.07940164190838930181e-7, -3.45336888384407143923e-8, 8.29938015678404236618e-9, -1.59797841886039584470e-9, 2.56745904052693866639e-10},
           {2.14085728113236282543e-7, -2.04719163410022554533e-7, 9.80624183668895442206e-8, -3.13687212527508478540e-8, 7.53769309882189050301e-9, -1.45113167129601927087e-9, 2.33123641368315137871e-10},
           {1.94563806722591265996e-7, -1.86018302402173733634e-7, 8.90898953031638934458e-8, -2.84942050646655849586e-8, 6.84599750140664520432e-9, -1.31779503622039626937e-9, 2.11677122817307635770e-10},
           {1.76825052860934558047e-7, -1.69028411901851521868e-7, 8.09395271683686964216e-8, -2.58834522186287421200e-8, 6.21785439629024440909e-9, -1.19672421865235089428e-9, 1.92205746986470590348e-10},
           {1.60706333497999918945e-7, -1.53592725629846684419e-7, 7.35358783575648058632e-8, -2.35122297336435542232e-8, 5.64741782064515345228e-9, -1.08678964089308992576e-9, 1.74527425341862990974e-10},
           {1.46059461534893658929e-7, -1.39568860268321765902e-7, 6.68104434301914833145e-8, -2.13585336113754040962e-8, 5.12938014777353292098e-9, -9.86965856100994142471e-10, 1.58476872197950222892e-10}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson