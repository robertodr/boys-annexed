#pragma once

#include <array>

/* This file was autogenerated on 2023-02-16T14:43 DO NOT EDIT! */

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 8.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<8>()
{
    // clang-format off
  return {{{5.88235294117647058824e-2, -5.26315789473684210526e-2, 2.38095238095238095238e-2, -7.24637681159420289855e-3, 1.66666666666666666667e-3, -3.08641975308641975309e-4, 4.78927203065134099617e-5},
           {5.37913840058185377391e-2, -4.80805503147778839912e-2, 2.17325948620505395026e-2, -6.60963847513597151095e-3, 1.51931073600093235337e-3, -2.81209315191661003534e-4, 4.36164110070970059306e-5},
           {4.91941944465070918335e-2, -4.39263812815964202474e-2, 1.98381140904376820910e-2, -6.02918280016700135204e-3, 1.38504930677753952846e-3, -2.56225645594624479567e-4, 3.97233980854214171054e-5},
           {4.49940442583249833319e-2, -4.01342195163447990058e-2, 1.81099584406944069670e-2, -5.50000939651311242240e-3, 1.26271361368691459673e-3, -2.33471493478207910328e-4, 3.61792087677680743499e-5},
           {4.11563458540492588256e-2, -3.66722918539976391883e-2, 1.65334369939474264133e-2, -5.01756410628181707956e-3, 1.15123961621101198599e-3, -2.12747121780915973352e-4, 3.29524800946673891385e-5},
           {3.76495465034909979063e-2, -3.35116308467135332050e-2, 1.50951631874618498463e-2, -4.57769902679405239765e-3, 1.04965858270607802216e-3, -1.93870749258445772365e-4, 3.00146776176818932600e-5},
           {3.44448604084372500544e-2, -3.06258257078390744299e-2, 1.37829384812149981915e-2, -4.17663612736158922079e-3, 9.57088523676142524828e-4, -1.76676931330966273002e-4, 2.73398396045189868736e-5},
           {3.15160245554007706348e-2, -2.79907954645739615041e-2, 1.25856464412484585907e-2, -3.81093413583639007564e-3, 8.72726397440841189165e-4, -1.61015087339852258413e-4, 2.49043444342378728713e-5},
           {2.88390762262852040632e-2, -2.55845823310167919118e-2, 1.14931563037804392036e-2, -3.47745840016216826995e-3, 7.95841018363479505045e-4, -1.46748160942011005112e-4, 2.26866990754288613754e-5},
           {2.63921502368293960095e-2, -2.33871634919447859979e-2, 1.04962351684310464806e-2, -3.17335345680600129648e-3, 7.25766604134931185219e-4, -1.33751401575739038924e-4, 2.06673467320952183640e-5},
           {2.41552941454041721070e-2, -2.13802796502142976320e-2, 9.58646804565731550096e-3, -2.89601806218041076327e-3, 6.61896904363631216617e-4, -1.21911256028068380589e-4, 1.88284919163188800822e-5},
           {2.21102998319358187707e-2, -1.95472788385587688265e-2, 8.75618505330386445729e-3, -2.64308246520323589929e-3, 6.03679857953920775970e-4, -1.11124360129821568577e-4, 1.71539413652413563348e-5},
           {2.02405499898183488527e-2, -1.78729741311290761530e-2, 7.99839512067716112975e-3, -2.41238771918324008264e-3, 5.50612731511893396807e-4, -1.01296621510187337032e-4, 1.56289593638917307338e-5},
           {1.85308782039235037109e-2, -1.63435140125718983417e-2, 7.30672561631796717296e-3, -2.20196684944500356562e-3, 5.02237695342914970340e-4, -9.23423851658217810295e-5, 1.42401361662660161454e-5},
           {1.69674414063787776241e-2, -1.49462642738688641225e-2, 6.67536736819678098304e-3, -2.01002770968204550264e-3, 4.58137797537438225693e-4, -8.41836743477871412124e-5, 1.29752683260039198296e-5},
           {1.55376036097120678175e-2, -1.36697004055584547810e-2, 6.09902459286347248951e-3, -1.83493737510200287041e-3, 4.17933300217314439642e-4, -7.67494999498857913322e-5, 1.18232498561112003404e-5},
           {1.42298299152128337325e-2, -1.25033095512383837095e-2, 5.57286929357405334817e-3, -1.67520793413827536779e-3, 3.81278345265971822971e-4, -6.99752322003328208104e-5, 1.07739732354266395844e-5},
           {1.30335898838054194127e-2, -1.14375011682228133747e-2, 5.09249972698512607533e-3, -1.52948355297258557425e-3, 3.47857919822086364067e-4, -6.38020290208755430595e-5, 9.81823936883258420645e-6},
           {1.19392694381611919746e-2, -1.04635256186538360551e-2, 4.65390257400505845398e-3, -1.39652869845490563636e-3, 3.17385094504520092785e-4, -5.81763159285314776004e-5, 8.94767568937327229298e-6},
           {1.09380905389140862388e-2, -9.57339998392223688606e-3, 4.25341848314308990098e-3, -1.27521741532345546204e-3, 2.89598509780722478471e-4, -5.30493128197335970793e-5, 8.15466166421851914085e-6},
           {1.00220379453436429090e-2, -8.75984045855732543218e-3, 3.88771068449706921899e-3, -1.16452356301101019910e-3, 2.64260088113612374907e-4, -4.83766033990725073080e-5, 7.43226103346608196710e-6},
           {9.18379243234757926262e-3, -8.01620073736357408034e-3, 3.55373639963405246051e-3, -1.06351192585906156700e-3, 2.41152951543339711922e-4, -4.41177433988531345023e-5, 6.77416017172695577968e-6},
           {8.41666989148491702377e-3, -7.33641586202494512536e-3, 3.24872079728865097853e-3, -9.71330118325360752397e-4, 2.20079526198541368821e-4, -4.02359040848314573045e-5, 6.17461201784094617252e-6},
           {7.71456579482439255141e-3, -6.71495104113282743202e-3, 2.97013326725218025637e-3, -8.87201213832895189265e-4, 2.00859816903404522683e-4, -3.66975478609403413829e-5, 5.62838506843087106775e-6},
           {7.07190454673079643699e-3, -6.14675500104398114809e-3, 2.71566580525241674932e-3, -8.10417032332954039194e-4, 1.83329836567146047498e-4, -3.34721330744360809394e-5, 5.13071697678253691669e-6},
           {6.48359329097257519603e-3, -5.62721746452701006985e-3, 2.48321332021144607419e-3, -7.40332027499399905265e-4, 1.67340176425153898615e-4, -3.05318453853227088010e-5, 4.67727234015190193708e-6},
           {5.94497977900985009186e-3, -5.15213039016031420364e-3, 2.27085569218386058507e-3, -6.76357719788087249566e-4, 1.52754704458511552344e-4, -2.78513533025210024150e-5, 4.26410429643008085960e-6},
           {5.45181394036121143992e-3, -4.71765263822053557835e-3, 2.07684142467041456259e-3, -6.17957626432336266931e-4, 1.39449380462289507189e-4, -2.54075857062098872273e-5, 3.88761958548619866196e-6},
           {5.00021282785850611219e-3, -4.32027775863869523826e-3, 1.89957274901047233097e-3, -5.64642643845891063423e-4, 1.27311177273177570388e-4, -2.31795293730485937379e-5, 3.54454676177071762342e-6},
           {4.58662863966164367768e-3, -3.95680462376564977267e-3, 1.73759205130518735484e-3, -5.15966841908353335104e-4, 1.16237098613114925869e-4, -2.11480447003761467379e-5, 3.23190727318284386145e-6},
           {4.20781954637541259073e-3, -3.62431065341968549134e-3, 1.58956950392584472377e-3, -4.71523633250599965867e-4, 1.06133284866103560660e-4, -1.92956979886086910862e-5, 2.94698914704358114523e-6},
           {3.86082307571955019379e-3, -3.32012740220557957954e-3, 1.45429179422163412302e-3, -4.30942283971798029835e-4, 9.69141988881074136842e-5, -1.76066087893907258460e-5, 2.68732304750631769669e-6},
           {3.54293182916336473615e-3, -3.04181829959547598424e-3, 1.33065185265217864920e-3, -3.93884735235034745288e-4, 8.85018846619051722299e-5, -1.60663109619491513175e-5, 2.45066049009312082323e-6},
           {3.25167132493922594882e-3, -2.78715835192831556597e-3, 1.21763949131803352749e-3, -3.60042707932258800561e-4, 8.08252922563874117053e-5, -1.46616262027682981822e-5, 2.23495401846156270745e-6},
           {2.98477978007048770984e-3, -2.55411563248121456851e-3, 1.11433287182478271866e-3, -3.29135065105756003875e-4, 7.38196631388988880416e-5, -1.33805489252614066115e-5, 2.03833916616032133278e-6},
           {2.74018966064817253228e-3, -2.34083440124292470677e-3, 1.01989072866407967134e-3, -3.00905409085068737199e-4, 6.74259704251251712872e-5, -1.22121414675674435773e-5, 1.85911804218255204297e-6},
           {2.51601084471202510184e-3, -2.14561971011276511612e-3, 9.33545280892362572614e-4, -2.75119892365433167669e-4, 6.15904091385258048007e-5, -1.11464386988691728004e-5, 1.69574439371983264986e-6},
           {2.31051525586755714115e-3, -1.96692336208231354638e-3, 8.54595770893554706159e-4, -2.51565223134908751406e-4, 5.62639319948089104782e-5, -1.01743611785427854260e-5, 1.54681001278890389089e-6},
           {2.12212283832144887538e-3, -1.80333110464461505301e-3, 7.82402574479087423338e-4, -2.30046848069212972118e-4, 5.14018266304048241158e-5, -9.28763609876901284515e-6, 1.41103236546894147996e-6},
           {1.94938875545274097750e-3, -1.65355094831951877389e-3, 7.16381831555545326058e-4, -2.10387296571122833604e-4, 4.69633305609540679351e-5, -8.47872531064967124154e-6, 1.28724333345808145099e-6},
           {1.79099170445613385845e-3, -1.51640251087751479903e-3, 6.56000551121164554406e-4, -1.92424672049057476127e-4, 4.29112804897696989686e-5, -7.74075979700798606764e-6, 1.17437896763397977881e-6},
           {1.64572324908716103101e-3, -1.39080729667323240231e-3, 6.00772148477450346378e-4, -1.76011277119749733836e-4, 3.92117928900622016554e-5, -7.06748001247570599589e-6, 1.07147016237467147550e-6},
           {1.51247808118957897429e-3, -1.27577982854108914167e-3, 5.50252376297797490302e-4, -1.61012360794242121061e-4, 3.58339730611494181869e-5, -6.45318156370234408673e-6, 9.77634167645155907102e-7},
           {1.39024512956812860108e-3, -1.17041955702991418153e-3, 5.04035614614386411406e-4, -1.47304976775257775090e-4, 3.27496501103907469948e-5, -5.89266575003248708781e-6, 8.92066863356643192011e-7},
           {1.27809944195339053943e-3, -1.07390347842490924829e-3, 4.61751487898002426283e-4, -1.34776942966811810569e-4, 2.99331355414374754038e-5, -5.38119452821406120055e-6, 8.14035727327197564577e-7},
           {1.17519477235203764244e-3, -9.85479399082481296798e-4, 4.23061780240269007507e-4, -1.23325893182388730005e-4, 2.73610033376265765232e-5, -4.91444950401262747885e-6, 7.42873434376328582753e-7},
           {1.08075681204212797545e-3, -9.04459789139411838091e-4, 3.87657622229089127326e-4, -1.12858412843988361479e-4, 2.50118896188261302985e-5, -4.48849458936784020729e-6, 6.77972029727991866881e-7},
           {9.94077007910871288457e-4, -8.30216173700956227947e-4, 3.55256925458635481468e-4, -1.03289251197994107114e-4, 2.28663101224617151277e-5, -4.09974199625993512537e-6, 6.18777625027536670555e-7},
           {9.14506916788552777324e-4, -7.62174014206808375475e-4, 3.25602042755693981725e-4, -9.45406032416512380478e-5, 2.09064939163534473923e-5, -3.74492126804863662497e-6, 5.64785569944668248713e-7},
           {8.41453048949871752760e-4, -6.99808036859537888411e-4, 2.98457634153411767962e-4, -8.65414551618868426765e-5, 1.91162318937756437408e-5, -3.42105107597027055681e-6, 5.15536056578702659848e-7},
           {7.74372158071864142778e-4, -6.42637968813621496961e-4, 2.73608720418666562495e-4, -7.92269876416419485763e-5, 1.74807387310879679479e-5, -3.12541353297275437511e-6, 4.70610117742534126259e-7},
           {7.12766938691336993800e-4, -5.90224646297753249499e-4, 2.50858907555963936246e-4, -7.25380318927261333534e-5, 1.59865271065382361017e-5, -2.85553079935236320521e-6, 4.29625983712692042520e-7},
           {6.56182095626730655172e-4, -5.42166462009003712746e-4, 2.30028767183186838401e-4, -6.64205737329016325087e-5, 1.46212930864569029120e-5, -2.60914377493057443827e-6, 3.92235765226265595481e-7},
           {6.04200752948993785249e-4, -4.98096122002138382012e-4, 2.10954359015584988089e-4, -6.08253014425210922732e-5, 1.33738116830097577084e-5, -2.38419269095568094407e-6, 3.58122433410138400154e-7},
           {5.56441172930256669829e-4, -4.57677684926081917733e-4, 1.93485882915873924756e-4, -5.57071935162657970496e-5, 1.22338416768209888672e-5, -2.17879943169746339535e-6, 3.26997069970048930482e-7},
           {5.12553757992263801097e-4, -4.20603858854946008675e-4, 1.77486449080904354738e-4, -5.10251427717258045731e-5, 1.11920388789169829953e-5, -1.99125143097432558047e-6, 2.98596363370294775391e-7},
           {4.72218311040946143575e-4, -3.86593533144030622115e-4, 1.62830955948823204128e-4, -4.67416135917802212326e-5, 1.02398770802928826794e-5, -1.81998700274760865416e-6, 2.72680328921045100516e-7},
           {4.35141531729462652418e-4, -3.55389524730664960878e-4, 1.49405066333831111408e-4, -4.28223293647605468136e-5, 9.36957600462598766031e-6, -1.66358197756162858002e-6, 2.49030232678897484620e-7},
           {4.01054728157990744274e-4, -3.26756520112932527002e-4, 1.37104273136633245545e-4, -3.92359874477409445817e-5, 8.57403564084922262560e-6, -1.52073752811329518652e-6, 2.27446700875389077906e-7},
           {3.69711725311340445779e-4, -3.00479195891898873908e-4, 1.25833046744817732927e-4, -3.59539992162989218566e-5, 7.84677638799742617503e-6, -1.39026907770485423982e-6, 2.07747998233915594203e-7},
           {3.40886953170421323680e-4, -2.76360502269232840948e-4, 1.15504056935377281403e-4, -3.29502529808260540261e-5, 7.18188449544314475405e-6, -1.27109619486077558476e-6, 1.89768460032701728595e-7},
           {3.14373698924701758337e-4, -2.54220095265091647948e-4, 1.06037462727497054107e-4, -3.02008977468451271769e-5, 6.57396232779649504691e-6, -1.16223338606016607303e-6, 1.73357064133552454753e-7},
           {2.89982509072762883236e-4, -2.33892904672679464214e-4, 9.73602642131115160289e-5, -2.76841459765448790419e-5, 6.01808302576427504404e-6, -1.06278170642662649997e-6, 1.58376130435318590592e-7},
           {2.67539728438490206040e-4, -2.15227825906779156101e-4, 8.94057109206304991347e-5, -2.53800936724545494550e-5, 5.50974917251921597123e-6, -9.71921115398553359016e-7, 1.44700136338447454916e-7},
           {2.46886164261907387670e-4, -1.98086524943631465002e-4, 8.21127617482443053140e-5, -2.32705562532853789924e-5, 5.04485510995910924726e-6, -8.88903510938490587964e-7, 1.32214637832765289187e-7},
           {2.27875864555779502306e-4, -1.82342346497743905322e-4, 7.54255919415212889396e-5, -2.13389188277732366338e-5, 4.61965258094591508327e-6, -8.13046381788440494349e-7, 1.20815286753949312427e-7},
           {2.10375000860664137549e-4, -1.67879316445711305973e-4, 6.92931429894171703248e-5, -1.95699995960558021594e-5, 4.23071940248673802974e-6, -7.43727022692008183371e-7, 1.10406935603346418634e-7},
           {1.94260846390063775810e-4, -1.54591230295342973869e-4, 6.36687116767920702068e-5, -1.79499252207932534291e-5, 3.87493090110690161561e-6, -6.80377262431997366997e-7, 1.00902822098484841548e-7},
           {1.79420841341014502841e-4, -1.42380820217090971885e-4, 5.85095748632322848731e-5, -1.64660171128792335497e-5, 3.54943386560209407895e-6, -6.22478659017429878827e-7, 9.22238263247203737137e-8},
           {1.65751737860477611807e-4, -1.31158993810116076629e-4, 5.37766468602785590518e-5, -1.51066876700867294892e-5, 3.25162279415293118293e-6, -5.69558120436739540335e-7, 8.42977939982405392281e-8},
           {1.53158817810325156199e-4, -1.20844138372928956737e-4, 4.94341665546831326300e-5, -1.38613455921686755590e-5, 2.97911823263319741815e-6, -5.21183913110354382807e-7, 7.70589199328397532040e-8},
           {1.41555177069053127713e-4, -1.11361484993520651874e-4, 4.54494116764430416077e-5, -1.27203094735293091447e-5, 2.72974701901741190834e-6, -4.76962023559000065573e-7, 7.04471863326730719811e-8},
           {1.30861070651628556144e-4, -1.02642527270902853540e-4, 4.17924378392523984682e-5, -1.16747289452768007029e-5, 2.50152426525322085237e-6, -4.36532841883823546382e-7, 6.44078510153262593905e-8},
           {1.21003313424676437393e-4, -9.46244899332637253017e-5, 3.84358401896630553682e-5, -1.07165127028766955450e-5, 2.29263692295415061207e-6, -3.99568138458128032437e-7, 5.88909811083033713285e-8},
           {1.11914731646701150138e-4, -8.72498430313744903486e-5, 3.53545356914370919113e-5, -9.83826281431058357924e-6, 2.10142879292027858932e-6, -3.65768307782989446480e-7, 5.38510281613464547936e-8},
           {1.03533660976030757639e-4, -8.04658577629790088643e-5, 3.25255642449587712307e-5, -9.03321475711588874990e-6, 1.92638685092820648547e-6, -3.34859855782825175312e-7, 4.92464409804180421950e-8},
           {9.58034869661367980429e-5, -7.42242003278757473284e-5, 2.99279069996389515543e-5, -8.29518268140593118931e-6, 1.76612877355647777218e-6, -3.06593108932714557638e-7, 4.50393128199360099299e-8},
           {8.86722244120819288104e-5, -6.84805605271812922177e-5, 2.75423203613520685927e-5, -7.61850944036781170125e-6, 1.61939155812758834552e-6, -2.80740125535579873603e-7, 4.11950598708944095681e-8},
           {8.20921322259676283480e-5, -6.31943121065166616909e-5, 2.53511843283341735118e-5, -6.99802097019492197851e-6, 1.48502114024334557632e-6, -2.57092791221269564025e-7, 3.76821282565101975116e-8},
           {7.60193608060231388723e-5, -5.83282021040064577980e-5, 2.33383639087668011132e-5, -6.42898463828179108281e-6, 1.36196292094882640762e-6, -2.35461082336605387107e-7, 3.44717269964406897041e-8},
           {7.04136291257914930398e-5, -5.38480667022462824870e-5, 2.14890824825051403692e-5, -5.90707121211146521801e-6, 1.24925312335642462757e-6, -2.15671482349655942616e-7, 3.15375846276362738416e-8},
           {6.52379290089187693176e-5, -4.97225713007870217760e-5, 1.97898060690149379796e-5, -5.42832013189050992822e-6, 1.14601090566363335057e-6, -1.97565537715694478524e-7, 2.88557273765415015071e-8},
           {6.04582542733271620199e-5, -4.59229727240498118062e-5, 1.82281375544146790387e-5, -4.98910779789910051351e-6, 1.05143116396831945851e-6, -1.80998540858153633502e-7, 2.64042769654702238103e-8},
           {5.60433526278727078742e-5, -4.24229016605952893556e-5, 1.67927200133540951673e-5, -4.58611860896503286300e-6, 9.64777964179768727482e-7, -1.65838329016017268717e-7, 2.41632663072239898711e-8},
           {5.19644983866115477600e-5, -3.91981635948539380312e-5, 1.54731483370051843020e-5, -4.21631851166038722255e-6, 8.85378547694153586382e-7, -1.51964188709147488320e-7, 2.21144714979155827213e-8},
           {4.81952842320352556121e-5, -3.62265566431737223241e-5, 1.42598884473427795822e-5, -3.87693084095833578092e-6, 8.12617860396088116895e-7, -1.39265856483826574279e-7, 2.02412586598816613535e-8},
           {4.47114304104661308974e-5, -3.34877048436246142586e-5, 1.31442034407350781273e-5, -3.56541425235748117030e-6, 7.45933559006180166827e-7, -1.27642607430293958787e-7, 1.85284443157760844891e-8},
           {4.14906098814856296245e-5, -3.09629055745759042013e-5, 1.21180860611869835937e-5, -3.27944256304806511869e-6, 6.84811452856794818691e-7, -1.17002423719560077384e-7, 1.69621680925717681475e-8},
           {3.85122880699485442882e-5, -2.86349898916845052468e-5, 1.11741969558672547559e-5, -3.01688633570971954012e-6, 6.28781342879883631764e-7, -1.07261236094910841656e-7, 1.55297766613030755258e-8},
           {3.57575759848613111496e-5, -2.64881946775634590147e-5, 1.03058082132497947909e-5, -2.77579605313181965114e-6, 5.77413222963899639656e-7, -9.83422318803027460038e-8, 1.42197179158994738227e-8},
           {3.32090955751270837056e-5, -2.45080455939155379284e-5, 9.50675172771428519177e-6, -2.55438674516036127353e-6, 5.30313811910760790402e-7, -9.01752236387848680035e-8, 1.30214444832547664562e-8},
           {3.08508562887560517990e-5, -2.26812499131174274611e-5, 8.77137197415151447476e-6, -2.35102394161398744272e-6, 4.87123387025215523710e-7, -8.26960731341635220863e-8, 1.19253257375285032967e-8},
           {2.86681418903994515560e-5, -2.09955983858530593296e-5, 8.09448281234004569256e-6, -2.16421083588031963444e-6, 4.47512892922077442994e-7, -7.58461657228948220165e-8, 1.09225675652992496074e-8},
           {2.66474066727164108162e-5, -1.94398753740862718215e-5, 7.47132797391034493361e-6, -1.99257655399695286438e-6, 4.11181301463720906789e-7, -6.95719307347929754404e-8, 1.00051391952325699759e-8},
           {2.47761802707849274909e-5, -1.80037765450377999484e-5, 6.89754491486928249770e-6, -1.83486543322585569254e-6, 3.77853200861114154925e-7, -6.38244037943417762093e-8, 9.16570646697945442639e-9},
           {2.30429803561249616764e-5, -1.66778334824433140929e-5, 6.36913174417688217517e-6, -1.68992722252392521522e-6, 3.47276593904824681136e-7, -5.85588273926285664414e-8, 8.39757096962097050341e-9},
           {2.14372325484647765462e-5, -1.54533446267211856790e-5, 5.88241696398041143015e-6, -1.55670812496807701804e-6, 3.19220887054556926160e-7, -5.37342863463017791082e-8, 7.69461453061073999725e-9},
           {1.99491969396529721440e-5, -1.43223120062308162712e-5, 5.43403178002996597404e-6, -1.43424260917556372315e-6, 2.93475053722089505588e-7, -4.93133750773327680697e-8, 7.05124858228344439323e-9},
           {1.85699006755569511428e-5, -1.32773832679740104912e-5, 5.02088476171756624764e-6, -1.32164592312891165162e-6, 2.69845956546794276407e-7, -4.52618939183243099346e-8, 6.46236797499949755385e-9},
           {1.72910760888131042007e-5, -1.23117985582649964505e-5, 4.64013865027421851668e-6, -1.21810724962408431320e-6, 2.48156814797869464415e-7, -4.15485718950107753021e-8, 5.92330884425216298034e-9},
           {1.61051039182859424381e-5, -1.14193418424187875267e-5, 4.28918913108678870246e-6, -1.12288344785966376085e-6, 2.28245804254475135584e-7, -3.81448136625831370876e-8, 5.42981017390859550664e-9},
           {1.50049611904024756965e-5, -1.05942962877000499897e-5, 3.96564540200494406629e-6, -1.03529333051902940182e-6, 2.09964778024597231110e-7, -3.50244684774987437382e-8, 4.97797872949632573095e-9},
           {1.39841733734720308728e-5, -9.83140336592634639975e-6, 3.66731238403121109949e-6, -9.54712430107709481388e-7, 1.93178097775197372299e-7, -3.21636192732806984830e-8, 4.56425706435880533327e-9},
           {1.30367704489715245647e-5, -9.12582536149497972262e-6, 3.39217443404575726010e-6, -8.80568212331734182593e-7, 1.77761565768729367784e-7, -2.95403900790930749616e-8, 4.18539432784128877841e-9},
           {1.21572465738370088460e-5, -8.47311099744352106723e-6, 3.13838043132266549895e-6, -8.12335697973941393976e-7, 1.63601448942307313279e-7, -2.71347701750722147506e-8, 3.83841962866117868185e-9},
           {1.13405230352966172907e-5, -7.86916391668071882272e-6, 2.90423012064728952057e-6, -7.49533458074909488924e-7, 1.50593587032916536532e-7, -2.49284535198421841187e-8, 3.52061772847493683241e-9},
           {1.05819142249287667510e-5, -7.31021377793800112291e-6, 2.68816160493675745317e-6, -6.91719950281762896016e-7, 1.38642577451611054592e-7, -2.29046921145687930656e-8, 3.22950686056729992263e-9},
           {9.87709638163502584476e-6, -6.79278974647584391129e-6, 2.48873988948197546244e-6, -6.38490167017371076255e-7, 1.27661030247633679116e-7, -2.10481620854235304477e-8, 2.96281848673154594831e-9},
           {9.22207887426340903092e-6, -6.31369617830119613699e-6, 2.30464638834607739347e-6, -5.89472568667924490417e-7, 1.17568887085264889987e-7, -1.93448413734516361684e-8, 2.71847882194000780557e-9},
           {8.61317781387381766942e-6, -5.86999031376487120747e-6, 2.13466931114109517999e-6, -5.44326277309978217453e-7, 1.08292798686919233145e-7, -1.77818980184903129248e-8, 2.49459197146583275624e-9},
           {8.04699180325663765239e-6, -5.45896181205077509450e-6, 1.97769485542542886760e-6, -5.02738508618349087766e-7, 9.97655556800876058122e-8, -1.63475881128055346875e-8, 2.28942453884115976941e-9},
           {7.52037964743856273932e-6, -5.07811397236938852416e-6, 1.83269913637754893075e-6, -4.64422221531545026308e-7, 9.19255682272859058411e-8, -1.50311625812748672446e-8, 2.10139157554274670528e-9},
           {7.03043986366502667007e-6, -4.72514650074216051951e-6, 1.69874079125937333416e-6, -4.29113967017950374833e-7, 8.47163902209746311940e-8, -1.38227820189373446540e-8, 1.92904375469219954602e-9},
           {6.57449184285332233484e-6, -4.39793969321761775025e-6, 1.57495420153421134181e-6, -3.96571918898587428362e-7, 7.80862841928772766087e-8, -1.27134388841953945819e-8, 1.77105566144325334361e-9},
           {6.15005852687172088864e-6, -4.09453991729071207622e-6, 1.46054328039325549465e-6, -3.66574071154427000601e-7, 7.19878234223680448180e-8, -1.16948864074669908420e-8, 1.62621510219309722083e-9},
           {5.75485047731552864831e-6, -3.81314628329274881246e-6, 1.35477577791155191608e-6, -3.38916587490248668051e-7, 6.63775280344627487232e-8, -1.07595736311763593320e-8, 1.49341334338046476056e-9},
           {5.38675122181039518537e-6, -3.55209840666073502384e-6, 1.25697806013591006304e-6, -3.13412290154170101945e-7, 6.12155321570181304823e-8, -9.90058604811893008974e-9, 1.37163619849482416863e-9},
           {5.04380377335804243701e-6, -3.30986517035595408849e-6, 1.16653032213687296130e-6, -2.89889276132415844660e-7, 5.64652794613886692787e-8, -9.11159135187880219070e-9, 1.25995588908652599612e-9},
           {4.72419822692456244301e-6, -3.08503440434918083432e-6, 1.08286219846520079379e-6, -2.68189649862015972744e-7, 5.20932446431518525102e-8, -8.38678985551345584478e-9, 1.15752361209902219616e-9},
           {4.42626034542466326865e-6, -2.87630340608570508437e-6, 1.00544873756825324633e-6, -2.48168362538424770085e-7, 4.80686786115599204816e-8, -7.72086917351412986231e-9, 1.06356275179774558493e-9},
           {4.14844105453925506932e-6, -2.68247023224329597926e-6, 9.33806709568632323802e-7, -2.29692148948293456917e-7, 4.43633753498892021112e-8, -7.10896279743235847194e-9, 9.77362679997251661481e-10}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson