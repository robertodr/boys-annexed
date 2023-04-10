/* This file was autogenerated on 2023-04-10T15:05 DO NOT EDIT! */

#pragma once

#include <array>

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 13.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<13>()
{
    // clang-format off
  return {{{3.70370370370370370370e-2, -3.44827586206896551724e-2, 1.61290322580645161290e-2, -5.05050505050505050505e-3, 1.19047619047619047619e-3, -2.25225225225225225225e-4, 3.56125356125356125356e-5},
           {3.37451178229993195568e-2, -3.14038159251098444869e-2, 1.46831094805645982759e-2, -4.59614146587131525146e-3, 1.08304004303351074021e-3, -2.04842421341230109281e-4, 3.23814772159870711463e-5},
           {3.07470774713549353796e-2, -2.86008466215034173885e-2, 1.33672486820216110393e-2, -4.18277716973247323806e-3, 9.85325680109149556335e-4, -1.86308712785496498375e-4, 2.94442072556340937728e-5},
           {2.80165792173849501068e-2, -2.60490303127930145077e-2, 1.21697153243997147759e-2, -3.80670261974012501954e-3, 8.96451251862980923873e-4, -1.69455984488696995236e-4, 2.67739593705943795452e-5},
           {2.55296546137099185370e-2, -2.37257856681605192040e-2, 1.10798364631348490728e-2, -3.46454472473364024493e-3, 8.15615076126119734057e-4, -1.54131436565639221795e-4, 2.43464102704841171701e-5},
           {2.32644899110134931175e-2, -2.16105678847309627677e-2, 1.00879044722822636126e-2, -3.15323626147782270016e-3, 7.42088335832315204588e-4, -1.40196186554262120774e-4, 2.21394563726256160844e-5},
           {2.12012317597159542781e-2, -1.96846845152536704948e-2, 9.18508952013753071641e-3, -2.86998807701394683528e-3, 6.75208442872745153752e-4, -1.27523999438051814518e-4, 2.01330108922725628138e-5},
           {1.93218104807822699254e-2, -1.79311279926512683047e-2, 8.36335999838472288204e-3, -2.61226382243372580796e-3, 6.14373007454410658898e-4, -1.16000133751758570714e-4, 1.83088195103160074361e-5},
           {1.76097793130413210472e-2, -1.63344233343087792687e-2, 7.61541018054156127609e-3, -2.37775698712032901999e-3, 5.59034357619882737132e-4, -1.05520293143124743642e-4, 1.66502929151494601134e-5},
           {1.60501681890886857551e-2, -1.48804896471085561921e-2, 6.93459445154137425760e-3, -2.16437002360797201006e-3, 5.08694558652300924881e-4, -9.59896737376557043905e-5, 1.51423546717532025156e-5},
           {1.46293507233682066465e-2, -1.35565141797495940928e-2, 6.31486751032396976396e-3, -1.97019537238697986514e-3, 4.62900886691244546969e-4, -8.73220985383460365998e-5, 1.37713030130653219066e-5},
           {1.33349232155785882292e-2, -1.23508377829737760190e-2, 5.75073000185452251620e-3, -1.79349821340157454704e-3, 4.21241715065003670057e-4, -7.94392308959222917574e-5, 1.25246852776612315866e-5},
           {1.21555945812224803354e-2, -1.12528507420020466162e-2, 5.23717908455359135167e-3, -1.63270078681392863049e-3, 3.83342775641593383213e-4, -7.22698598150567405110e-5, 1.13911838348668068282e-5},
           {1.10810862198986136151e-2, -1.02528980397115308115e-2, 4.76966348415803174932e-3, -1.48636813998624596651e-3, 3.48863760949745635616e-4, -6.57492505249159946449e-5, 1.03605124447726566642e-5},
           {1.01020409217344574876e-2, -9.34219319472282157257e-3, 4.34404262595631130567e-3, -1.35319517069552950478e-3, 3.17495235953994456562e-4, -5.98185543444906893027e-5, 9.42332209718858771136e-6},
           {9.20993999398629463460e-3, -8.51273989640006362167e-3, 3.95654947452867174207e-3, -1.23199484846377030692e-3, 2.88955831213843768006e-4, -5.44242724199973126908e-5, 8.57111546127697982909e-6},
           {8.39702786403993817199e-3, -7.75726072950718055499e-3, 3.60375674391451034789e-3, -1.12168750666897273742e-3, 2.62989691742203921844e-4, -4.95177684083227705983e-5, 7.79616915724728769732e-6},
           {7.65624348250506549241e-3, -7.06913234555946092680e-3, 3.28254617183673267841e-3, -1.02129110789915913439e-3, 2.39364158226702323411e-4, -4.50548256316063354897e-5, 7.09146313382252890291e-6},
           {6.98115791142377758310e-3, -6.44232649634875632200e-3, 2.99008057951770118282e-3, -9.29912393912547081617e-4, 2.17867659410854973279e-4, -4.09952446378048830384e-5, 6.45061650087470281063e-6},
           {6.36591753836803202898e-3, -5.87135639823733318510e-3, 2.72377846397995867014e-3, -8.46738839654494028497e-4, 1.98307796370119152063e-4, -3.73024774742655661187e-5, 5.86782922628075319263e-6},
           {5.80519240788870093117e-3, -5.35122794409557869105e-3, 2.48129089276989331370e-3, -7.71031338130030632211e-4, 1.80509601178473135137e-4, -3.39432953193849777304e-5, 5.33782916022800841557e-6},
           {5.29412920786237646553e-3, -4.87739532364340772769e-3, 2.26048049198535310617e-3, -7.02117549607542135170e-4, 1.64313954060629920486e-4, -3.08874864244985917355e-5, 4.85582389940208625836e-6},
           {4.82830849017977514759e-3, -4.44572065284548102737e-3, 2.05940233752103726839e-3, -6.39385854695851329685e-4, 1.49576144578075185014e-4, -2.81075815970631362353e-5, 4.41745704817756150196e-6},
           {4.40370574331284091174e-3, -4.05243724927022673510e-3, 1.87628657674270634022e-3, -5.82279856349425181672e-4, 1.36164563717233163881e-4, -2.55786047095510976569e-5, 4.01876847451787017643e-6},
           {4.01665596893232938747e-3, -3.69411622328342636318e-3, 1.70952262352155642984e-3, -5.30293380865418670714e-4, 1.23959514947399808589e-4, -2.32778459486170249092e-5, 3.65615819515253401823e-6},
           {3.66382144623872505612e-3, -3.36763608490936927273e-3, 1.55764478384729800585e-3, -4.82965932487791865628e-4, 1.12852133405700504531e-4, -2.11846557281495022991e-5, 3.32635355807918182432e-6},
           {3.34216239630252039822e-3, -3.07015509342965830022e-3, 1.41931918222367977125e-3, -4.39878560369689987006e-4, 1.02743403356288584430e-4, -1.92802573797253189235e-5, 3.02637942084577874188e-6},
           {3.04891028474518635885e-3, -2.79908610155006273845e-3, 1.29333187085204780360e-3, -4.00650100403619291532e-4, 9.35432649704237307317e-5, -1.75475769064911048408e-5, 2.75353105068693965480e-6},
           {2.78154352476583108592e-3, -2.55207366847491666853e-3, 1.17857801433523937985e-3, -3.64933757844254267298e-4, 8.51698022912534082919e-5, -1.59710882432067955610e-5, 2.50534949767368114246e-6},
           {2.53776536404513777118e-3, -2.32697323669164759380e-3, 1.07405205238367360693e-3, -3.32413999752315862755e-4, 7.75485049895932295003e-5, -1.45366726075447636645e-5, 2.27959921482078219055e-6},
           {2.31548375863304279482e-3, -2.12183218587137832969e-3, 9.78838751867174960281e-4, -3.02803729108359984817e-4, 7.06115971916069622974e-5, -1.32314906570638567140e-5, 2.07424771979158359579e-6},
           {2.11279305472688704731e-3, -1.93487259420454865352e-3, 8.92105067610819745319e-4, -2.75841715008416166546e-4, 6.42974272722356566395e-5, -1.20438662837637168652e-5, 1.88744711163825227516e-6},
           {1.92795731543389829363e-3, -1.76447555286704700628e-3, 8.13092738654547534868e-4, -2.51290255682702753839e-4, 5.85499130651627279487e-5, -1.09631809848574649717e-5, 1.71751727309049292122e-6},
           {1.75939514433219590384e-3, -1.60916689329232507483e-3, 7.41111553351324315285e-4, -2.28933053195508882157e-4, 5.33180374461540945545e-5, -9.97977784536551815273e-6, 1.56293060441560598061e-6},
           {1.60566587103136882049e-3, -1.46760419963543119019e-3, 6.75533222728049733384e-4, -2.08573280608163207951e-4, 4.85553897064355908120e-5, -9.08487425622533431027e-6, 1.42229814896128665651e-6},
           {1.46545697610809318862e-3, -1.33856499037143740656e-3, 6.15785807032374183333e-4, -1.90031824135446339484e-4, 4.42197485505947980177e-5, -8.27048257164426621826e-6, 1.29435698329009900945e-6},
           {1.33757264386430083092e-3, -1.22093596347827939609e-3, 5.61348645387332477116e-4, -1.73145684414863443518e-4, 4.02727029331623239002e-5, -7.52933798213407005576e-6, 1.17795875643957651771e-6},
           {1.22092334142513431888e-3, -1.11370320920801068286e-3, 5.11747743019794676042e-4, -1.57766522452430812181e-4, 3.66793072930290140008e-5, -6.85483294572638535386e-6, 1.07205927340199044384e-6},
           {1.11451633185228162273e-3, -1.01594330313763787574e-3, 4.66551574659601424842e-4, -1.43759337121266100954e-4, 3.34077680583614997816e-5, -6.24095757988827795339e-6, 9.75709027510672627687e-7},
           {1.01744703727796054898e-3, -9.26815200089818624386e-4, 4.25367266461563488765e-4, -1.31001262282320294359e-4, 3.04291585795677100277e-5, -5.68224547118860192328e-6, 8.88044595134088910868e-7},
           {9.28891175640958314565e-4, -8.45552856696465461074e-4, 3.87837122216459155143e-4, -1.19380472680964938147e-4, 2.77171599067547169140e-5, -5.17372440931230701770e-6, 8.08280813995224345823e-7},
           {8.48097601497084692401e-4, -7.71458516909763404763e-4, 3.53635462720848221634e-4, -1.08795188758767613331e-4, 2.52478250633880265156e-5, -4.71087159703731716079e-6, 7.35703673625417139223e-7},
           {7.74381787644281270079e-4, -7.03896600704512253113e-4, 3.22465749997212090990e-4, -9.91527714156639067289e-5, 2.29993646816654956485e-5, -4.28957292869179174260e-6, 6.69663852995017093520e-7},
           {7.07119890003898464090e-4, -6.42288141616783052508e-4, 2.94057970621266540935e-4, -9.03688985720465089244e-5, 2.09519520594199921255e-5, -3.90608596677506805892e-6, 6.09570846298510897975e-7},
           {6.45743343385687344066e-4, -5.86105723675582200756e-4, 2.68166254745650538879e-4, -8.23668161204904191071e-5, 1.90875458749463348170e-5, -3.55700628019553407319e-6, 5.54887623263847025223e-7},
           {5.89733940481515311015e-4, -5.34868872750956549089e-4, 2.44566709529746252258e-4, -7.50766565296659025772e-5, 1.73897289566275151801e-5, -3.23923683826371084843e-6, 5.05125775254408725332e-7},
           {5.38619350724140865533e-4, -4.88139861404154125520e-4, 2.23055447613417656303e-4, -6.84348189746070595689e-5, 1.58435616500842906082e-5, -2.94996018246125041990e-6, 4.59841102882603454794e-7},
           {4.91969039551192269255e-4, -4.45519890019826353671e-4, 2.03446793025486210920e-4, -6.23834054234808813933e-5, 1.44354484581267467460e-5, -2.68661312334276892240e-6, 4.18629604897468971530e-7},
           {4.49390552165836415326e-4, -4.06645610360161142462e-4, 1.85571648511699788080e-4, -5.68697076164123246390e-5, 1.31530167492604302155e-5, -2.44686373295028326564e-6, 3.81123831782294630446e-7},
           {4.10526129116432476982e-4, -3.71185960736665899844e-4, 1.69276009716273491109e-4, -5.18457403313708629000e-5, 1.19850064399960935758e-5, -2.22859042404112951360e-6, 3.46989570835921980127e-7},
           {3.75049623956730541954e-4, -3.38839284774624575989e-4, 1.54419612968931756593e-4, -4.72678167498048529055e-5, 1.09211696557328498083e-5, -2.02986292644176264115e-6, 3.15922832543881803026e-7},
           {3.42663695922283608342e-4, -3.09330708273138240121e-4, 1.40874704627713795337e-4, -4.30961621144216813642e-5, 9.95217946544055086363e-6, -1.84892498811635141400e-6, 2.87647110800783264338e-7},
           {3.13097252991668929204e-4, -2.82409750962911226205e-4, 1.28524921017482743855e-4, -3.92945622167170701268e-5, 9.06954686758491523111e-6, -1.68417864423921834515e-6, 2.61910892048790527629e-7},
           {2.86103122914681696348e-4, -2.57848152055299641335e-4, 1.17264268994974590735e-4, -3.58300435656948892656e-5, 8.26554527947074907032e-6, -1.53416991182798706794e-6, 2.38485390671649977518e-7},
           {2.61455931803695627771e-4, -2.35437890378435222324e-4, 1.06996198072312054934e-4, -3.26725823745473172954e-5, 7.53314185010682092292e-6, -1.39757578046068532801e-6, 2.17162490050509448143e-7},
           {2.38950171716919066269e-4, -2.14989381626612212871e-4, 9.76327558503488118682e-5, -2.97948397614779623554e-5, 6.86593497844150175985e-6, -1.27319238138392566615e-6, 1.97752870565725935884e-7},
           {2.18398440329713031723e-4, -1.96329836823152463054e-4, 8.90938192584141966032e-5, -2.71719207967073770054e-5, 6.25809747494463083987e-6, -1.15992422802868001697e-6, 1.80084307535267265792e-7},
           {1.99629837307395424520e-4, -1.79301767528806173680e-4, 8.13063947747409704195e-5, -2.47811552421440693585e-5, 5.70432485553084467111e-6, -1.05677443068320489879e-6, 1.64000123630865489325e-7},
           {1.82488503373595429159e-4, -1.63761624630280122963e-4, 7.42039814182024102217e-5, -2.26018980251827934184e-5, 5.19978830319815339353e-6, -9.62835796918550011349e-7, 1.49357781722046756853e-7},
           {1.66832289324582498614e-4, -1.49578558728419226979e-4, 6.77259908625328719677e-5, -2.06153476653765004370e-5, 4.74009187491583966153e-6, -8.77282737401781721006e-7, 1.36027605378475657462e-7},
           {1.52531543383293080336e-4, -1.36633291223545242895e-4, 6.18172195340184135477e-5, -1.88043810339273732032e-5, 4.32123356962239338309e-6, -7.99363904039194496987e-7, 1.23891615424496876147e-7},
           {1.39468006327219930457e-4, -1.24817086176157756834e-4, 5.64273680173262625411e-5, -1.71534029725193194369e-5, 3.93956990803624204731e-6, -7.28395494033216658964e-7, 1.12842471997002221825e-7},
           {1.27533804771195173220e-4, -1.14030813913429374638e-4, 5.15106035158752886892e-5, -1.56482094312973369027e-5, 3.59178370665701554733e-6, -6.63755159473217691388e-7, 1.02782512518519336178e-7},
           {1.16630533847826404776e-4, -1.04184098163682170080e-4, 4.70251614967407151314e-5, -1.42758629069974464027e-5, 3.27485475713153645810e-6, -6.04876467567178128024e-7, 9.36228768705195338834e-8},
           {1.06668421312618868862e-4, -9.51945392395910056733e-5, 4.29329829989919670163e-5, -1.30245790724421538339e-5, 2.98603314833854662375e-6, -5.51243861608355561374e-7, 8.52827118453943559971e-8},
           {9.75655658146128601689e-5, -8.69870064628434973243e-5, 3.91993844017261367169e-5, -1.18836235888389501797e-5, 2.72281499234785204333e-6, -5.02388077304239411454e-7, 7.76884476766283089205e-8},
           {8.92472427230409879337e-5, -7.94929936344094156993e-5, 3.57927567367413159653e-5, -1.08432181834603338195e-5, 2.48292033704937943291e-6, -4.57881973215641755344e-7, 7.07731401020145697688e-8},
           {8.16452714918396789574e-5, -7.26500319109090863384e-5, 3.26842918933907997342e-5, -9.89445515816840545447e-6, 2.26427306792243274354e-6, -4.17336737799349358814e-7, 6.44758720103255566236e-8},
           {7.46974390820915880003e-5, -6.64011549537986699209e-5, 2.98477333020349295276e-5, -9.02921956962443949895e-6, 2.06498261930400634856e-6, -3.80398438952545449281e-7, 5.87412092631219575511e-8},
           {6.83469744524087507694e-5, -6.06944116787331888795e-5, 2.72591488998095704402e-5, -8.24011839057578430469e-6, 1.88332733177985092265e-6, -3.46744885052268264499e-7, 5.35187057753172877169e-8},
           {6.25420695732425242427e-5, -5.54824223516446195540e-5, 2.48967243801132287484e-5, -7.52041602395829434903e-6, 1.71773930711076951803e-6, -3.16082769296739935346e-7, 4.87624533852184006661e-8},
           {5.72354428270800146450e-5, -5.07219741595246105558e-5, 2.27405749070529117557e-5, -6.86397559825551050361e-6, 1.56679062555363805236e-6, -2.88145071713113130540e-7, 4.44306724511258870382e-8},
           {5.23839410260588234482e-5, -4.63736527310349037965e-5, 2.07725736396988324122e-5, -6.26520552412779851742e-6, 1.42918080266382547890e-6, -2.62688695521370122931e-7, 4.04853394809218225549e-8},
           {4.79481766149753664335e-5, -4.24015063979784237566e-5, 1.89761955598467070344e-5, -5.71901083923111277000e-6, 1.30372537378399033553e-6, -2.39492316657934608198e-7, 3.68918484367750554610e-8},
           {4.38921969339587365422e-5, -3.87727402761694461809e-5, 1.73363752324099949548e-5, -5.22074891080902447795e-6, 1.18934550453437158174e-6, -2.18354427184287063875e-7, 3.36187026622237410648e-8},
           {4.01831826939390223080e-5, -3.54574375059009901687e-5, 1.58393772507763351065e-5, -4.76618910444770907506e-6, 1.08505853481335378465e-6, -1.99091555052988019463e-7, 3.06372346562433023427e-8},
           {3.67911730719257490342e-5, -3.24283052303539265143e-5, 1.44726782315673755552e-5, -4.35147606268159677946e-6, 9.89969372177468134456e-7, -1.81536644291917568964e-7, 2.79213511710067720649e-8},
           {3.36888150642695831383e-5, -2.96604431070439741478e-5, 1.32248593252426494725e-5, -3.97309626924505005961e-6, 9.03262658072830602624e-7, -1.65537581111675257503e-7, 2.54473013391988133057e-8},
           {3.08511349465523455654e-5, -2.71311323446873415731e-5, 1.20855083017994213246e-5, -3.62784760397193368339e-6, 8.24195637304091535535e-7, -1.50955852754084274219e-7, 2.31934657450447977326e-8},
           {2.82553298803926483587e-5, -2.48196434374372937282e-5, 1.10451303552718124794e-5, -3.31281161991307925577e-6, 7.52091667414813546267e-7, -1.37665327093539413954e-7, 2.11401645425652854835e-8},
           {2.58805778819587122669e-5, -2.27070609318981154719e-5, 1.00950668475790578072e-5, -3.02532829841027101493e-6, 6.86334310371661483428e-7, -1.25551142088375019770e-7, 1.92694828966900521050e-8},
           {2.37078645258833380582e-5, -2.07761237111098806616e-5, 9.22742128220112698301e-6, -2.76297305985184817406e-6, 6.26361954145565364136e-7, -1.14508695166360475583e-7, 1.75651121793355871719e-8},
           {2.17198249029784372908e-5, -1.90110794151385597141e-5, 8.43499186179490033485e-6, -2.52353582783677210288e-6, 5.71662916513046917905e-7, -1.04442723525820085935e-7, 1.60122054947912857435e-8},
           {1.99005994819220730931e-5, -1.73975517412012730778e-5, 7.71121004177355312157e-6, -2.30500196267073540431e-6, 5.21770987702938163853e-7, -9.52664671498559581335e-8, 1.45972462380693902541e-8},
           {1.82357026450976983866e-5, -1.59224194784992191358e-5, 7.05008454457221596883e-6, -2.10553489667287996282e-6, 4.76261372426535674577e-7, -8.69009070731343584651e-8, 1.33079285074293535991e-8},
           {1.67119027780591903958e-5, -1.45737062351147964392e-5, 6.44615034728477818374e-6, -1.92346031883342592723e-6, 4.34746995388165610034e-7, -7.92740721153982289794e-8, 1.21330482991602386624e-8},
           {1.53171128916352752662e-5, -1.33404799073587807792e-5, 5.89442219900648870206e-6, -1.75725177006609276728e-6, 3.96875137610234648905e-7, -7.23204079094067419965e-8, 1.10624045098663075586e-8},
           {1.40402908463472090743e-5, -1.22127610266516724839e-5, 5.39035226394433695575e-6, -1.60551752276736860230e-6, 3.62324373851301052512e-7, -6.59802026089354309038e-8, 1.00867088598369760337e-8},
           {1.28713483313893005752e-5, -1.11814391961382134257e-5, 4.92979152251504617509e-6, -1.46698862973914978749e-6, 3.30801784074036433879e-7, -6.01990641698446535297e-8, 9.19750393139453972510e-9},
           {1.18010678256363301557e-5, -1.02381968994476208612e-5, 4.50895459556089006164e-6, -1.34050803785357495703e-6, 3.02040414356260670942e-7, -5.49274445586355684262e-8, 8.38708858913300507669e-9},
           {1.08210268366541844781e-5, -9.37544002794343174262e-6, 4.12438768676884023098e-6, -1.22502067123135947173e-6, 2.75796964854462663358e-7, -5.01202066625311529912e-8, 7.64845011535161978191e-9},
           {9.92352877609962222684e-6, -8.58623453102052197660e-6, 3.77293936564502266411e-6, -1.11956439725160326523e-6, 2.51849684445286319341e-7, -4.57362300567418311264e-8, 6.97520245435113920094e-9},
           {9.10153988674737874785e-6, -7.86424864701545918791e-6, 3.45173393821612765328e-6, -1.02326179648827078820e-6, 2.29996453504489957127e-7, -4.17380521316470547350e-8, 6.36153001414689287692e-9},
           {8.34863168817515684109e-6, -7.20370022056744993268e-6, 3.15814717522261679159e-6, -9.35312664745766509909e-7, 2.10053037951359834957e-7, -3.80915413982829556452e-8, 5.80213652405925629146e-9},
           {7.65892845532101282748e-6, -6.59930865622520713406e-6, 2.88978418813557151877e-6, -8.54987181806488814896e-7, 1.91851499204457499785e-7, -3.47656000776200147613e-8, 5.29219849202122500824e-9},
           {7.02705928711542797296e-6, -6.04625109812709844482e-6, 2.64445926205221330807e-6, -7.81619687364346149862e-7, 1.75238746075523658018e-7, -3.17318933402360071395e-8, 4.82732284670658402299e-9},
           {6.44811436155621354592e-6, -5.54012246203973269214e-6, 2.42017747157024274457e-6, -7.14603009952257854583e-7, 1.60075215884748513399e-7, -2.89646028004920772439e-8, 4.40350838710430112356e-9},
           {5.91760500927993227425e-6, -5.07689897924407957931e-6, 2.21511792125915552820e-6, -6.53383299526155844179e-7, 1.46233673223702290796e-7, -2.64402020853465719663e-8, 4.01711069628548529497e-9},
           {5.43142727019891745685e-6, -4.65290494199963777555e-6, 2.02761846647478710133e-6, -5.97455318786215042770e-7, 1.33598115832254839388e-7, -2.41372524944371433097e-8, 3.66481020713740023691e-9},
           {4.98582862740129324801e-6, -4.26478236786155734584e-6, 1.85616178312649047585e-6, -5.46358152337258023054e-7, 1.22062778002106373654e-7, -2.20362169467984885219e-8, 3.34358313605563399463e-9},
           {4.57737763950997682109e-6, -3.90946332521418864566e-6, 1.69936266671814701199e-6, -4.99671296450329106122e-7, 1.11531222780582344886e-7, -2.01192905721681348589e-8, 3.05067502624589377417e-9},
           {4.20293621729984924858e-6, -3.58414468523735463217e-6, 1.55595645164806629235e-6, -4.57011095518801157749e-7, 1.01915515031809407576e-7, -1.83702464527303892280e-8, 2.78357666562303858884e-9},
           {3.85963431279368365915e-6, -3.28626508633833965467e-6, 1.42478845146285568242e-6, -4.18027494334719740279e-7, 9.31354681253005219258e-8, -1.67742951556883448547e-8, 2.54000216551803296812e-9},
           {3.54484680949116920715e-6, -3.01348391604572762929e-6, 1.30480432960210036489e-6, -3.82401078071283357195e-7, 8.51179576707008421699e-8, -1.53179568194454260736e-8, 2.31786900570510280908e-9},
           {3.25617242100866563772e-6, -2.76366213263604865093e-6, 1.19504131822214492785e-6, -3.49840374369942322675e-7, 7.77962963077812325267e-8, -1.39889446675208468552e-8, 2.11527986881599538405e-9},
           {2.99141442238106220012e-6, -2.53484476450195429434e-6, 1.09462021001926249347e-6, -3.20079394217830315105e-7, 7.11096640979815866120e-8, -1.27760589256177987597e-8, 1.93050610317429545033e-9},
           {2.74856305374825530023e-6, -2.32524493960845579871e-6, 1.00273805464956513517e-6, -2.92875390383407100115e-7, 6.50025895526944453731e-8, -1.16690902094181071626e-8, 1.76197266760434491428e-9},
           {2.52577945025082362725e-6, -2.13322931044671287764e-6, 9.18661497423879823683e-7, -2.68006814073737830435e-7, 5.94244767784023767966e-8, -1.06587315345192181999e-8, 1.60824442497745972646e-9},
           {2.32138096481419634021e-6, -1.95730475179680544134e-6, 8.41720703493866747070e-7, -2.45271452202526317087e-7, 5.43291746237034650003e-8, -9.73649817621086985936e-9, 1.46801366327185661148e-9},
           {2.13382776221883765686e-6, -1.79610621945539948523e-6, 7.71303815789579655138e-7, -2.24484729229151460566e-7, 4.96745840817871980464e-8, -8.89465467619277782757e-9, 1.34008873385034377157e-9},
           {1.96171057353666432132e-6, -1.64838566796563488177e-6, 7.06851899562668806176e-7, -2.05478158959389961328e-7, 4.54223005373356501268e-8, -8.12614835648331218420e-9, 1.22338370659974107316e-9},
           {1.80373950975298417523e-6, -1.51300193439077757486e-6, 6.47854330573811463505e-7, -1.88097933000908220884e-7, 4.15372877521105429459e-8, -7.42454875822729510599e-9, 1.11690895061773320722e-9},
           {1.65873384227248143789e-6, -1.38891150337838365990e-6, 5.93844587774372759188e-7, -1.72203633752454429717e-7, 3.79875807613555588952e-8, -6.78399247539338913204e-9, 1.01976255735772583493e-9},
           {1.52561266610344733659e-6, -1.27516007623914228498e-6, 5.44396414804129291953e-7, -1.57667060885453763718e-7, 3.47440151060681372290e-8, -6.19913290092505259101e-9, 9.31122530624307832284e-10},
           {1.40338636889603896721e-6, -1.17087487357902991959e-6, 4.99120317789489152269e-7, -1.44371161259920680297e-7, 3.17799800564201674030e-8, -5.66509444619947245572e-9, 8.50239674618327752405e-10},
           {1.29114883574116317278e-6, -1.07525760723393457466e-6, 4.57660369807677889134e-7, -1.32209053111921053939e-7, 2.90711936911765271959e-8, -5.17743083404251783903e-9, 7.76431117422575316081e-10},
           {1.18807032577427169018e-6, -9.87578062916273355091e-7, 4.19691295006985329113e-7, -1.21083136165124139803e-7, 2.65954978887334120885e-8, -4.73208710139664178206e-9, 7.09074412952183320656e-10},
           {1.09339096222545626288e-6, -9.07168240142298740368e-7, 3.84915807764297540197e-7, -1.10904280061459435068e-7, 2.43326714590659182726e-8, -4.32536498036247374730e-9, 6.47602169518745871049e-10},
           {1.00641478266161474108e-6, -8.33417000711295895209e-7, 3.53062184439630528693e-7, -1.01591084182062624780e-7, 2.22642598039748676848e-8, -3.95389135602466772940e-9, 5.91497157819708592929e-10},
           {9.26504300821695517303e-7, -7.65765181294376821149e-7, 3.23882047272212380951e-7, -9.30692025455010261874e-8, 2.03734196369565450588e-8, -3.61458952649295127878e-9, 5.40287855406691993504e-10},
           {8.53075535691882996781e-7, -7.03701129598021143327e-7, 2.97148341771130643651e-7, -8.52707280311232618348e-8, 1.86447774250591299834e-8, -3.30465301518101322360e-9, 4.93544388546027049313e-10}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson
