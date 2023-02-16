#pragma once

#include <array>

/* This file was autogenerated on 2023-02-16T14:43 DO NOT EDIT! */

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 23.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<23>()
{
    // clang-format off
  return {{{2.12765957446808510638e-2, -2.04081632653061224490e-2, 9.80392156862745098039e-3, -3.14465408805031446541e-3, 7.57575757575757575758e-4, -1.46198830409356725146e-4, 2.35404896421845574388e-5},
           {1.93307482985550366239e-2, -1.85387599806351686949e-2, 8.90455253790929657232e-3, -2.85578402565719391762e-3, 6.87896275630876970208e-4, -1.32736074866587563546e-4, 2.13703753576351720674e-5},
           {1.75631295251904261112e-2, -1.68408365149205381528e-2, 8.08779519140575588187e-3, -2.59348185225218063124e-3, 6.24632910230380074788e-4, -1.20514342210831102353e-4, 1.94005126531353330548e-5},
           {1.59573916210434922636e-2, -1.52986425122105407920e-2, 7.34605201383222924938e-3, -2.35530131365823628548e-3, 5.67194240388984249022e-4, -1.09419119885297981857e-4, 1.76124058650934562384e-5},
           {1.44986882312519820004e-2, -1.38978760415047978422e-2, 6.67242499880983490346e-3, -2.13902163395081161557e-3, 5.15043414620779409392e-4, -9.93464714978080620225e-5, 1.59892691134860855649e-5},
           {1.31735363821034717063e-2, -1.26255502462298101196e-2, 6.06065117631364100315e-3, -1.94262671189299315419e-3, 4.67693111222436191336e-4, -9.02020591748537255887e-5, 1.45158681157862039837e-5},
           {1.19696911241400690690e-2, -1.14698722837973266647e-2, 5.50504408835108312997e-3, -1.76428623858111309139e-3, 4.24700964401651713878e-4, -8.19002563621794760261e-5, 1.31783766473161732526e-5},
           {1.08760317144977226855e-2, -1.04201334214167346676e-2, 5.00044066357519228355e-3, -1.60233855872144110091e-3, 3.85665413155024719948e-4, -7.43633426977569783091e-5, 1.19642462909208507460e-5},
           {9.88245827514199967623e-3, -9.46660925903274226567e-3, 4.54215299230712691442e-3, -1.45527511438596946110e-3, 3.50221933789497555465e-4, -6.75207733589334286282e-5, 1.08620882446901504472e-5},
           {8.97979796174698183253e-3, -8.60046914528278180767e-3, 4.12592454951587681022e-3, -1.32172632500187226673e-3, 3.18039620601764580748e-4, -6.13085159894913311624e-5, 9.86156607061850653444e-6},
           {8.15971976699282793011e-3, -7.81369393861023817105e-3, 3.74789045511482845144e-3, -1.20044877085584422716e-3, 2.88818082514920066069e-4, -5.56684489510506888728e-5, 8.95329837065583655927e-6},
           {7.41465716286705562449e-3, -7.09900134394182615732e-3, 3.40454139887951890212e-3, -1.09031355966904015126e-3, 2.62284626452181414153e-4, -5.05478152227269121187e-5, 8.12877047056345883726e-6},
           {6.73773785990441822363e-3, -6.44977812637732069584e-3, 3.09269089172638494273e-3, -9.90295766936745425202e-4, 2.38191700931995452729e-4, -4.58987267987219277245e-5, 7.38025427723138265150e-6},
           {6.12272002787946773017e-3, -5.86001856781629467535e-3, 2.80944553634343173118e-3, -8.99464850834452147796e-4, 2.16314575822807407535e-4, -4.16777149105551471069e-5, 6.70073555244904124715e-6},
           {5.56393438290025531962e-3, -5.32426859096626903245e-3, 2.55217803852513663854e-3, -8.16975951664137634359e-4, 1.96449236422460211298e-4, -3.78453218334554893207e-5, 6.08384791628426325485e-6},
           {5.05623160070855625497e-3, -4.83757502829077964956e-3, 2.31850270630306427508e-3, -7.42061994137929769114e-4, 1.78410472047665761598e-4, -3.43657304291361957488e-5, 5.52381295688046315858e-6},
           {4.59493456578679519003e-3, -4.39543956166375208300e-3, 2.10625320732320264749e-3, -6.74026518349548492415e-4, 1.62030141152357941726e-4, -3.12064279334821941740e-5, 5.01538588123388210884e-6},
           {4.17579501107217219980e-3, -3.99377690225220967346e-3, 1.91346237612113260866e-3, -6.12237172138281669602e-4, 1.47155596657340637058e-4, -2.83379008209683358889e-5, 4.55380619390882934006e-6},
           {3.79495414410843407566e-3, -3.62887681986387130098e-3, 1.73834388218655931310e-3, -5.56119803770490804193e-4, 1.33648256683212979246e-4, -2.57333578709599227786e-5, 4.13475293818651067952e-6},
           {3.44890689271064743854e-3, -3.29736966704354070995e-3, 1.57927558717085815207e-3, -5.05153099508445367800e-4, 1.21382307248362478419e-4, -2.33684788272007564695e-5, 3.75430407727273366422e-6},
           {3.13446943702758683281e-3, -2.99619507592099052276e-3, 1.43478443543948474583e-3, -4.58863715758951404029e-4, 1.10243524736811627737e-4, -2.12211862832889437995e-5, 3.40889963232074302843e-6},
           {2.84874972557719796304e-3, -2.72257353551106154321e-3, 1.30353273655477966582e-3, -4.16821860143082572464e-4, 1.00128207068634822647e-4, -1.92714386460637524109e-5, 3.09530822952850697734e-6},
           {2.58912070069096562908e-3, -2.47398058412308082324e-3, 1.18430571132922043270e-3, -3.78637280047221605212e-4, 9.09422035291919243251e-5, -1.75010422276506032494e-5, 2.81059674078166981127e-6},
           {2.35319598409415228768e-3, -2.24812337600467128385e-3, 1.07600018493752744818e-3, -3.43955621044352726802e-4, 8.26000341422149361378e-5, -1.58934806973189266725e-5, 2.55210273153918300123e-6},
           {2.13880779630797306784e-3, -2.04291940355464610862e-3, 9.77614321329710149466e-4, -3.12455121049236175627e-4, 7.50240903146237863176e-5, -1.44337602880051742350e-5, 2.31740945617562808169e-6},
           {1.94398690440204129949e-3, -1.85647717659944149100e-3, 8.88238302947390984642e-4, -2.83843609224505139497e-4, 6.81439092457825757289e-5, -1.31082693008904700130e-5, 2.10432316505335924317e-6},
           {1.76694441154625269882e-3, -1.68707867852693478398e-3, 8.07045868604422921011e-4, -2.57855781516581298186e-4, 6.18955152879731144468e-5, -1.19046505862030488630e-5, 1.91085250942709792448e-6},
           {1.60605521898795071574e-3, -1.53316343568222026618e-3, 7.33286630433249318403e-4, -2.34250727297584247126e-4, 5.62208220747074748471e-5, -1.08116858007163276303e-5, 1.73518985009001837397e-6},
           {1.45984300667368564058e-3, -1.39331405150809346100e-3, 6.66279098096311220463e-4, -2.12809683946602479915e-4, 5.10670898050721760509e-5, -9.81919035338895752115e-6, 1.57569429364150988383e-6},
           {1.32696659289122001306e-3, -1.26624307060003104229e-3, 6.05404345085720232110e-4, -1.93333998342997152777e-4, 4.63864325909908872076e-5, -8.91791805129427802223e-6, 1.43087629656266802152e-6},
           {1.20620754615921544836e-3, -1.15078105026987401009e-3, 5.50100257946661624561e-4, -1.75643276185989184214e-4, 4.21353712450047446507e-5, -8.09947454936442917195e-6, 1.29938369208074482336e-6},
           {1.09645893425959202287e-3, -1.04586572849081995730e-3, 4.99856314717131823902e-4, -1.59573701816927311908e-4, 3.82744273133410359234e-5, -7.35623879039304390547e-6, 1.17998900822819858537e-6},
           {9.96715105900144136830e-4, -9.50532187334471962911e-4, 4.54208843829918970051e-4, -1.44976512819936854178e-4, 3.47677545467042667078e-5, -6.68129169698369349353e-6, 1.07157795768279306494e-6},
           {9.06062410111715759407e-4, -8.63903920304650478970e-4, 4.12736719218782159655e-4, -1.31716615128177653386e-4, 3.15828043530337536728e-5, -6.06835144540986753736e-6, 9.73138991027680967305e-7},
           {8.23670767215134718049e-4, -7.85184720409604335750e-4, 3.75057451451808049336e-4, -1.19671325680352871098e-4, 2.86900220957486974649e-5, -5.51171471331159250768e-6, 8.83753815099115749783e-7},
           {7.48786013119810125657e-4, -7.13651313473232440029e-4, 3.40823638419281333984e-4, -1.08729230867815487935e-4, 2.60625713907551882233e-5, -5.00620334937904872636e-6, 8.02588787189335722262e-7},
           {6.80722945912593186205e-4, -6.48646668138801131206e-4, 3.09719742465885180399e-4, -9.87891500978652407038e-5, 2.36760838184527295288e-5, -4.54711596419570605567e-6, 7.28887104129265950217e-7},
           {6.18859010229473767428e-4, -5.89573920330529804498e-4, 2.81459163909230823068e-4, -8.97591947838333691339e-5, 2.15084317056287422872e-5, -4.13018398771463609236e-6, 6.61961712768161893972e-7},
           {5.62628560835023083450e-4, -5.35890855668490835757e-4, 2.55781583657269714210e-4, -8.15559139665781478775e-5, 1.95395218487187349019e-5, -3.75153178085874707061e-6, 6.01188875165986211611e-7},
           {5.11517652220664590518e-4, -4.87104898534216517510e-4, 2.32450550152068282370e-4, -7.41035185834746837731e-5, 1.77511082464775739266e-5, -3.40764042686543992220e-6, 5.46002327983486794705e-7},
           {4.65059305923182708317e-4, -4.42768561206929845385e-4, 2.11251288150338415936e-4, -6.73331771375076790958e-5, 1.61266220885067429393e-5, -3.09531486259869914197e-6, 4.95887981152943667421e-7},
           {4.22829211705065587459e-4, -4.02475310777665766168e-4, 1.91988708923438811203e-4, -6.11823761875921563400e-5, 1.46510174079933012779e-5, -2.81165404145318353974e-6, 4.50379105992301714402e-7},
           {3.84441822769806347462e-4, -3.65855815440857849372e-4, 1.74485603340734788443e-4, -5.55943396880408623444e-5, 1.33106309539647951236e-5, -2.55402384797206329675e-6, 4.09051967534924402820e-7},
           {3.49546808845791943075e-4, -3.32574535296662658970e-4, 1.58581001007880551760e-4, -5.05175017558700249114e-5, 1.20930549717332769738e-5, -2.32003251016182543537e-6, 3.71521860030032828494e-7},
           {3.17825834296096279216e-4, -3.02326626005464430772e-4, 1.44128680181779592583e-4, -4.59050279445659609786e-5, 1.09870217012478171246e-5, -2.10750827895708656531e-6, 3.37439508364588495451e-7},
           {2.88989631429367147160e-4, -2.74835126548661056595e-4, 1.30995814591227006940e-4, -4.17143805567194250229e-5, 9.98229851293736797206e-6, -1.91447916558798291863e-6, 3.06487801601774031963e-7},
           {2.62775341927242193571e-4, -2.49848404994217304469e-4, 1.19061744569731679647e-4, -3.79069239398377639573e-5, 9.06959270033887558792e-6, -1.73915454693272799076e-6, 2.78378827956865024749e-7},
           {2.38944101791901752181e-4, -2.27137838566336057152e-4, 1.08216861066736367864e-4, -3.44475660835334327684e-5, 8.24046503930766951855e-6, -1.57990846648076331236e-6, 2.52851183367700702439e-7},
           {2.17278847476689901310e-4, -2.06495706498373645960e-4, 9.83615921562641838541e-5, -3.13044331756754886948e-5, 7.48725130574986063486e-6, -1.43526447445293279536e-6, 2.29667528390917719798e-7},
           {1.97582322914275444531e-4, -1.87733276127203662243e-4, 8.94054826177871262392e-5, -2.84485740831621754070e-5, 6.80299101837253710672e-6, -1.30388186507431855366e-6, 2.08612370490927915976e-7},
           {1.79675269019714182843e-4, -1.70679064484108641972e-4, 8.12663580317923145684e-5, -2.58536920026222963721e-5, 6.18136274061838716026e-6, -1.18454318210899471043e-6, 1.89490050908339981773e-7},
           {1.63394778937379551000e-4, -1.55177259268744191295e-4, 7.38695656202361208061e-5, -2.34959007802031994740e-5, 5.61662533737324299818e-6, -1.07614287566751040203e-6, 1.72122917218154105320e-7},
           {1.48592803836819877580e-4, -1.41086284574014266414e-4, 6.71472847772074029346e-5, -2.13535036300379593818e-5, 5.10356463778560027480e-6, -9.77677004099525089092e-7, 1.56349664433756247523e-7},
           {1.35134795457482893410e-4, -1.28277498074666517543e-4, 6.10379008843598601592e-5, -1.94067921901647141283e-5, 4.63744500614052514924e-6, -8.88233884587471573034e-7, 1.42023829096970174920e-7},
           {1.22898472868928856526e-4, -1.16634007613608726593e-4, 5.54854365950993152156e-5, -1.76378640445593853751e-5, 4.21396536866205319354e-6, -8.06985604954651914525e-7, 1.29012422232142150483e-7},
           {1.11772702063417993875e-4, -1.06049596228778616048e-4, 5.04390353066395795163e-5, -1.60304570123205388670e-5, 3.82921928581003971642e-6, -7.33180317276645397447e-7, 1.17194688346991696950e-7},
           {1.01656478042325143377e-4, -9.64277456702086613934e-5, 4.58524920248785637926e-5, -1.45697986615278056536e-5, 3.47965869748102016713e-6, -6.66135241214287586036e-7, 1.06460978847071158824e-7},
           {9.24580000064264336413e-5, -8.76807493711190049854e-5, 4.16838272681379249057e-5, -1.32424696473506211993e-5, 3.16206100287357849823e-6, -6.05230311638770723492e-7, 9.67117293053003292940e-8},
           {8.40938311215464455060e-5, -7.97289066669702544115e-5, 3.78949000562808012795e-5, -1.20362796029427254123e-5, 2.87349916795962029319e-6, -5.49902411157234704457e-7, 8.78565310033113924725e-8},
           {7.64881351133676819524e-5, -7.24997908101609518259e-5, 3.44510563953180073624e-5, -1.09401544287295852156e-5, 2.61131458180658727886e-6, -4.99640133627339969169e-7, 7.98132880464481374745e-8},
           {6.95719826556645499832e-5, -6.59275840124885640151e-5, 3.13208099977320327542e-5, -9.94403393197633713135e-6, 2.37309240868786166883e-6, -4.53979029723337567023e-7, 7.25074521575530123742e-8},
           {6.32827211614365791681e-5, -5.99524733689922091238e-5, 2.84755522784755467976e-5, -9.03877886500944490280e-6, 2.15663920624039975486e-6, -4.12497290130814799811e-7, 6.58713279837156526513e-8},
           {5.75634021723837380939e-5, -5.45201020811523958667e-5, 2.58892889387387786792e-5, -8.21608649805926174233e-6, 1.95996260109912407788e-6, -3.74811826045092605213e-7, 5.98434424118153260972e-8},
           {5.23622610743324859721e-5, -4.95810709098975336564e-5, 2.35384006966690999176e-5, -7.46841394221335860338e-6, 1.78125283265519289693e-6, -3.40574710367682997463e-7, 5.43679719892011953513e-8},
           {4.76322443495349979667e-5, -4.50904852542343475229e-5, 2.14014259485757006433e-5, -6.78890851016635650598e-6, 1.61886599303045661790e-6, -3.09469946371261416715e-7, 4.93942230908727390050e-8},
           {4.33305800157123325277e-5, -4.10075436739151482734e-5, 1.94588633478561464653e-5, -6.17134446799672161093e-6, 1.47130880719671352647e-6, -2.81210533667999658938e-7, 4.48761599691811122070e-8},
           {3.94183873003753113104e-5, -3.72951640583133969234e-5, 1.76929924738429324171e-5, -5.61006559070802868504e-6, 1.33722481154434931105e-6, -2.55535804097624990520e-7, 4.07719762710281844625e-8},
           {3.58603219610348375001e-5, -3.39196439921751435030e-5, 1.60877109307123883635e-5, -5.09993298829817412010e-6, 1.21538180225537608601e-6, -2.32209002676372159048e-7, 3.70437060150181287045e-8},
           {3.26242539907686481980e-5, -3.08503521853907997649e-5, 1.46283863690932875400e-5, -4.63627771817038813063e-6, 1.10466043668312448828e-6, -2.11015091039774920006e-7, 3.36568703908546447617e-8},
           {2.96809747472964726106e-5, -2.80594481213344464955e-5, 1.33017220614807618557e-5, -4.21485774423331957240e-6, 1.00404388169588444998e-6, -1.91758752892541450442e-7, 3.05801570789517493895e-8},
           {2.70039308150006170605e-5, -2.55216273393217987309e-5, 1.20956347882944357006e-5, -3.83181884347034146238e-6, 9.12608412705490116155e-7, -1.74262582867097168441e-7, 2.77851290928988696175e-8},
           {2.45689821557325796433e-5, -2.32138900037689992369e-5, 1.09991439055904732190e-5, -3.48365909746850700685e-6, 8.29514875965592277899e-7, -1.58365441906496606256e-7, 2.52459604239559219638e-8},
           {2.23541823280517550337e-5, -2.11153306278990622786e-5, 1.00022705691099993017e-5, -3.16719663972839933464e-6, 7.54000934771252087663e-7, -1.43920963843383539127e-7, 2.29391960177524381942e-8},
           {2.03395787578260129377e-5, -1.92069470153405621386e-5, 9.09594618348756142503e-6, -2.87954035983882148612e-6, 6.85374027496845649811e-7, -1.30796199259124196101e-7, 2.08435338411870976818e-8},
           {1.85070312277694352975e-5, -1.74714666605124948544e-5, 8.27192923093019453129e-6, -2.61806329307771708600e-6, 6.23004972041484964096e-7, -1.18870383989403996666e-7, 1.89396270043116224364e-8},
           {1.68400469212113363879e-5, -1.58931890099395712777e-5, 7.52272971130666307161e-6, -2.38037844894933914091e-6, 5.66322157272362803146e-7, -1.08033820806488770902e-7, 1.72099040896799928901e-8},
           {1.53236305077362740083e-5, -1.44578421330913890703e-5, 6.84154049608099328647e-6, -2.16431685482067298103e-6, 5.14806267522911554806e-7, -9.81868638649272696985e-8, 1.56384060120144885574e-8},
           {1.39441478967182849242e-5, -1.31524524843478864605e-5, 6.22217496254040779147e-6, -1.96790761138874027879e-6, 4.67985491165631574447e-7, -8.92389964566188599668e-8, 1.42106378856846131800e-8},
           {1.26892024104752689667e-5, -1.19652265584965605794e-5, 5.65901033290193100048e-6, -1.78935977538681417309e-6, 4.25431168785298029800e-7, -8.11079934918814840020e-8, 1.29134345178666453807e-8},
           {1.15475222429551473662e-5, -1.08854433518860382022e-5, 5.14693619567478616799e-6, -1.62704590189594444927e-6, 3.86753840569139647233e-7, -7.37191609135927147964e-8, 1.17348382726689155418e-8},
           {1.05088581735901601268e-5, -9.90335664101386049470e-6, 4.68130773459885554362e-6, -1.47948709402674418058e-6, 3.51599656244762632086e-7, -6.70046449690473045983e-8, 1.06639881671673336590e-8},
           {9.56389060017986810606e-6, -9.01010618083848331976e-6, 4.25790323401899218210e-6, -1.34533942171879493090e-6, 3.19647114268792135012e-7, -6.09028049156045820851e-8, 9.69101916528334555189e-9},
           {8.70414504025801738410e-6, -8.19763700731592398529e-6, 3.87288546909556429649e-6, -1.22338158410164407500e-6, 2.90604100030937737654e-7, -5.53576433275874318703e-8, 8.80697073073782771787e-9},
           {7.92191532815491134760e-6, -7.45862610333287079020e-6, 3.52276662516131056714e-6, -1.11250370139054690183e-6, 2.64205195618069084075e-7, -5.03182887087831281882e-8, 8.00370378682407820005e-9},
           {7.21019380560418043962e-6, -6.78641575503245705539e-6, 3.20437642314700034345e-6, -1.01169713275935377325e-6, 2.40209236206903030328e-7, -4.57385256023118749826e-8, 7.27382530927265418359e-9},
           {6.56260786791366004751e-6, -6.17495298713501111326e-6, 2.91483315761672460891e-6, -9.20045226139794029798e-7, 2.18397090445606724643e-7, -4.15763678321343084427e-8, 6.61061984976730005420e-9},
           {5.97336228601696611786e-6, -5.61873452181487053340e-6, 2.65151738085311113741e-6, -8.36714914529415144056e-7, 1.98569644265436874935e-7, -3.77936709122068797822e-8, 6.00798735238318927157e-9},
           {5.43718677768412564784e-6, -5.11275675652403115585e-6, 2.41204799086326989764e-6, -7.60949081230054938723e-7, 1.80545969452877654025e-7, -3.43557800240242790922e-8, 5.46038668396314980089e-9},
           {4.94928834928499796934e-6, -4.65247030232478036416e-6, 2.19426050336464374720e-6, -6.92059623557906165229e-7, 1.64161660028256061573e-7, -3.12312102944219863598e-8, 4.96278435277521767364e-9},
           {4.50530797321235867709e-6, -4.23373866623412338392e-6, 1.99618730796231991001e-6, -6.29421151031302870535e-7, 1.49267321034505775298e-7, -2.83913564061489367887e-8, 4.51060793820577734350e-9},
           {4.10128120578586057086e-6, -3.85280069918078126674e-6, 1.81603972703269067111e-6, -5.72465259913453986503e-7, 1.35727195754159703068e-7, -2.58102288466710200562e-8, 4.09970379819045906073e-9},
           {3.73360238653991373021e-6, -3.50623646578348855887e-6, 1.65219171245259642794e-6, -5.20675331319124035369e-7, 1.23417918656971188827e-7, -2.34642143484823838475e-8, 3.72629866098160993060e-9},
           {3.39899209258056283047e-6, -3.19093622359736577216e-6, 1.50316503041239075225e-6, -4.73581804936312723482e-7, 1.12227382546767416244e-7, -2.13318582992020137661e-8, 3.38696474407056290572e-9},
           {3.09446755148100365179e-6, -2.90407222803399854528e-6, 1.36761579826589038264e-6, -4.30757884811344194445e-7, 1.02053709435108938470e-7, -1.93936671040183668981e-8, 3.07858807596406910026e-9},
           {2.81731574324682894198e-6, -2.64307310510464615920e-6, 1.24432224982696950947e-6, -3.91815637639337371122e-7, 9.28043156309300861036e-8, -1.76319286685257552879e-8, 2.79833972636543488649e-9},
           {2.56506894646991145316e-6, -2.40560055770442066019e-6, 1.13217361683723102307e-6, -3.56402447628909758400e-7, 8.43950624085339254737e-8, -1.60305493384047914772e-8, 2.54364967741132485320e-9},
           {2.33548250613034797854e-6, -2.18952819256621584819e-6, 1.03016002460649839613e-6, -3.24197795303887045720e-7, 7.67494844092470687305e-8, -1.45749057853086382679e-8, 2.31218309321875299749e-9},
           {2.12651462080491590660e-6, -1.99292227446432411019e-6, 9.37363309163111450504e-7, -2.94910330596341917397e-7, 6.97980886520909901881e-8, -1.32517104671550489337e-8, 2.10181876733371707868e-9},
           {1.93630796548479801902e-6, -1.81402423191875232126e-6, 8.52948671730635235798e-7, -2.68275213302268964986e-7, 6.34777176827031690424e-8, -1.20488894170876724748e-8, 1.91062954795221876039e-9},
           {1.76317298296471033068e-6, -1.65123475470531208952e-6, 7.76157094050103140234e-7, -2.44051696438841023075e-7, 5.77309709835337357034e-8, -1.09554712298351548065e-8, 1.73686455919586420828e-9},
           {1.60557269199411520666e-6, -1.50309933806188696707e-6, 7.06298445063669655660e-7, -2.22020930283405138237e-7, 5.25056793075773772185e-8, -9.96148621813185209746e-9, 1.57893305344001212902e-9},
           {1.46210887421903504346e-6, -1.36829514173233509730e-6, 6.42745215831261208631e-7, -2.01983966909960083427e-7, 4.77544270875945217037e-8, -9.05787480623898386874e-9, 1.43538974486889202234e-9},
           {1.33150951451724350175e-6, -1.24561904402857977092e-6, 5.84926825325318787063e-7, -1.83759946887705075559e-7, 4.34341185174893742438e-8, -8.23640431330006991469e-9, 1.30492148821112793410e-9},
           {1.21261738075592839996e-6, -1.13397678202956326994e-6, 5.32324444993421328937e-7, -1.67184451485512315425e-7, 3.95055833063779771388e-8, -7.48959335707899660306e-9, 1.18633517911951762024e-9},
           {1.10437963938419922330e-6, -1.03237307897370822757e-6, 4.84466294742967961287e-7, -1.52108005251430235411e-7, 3.59332184726573993252e-8, -6.81064317928827360374e-9, 1.07854676401759824814e-9},
           {1.00583841270846722028e-6, -9.39902668930964630420e-7, 4.40923367330227803356e-7, -1.38394715221710491402e-7, 3.26846628784845802267e-8, -6.19337525787775393405e-9, 9.80571257548685083739e-10},
           {9.16122192273376532984e-7, -8.55742137044575302057e-7, 4.01305542067936026002e-7, -1.25921034272215210772e-7, 2.97305015075879179273e-8, -5.63217462991837314330e-9, 8.91513675126963320003e-10},
           {8.34438030563262404715e-7, -7.79142501086947608304e-7, 3.65258052337564815246e-7, -1.14574637268060369926e-7, 2.70439967640781527457e-8, -5.12193840162402324151e-9, 8.10560796592397400474e-10},
           {7.60064440320637020262e-7, -7.09422466847109928987e-7, 3.32458274637408002149e-7, -1.04253399705580660594e-7, 2.46008443194488539241e-8, -4.65802897010035609005e-9, 7.36973684690976661487e-10},
           {6.92344937213809730561e-7, -6.45962296021472562416e-7, 3.02612809845669866059e-7, -9.48644694837718718722e-8, 2.23789512615796980140e-8, -4.23623152503984739026e-9, 6.70080889111339974731e-10},
           {6.30682167434527219679e-7, -5.88198230871670777672e-7, 2.75454830056042074765e-7, -8.63234232990172257872e-8, 2.03582345053815374982e-8, -3.85271543820364108696e-9, 6.09272273173414299102e-10},
           {5.74532567122008364045e-7, -5.35617424994551041281e-7, 2.50741666776523584434e-7, -7.85534999350603820338e-8, 1.85204376116626182467e-8, -3.50399918451174659961e-9, 5.53993406043855338531e-10},
           {5.23401505340708410110e-7, -4.87753334166609085186e-7, 2.28252618492914905204e-7, -7.14849034270540273759e-8, 1.68489643305839321799e-8, -3.18691847123866450417e-9, 5.03740468600645100060e-10},
           {4.76838866729777001209e-7, -4.44181525420841143944e-7, 2.07786957606918332953e-7, -6.50541697206279960784e-8, 1.53287273402861296368e-8, -2.89859728148568439589e-9, 4.58055625834167051754e-10},
           {4.34435033932711335062e-7, -4.04515866326589233780e-7, 1.89162118583589277424e-7, -5.92035910302259246441e-8, 1.39460107913388942989e-8, -2.63642156504975835022e-9, 4.16522822998851467208e-10},
           {3.95817233542656026617e-7, -3.68405059907560410927e-7, 1.72212050800858987479e-7, -5.38806926308454285363e-8, 1.26883453948875028051e-8, -2.39801533428280955108e-9, 3.78763966658421932723e-10},
           {3.60646212595347231964e-7, -3.35529493781615958810e-7, 1.56785721100244687250e-7, -4.90377572986862609988e-8, 1.15443949079281580678e-8, -2.18121894476197443189e-9, 3.44435455335492690265e-10},
           {3.28613215638007071528e-7, -3.05598374967041542689e-7, 1.42745752406569912132e-7, -4.46313930535082895120e-8, 1.05038529741062594638e-8, -1.98406936077731423339e-9, 3.13225027716005695398e-10},
           {2.99437235125944338276e-7, -2.78347124400099186440e-7, 1.29967186028131686145e-7, -4.06221402527710854206e-8, 9.55734937377147062323e-9, -1.80478222397644643335e-9, 2.84848899300955986619e-10},
           {2.72862510374108746238e-7, -2.53535007571574470226e-7, 1.18336356378729198885e-7, -3.69741144485345850249e-8, 8.69636482362457382963e-9, -1.64173556015574139010e-9, 2.59049161069422916696e-10},
           {2.48656252540994345920e-7, -2.30942979837432181518e-7, 1.07749867889704471292e-7, -3.36546817459825851676e-8, 7.91315354495503496840e-9, -1.49345497430982094996e-9, 2.35591416142986699938e-10}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson
