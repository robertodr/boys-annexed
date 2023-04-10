/* This file was autogenerated on 2023-04-10T15:12 DO NOT EDIT! */

#pragma once

#include <array>

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 1.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<1>()
{
    // clang-format off
  return {{{3.33333333333333333333e-1, -2.00000000000000000000e-1, 7.14285714285714285714e-2, -1.85185185185185185185e-2, 3.78787878787878787879e-3, -6.41025641025641025641e-4, 9.25925925925925925926e-5},
           {3.14029472998161307551e-1, -1.86255004792621470244e-1, 6.60940148178694730774e-2, -1.70656578451775509109e-2, 3.48085533408922821741e-3, -5.87849590149864078582e-4, 8.47773791515854990754e-5},
           {2.96048189299991992840e-1, -1.73534537054985810167e-1, 6.11774152461840581285e-2, -1.57304418202479125155e-2, 3.19928179327139475263e-3, -5.39159173868049615939e-4, 7.76304102644985894333e-5},
           {2.79291093918387800521e-1, -1.61758435122409116591e-1, 5.66449624419398389819e-2, -1.45031259737333165921e-2, 2.94101263193620151085e-3, -4.94571029853324529643e-4, 7.10939488182141471687e-5},
           {2.63667486130356454321e-1, -1.50853015444287724689e-1, 5.24656444911245772866e-2, -1.33747868416885101750e-2, 2.70408559455939017171e-3, -4.53734905500414249964e-4, 6.51152891406369185856e-5},
           {2.49093732179515359171e-1, -1.40750536825912708760e-1, 4.86110122084650736474e-2, -1.23372518676462712695e-2, 2.48670588084438839299e-3, -4.16330773585710483924e-4, 5.96463153903818859322e-5},
           {2.35492695933328999303e-1, -1.31388709754967109022e-1, 4.50549636170038125815e-2, -1.13830353533370710883e-2, 2.28723170090887328865e-3, -3.82066201013306773037e-4, 5.46430989429769653661e-5},
           {2.22793216515124292698e-1, -1.22710246967116590189e-1, 4.17735468014905284018e-2, -1.05052799320783166181e-2, 2.10416108752439073859e-3, -3.50673948303747940944e-4, 5.00655313119417177676e-5},
           {2.10929628965311782851e-1, -1.14662451736696091587e-1, 3.87447795519558838007e-2, -9.69770308439174208437e-3, 1.93611985520657507893e-3, -3.21909779465178163410e-4, 4.58769894517850035224e-5},
           {1.99841324322276137071e-1, -1.07196840681238483861e-1, 3.59484843515536986458e-2, -8.95454825751413122092e-3, 1.78185060567509186494e-3, -2.95550463692709122071e-4, 4.20440305710085264089e-5},
           {1.89472345820492354962e-1, -1.00268798145017379309e-1, 3.33661373884111336907e-2, -8.27054018885945568806e-3, 1.64020268806184003549e-3, -2.71391951987014397058e-4, 3.85361138390972861063e-5},
           {1.79771018184097269854e-1, -9.38372594791873626541e-2, 3.09807303858766480698e-2, -7.64084406849950374674e-3, 1.51012303031995546478e-3, -2.49247713281775136723e-4, 3.53253466044757771943e-5},
           {1.70689607250686159468e-1, -8.78644207666067905693e-2, 2.87766441501732979369e-2, -7.06102820765444789963e-3, 1.39064776564475946208e-3, -2.28947216034772253702e-4, 3.23862529525709424028e-5},
           {1.62184007394612972330e-1, -8.23154727499331856366e-2, 2.67395328299333441546e-2, -6.52702990929834685196e-3, 1.28089458442465090396e-3, -2.10334542481074556267e-4, 2.96955626263160869381e-5},
           {1.54213454433454605352e-1, -7.71583569138419023137e-2, 2.48562179692148332855e-2, -6.03512426353578369104e-3, 1.18005574835306414547e-3, -1.93267123879769403029e-4, 2.72320185073580601121e-5},
           {1.46740261897301632610e-1, -7.23635418478250358465e-2, 2.31145915151158981571e-2, -5.58189561462182209928e-3, 1.08739170890484156476e-3, -1.77614586117912163620e-4, 2.49762010164412949791e-5},
           {1.39729578719751945659e-1, -6.79038181764376608252e-2, 2.15035270136770227667e-2, -5.16421146858452896622e-3, 1.00222527745975550917e-3, -1.63257695975833644775e-4, 2.29103679373459647936e-5},
           {1.33149166573358262999e-1, -6.37541104903941724391e-2, 2.00127982940053288086e-2, -4.77919863055588454298e-3, 9.23936298986313122791e-4, -1.50087399214833636801e-4, 2.10183083016363914607e-5},
           {1.26969195222146780111e-1, -5.98913048457927199575e-2, 1.86330050010245981684e-2, -4.42422137929434494685e-3, 8.51956785420233909598e-4, -1.38003942429063133435e-4, 1.92852090924969237103e-5},
           {1.21162054400888452577e-1, -5.62940905210606162834e-2, 1.73555043924563216773e-2, -4.09686150314708327769e-3, 7.85766468720476953316e-4, -1.26916071314848587399e-4, 1.76975336361581944201e-5},
           {1.15702180856172828771e-1, -5.29428148329764494684e-2, 1.61723488660336991996e-2, -3.79490003699413077157e-3, 7.24888737094483677839e-4, -1.16740298659023005920e-4, 1.62429106498136318292e-5},
           {1.10565899299015460433e-1, -4.98193499152534483021e-2, 1.50762287289625419168e-2, -3.51630055367038599559e-3, 6.68886921083521350170e-4, -1.07400235938626622428e-4, 1.49100330063742310714e-5},
           {1.05731276123645592802e-1, -4.69069704565006628805e-2, 1.40604197636556224604e-2, -3.25919387609260782085e-3, 6.17360899116164724837e-4, -9.88259829627531751839e-5, 1.36885653597099499006e-5},
           {1.01177984843109428081e-1, -4.41902414796792597507e-2, 1.31187351821296302457e-2, -3.02186408793518601623e-3, 5.69943994797974303607e-4, -9.09535704780100814643e-5, 1.25690598499070274531e-5},
           {9.68871822801562893046e-2, -4.16549153231367402794e-2, 1.22454815964865883215e-2, -2.80273573129860304604e-3, 5.26300140631181774878e-4, -8.37244511062839327992e-5, 1.15428791771963229793e-5},
           {9.28413946322498018215e-2, -3.92878370545701252614e-2, 1.14354186648951867966e-2, -2.60036208948779493794e-3, 4.86121285070351604948e-4, -7.70850343911234648633e-5, 1.06021263961816319542e-5},
           {8.90244126031052851467e-2, -3.70768576144196101985e-2, 1.06837221017080964691e-2, -2.41341446184549675291e-3, 4.49125021837523956576e-4, -7.09862621005969915162e-5, 9.73958083936898570839e-6},
           {8.54211948604810117347e-2, -3.50107540447580078968e-2, 9.98594976704076861540e-3, -2.24067234564262474095e-3, 4.15052422260432304912e-4, -6.53832202731549887859e-5, 8.94863963126854210456e-6},
           {8.20177791415816065390e-2, -3.30791562142012315895e-2, 9.33801057551680337154e-3, -2.08101444738146819716e-3, 3.83666053075754250046e-4, -6.02347848017577598288e-5, 8.22326430196532755224e-6},
           {7.88012003838518548804e-2, -3.12724794991635010599e-2, 8.73613598615606209985e-3, -1.93341045257981779606e-3, 3.54748163670280127445e-4, -5.55032976329695266690e-5, 7.55793205244858430815e-6},
           {7.57594153105957679450e-2, -2.95818629273205610519e-2, 8.17685385572823955624e-3, -1.79691348923142883189e-3, 3.28099028129397781578e-4, -5.11542709143015701125e-5, 6.94759126352929262362e-6},
           {7.28812329481568627054e-2, -2.79991123307923861496e-2, 7.65696445648420334629e-3, -1.67065322573174907320e-3, 3.03535428736268126683e-4, -4.71561166570121282791e-5, 6.38762087620545924375e-6},
           {7.01562505947102565962e-2, -2.65166480946507146510e-2, 7.17351847616307710526e-3, -1.55382954916450212804e-3, 2.80889268727323854462e-4, -4.34798996948533011671e-5, 5.87379330416775047888e-6},
           {6.75747948003897758174e-2, -2.51274571212014123656e-2, 6.72379683369447433278e-3, -1.44570677450713827236e-3, 2.60006303170110507090e-4, -4.00991119137237479763e-5, 5.40224056905915235273e-6},
           {6.51278669548096822428e-2, -2.38250486623680819698e-2, 6.30529215819958330919e-3, -1.34560833957029666805e-3, 2.40744977796997542373e-4, -3.69894659045114101797e-5, 4.96942337637086522628e-6},
           {6.28070931113292457715e-2, -2.26034137016670293174e-2, 5.91569179185833220885e-3, -1.25291194437376646881e-3, 2.22975366511100723957e-4, -3.41287063531096792734e-5, 4.57210287470885801922e-6},
           {6.06046777079046472547e-2, -2.14569875939474088988e-2, 5.55286218905864589757e-3, -1.16704509721130803186e-3, 2.06578199086331635095e-4, -3.14964376290497976153e-5, 4.20731486381658270591e-6},
           {5.85133608723167400467e-2, -2.03806156954879427734e-2, 5.21483459507434722602e-3, -1.08748103289868199364e-3, 1.91443971318634427545e-4, -2.90739661686713243274e-5, 3.87234623738511801272e-6},
           {5.65263790251702424872e-2, -1.93695217393875102063e-2, 4.89979189741920808515e-3, -1.01373497166016104422e-3, 1.77472130556376823593e-4, -2.68441563714012223704e-5, 3.56471346550079380233e-6},
           {5.46374285175285634431e-2, -1.84192787316386219487e-2, 4.60605655207620146019e-3, -9.45360689813299921030e-4, 1.64570330150180744923e-4, -2.47912988395762405851e-5, 3.28214293873479049114e-6},
           {5.28406320615595545553e-2, -1.75257821619930545531e-2, 4.33207949507694381475e-3, -8.81947375882146810018e-4, 1.52653746921363345310e-4, -2.29009898942768465443e-5, 3.02255301151696537058e-6},
           {5.11305077322873266499e-2, -1.66852253408659410849e-2, 4.07642995747368661053e-3, -8.23116748025820251823e-4, 1.41644456258298084492e-4, -2.11600213927128683771e-5, 2.78403759669221771960e-6},
           {4.95019403366245835940e-2, -1.58940766892138110600e-2, 3.83778610866615218014e-3, -7.68520410731119438599e-4, 1.31470859915688311446e-4, -1.95562799576031953416e-5, 2.56485117615464420680e-6},
           {4.79501549624374856506e-2, -1.51490588226873851979e-2, 3.61492645937418546898e-3, -7.17837430601505222666e-4, 1.22067162016862188292e-4, -1.80786548064444678094e-5, 2.36339510430433610711e-6},
           {4.64706925355976435688e-2, -1.44471292845141461442e-2, 3.40672196133535738066e-3, -6.70772112795957613403e-4, 1.13372889147316630813e-4, -1.67169534392264690511e-5, 2.17820509187576652959e-6},
           {4.50593872269192743940e-2, -1.37854627936128369681e-2, 3.21212874610121539021e-3, -6.27051961243976123742e-4, 1.05332450782094473271e-4, -1.54618245076209573016e-5, 2.00793976753802285516e-6},
           {4.37123455636694718818e-2, -1.31614348854755241341e-2, 3.03018145014913265964e-3, -5.86425807200258576539e-4, 9.78947366131357847585e-5, -1.43046872474948057625e-5, 1.85137022365010779488e-6},
           {4.24259271120731515370e-2, -1.25726068334599608289e-2, 2.85998707795765902406e-3, -5.48662092016159773714e-4, 9.10127476381950755238e-5, -1.32376669102727614885e-5, 1.70737046074611230285e-6},
           {4.11967266080006597195e-2, -1.20167117473939568523e-2, 2.70071935874738279157e-3, -5.13547291205613274170e-4, 8.46432581427217396730e-5, -1.22535356776549531988e-5, 1.57490865279538341177e-6},
           {4.00215574229049533828e-2, -1.14916417548765852075e-2, 2.55161355629890699778e-3, -4.80884467980618340345e-4, 7.87465059525044557952e-5, -1.13456585888918576972e-5, 1.45303916209565677825e-6},
           {3.88974362611428300940e-2, -1.09954361784343028485e-2, 2.41196169465430305598e-3, -4.50491945434579549399e-4, 7.32859085599242630719e-5, -1.05079440506121076502e-5, 1.34089523887075180910e-6},
           {3.78215689931376136679e-2, -1.05262706288134551963e-2, 2.28110816561527670818e-3, -4.22202087468925380074e-4, 6.82278029322153946584e-5, -9.73479853642910280306e-6, 1.23768234631178556452e-6},
           {3.67913375364809502877e-2, -1.00824469412194341056e-2, 2.15844568679501988204e-3, -3.95860179396946999103e-4, 6.35412069978940794671e-5, -9.02108511753466077248e-6, 1.14267205697025775960e-6},
           {3.58042877040871954097e-2, -9.66238388729730168780e-3, 2.04341158158378825849e-3, -3.71323399925515998214e-4, 5.91976009790394649100e-5, -8.36208549650644254497e-6, 1.05519647112681129676e-6},
           {3.48581179449559547256e-2, -9.26460860113474497790e-3, 1.93548435477134544991e-3, -3.48459876916453262230e-4, 5.51707268938109597189e-5, -7.75346524487146232041e-6, 9.74643112061060339055e-7},
           {3.39506689090150332033e-2, -8.88774866259827919790e-3, 1.83418053975124275765e-3, -3.27147819970505032098e-4, 5.14364046967545423227e-5, -7.19124197081751920658e-6, 9.00450257072127898388e-7},
           {3.30799137729511846806e-2, -8.53052478592595218865e-3, 1.73905179522976997657e-3, -3.07274723463301269351e-4, 4.79723636552653796253e-5, -6.67175616704398826080e-6, 8.32102666679772080133e-7},
           {3.22439492689290604921e-2, -8.19174406572946954552e-3, 1.64968223119193362416e-3, -2.88736634199061371377e-4, 4.47580876801097893433e-5, -6.19164451029071868351e-6, 7.69127677702514511529e-7},
           {3.14409873626867383822e-2, -7.87029373643831527130e-3, 1.56568594555240420650e-3, -2.71437478338474756298e-4, 4.17746734371473389582e-5, -5.74781540375795591311e-6, 7.11091628889677535289e-7},
           {3.06693475317124965296e-2, -7.56513540477704929388e-3, 1.48670475445410567653e-3, -2.55288442706060937117e-4, 3.90047001672278066935e-5, -5.33742657159587990836e-6, 6.57596590503907077436e-7},
           {2.99274495980827170971e-2, -7.27529971813182119861e-3, 1.41240610058303186873e-3, -2.40207405993001274882e-4, 3.64321102324850792280e-5, -4.95786453104840092341e-6, 6.08277371732539222921e-7},
           {2.92138070741033359368e-2, -6.99988143465772594265e-3, 1.34248112515585439966e-3, -2.26118415747215333132e-4, 3.40420994906551319017e-5, -4.60672578281908849364e-6, 5.62798782071034471843e-7},
           {2.85270209821726940247e-2, -6.73803486372761325368e-3, 1.27664289041703039700e-3, -2.12951207386326523937e-4, 3.18210166752886243176e-5, -4.28179957391159661686e-6, 5.20853124888703962494e-7},
           {2.78657741132955424912e-2, -6.48896964784585750241e-3, 1.21462474056350795519e-3, -2.00640761783865158698e-4, 2.97562710294305822836e-5, -3.98105209969627196249e-6, 4.82157903273508514448e-7},
           {2.72288256914482960924e-2, -6.25194685946648624070e-3, 1.15617879000619208467e-3, -1.89126898267093186213e-4, 2.78362475040660727337e-5, -3.70261202337207237016e-6, 4.46453719974662781644e-7},
           {2.66150064135436750790e-2, -6.02627538828104034052e-3, 1.10107452878567915223e-3, -1.78353900128486414327e-4, 2.60502288908996519363e-5, -3.44475720142303250141e-6, 4.13502354833584558350e-7},
           {2.60232138370876490974e-2, -5.81130859649357008750e-3, 1.04909753579242336942e-3, -1.68270169994268160244e-4, 2.43883243123187715552e-5, -3.20590251319713229826e-6, 3.83085004528580276623e-7},
           {2.54524080897785796862e-2, -5.60644122139271165739e-3, 1.00004829120485441013e-3, -1.58827912614359275387e-4, 2.28414035401179070831e-5, -2.98458870144132043688e-6, 3.55000670768550246924e-7},
           {2.49016078772844005884e-2, -5.41110650617709302429e-3, 9.53741080258848641059e-4, -1.49982842840429937345e-4, 2.14010366591250430829e-5, -2.77947213858100760552e-6, 3.29064684266908029933e-7},
           {2.43698867672609217894e-2, -5.22477354150248807924e-3, 9.10002981103766404175e-4, -1.41693916744012354163e-4, 2.00594386326333198813e-5, -2.58931544080113734387e-6, 3.05107352918806217901e-7},
           {2.38563697293575245617e-2, -5.04694480160843960553e-3, 8.68672930088846564044e-4, -1.33923083996301679451e-4, 1.88094183638267114372e-5, -2.41297885862841224631e-6, 2.82972723601766116659e-7},
           {2.33602299125055881679e-2, -4.87715386015851772028e-3, 8.29600858363616403511e-4, -1.26635059786675227035e-4, 1.76443318814981194487e-5, -2.24941237878497488691e-6, 2.62517447930228153753e-7},
           {2.28806856422123887362e-2, -4.71496327210142902875e-3, 7.92646894171197412444e-4, -1.19797114699306603411e-4, 1.65580393095656188351e-5, -2.09764847763231605145e-6, 2.43609743125938463088e-7},
           {2.24169976218977426430e-2, -4.55996260893831977662e-3, 7.57680625667732300828e-4, -1.13378881097653101359e-4, 1.55448653084458467675e-5, -1.95679547159580915049e-6, 2.26128439925381882833e-7},
           {2.19684663235218229083e-2, -4.41176663577270110339e-3, 7.24580419518039073323e-4, -1.07352174686069616887e-4, 1.45995627024723728703e-5, -1.82603141459635841118e-6, 2.09962110138958653116e-7},
           {2.15344295538687675873e-2, -4.27001361943057065884e-3, 6.93232790900168063114e-4, -1.01690830027272510272e-4, 1.37172790314580065972e-5, -1.70459849675393280416e-6, 1.95008267110027631667e-7},
           {2.11142601838795775093e-2, -4.13436375777619796734e-3, 6.63531820902644770173e-4, -9.63705488946976253362e-5, 1.28935257863844898881e-5, -1.59179790250268288536e-6, 1.81172632900545701854e-7},
           {2.07073640293759797526e-2, -4.00449772111956085741e-3, 6.35378617620487875194e-4, -9.13687604307363747738e-5, 1.21241501092342224716e-5, -1.48698508980034483775e-6, 1.68368466558598335596e-7},
           {2.03131778723915877582e-2, -3.88011529732019576008e-3, 6.08680817551962116511e-4, -8.66644921661078042503e-5, 1.14053087553152669167e-5, -1.38956545535440340114e-6, 1.56515948306007877448e-7},
           {1.99311676131330439699e-2, -3.76093413284431200491e-3, 5.83352124169699134612e-4, -8.22382510328766768099e-5, 1.07334441332179690164e-5, -1.29899035375023976299e-6, 1.45541614925394132337e-7},
           {1.95608265433378364362e-2, -3.64668856263194313128e-3, 5.59311880789288237183e-4, -7.80719135744534513312e-5, 1.01052622529113959285e-5, -1.21475344107609212955e-6, 1.35377842029183162544e-7},
           {1.92016737324816472166e-2, -3.53712852218309586894e-3, 5.36484675087550580766e-4, -7.41486246208523507592e-5, 9.51771242656162977207e-6, -1.13638731611800606746e-6, 1.25962369261421593426e-7},
           {1.88532525189216461359e-2, -3.43201853578005335738e-3, 5.14799972833175265539e-4, -7.04527037570357427812e-5, 8.96796857954215020795e-6, -1.06346043446493162773e-6, 1.17237864819880528916e-7},
           {1.85151290986465162647e-2, -3.33113677523082457946e-3, 4.94191778585728711155e-4, -6.69695589667897265033e-5, 8.45341204091037902620e-6, -9.95574272937945945437e-7, 1.09151525993577847195e-7},
           {1.81868912048438365059e-2, -3.23427418394956834105e-3, 4.74598321296696996473e-4, -6.36856068846717866382e-5, 7.97161569343608655716e-6, -9.32360723654900140644e-7, 1.01654712692030014319e-7},
           {1.78681468719935586387e-2, -3.14123366158647722782e-3, 4.55961762909463746117e-4, -6.05881991345279962997e-5, 7.52032937317125010782e-6, -8.73479698777728314542e-7, 9.47026111995597343065e-8},
           {1.75585232786567672914e-2, -3.05182930478504728725e-3, 4.38227928205165144938e-4, -5.76655542752397306909e-5, 7.09746641762443762418e-6, -8.18616928578135966494e-7, 8.82539256229257475473e-8},
           {1.72576656635538873419e-2, -2.96588569998127099883e-3, 4.21346054279274232022e-4, -5.49066949130480228512e-5, 6.70109126991609713246e-6, -7.67481936911023185381e-7, 8.22705947153226646965e-8},
           {1.69652363099194042340e-2, -2.88323726446947830107e-3, 4.05268558160566455192e-4, -5.23013895753073970946e-5, 6.32940805390891315842e-6, -7.19806179515377349994e-7, 7.67175319561640950017e-8},
           {1.66809135934831917480e-2, -2.80372763224537345852e-3, 3.89950821200698877645e-4, -4.98400989731065426611e-5, 5.98075004228872835529e-6, -6.75341331780062308855e-7, 7.15623869456059033607e-8},
           {1.64043910897641413704e-2, -2.72720908140032395131e-3, 3.75350988969859987454e-4, -4.75139263101052573921e-5, 5.65356994596992228021e-6, -6.33857713726565064395e-7, 6.67753263369414929195e-8},
           {1.61353767366720357579e-2, -2.65354200008385051474e-3, 3.61429785492559314027e-4, -4.53145713223967270948e-5, 5.34643095906435706954e-6, -5.95142840981170354850e-7, 6.23288326801366470025e-8},
           {1.58735920487006430812e-2, -2.58259438827526796242e-3, 3.48150340748349653927e-4, -4.32342877594185542888e-5, 5.05799849902968962637e-6, -5.59000091443272327974e-7, 5.81975196870781519017e-8},
           {1.56187713792603263124e-2, -2.51424139281198298634e-3, 3.35478030445746349536e-4, -4.12658440390885588710e-5, 4.78703258654258676896e-6, -5.25247478211948956605e-7, 5.43579625546943789247e-8},
           {1.53706612279441660190e-2, -2.44836487331255049649e-3, 3.23380327154418638000e-4, -3.94024868316066978046e-5, 4.53238081416252537223e-6, -4.93716520116256786391e-7, 5.07885420969804999147e-8},
           {1.51290195897488422699e-2, -2.38485299680836352124e-3, 3.11826661951424683166e-4, -3.76379073458969358370e-5, 4.29297185699722946069e-6, -4.64251201912091543238e-7, 4.74693015420440105344e-8},
           {1.48936153434818651514e-2, -2.32359985906014678003e-3, 3.00788295802341138635e-4, -3.59662101106070279622e-5, 4.06780948238265531409e-6, -4.36707016865524231670e-7, 4.43818149464239060209e-8},
           {1.46642276767815996769e-2, -2.26450513068513718112e-3, 2.90238199958053758390e-4, -3.43818840580716164525e-5, 3.85596701907785070919e-6, -4.10950085044386327548e-7, 4.15090662668972353692e-8},
           {1.44406455453569282366e-2, -2.20747372635911667804e-3, 2.80150944703148668466e-4, -3.28797757347951540041e-5, 3.65658224967424303942e-6, -3.86856341191251542196e-7, 3.88353382104716320285e-8},
           {1.42226671642204458706e-2, -2.15241549548511341278e-3, 2.70502595842661932614e-4, -3.14550644759351596914e-5, 3.46885269285422072387e-6, -3.64310786556119432108e-7, 3.63461100569143559436e-8},
           {1.40100995288440551695e-2, -2.09924493283848798836e-3, 2.61270618360749347971e-4, -3.01032393940667678033e-5, 3.29203124482733968054e-6, -3.43206799529972311768e-7, 3.40279637155744431533e-8},
           {1.38027579643091868888e-2, -2.04788090780704673532e-3, 2.52433786727969107586e-4, -2.88200780442761792985e-5, 3.12542215174425498664e-6, -3.23445500344547574809e-7, 3.18684973399473105147e-8},
           {1.36004657006570540273e-2, -1.99824641094544647180e-3, 2.43972101373606003365e-4, -2.76016266384506787001e-5, 2.96837728715729583221e-6, -3.04935165492402076735e-7, 2.98562458799033658781e-8},
           {1.34030534727675627871e-2, -1.95026831665616766018e-3, 2.35866710876095586310e-4, -2.64441816915827245535e-5, 2.82029271067910691285e-6, -2.87590687877656047361e-7, 2.79806080031974583837e-8},
           {1.32103591432101066111e-2, -1.90387716089528797811e-3, 2.28099839458366723680e-4, -2.53442729920571789917e-5, 2.68060548590281694901e-6, -2.71333079034431393480e-7, 2.62317788652049587875e-8},
           {1.30222273466153795618e-2, -1.85900693288078419294e-3, 2.20654719406052177589e-4, -2.42986477963094362918e-5, 2.54879073740270722481e-6, -2.56089010049431857739e-7, 2.46006882491644686134e-8},
           {1.28385091542161256656e-2, -1.81559487985457333227e-3, 2.13515528055221271786e-4, -2.33042561559874219807e-5, 2.42435892824650068355e-6, -2.41790388099675159068e-7, 2.30789436388882549940e-8},
           {1.26590617572959248521e-2, -1.77358132401750682137e-3, 2.06667329022764930443e-4, -2.23582372928777487354e-5, 2.30685334093105102497e-6, -2.28373965768140969695e-7, 2.16587778222409122540e-8},
           {1.24837481683701696095e-2, -1.73290949081941736930e-3, 2.00096017376989200858e-4, -2.14579069434157520201e-5, 2.19584774601327257127e-6, -2.15780980530992618348e-7, 2.03330006569686676424e-8},
           {1.23124369390021706772e-2, -1.69352534784453245299e-3, 1.93788268468506887868e-4, -2.06007456006370062555e-5, 2.09094424395760658081e-6, -2.03956822021799816325e-7, 1.90949546609472055421e-8},
           {1.21450018932305840030e-2, -1.65537745358643553252e-3, 1.87731490162317048252e-4, -1.97843875869863490254e-5, 1.99177126686935426436e-6, -1.92850724872448662733e-7, 1.79384741168418229126e-8},
           {1.19813218756523783698e-2, -1.61841681545663767031e-3, 1.81913778231156537642e-4, -1.90066108965190744815e-5, 1.89798172783817020043e-6, -1.82415485108642081979e-7, 1.68578474067584349946e-8},
           {1.18212805132688579535e-2, -1.58259675641700728842e-3, 1.76323874687932448000e-4, -1.82653277497423939123e-5, 1.80925130658558432078e-6, -1.72607198241411465956e-7, 1.58477823159053290384e-8},
           {1.16647659902610559973e-2, -1.54787278966909058395e-3, 1.70951128851408896015e-4, -1.75585758086868812798e-5, 1.72527686100166828084e-6, -1.63385017346110935885e-7, 1.49033740657660447383e-8},
           {1.15116708349154613089e-2, -1.51420250087297664048e-3, 1.65785460954436593721e-4, -1.68845100037977041295e-5, 1.64577495497530462262e-6, -1.54710929558073873057e-7, 1.40200758569690869897e-8},
           {1.13618917179719915861e-2, -1.48154543740510488518e-3, 1.60817328117976313454e-4, -1.62413949279205926393e-5, 1.57048049367587480591e-6, -1.46549549540507582883e-7, 1.31936717200822066646e-8},
           {1.12153292617133675674e-2, -1.44986300419844499690e-3, 1.56037692527068823020e-4, -1.56275977560540237652e-5, 1.49914545813698144228e-6, -1.38867928596234247234e-7, 1.24202514890971048718e-8},
           {1.10718878591592184701e-2, -1.41911836574004136292e-3, 1.51437991656826160614e-4, -1.50415816526696126312e-5, 1.43153773162999128357e-6, -1.31635378201410612882e-7, 1.16961877275310668088e-8},
           {1.09314755027691470207e-2, -1.38927635383018785800e-3, 1.47010110407539790157e-4, -1.44818996312887292131e-5, 1.36744001090133485737e-6, -1.24823306837173778596e-7, 1.10181144509718965711e-8},
           {1.07940036220972642583e-2, -1.36030338073464237073e-3, 1.42746355018190048975e-4, -1.39471888336644648382e-5, 1.30664879588673506274e-6, -1.18405069084985693491e-7, 1.03829075026376321694e-8},
           {1.06593869298762747994e-2, -1.33216735738648194010e-3, 1.38639428637064507366e-4, -1.34361651983720765458e-5, 1.24897345201174545678e-6, -1.12355826033949008886e-7, 9.78766645021021148975e-9}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson
