/* This file was autogenerated on 2023-02-17T18:31 DO NOT EDIT! */

#pragma once

#include <array>

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 3.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<3>()
{
    // clang-format off
  return {{{1.42857142857142857143e-1, -1.11111111111111111111e-1, 4.54545454545454545455e-2, -1.28205128205128205128e-2, 2.77777777777777777778e-3, -4.90196078431372549020e-4, 7.30994152046783625731e-5},
           {1.32188029635738946155e-1, -1.02393947071065319343e-1, 4.17702640090707386089e-2, -1.17569918029972811380e-2, 2.54332137454756470121e-3, -4.48261533381821115300e-4, 6.67785421038581716077e-5},
           {1.22354830492368116257e-1, -9.43826509214874820319e-2, 3.83913815192567370316e-2, -1.07831834773609927525e-2, 2.32891230793495730353e-3, -4.09951620387559066087e-4, 6.10088628911061389313e-5},
           {1.13289924883879677964e-1, -8.70187558423999030222e-2, 3.52921515832344198649e-2, -9.89142059706649146023e-3, 2.13281846454642419822e-3, -3.74950368819374868327e-4, 5.57419715504788891645e-5},
           {1.04931288982249154573e-1, -8.02487210501310610500e-2, 3.24490271347126837953e-2, -9.07469811000828456560e-3, 1.95345867421910755757e-3, -3.42969548783743805476e-4, 5.09337386861078347659e-5},
           {9.72220244169301472947e-2, -7.40235112058776345556e-2, 2.98404705701326641853e-2, -8.32661547171420837743e-3, 1.78938946171145634757e-3, -3.13746220862424975324e-4, 4.65439317315465760040e-5},
           {9.01099272340076251631e-2, -6.82982121200224334689e-2, 2.74467804109064829332e-2, -7.64132402026613481022e-3, 1.63929296828930885256e-3, -2.87040503403643764910e-4, 4.25358690386653826585e-5},
           {8.35470936029810568035e-2, -6.30316795924698997089e-2, 2.52499330502926888631e-2, -7.01347896607495795152e-3, 1.50196593935825141106e-3, -2.62633537961673110307e-4, 3.88761048119082828784e-5},
           {7.74895591039117676013e-2, -5.81862185063504525062e-2, 2.32334382624789018146e-2, -6.43819558930356326820e-3, 1.37630968355354995659e-3, -2.40325635219043354544e-4, 3.55341421264122108380e-5},
           {7.18969687031073972916e-2, -5.37272895450847942644e-2, 2.13822072681011041140e-2, -5.91100927385418244142e-3, 1.26132091713025565674e-3, -2.19934585306911633412e-4, 3.24821715165899847690e-5},
           {6.67322747768222673814e-2, -4.96232411331567410673e-2, 1.96824322567420821606e-2, -5.42783903974028772432e-3, 1.15608341517291842056e-3, -2.01294117878368091857e-4, 2.96948328475198589517e-5},
           {6.19614607717532961395e-2, -4.58450644109970259499e-2, 1.81214763638394664447e-2, -4.98495426563550208393e-3, 1.05976039813427324807e-3, -1.84252498599465165457e-4, 2.71489983868871792268e-5},
           {5.75532883003465958738e-2, -4.23661692459266908672e-2, 1.66877731877371135449e-2, -4.57894432069544474878e-3, 9.71587588577128109454e-4, -1.68671249915152901685e-4, 2.48235751821237174062e-5},
           {5.34790656598666883093e-2, -3.91621794557900845812e-2, 1.53707350130958108475e-2, -4.20669084962149112533e-3, 8.90866878789482513276e-4, -1.54423985032695867872e-4, 2.26993250174609706720e-5},
           {4.97124359384296665709e-2, -3.62107455812147038809e-2, 1.41606689802367714803e-2, -3.86534247759538806058e-3, 8.16960555220741708495e-4, -1.41395345053156482008e-4, 2.07587003803734247264e-5},
           {4.62291830302317963142e-2, -3.34913736877309325957e-2, 1.30487005068580987771e-2, -3.55229172235824348924e-3, 7.49286030493238734175e-4, -1.29480030080933905708e-4, 1.89856950077200783435e-5},
           {4.30070540273540455334e-2, -3.09852688115071772668e-2, 1.20267033295170678447e-2, -3.26515391951667267867e-3, 6.87311038120378835388e-4, -1.18581915960106951385e-4, 1.73657077100533112346e-5},
           {4.00255965880106576171e-2, -2.86751917833353089926e-2, 1.10872355878357583409e-2, -3.00174798429667273603e-3, 6.30549249049091676059e-4, -1.08613249031711822114e-4, 1.58854182891983540928e-5},
           {3.72660100020491963368e-2, -2.65453282757660731506e-2, 1.02234814250428077825e-2, -2.76007884858126256028e-3, 5.78556272774907623217e-4, -9.94939119846765970779e-5, 1.45326744703525500765e-5},
           {3.47110087849126433546e-2, -2.45811690188825031356e-2, 9.42919762464572430716e-3, -2.53832142629697131431e-3, 5.30926009084745791945e-4, -9.11507544909507204638e-5, 1.32963888665586634711e-5},
           {3.23446977320673983991e-2, -2.27694002219647854968e-2, 8.69866484513380500143e-3, -2.33480597318045995578e-3, 4.87287319494408887113e-4, -8.35169828778636836805e-5, 1.21664450813296191076e-5},
           {3.01524574579250838335e-2, -2.10978033220223168409e-2, 8.02664305300225706941e-3, -2.14800471877253217751e-3, 4.47300990191226894872e-4, -7.65316036028964956622e-5, 1.11336121352271861850e-5},
           {2.81208395273112449209e-2, -1.95551632565556486598e-2, 7.40833078939397669804e-3, -1.97651965925506323263e-3, 4.10656960791298483466e-4, -7.01389157623743094349e-5, 1.01894664750346470992e-5},
           {2.62374703642592604913e-2, -1.81311845276111160974e-2, 6.83932793757569251064e-3, -1.81907140956020152087e-3, 3.77071795497210782936e-4, -6.42880482902032757793e-5, 9.32632089046225990815e-6},
           {2.44909631929731766431e-2, -1.68164143877916200109e-2, 6.31560168757418129853e-3, -1.67448902212567860177e-3, 3.46286375315889652111e-4, -5.89325378894233004794e-5, 8.53715972367219675429e-6},
           {2.28708373297903735932e-2, -1.56021725369267713623e-2, 5.83345542084421925938e-3, -1.54170068782246935148e-3, 3.18063791885448917968e-4, -5.40299440914381243748e-5, 7.81557981184306957911e-6},
           {2.13674442034161929382e-2, -1.44804867710729805175e-2, 5.38950026205028791260e-3, -1.41972524201193972190e-3, 2.92187425181069564475e-4, -4.95414981584154165287e-5, 7.15573665300043688334e-6},
           {1.99718995340815372308e-2, -1.34440340738557501804e-2, 4.98062906712518765895e-3, -1.30766440546309977572e-3, 2.68459188938056252972e-4, -4.54317828363434304730e-5, 6.55229533086185489464e-6},
           {1.86760211510336067431e-2, -1.24860866842888100503e-2, 4.60399263690905100055e-3, -1.20469569603515527789e-3, 2.46697929058959796074e-4, -4.16684402321542194086e-5, 6.00038577588707720920e-6},
           {1.74722719723121241997e-2, -1.16004627154789076438e-2, 4.25697796404336196302e-3, -1.11006595265939053338e-3, 2.26737961573457490281e-4, -3.82219053305136937000e-5, 5.49556197745229185915e-6},
           {1.63537077114564791125e-2, -1.07814809353885734250e-2, 3.93718833755277337894e-3, -1.02308541828603121251e-3, 2.08427737905878749909e-4, -3.50651628864617688789e-5, 5.03376479641623005614e-6},
           {1.53139289129684066926e-2, -1.00239193543904953065e-2, 3.64242514483521752020e-3, -9.43122333140242619792e-4, 1.91628626286163773924e-4, -3.21735256309962534219e-5, 4.61128805861886079066e-6},
           {1.43470369523261542105e-2, -9.32297729498701363560e-3, 3.37067122472788647039e-3, -8.69597993897066050446e-4, 1.76213799125032492343e-4, -2.95244319096947061346e-5, 4.22474763832705020399e-6},
           {1.34475936673889486656e-2, -8.67424064704283050153e-3, 3.12007563804132630192e-3, -8.01982238274474932421e-4, 1.62067217071774568888e-4, -2.70972610411602164661e-5, 3.87105326656710525390e-6},
           {1.26105843163991666184e-2, -8.07365003742178087565e-3, 2.88893973356397050847e-3, -7.39789318090228122278e-4, 1.49082701291125953400e-4, -2.48731648339207306894e-5, 3.54738282289057579901e-6},
           {1.18313835837166644177e-2, -7.51747166624259968021e-3, 2.67570439813320879591e-3, -6.82574127062193477047e-4, 1.37163086241265716860e-4, -2.28349138387347715541e-5, 3.25115889061517340149e-6},
           {1.11057243781172917951e-2, -7.00227058326784862485e-3, 2.47893838903597962114e-3, -6.29928752580995870991e-4, 1.26219445914497471013e-4, -2.09667570392668749452e-5, 2.98002737515661823565e-6},
           {1.04296691901486944520e-2, -6.52488619739209282922e-3, 2.29732765582361334739e-3, -5.81479323373426432338e-4, 1.16170387121553543770e-4, -1.92542937988963092837e-5, 2.73183800289210212893e-6},
           {9.79958379483841617030e-3, -6.08240982996096669899e-3, 2.12966556667652188312e-3, -5.36883127428024447408e-4, 1.06941403965023803906e-4, -1.76843569860120728321e-5, 2.50462653422863200866e-6},
           {9.21211310415240292038e-3, -5.67216413887979952618e-3, 1.97484396180216915592e-3, -4.95825976791524811703e-4, 9.84642881620437037228e-5, -1.62449062954395090494e-5, 2.29659853933266504844e-6},
           {8.66415899015388762949e-3, -5.29168425529288107695e-3, 1.83184496305636014372e-3, -4.58019797885536876676e-4, 9.06765903455089518001e-5, -1.49249308704677811373e-5, 2.10611459844099272937e-6},
           {8.15285991494737322105e-3, -4.93870048815492172778e-3, 1.69973347509957701390e-3, -4.23200427854257381095e-4, 8.35211279007665180355e-5, -1.37143604090596753713e-5, 1.93167680093504494674e-6},
           {7.67557221733230436028e-3, -4.61112246438671706528e-3, 1.57765031898825973736e-3, -3.91125599152063879727e-4, 7.69455352846393160395e-5, -1.26039840099131581191e-5, 1.77191642852929057336e-6},
           {7.22985291874837093795e-3, -4.30702458360903133600e-3, 1.46480594420234631371e-3, -3.61573096128889369741e-4, 7.09018531291300755899e-5, -1.15853760797344048961e-5, 1.62558271809710315696e-6},
           {6.81344392267071476132e-3, -4.02463267677574589726e-3, 1.36047466976779956975e-3, -3.34339068784529408127e-4, 6.53461527562729840293e-5, -1.06508286829449213878e-5, 1.49153260892348502942e-6},
           {6.42425749220243078041e-3, -3.76231176746385674245e-3, 1.26398940938513373346e-3, -3.09236490152419146032e-4, 6.02381930261406797257e-5, -9.79328976960031379994e-6, 1.36872138761455744137e-6},
           {6.06036290029826531928e-3, -3.51855484320155167607e-3, 1.17473683935762941710e-3, -2.86093744949896108473e-4, 5.55411067095032287642e-5, -9.00630676701773278997e-6, 1.25619415158251641356e-6},
           {5.71997415591531804813e-3, -3.29197255209695864228e-3, 1.09215297165834090629e-3, -2.64753338205455236547e-4, 5.12211138223833656975e-5, -8.28397506592392774262e-6, 1.15307801902910597097e-6},
           {5.40143871749476558314e-3, -3.08128374723368007870e-3, 1.01571909771266087608e-3, -2.45070713553099050423e-4, 4.72472595838615032002e-5, -7.62089097323793952869e-6, 1.05857501973167831339e-6},
           {5.10322711259781399556e-3, -2.88530680788371025891e-3, 9.44958071430053469543e-4, -2.26913171777837153944e-4, 4.35911748628697046180e-5, -7.01210874124893155534e-6, 9.71955606749358267757e-7},
           {4.82392338930860611196e-3, -2.70295167260747740481e-3, 8.79430902719091156863e-4, -2.10158881012242139451e-4, 4.02268571661225496144e-5, -6.45310131726553435374e-6, 8.92552734463363232575e-7},
           {4.56221633123055341635e-3, -2.53321252481355238886e-3, 8.18733635186584735900e-4, -1.94695970728582035732e-4, 3.71304703893535656650e-5, -5.93972448909447494833e-6, 8.19756453191323964696e-7},
           {4.31689137359003976407e-3, -2.37516107638168199462e-3, 7.62494483974728953606e-4, -1.80421702350693201897e-4, 3.42801617091077238941e-5, -5.46818413022275551623e-6, 7.53008975012505149534e-7},
           {4.08682316316757651697e-3, -2.22794039955309620613e-3, 7.10371211748473578920e-4, -1.67241709930128837347e-4, 3.16558941338043308561e-5, -5.03500627457494792806e-6, 6.91800169447414414756e-7},
           {3.87096870954269089982e-3, -2.09075926149871957338e-3, 6.62048722725731516627e-4, -1.55069304897429246408e-4, 2.92392933618318046659e-5, -4.63700977441880518663e-6, 6.35663451286224913975e-7},
           {3.66836107950248551529e-3, -1.96288691982303030101e-3, 6.17236856361054507872e-4, -1.43824839416350363803e-4, 2.70135077121638354693e-5, -4.27128131660219856835e-6, 5.84172026187425004989e-7},
           {3.47810359045953995313e-3, -1.84364834077980761610e-3, 5.75668363863184582609e-4, -1.33435123340879771992e-4, 2.49630800003931624040e-5, -3.93515259200788419097e-6, 5.36935462700042547185e-7},
           {3.29936446238386724833e-3, -1.73241980519436844510e-3, 5.37097052161317526330e-4, -1.23832890205814380447e-4, 2.30738303310754359812e-5, -3.62617943107885552152e-6, 4.93596562125923566186e-7},
           {3.13137189110480841300e-3, -1.62862487003084875463e-3, 5.01296081245768067498e-4, -1.14956308075159121650e-4, 2.13327488666903233058e-5, -3.34212273464992269955e-6, 4.53828500156850748417e-7},
           {2.97340950890821135305e-3, -1.53173065623636562270e-3, 4.68056402006733734533e-4, -1.06748531431917584615e-4, 1.97278977151172114760e-5, -3.08093104426117029678e-6, 4.17332216516526233761e-7},
           {2.82481220116606373746e-3, -1.44124443595800770350e-3, 4.37185322789821004946e-4, -9.91572906209680184682e-5, 1.82483211519761762641e-5, -2.84072460975351117184e-6, 3.83834030929490093342e-7},
           {2.68496225031170879932e-3, -1.35671049448329210721e-3, 4.08505193887861582820e-4, -9.21345156563817664847e-5, 1.68839634621310337318e-5, -2.61978082437251470928e-6, 3.53083465645960618621e-7},
           {2.55328578083406079399e-3, -1.27770724431795919783e-3, 3.81852200103463491811e-4, -8.56359914782319289490e-5, 1.56255937466611176043e-5, -2.41652090893969083481e-6, 3.24851256489832592715e-7},
           {2.42924948112701591038e-3, -1.20384457070319100640e-3, 3.57075252353167000956e-4, -7.96210419939254290854e-5, 1.44647370982052524688e-5, -2.22949773698741832720e-6, 2.98927535981637754452e-7},
           {2.31235758001238416934e-3, -1.13476138960255917149e-3, 3.34034970048792899909e-4, -7.40522404674414389328e-5, 1.33936115992398824964e-5, -2.05738470218256162039e-6, 2.75120173532821506227e-7},
           {2.20214905757135830447e-3, -1.07012340077091848596e-3, 3.12602746690795823235e-4, -6.88951440284606500281e-5, 1.24050706450075345271e-5, -1.89896553796482915765e-6, 2.53253259024644302360e-7},
           {2.09819507158484673884e-3, -1.00962101996560906988e-3, 2.92659891747825285768e-4, -6.41180502639426374949e-5, 1.14925501358574073458e-5, -1.75312500717220113212e-6, 2.33165717285710159537e-7},
           {2.00009658240970882026e-3, -9.52967475686155706532e-4, 2.74096842481414912102e-4, -5.96917740288264070435e-5, 1.06500201230565055019e-5, -1.61884038658386471371e-6, 2.14710042076865237368e-7},
           {1.90748216051769728212e-3, -8.99897057042579732490e-4, 2.56812439909500516994e-4, -5.55894427716201487222e-5, 9.87194052800723952155e-6, -1.49517367784178749544e-6, 1.97751139190404122325e-7},
           {1.82000596220753280835e-3, -8.50163500464074179189e-4, 2.40713263591599865680e-4, -5.17863088160227434892e-5, 9.15322058756418590177e-6, -1.38126448217064677917e-6, 1.82165269180716768978e-7},
           {1.73734586017769312809e-3, -8.03538503977810130915e-4, 2.25713020365920564352e-4, -4.82595771725682432321e-5, 8.48918170805298201746e-6, -1.27632348175270959264e-6, 1.67839081073512455206e-7},
           {1.65920171672723280702e-3, -7.59810358720051470631e-4, 2.11731982577977446936e-4, -4.49882475756994943501e-5, 7.87552343790684408319e-6, -1.17962647557544274506e-6, 1.54668729157667576165e-7},
           {1.58529378834239482489e-3, -7.18782688195839674673e-4, 1.98696471714787453126e-4, -4.19529695526463193350e-5, 7.30829229377815378676e-6, -1.09050892209690453571e-6, 1.42559065654031749263e-7},
           {1.51536125133546460166e-3, -6.80273286585918635257e-4, 1.86538383701350188315e-4, -3.91359094319161847039e-5, 6.78385319776145542618e-6, -1.00836094520563699239e-6, 1.31422902685088519716e-7},
           {1.44916083903607814665e-3, -6.44113048116417728425e-4, 1.75194752429668474444e-4, -3.65206282919271682237e-5, 6.29886330416875927585e-6, -9.32622763722509535071e-7, 1.21180337543575673393e-7},
           {1.38646558180033612623e-3, -6.10144980163635115844e-4, 1.64607348377496085943e-4, -3.40919699350786543890e-5, 5.85024801330082873824e-6, -8.62780508133589632875e-7, 1.11758135781915291560e-7},
           {1.32706364180528954035e-3, -5.78223293368185752017e-4, 1.54722309436613878657e-4, -3.18359580500536602484e-5, 5.43517898701636994389e-6, -7.98362391384473338200e-7, 1.03089167122049653479e-7},
           {1.27075723524097575039e-3, -5.48212562584418248643e-4, 1.45489801310810676436e-4, -2.97397017960068950609e-5, 5.05105399675794985612e-6, -7.38935203434016016951e-7, 9.51118896210851277860e-8},
           {1.21736163510392423302e-3, -5.19986952996646825502e-4, 1.36863705063783216553e-4, -2.77913091070880654816e-5, 4.69547844918023616462e-6, -6.84101101883063520156e-7, 8.77698779257175847995e-8},
           {1.16670424833939826922e-3, -4.93429506197260087964e-4, 1.28801329598615628197e-4, -2.59798070750047918717e-5, 4.36624844776182386422e-6, -6.33494673383526143152e-7, 8.10113918111200858630e-8},
           {1.11862376157857647437e-3, -4.68431481446720762198e-4, 1.21263147034936764695e-4, -2.42950688215218425911e-5, 4.06133526087549408224e-6, -5.86780242714929101606e-7, 7.47889815308976125065e-8},
           {1.07296935017510116153e-3, -4.44891747725114131660e-4, 1.14212549118739570817e-4, -2.27277463223601213491e-5, 3.77887107784264737926e-6, -5.43649408407656361569e-7, 6.90591268066486434143e-8},
           {1.02959994566635053108e-3, -4.22716222542214483792e-4, 1.07615622954505802495e-4, -2.12692086892986325546e-5, 3.51713594459641592041e-6, -5.03818785611059634089e-7, 6.37819065611803029985e-8},
           {9.88383557171457422311e-4, -4.01817353800738386125e-4, 1.01440944490924561867e-4, -1.99114854587589189087e-5, 3.27454577980733493940e-6, -4.67027938565605884834e-7, 5.89206967508267906246e-8},
           {9.49196642593393992947e-4, -3.82113641308030719829e-4, 9.56593883212330522384e-5, -1.86472144730980028129e-5, 3.04964138076090003252e-6, -4.33037486555096217216e-7, 5.44418938817415857457e-8},
           {9.11923525818927492234e-4, -3.63529194807167977798e-4, 9.02439524780550012938e-5, -1.74695939755545645968e-5, 2.84107833598679176450e-6, -4.01627368600293796768e-7, 5.03146620044079485547e-8},
           {8.76455856410330289875e-4, -3.45993325651438384145e-4, 8.51695970114932582665e-5, -1.63723385715627180593e-5, 2.64761776868777205584e-6, -3.72595253420551090812e-7, 4.65107011717008569604e-8},
           {8.42692108558548464044e-4, -3.29440169478288137107e-4, 8.04130952389931689776e-5, -1.53496387382204624371e-5, 2.46811784145967964973e-6, -3.45755082345713580204e-7, 4.30040355202443146259e-8},
           {8.10537116321132910385e-4, -3.13808337451844409673e-4, 7.59528966469069579011e-5, -1.43961235903075461529e-5, 2.30152595868492253241e-6, -3.20935733916237862010e-7, 3.97708192940062587578e-8},
           {7.79901642401397755290e-4, -2.99040593838639269519e-4, 7.17690005074647402634e-5, -1.35068266356012470241e-5, 2.14687160836817691553e-6, -2.97979799873844277226e-7, 3.67891592743936966053e-8},
           {7.50701977939719974908e-4, -2.85083557860631544353e-4, 6.78428393516390741387e-5, -1.26771542745313017114e-5, 2.00325979010824444348e-6, -2.76742463126059006175e-7, 3.40389522137715836913e-8},
           {7.22859570985118628055e-4, -2.71887427934380376121e-4, 6.41571715087722882227e-5, -1.19028568196234070970e-5, 1.86986498040409919832e-6, -2.57090469072967112442e-7, 3.15017359904408708855e-8},
           {6.96300681496699307854e-4, -2.59405726556511339286e-4, 6.06959819883562789046e-5, -1.11800018288654465595e-5, 1.74592559061234442470e-6, -2.38901182419995411987e-7, 2.91605533136848069773e-8},
           {6.70956060891492699072e-4, -2.47595064234531353226e-4, 5.74443910385110480038e-5, -1.05049495642389791321e-5, 1.63073887664083114275e-6, -2.22061722272636762095e-7, 2.69998269084531568517e-8},
           {6.46760654308837276000e-4, -2.36414920989640213933e-4, 5.43885697699503112431e-5, -9.87433040232513572782e-6, 1.52365626290941487833e-6, -2.06468168923207725562e-7, 2.50052452014413886701e-8},
           {6.23653323902849366332e-4, -2.25827444075381642127e-4, 5.15156622839667603046e-5, -9.28502403824183065301e-6, 1.42407904626132010427e-6, -1.92024836301041347303e-7, 2.31636576145046036420e-8},
           {6.01576591604682277270e-4, -2.15797260663642167773e-4, 4.88137137885918671572e-5, -8.73414033731048420988e-6, 1.33145444839271688946e-6, -1.78643604570539808081e-7, 2.14629786482238701750e-8},
           {5.80476399916107516780e-4, -2.06291304348429698715e-4, 4.62716042289342118984e-5, -8.21900170088772549217e-6, 1.24527198800691707431e-6, -1.66243307830441441592e-7, 1.98921000086539131054e-8},
           {5.60301889406297336932e-4, -1.97278654408770937577e-4, 4.38789869960909181671e-5, -7.73712682382503084391e-6, 1.16506014631414877557e-6, -1.54749172296307920896e-7, 1.84408100944083485661e-8},
           {5.41005191685323865228e-4, -1.88730386855610985253e-4, 4.16262323142506520746e-5, -7.28621573112238800688e-6, 1.09038330170743054596e-6, -1.44092300740109192849e-7, 1.70997202198124954378e-8},
           {5.22541236721498695943e-4, -1.80619436364400613596e-4, 3.95043749379280761664e-5, -6.86413599059944560008e-6, 1.02083891146723316225e-6, -1.34209199319049506200e-7, 1.58601970033594263116e-8},
           {5.04867573455938215173e-4, -1.72920468265657089344e-4, 3.75050658209310632278e-5, -6.46891000689095170794e-6, 9.56054920198419156622e-7, -1.25041343253353974726e-7, 1.47143003995834037928e-8},
           {4.87944202747212006730e-4, -1.65609759830704072201e-4, 3.56205274458875516806e-5, -6.09870330984804153471e-6, 8.95687376397100804289e-7, -1.16534778112266917764e-7, 1.36547268971199253346e-8},
           {4.71733421752191172619e-4, -1.58665090149496347321e-4, 3.38435125281492829542e-5, -5.75181375755312052371e-6, 8.39418240095923678719e-7, -1.08639753741429368726e-7, 1.26747574465208061629e-8},
           {4.56199678916733447360e-4, -1.52065637952343080726e-4, 3.21672658308338050822e-5, -5.42666158068862765785e-6, 7.86953365956148651128e-7, -1.01310388115308411461e-7, 1.17682097186715581040e-8},
           {4.41309438812104355178e-4, -1.45791886777856617751e-4, 3.05854888488324866977e-5, -5.12178020098863736654e-6, 7.38020647474934025316e-7, -9.45043586274718151674e-8, 1.09293943287232211753e-8},
           {4.27031056110442543573e-4, -1.39825536935924538660e-4, 2.90923071389580098966e-5, -4.83580776199350360488e-6, 6.92368309166647543942e-7, -8.81826185410730597877e-8, 1.01530746915805576666e-8},
           {4.13334658045529860886e-4, -1.34149423757266492412e-4, 2.76822400911726139937e-5, -4.56747931536281928801e-6, 6.49763334667227321298e-7, -8.23091365136252180200e-8, 9.43443020343867265047e-9},
           {4.00192034753978401716e-4, -1.28747441660494518897e-4, 2.63501729521592742433e-5, -4.31561961061985236695e-6, 6.09990019709059949862e-7, -7.68506572855284050617e-8, 8.76902246986277241248e-9},
           {3.87576536937013775737e-4, -1.23604473603822044309e-4, 2.50913309274912823578e-5, -4.07913644043599632650e-6, 5.72848639828416100087e-7, -7.17764817822818095002e-8, 8.15276432467343241641e-9},
           {3.75462980324634096503e-4, -1.18706325521918107705e-4, 2.39012552024322528664e-5, -3.85701449744897325466e-6, 5.38154223505254680761e-7, -6.70582650271386435739e-8, 7.58189140562607699807e-9},
           {3.63827556462313075284e-4, -1.14039665379114460442e-4, 2.27757807340580424051e-5, -3.64830970217284142782e-6, 5.05735422202753049839e-7, -6.26698303953213508671e-8, 7.05293607273526244571e-9},
           {3.52647749375864896001e-4, -1.09591966498454377026e-4, 2.17110156790270118494e-5, -3.45214396482822900148e-6, 4.75433469477159811596e-7, -5.85869988638752244564e-8, 6.56270347325300112595e-9},
           {3.41902257702817792030e-4, -1.05351454852121287679e-4, 2.07033223320200210642e-5, -3.26770034692221840006e-6, 4.47101221972981302444e-7, -5.47874320237776821532e-8, 6.10824957391335820704e-9},
           {3.31570921908873187441e-4, -1.01307060022786231553e-4, 1.97492994597036571655e-5, -3.09421859116147767289e-6, 4.20602275709072603074e-7, -5.12504877239310074053e-8, 5.68686099623710023453e-9},
           {3.21634656235952626907e-4, -9.74483695675235626118e-5, 1.88457659241104985180e-5, -2.93099099081015155178e-6, 3.95810151602466173469e-7, -4.79570873109627374124e-8, 5.29603650457326236820e-9},
           {3.12075385054137646040e-4, -9.37655865363241561436e-5, 1.79897454976437773074e-5, -2.77735857192468473293e-6, 3.72607544672913132918e-7, -4.48895935150866243390e-8, 4.93347000925102121570e-9},
           {3.02875983313652321228e-4, -9.02494899160176757870e-5, 1.71784527795598954028e-5, -2.63270756402821225764e-6, 3.50885631825931948017e-7, -4.20316981113170220731e-8, 4.59703495882771380959e-9},
           {2.94020220815079580314e-4, -8.68913977877323786669e-5, 1.64092801308160199825e-5, -2.49646613674347525428e-6, 3.30543433529156893824e-7, -3.93683185577046848193e-8, 4.28477000604052889980e-9},
           {2.85492710036380097950e-4, -8.36831330019867890291e-5, 1.56797855506408224469e-5, -2.36810138169971365807e-6, 3.11487225079128902216e-7, -3.68855028785388574840e-8, 3.99486584178570174503e-9},
           {2.77278857274129014732e-4, -8.06169911902324592750e-5, 1.49876814241409454814e-5, -2.24711652067898017771e-6, 2.93629993506306311605e-7, -3.45703421211604606757e-8, 3.72565310033791156023e-9}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson
