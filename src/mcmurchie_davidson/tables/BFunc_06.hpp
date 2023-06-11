/* This file was autogenerated on 2023-04-10T16:54 DO NOT EDIT! */

#pragma once

#include <array>

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 6.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<6>() {
  // clang-format off
  return {{{7.69230769230769230769e-2, -6.66666666666666666667e-2, 2.94117647058823529412e-2, -8.77192982456140350877e-3, 1.98412698412698412698e-3, -3.62318840579710144928e-4, 5.55555555555555555556e-5},
           {7.05419508179836868278e-2, -6.10397129891415562986e-2, 2.68956920029092688695e-2, -8.01342505246297950872e-3, 1.81104957183754488627e-3, -3.30481923756798575548e-4, 5.06436912000310788975e-5},
           {6.46991008641659565148e-2, -5.58938953904389787541e-2, 2.45970972232535459168e-2, -7.32106354693273612966e-3, 1.65317617420314010197e-3, -3.01459140008350089286e-4, 4.61683102259179887995e-5},
           {5.93485235823989487614e-2, -5.11876431491141842267e-2, 2.24970221291624916660e-2, -6.68903658605746621185e-3, 1.50916320339120058058e-3, -2.75000469825655664488e-4, 4.20904537895638194392e-5},
           {5.44481886600497108630e-2, -4.68830081812585813816e-2, 2.05781729270246294128e-2, -6.11204864233293957559e-3, 1.37778641616228538988e-3, -2.50878205314090875662e-4, 3.83746538737003990813e-5},
           {4.99596928302852572035e-2, -4.29453470810749540765e-2, 1.88247732517454989531e-2, -5.58527180778558857838e-3, 1.25793026562182074825e-3, -2.28884951339702652408e-4, 3.49886194235359394931e-5},
           {4.58479441215968105960e-2, -3.93430312389434141962e-2, 1.72224302042186250272e-2, -5.10430428463984516008e-3, 1.14857820676791651596e-3, -2.08831806368079493565e-4, 3.19029507892047535381e-5},
           {4.20808737964497511785e-2, -3.60471825445980373348e-2, 1.57580122777003853174e-2, -4.66513257742899329489e-3, 1.04880387010403814362e-3, -1.90546706791819503782e-4, 2.90908799146947103713e-5},
           {3.86291735358213830787e-2, -3.30314324052852006930e-2, 1.44195381131426020316e-2, -4.26409705516946502951e-3, 9.57763025315036564157e-4, -1.73872920008108424340e-4, 2.65280339454493202230e-5},
           {3.54660556431250981180e-2, -3.02717020111261357618e-2, 1.31960751184146980047e-2, -3.89786058199079752176e-3, 8.74686264035920467766e-4, -1.58667672840300053982e-4, 2.41922201378310442507e-5},
           {3.25670342384417263459e-2, -2.77460019641500438281e-2, 1.20776470727020860535e-2, -3.56337994170238293867e-3, 7.98872337138109588940e-4, -1.44800903109020532742e-4, 2.20632301454543759201e-5},
           {2.99097255938130142383e-2, -2.54342495552225579536e-2, 1.10551499159679093853e-2, -3.25787980642646118196e-3, 7.29682087775322001967e-4, -1.32154123260161811227e-4, 2.01226619317973601025e-5},
           {2.74736659241726702274e-2, -2.33181021258510763616e-2, 1.01202749949091744264e-2, -2.97882902185484573637e-3, 6.66532926723096760813e-4, -1.20619385959162001422e-4, 1.83537577170631168409e-5},
           {2.52401450977289484867e-2, -2.13808050909475820534e-2, 9.26543910196175185545e-3, -2.72391900209531610116e-3, 6.08893801359830597747e-4, -1.10098342472250186413e-4, 1.67412565114304990113e-5},
           {2.31920548655723292308e-2, -1.96070533252978018712e-2, 8.48372070318938881206e-3, -2.49104404564481039797e-3, 5.56280614016398415253e-4, -1.00501385484102285974e-4, 1.52712599179146075231e-5},
           {2.13137503341494609355e-2, -1.79828647318377304876e-2, 7.76880180485603390877e-3, -2.27828340092640913017e-3, 5.08252049405289374126e-4, -9.17468687551001516522e-5, 1.39311100072438157841e-5},
           {1.95909235171000360720e-2, -1.64954649148890929167e-2, 7.11491495760641686624e-3, -2.08388492520639699579e-3, 4.64405774464504445681e-4, -8.37603967069137765209e-5, 1.27092781755323963578e-5},
           {1.80104879057800364162e-2, -1.51331819771782002254e-2, 6.51679494190270970633e-3, -1.90625019470380208456e-3, 4.24374977248760470137e-4, -7.64741776486292868442e-5, 1.15952639940695467112e-5},
           {1.65604730914875770964e-2, -1.38853505465977838246e-2, 5.96963471908059598731e-3, -1.74392093644230600918e-3, 3.87825214500421501691e-4, -6.98264349227452845283e-5, 1.05795031501506700983e-5},
           {1.52299285577818296206e-2, -1.27422242180338998740e-2, 5.46904526945704311941e-3, -1.59556666398703948101e-3, 3.54451540261924158415e-4, -6.37608707661727758123e-5, 9.65328365935741707841e-6},
           {1.40088358390827606020e-2, -1.16948956678658132907e-2, 5.01101897267182145451e-3, -1.45997340975955423870e-3, 3.23975890374755750179e-4, -5.82261781505505126655e-5, 8.80866960378707995413e-6},
           {1.28880283126351947998e-2, -1.07352237645894459106e-2, 4.59189621617378963131e-3, -1.33603345622726227444e-3, 2.96144699969504371709e-4, -5.31755962929530824157e-5, 8.03843171811132474718e-6},
           {1.18591179555303811305e-2, -9.85576705899116403686e-3, 4.20833494574245851189e-3, -1.22273597700415744861e-3, 2.70726733107387563474e-4, -4.85665059162680416856e-5, 7.33598420661804630498e-6},
           {1.09144284573612099926e-2, -9.04972309193305922415e-3, 3.85728289741219627570e-3, -1.11915850685547109411e-3, 2.47511105604348354697e-4, -4.43600606916447594633e-5, 6.69532723011348459766e-6},
           {1.00469341327540720443e-2, -8.31087300758135208434e-3, 3.53595227336539821850e-3, -1.02445916684066338012e-3, 2.26305483771034729110e-4, -4.05208516166477033149e-5, 6.11099455223820192207e-6},
           {9.25020412693481654254e-3, -7.63353100525077446492e-3, 3.24179664548628759801e-3, -9.37869577421168308835e-4, 2.06934443350953830481e-4, -3.70166013749699966185e-5, 5.57800588083846345659e-6},
           {8.51835145207163919878e-3, -7.01249820434566954741e-3, 2.97248988950492504593e-3, -8.58688398360052331133e-4, 1.89237974348655039721e-4, -3.38178859894043651888e-5, 5.09182348195038541694e-6},
           {7.84598643277859865430e-3, -6.44302053451335007134e-3, 2.72590697018060571996e-3, -7.86275439703422560252e-4, 1.73070118722534537848e-4, -3.08978813216168133465e-5, 4.64831268207631775332e-6},
           {7.22817417621093166735e-3, -5.92075029741503510577e-3, 2.50010641392925305609e-3, -7.20046293106449170236e-4, 1.58297729084206018546e-4, -2.82321321922945558816e-5, 4.24370590910591963409e-6},
           {6.66039571595634320028e-3, -5.44171107776298020042e-3, 2.29331431983082183884e-3, -6.59467437294274962112e-4, 1.44799337608765603868e-4, -2.57983420954176667552e-5, 3.87456995377049831953e-6},
           {6.13851250971618814245e-3, -5.00226570974109021467e-3, 2.10390977318770629537e-3, -6.04051775569947545751e-4, 1.32464125327153708911e-4, -2.35761816625299989710e-5, 3.53777616220345261493e-6},
           {5.65873399884145571875e-3, -4.59908703086793057419e-3, 1.93041153785977509690e-3, -5.53354567034263227117e-4, 1.21190982851802843585e-4, -2.15471141985899008141e-5, 3.23047329627024748985e-6},
           {5.21758796338239651952e-3, -4.22913117900078003308e-3, 1.77146591458168236807e-3, -5.06969716599245997374e-4, 1.10887654387681545065e-4, -1.96942367617517392973e-5, 2.95006282206350624921e-6},
           {4.81189342964684959453e-3, -3.88961320972258965331e-3, 1.62583566246961297441e-3, -4.64526391988052576257e-4, 1.01469957609836127291e-4, -1.80021353966129427386e-5, 2.69417640854624725448e-6},
           {4.43873590854136895051e-3, -3.57798483098702288160e-3, 1.49238989003524385492e-3, -4.25685938746869058612e-4, 9.28610726520652220379e-5, -1.64567532552878015490e-5, 2.46065543796329671980e-6},
           {4.09544476237316129597e-3, -3.29191406979037742148e-3, 1.37009483032408626614e-3, -3.90139066873820784462e-4, 8.49908940553399726119e-5, -1.50452704542534368599e-5, 2.24753234750417243271e-6},
           {3.77957251548597565963e-3, -3.02926670194793952115e-3, 1.25800542235601255092e-3, -3.57603285018794167949e-4, 7.77954400743635432003e-5, -1.37559946182716577058e-5, 2.05301363795086044237e-6},
           {3.48887594024055881087e-3, -2.78808929091728515889e-3, 1.15525762793377857057e-3, -3.27820560347052221591e-4, 7.12163142411295543291e-5, -1.25782611567454385867e-5, 1.87546439982696378143e-6},
           {3.22129876456814668445e-3, -2.56659369516057129373e-3, 1.06106141916072443769e-3, -3.00555184107435824099e-4, 6.52002145399239519449e-5, -1.15023424034606492835e-5, 1.71339422101349416543e-6},
           {2.97495586074914908706e-3, -2.36314291588904899777e-3, 9.74694377726370488751e-4, -2.75591824719919795648e-4, 5.96984859629621082461e-5, -1.05193648285561410026e-5, 1.56544435203180230686e-6},
           {2.74811878731322147690e-3, -2.17623816829221484320e-3, 8.95495852228066929225e-4, -2.52733751812919097031e-4, 5.46667125934303772751e-5, -9.62123360245287380637e-6, 1.43037601632565677346e-6},
           {2.53920256712554439499e-3, -2.00450706961839654127e-3, 8.22861624543580515503e-4, -2.31801216112205400385e-4, 5.00643457064541932727e-5, -8.80056385598748703062e-6, 1.30705976300207352969e-6},
           {2.34675359491238327836e-3, -1.84669284683134380179e-3, 7.56239040594789487144e-4, -2.12629971423514856944e-4, 4.58543646914831196744e-5, -8.05061803971210605303e-6, 1.19446576870498073329e-6},
           {2.16943857677333621845e-3, -1.70164447509912192258e-3, 6.95122564784064300540e-4, -1.95069926171652363589e-4, 4.20029678845322009505e-5, -7.36524883876288926271e-6, 1.09165500367969163708e-6},
           {2.00603441270717644876e-3, -1.56830766615055172512e-3, 6.39049720976695269717e-4, -1.78983913070818189978e-4, 3.84792906581668688569e-5, -6.73884714834059035904e-6, 9.97771184714582485225e-7},
           {1.85541894091451509304e-3, -1.44571663262737636763e-3, 5.87597386176018821220e-4, -1.64246566513746882800e-4, 3.52551483533557506256e-5, -6.16629465911943666965e-6, 9.12033444587552656652e-7},
           {1.71656246969937665084e-3, -1.33298656102807749034e-3, 5.40378406021063987727e-4, -1.50743298189901973015e-4, 3.23048018524240939438e-5, -5.64292064219941858215e-6, 8.33729653960871158181e-7},
           {1.58852002923273141928e-3, -1.22930673173720088516e-3, 4.97038503955435644228e-4, -1.38369362283492704658e-4, 2.96047437882196234557e-5, -5.16446255989970535571e-6, 7.62210337415390567783e-7},
           {1.47042428131859441096e-3, -1.13393423001267607680e-3, 4.57253458394276388662e-4, -1.27029002367801395913e-4, 2.71335035629744973477e-5, -4.72703016208256173299e-6, 6.96883130545114990721e-7},
           {1.36147903066702303208e-3, -1.04618819670887291083e-3, 4.20726524474935876380e-4, -1.16634672809922976884e-4, 2.48714695127843128674e-5, -4.32707275809434179501e-6, 6.37207729792521606258e-7},
           {1.26095328607345289092e-3, -9.65444571986941299166e-4, 3.87186079035932071389e-4, -1.07106328135603582827e-4, 2.28007267015555446159e-5, -3.96134938208209810644e-6, 5.82691291036265725318e-7},
           {1.16817582437149232281e-3, -8.91131289344485630170e-4, 3.56383469345668496900e-4, -9.83707743829588749165e-5, 2.09049089629969946872e-5, -3.62690159463630683708e-6, 5.32884236884607968878e-7},
           {1.08253021410415926559e-3, -8.22723881018585481879e-4, 3.28091047813365327586e-4, -9.03610770015006187911e-5, 1.91690639319322365334e-5, -3.32102868664508137133e-6, 4.87376436215230174712e-7},
           {1.00345025958077302408e-3, -7.59741459211304048967e-4, 3.02100376474496892625e-4, -8.30160203336897213004e-5, 1.75795299179654134153e-5, -3.04126507212605452896e-6, 4.45793722766991958906e-7},
           {9.30415829384575532660e-4, -7.01743040683963366193e-4, 2.78220586465128334915e-4, -7.62796141543469862888e-5, 1.61238235763228259336e-5, -2.78535967581329010659e-6, 4.07794722560699657142e-7},
           {8.62949036498102291237e-4, -6.48324185091932051264e-4, 2.56276878996131900548e-4, -7.01006431424910014458e-5, 1.47905374234086950988e-5, -2.55125713858629056747e-6, 3.73067962630566117489e-7},
           {8.00610740045278631953e-4, -5.99113920009435897696e-4, 2.36109155520473071787e-4, -6.44322555240050946507e-5, 1.35692463290685997793e-5, -2.33708067958901097693e-6, 3.41329236009762777155e-7},
           {7.42997341234886282679e-4, -5.53771927945810463548e-4, 2.17570765864731326209e-4, -5.92315874551108245542e-5, 1.24504221944859259506e-5, -2.14111646823802742538e-6, 3.12319200154199638087e-7},
           {6.89737848450954729902e-4, -5.11985972800567813550e-4, 2.00527364078995372137e-4, -5.44594200188220855748e-5, 1.14253560947194359994e-5, -1.96179937238704731379e-6, 2.85801188028307417324e-7},
           {6.40491188591505561899e-4, -4.73469545162813075425e-4, 1.84855862655670222889e-4, -5.00798659819831433926e-5, 1.04860872287348105126e-5, -1.79769996081494630459e-6, 2.61559212933247528580e-7},
           {5.94943743725808165020e-4, -4.37959707647428257444e-4, 1.70443476585210661840e-4, -4.60600837115388023072e-5, 9.62533807794810678362e-6, -1.64751264904130274366e-6, 2.39396149848104860428e-7},
           {5.52807093938290626013e-4, -4.05215123091144809563e-4, 1.57186849462350879169e-4, -4.23700158775152746580e-5, 8.83645522729142117555e-6, -1.51004488734225640120e-6, 2.19132077593216528033e-7},
           {5.13815948869391627904e-4, -3.75014249919866876713e-4, 1.44991254536381441618e-4, -3.89821507787799107023e-5, 8.11335535109262520636e-6, -1.38420729882724395210e-6, 2.00602767525475829507e-7},
           {4.77726251963552601618e-4, -3.47153690356926086357e-4, 1.33769864219245103020e-4, -3.58713043177965237580e-5, 7.45047591005254159456e-6, -1.26900468362272738805e-6, 1.83658305750640555315e-7},
           {4.44313442804648687807e-4, -3.21446678381757207019e-4, 1.23443082130953693835e-4, -3.30144208239385752415e-5, 6.84273014568702516049e-6, -1.16352781266426890727e-6, 1.68161836998637003143e-7},
           {4.13370864170763900169e-4, -2.97721695480180855754e-4, 1.13937932277889751153e-4, -3.03903910829573175537e-5, 6.28546599512677351361e-6, -1.06694594138866191639e-6, 1.53988419364863862579e-7},
           {3.84708301583655879179e-4, -2.75821203260577789852e-4, 1.05187500430332068774e-4, -2.79798860742852176621e-5, 5.77442858245143029571e-6, -9.78499979802790150323e-7, 1.41023980082891292363e-7},
           {3.58150644172958469366e-4, -2.55600482953356159151e-4, 9.71304231950318879051e-5, -2.57652050492238278488e-5, 5.30572597306600585057e-6, -8.97496261039662713809e-7, 1.29164363370230052089e-7},
           {3.33536656629720919438e-4, -2.36926572672173775622e-4, 8.97104206705072514203e-5, -2.37301367028484953142e-5, 4.87579790526935679041e-6, -8.23300855643961719839e-7, 1.18314462186736478122e-7},
           {3.10717852896136488040e-4, -2.19677294101540475195e-4, 8.28758689302388059034e-5, -2.18598323016860116420e-5, 4.48138723835654630530e-6, -7.55334383504336537989e-7, 1.08387426471764383352e-7},
           {2.89557463035409459393e-4, -2.03740360993271595524e-4, 7.65794089051625780995e-5, -2.01406897288214916601e-5, 4.11951387955692771917e-6, -6.93067279608433799128e-7, 9.93039410877732578595e-8},
           {2.69929485454196993206e-4, -1.89012562509764257997e-4, 7.07775885345265638564e-5, -1.85602474989201063869e-5, 3.78745097303692013397e-6, -6.36015473676465436060e-7, 9.09915673005804040031e-8},
           {2.51717817315877943115e-4, -1.75399015050675704435e-4, 6.54305353258142780720e-5, -1.71070878784838077940e-5, 3.48270315327103320568e-6, -5.83736447263840056321e-7, 8.33841421751073723336e-8},
           {2.34815456591497121776e-4, -1.62812476746274943781e-4, 6.05016567123382186964e-5, -1.57707483222106208836e-5, 3.20298668247192128069e-6, -5.35825635143834819600e-7, 7.64212307651383678528e-8},
           {2.19123769751563022895e-4, -1.51172719300050222620e-4, 5.59573658233505750689e-5, -1.45416405052290805954e-5, 2.94621130761975737693e-6, -4.91913140715529200138e-7, 7.00476264306759662123e-8},
           {2.04551819610471939887e-4, -1.40405952319219896494e-4, 5.17668304880153788195e-5, -1.34109762938298342460e-5, 2.71046368707989746138e-6, -4.51660737855794479847e-7, 6.42128950309402179470e-8},
           {1.91015748300321961490e-4, -1.30444295688392892206e-4, 4.79017434830683990214e-5, -1.23707000546459578881e-5, 2.49399224996991234718e-6, -4.14759134070296559465e-7, 5.88709591185492639254e-8},
           {1.78438210776041370365e-4, -1.21225295922190796547e-4, 4.43361122060409644052e-5, -1.14134267545302148049e-5, 2.29519336344600543372e-6, -3.80925472018390616826e-7, 5.39797186042529497034e-8},
           {1.66747854642528399666e-4, -1.12691482780325667951e-4, 4.10460661129838141740e-5, -1.05323853510861102818e-5, 2.11259869402784751031e-6, -3.49901048509746141277e-7, 4.95007046747781955829e-8},
           {1.55878842450028764783e-4, -1.04789962746283779518e-4, 3.80096804030115694361e-5, -9.72136701733440850362e-6, 1.94486365906389995159e-6, -3.21449231914089554141e-7, 4.53987640316275544203e-8},
           {1.45770412929131055546e-4, -9.74720462610118715263e-5, 3.52068145628957465199e-5, -8.97467778370771318314e-6, 1.79075687354209496018e-6, -2.95353560605573292664e-7, 4.16417707785474906737e-8},
           {1.36366477934160741647e-4, -9.06929058682235371023e-5, 3.26189645044593846588e-5, -8.28709521679783583329e-6, 1.64915050575124469046e-6, -2.71416006594525485823e-7, 3.82003635221211187441e-8},
           {1.27615252135791795328e-4, -8.44112626703139820898e-5, 3.02291271366635810099e-5, -7.65382878734163530103e-6, 1.51901146286788991989e-6, -2.49455389894955015088e-7, 3.50477054656106552344e-8},
           {1.19468912752553513452e-4, -7.85890987153760453218e-5, 2.80216763139363539371e-5, -7.07048361009921461025e-6, 1.39939333444617445610e-6, -2.29305930448251674914e-7, 3.21592654726589615532e-8},
           {1.11883286838588023654e-4, -7.31913931382616075568e-5, 2.59822491933057738800e-5, -6.53302726580898938952e-6, 1.28942902808376535850e-6, -2.10815925583019387597e-7, 2.95126182564717875362e-8},
           {1.04817563853327401133e-4, -6.81858800636830057361e-5, 2.40976421160176278061e-5, -6.03775944052895372069e-6, 1.18832403727856496519e-6, -1.93846542047916820810e-7, 2.70872620132029412003e-8},
           {9.82340314293763219086e-5, -6.35428264485065361165e-5, 2.23557152052330654487e-5, -5.58128414060410209409e-6, 1.09535028672792317727e-6, -1.78270712617874069103e-7, 2.48644519668726724481e-8},
           {9.20978324293227881749e-5, -5.92348281950323115935e-5, 2.07453049407428148122e-5, -5.16048426242931680219e-6, 1.00984050509891515831e-6, -1.63972128152403271816e-7, 2.28270484285598288338e-8},
           {8.63767415418452769171e-5, -5.52366230084381441660e-5, 1.92561440349742721441e-5, -4.77249831528075030979e-6, 9.31183079655604562988e-7, -1.50844316785485977006e-7, 2.09593780959961239264e-8},
           {8.10409598136074821447e-5, -5.15249186008362493609e-5, 1.78787879924306555748e-5, -4.41469911292724316912e-6, 8.58817351104149565911e-7, -1.38789802656590993145e-7, 1.92471074321299926208e-8},
           {7.60629256471878102686e-5, -4.80782349625978700316e-5, 1.66045477875635418528e-5, -4.08467426565258909005e-6, 7.92229310642857064021e-7, -1.27719337258018053089e-7, 1.76771270636920278908e-8},
           {7.14171409177404459701e-5, -4.48767595296983807596e-5, 1.54254281443780258995e-5, -3.78020831885290429451e-6, 7.30947664512626206230e-7, -1.17551197080699388018e-7, 1.62374462341738536579e-8},
           {6.70800109731926793568e-5, -4.19022141746962678869e-5, 1.43340709451997257780e-5, -3.49926639764217641375e-6, 6.74540234361670474380e-7, -1.08210541794015981722e-7, 1.49170964307359154282e-8},
           {6.30296973854338747926e-5, -3.91377330393799508141e-5, 1.33237033363582054081e-5, -3.23997922901437863691e-6, 6.22610664492528709174e-7, -9.96288276998476511601e-8, 1.37060433821240307777e-8},
           {5.92459824139508143669e-5, -3.65677503098259587739e-5, 1.23880901353924637455e-5, -3.00062942417296637572e-6, 5.74795409572440172849e-7, -9.17432716612927899209e-8, 1.25951066953704724926e-8},
           {5.57101442294509873062e-5, -3.41778971102716841966e-5, 1.15214901780624808382e-5, -2.77963891374055206647e-6, 5.30760978681406847931e-7, -8.44963611261962660550e-8, 1.15758864634941562584e-8},
           {5.24048420238629086474e-5, -3.19549067614252087352e-5, 1.07186162742323882731e-5, -2.57555743778686399749e-6, 4.90201413665034285846e-7, -7.78354062484038588431e-8, 1.06406962351518986416e-8},
           {4.93140102053263597293e-5, -2.98865277121660097835e-5, 9.97459846982648607198e-6, -2.38705200103846909619e-6, 4.52835981669163813524e-7, -7.17121304587781861574e-8, 9.78250179073631894845e-9},
           {4.64227609429501884516e-5, -2.79614435115395723076e-5, 9.28495033777847557138e-6, -2.21289721132900174853e-6, 4.18407063476463853970e-7, -6.60822961564455799340e-8, 8.99486521822647698314e-9},
           {4.37172943867343314294e-5, -2.61691992409783364911e-5, 8.64553804440655210034e-6, -2.05196642637749926725e-6, 3.86678220856184841097e-7, -6.09053624812042130130e-8, 8.27189382659565046820e-9},
           {4.11848159435966752946e-5, -2.45001338752135975881e-5, 8.05255195914297121904e-6, -1.90322364040313118386e-6, 3.57432427590565725205e-7, -5.61441723929831906895e-8, 7.60819347514917151700e-9},
           {3.88134600413457119417e-5, -2.29453180847620631471e-5, 7.50248059520123784826e-6, -1.76571604795000819044e-6, 3.30470450167078636898e-7, -5.17646665259514700912e-8, 6.99882593415324136789e-9},
           {3.65922198590882492082e-5, -2.14964970335304209970e-5, 6.99208668673601543641e-6, -1.63856722765439106663e-6, 3.05609365335934240644e-7, -4.77356215053854833338e-8, 6.43926992583991362316e-9},
           {3.45108825453187265304e-5, -2.01460377623021691363e-5, 6.51838522448576228237e-6, -1.52097089358249662044e-6, 2.82681202837146438342e-7, -4.40284106165867091297e-8, 5.92538552562431308663e-9},
           {3.25599694841317659471e-5, -1.88868807829475684741e-5, 6.07862328691850442298e-6, -1.41218516624058677395e-6, 2.61531702610222089620e-7, -4.06167848986970696988e-8, 5.45338163141024416199e-9},
           {3.07306812059318241992e-5, -1.77124955393984174546e-5, 5.67026151764830864535e-6, -1.31152731944678632928e-6, 2.42019176720607424755e-7, -3.74766729037454757697e-8, 5.01978623443055187949e-9},
           {2.90148465719610216293e-5, -1.66168394199995419016e-5, 5.29095711246438337550e-6, -1.21836896298966685382e-6, 2.24013467078063121098e-7, -3.45859975140881434773e-8, 4.62141924838703598024e-9},
           {2.74048758921769174221e-5, -1.55943200320134565582e-5, 4.93854819081751292238e-6, -1.13213162441264065188e-6, 2.07394990790164613047e-7, -3.19245083508685538127e-8, 4.25536767492112258204e-9},
           {2.58937176637191158958e-5, -1.46397604730174404908e-5, 4.61103943713170451546e-6, -1.05228269638353268950e-6, 1.92053865695506449456e-7, -2.94736284333962231974e-8, 3.91896290284216360617e-9},
           {2.44748186426159796531e-5, -1.37483673558819872491e-5, 4.30658890693690883471e-6, -9.78331718960811797325e-7, 1.77889109261757914019e-7, -2.72163138654989148431e-8, 3.60975995623064132541e-9},
           {2.31420869846938412220e-5, -1.29157013641261131853e-5, 4.02349590162831882619e-6, -9.09826968675129147124e-7, 1.64807904618785730143e-7, -2.51369254309174583587e-8, 3.32551852266958721885e-9},
           {2.18898582130370502610e-5, -1.21376501328660731961e-5, 3.76018982371928136966e-6, -8.46352328728231420693e-7, 1.52724928031462393250e-7, -2.32211110765772533006e-8, 3.06418560757619705438e-9},
           {2.07128637889693757029e-5, -1.14104032674518354783e-5, 3.51521993183251333504e-6, -7.87524416790360016000e-7, 1.41561732604947769024e-7, -2.14556983508975200652e-8, 2.82387967403248806491e-9},
           {1.96062020815333120944e-5, -1.07304293273515516822e-5, 3.28724592142666116742e-6, -7.32989948869602958375e-7, 1.31246183461184278484e-7, -1.98285959449293740651e-8, 2.60287613976257619026e-9},
           {1.85653115469688660374e-5, -1.00944546170177424738e-5, 3.07502926343586044432e-6, -6.82423319548451942117e-7, 1.21711940032771273575e-7, -1.83287035577213526770e-8, 2.39959411407893502028e-9},
           {1.75859459448609093107e-5, -9.49944363845918858676e-6, 2.87742523865776432415e-6, -6.35524380548791398157e-7, 1.12897981492629326340e-7, -1.69458293745124347260e-8, 2.21258426781542512287e-9},
           {1.66641514315481092446e-5, -8.94258107214991519002e-6, 2.69337561090519759269e-6, -5.92016401110122433387e-7, 1.04748171677992505254e-7, -1.56706145077085057590e-8, 2.04051773856727123666e-9},
           {1.57962453841692752399e-5, -8.42125516382236759944e-6, 2.52190188667902121851e-6, -5.51644195059325610829e-7, 9.72108601780727467748e-8, -1.44944638066207912404e-8, 1.88217598204628900353e-9},
           {1.49787968204608532198e-5, -7.93304240469976545177e-6, 2.36209911346228122151e-6, -5.14172400724863401801e-7, 9.02385165387667239929e-8, -1.34094824931007986372e-8, 1.73644148810506184684e-9},
           {1.42086082901982836425e-5, -7.47569340189909450022e-6, 2.21313017271233163433e-6, -4.79383901014284110142e-7, 8.37873947973544327825e-8, -1.24084181269212401586e-8, 1.60228928705199756997e-9},
           {1.34826991240738819133e-5, -7.04711984415135147853e-6, 2.07422052726962753466e-6, -4.47078372040549294583e-7, 7.78172257973860269835e-8, -1.14846074474146731767e-8, 1.47877917832964027717e-9}}};
  // clang-format on
}
} // namespace mcmurchie_davidson
