#pragma once

#include <array>

/* This file was autogenerated on 2023-02-16T14:43 DO NOT EDIT! */

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 16.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<16>()
{
    // clang-format off
  return {{{3.03030303030303030303e-2, -2.85714285714285714286e-2, 1.35135135135135135135e-2, -4.27350427350427350427e-3, 1.01626016260162601626e-3, -1.93798449612403100775e-4, 3.08641975308641975309e-5},
           {2.75768487952278949782e-2, -2.59929610328042612344e-2, 1.22905452804738073158e-2, -3.88577726591844783283e-3, 9.23846289366091503667e-4, -1.76138779178110731335e-4, 2.80464064103602048444e-5},
           {2.50966630183948394284e-2, -2.36478163226195928215e-2, 1.11785227671297900109e-2, -3.53330487067609125273e-3, 8.39852777106615691963e-4, -1.60091241561000893539e-4, 2.54862964471622853349e-5},
           {2.28402157184407518520e-2, -2.15148300447115421730e-2, 1.01673590693218199310e-2, -3.21287512447132519305e-3, 7.63511003095295208085e-4, -1.45508421722953952115e-4, 2.31602671498254329100e-5},
           {2.07872683484018432043e-2, -1.95747618270268736174e-2, 9.24788619393835352456e-3, -2.92156923245809373516e-3, 6.94122622893469693080e-4, -1.32256405120156228126e-4, 2.10468826117481780131e-5},
           {1.89194175688669370683e-2, -1.78101200599755649101e-2, 8.41177119325572757169e-3, -2.65673476471507382171e-3, 6.31053134612250183656e-4, -1.20213539548506617304e-4, 1.91266727189733608261e-5},
           {1.72199284620836827464e-2, -1.62050026289458845574e-2, 7.65143996628310854580e-3, -2.41596130707270742924e-3, 5.73726033367605975886e-4, -1.09269310692346186052e-4, 1.73819526371294577735e-5},
           {1.56735829346023557151e-2, -1.47449521789058558136e-2, 6.96000802510551418861e-3, -2.19705834123792072970e-3, 5.21617501734045522187e-4, -9.93233209219716525491e-5, 1.57966588948057537055e-5},
           {1.42665419227219741199e-2, -1.34168245828771865585e-2, 6.33121758858748440169e-3, -1.99803514981793496966e-3, 4.74251586983728736641e-4, -9.02843618477471645005e-5, 1.43562005357237310065e-5},
           {1.29862201416478337951e-2, -1.22086694076552221971e-2, 5.75938042425934264290e-3, -1.81708256061038409858e-3, 4.31195820422008047491e-4, -8.20695720123001731718e-5, 1.30473239528315949903e-5},
           {1.18211722343218809256e-2, -1.11096212805898691273e-2, 5.23932591230076225020e-3, -1.65255636156783850682e-3, 3.92057238238163264024e-4, -7.46036718954597920196e-5, 1.18579901452292587287e-5},
           {1.07609892804094477159e-2, -1.01098011615600880814e-2, 4.76635385375533734281e-3, -1.50296223331934761420e-3, 3.56478767019843443501e-4, -6.78182691266909104012e-5, 1.07772632548267634841e-5},
           {9.79620472088357265028e-3, -9.20022661539824163079e-3, 4.33619158890340486434e-3, -1.36694206018401652122e-3, 3.24135940466281429698e-4, -6.16512274535375819073e-5, 9.79520934493742899559e-6},
           {8.91820883991747623276e-3, -8.37273026279389612214e-3, 3.94495503149495940765e-3, -1.24326149337271860996e-3, 2.94733916910313773450e-4, -5.60460936081286185419e-5, 8.90280447859565480812e-6},
           {8.11917102417317702867e-3, -7.61988566289586739116e-3, 3.58911326066944143948e-3, -1.13079865166263024076e-3, 2.68004770051325836612e-4, -5.09515767526732359072e-5, 8.09185124116441928833e-6},
           {7.39196909078262270887e-3, -6.93493994913225129950e-3, 3.26545634519983868013e-3, -1.02853385535323733554e-3, 2.43705027836497442129e-4, -4.63210756741214754045e-5, 7.35490293057269922179e-6},
           {6.73012504001383685820e-3, -6.31175260181289412426e-3, 2.97106610449936626300e-3, -9.35540298869674564336e-4, 2.21613436729798437413e-4, -4.21122493423602213178e-5, 6.68519471003620604170e-6},
           {6.12774664739495524002e-3, -5.74473979744085597871e-3, 2.70328953789637999386e-3, -8.50975576058703359929e-4, 2.01528930698553922609e-4, -3.82866268496139021621e-5, 6.07658108303642037105e-6},
           {5.57947436347528292339e-3, -5.22882382586051935869e-3, 2.45971467826829309072e-3, -7.74073980104964323723e-4, 1.83268786145546333163e-4, -3.48092531148869380859e-5, 5.52347910927088966868e-6},
           {5.08043303792696417098e-3, -4.75938711288285964951e-3, 2.23814864845593404843e-3, -7.04139507153690247590e-4, 1.66666945738251810749e-4, -3.16483670697473184921e-5, 5.02081683379430327569e-6},
           {4.62618802878018379326e-3, -4.33223042828335524329e-3, 2.03659771916309866382e-3, -6.40539499227360921776e-4, 1.51572495651977514741e-4, -2.87751093436109391490e-5, 4.56398645014577143279e-6},
           {4.21270529764525281102e-3, -3.94353489745511830850e-3, 1.85324918546991563965e-3, -5.82698867928250303569e-4, 1.37848282164967428972e-4, -2.61632567407660981702e-5, 4.14880176235821216486e-6},
           {3.83631512817510797811e-3, -3.58982746987380465717e-3, 1.68645489582378818767e-3, -5.30094845781307237934e-4, 1.25369654834205399930e-4, -2.37889810502354337376e-5, 3.77145955078315039019e-6},
           {3.49367913809655152371e-3, -3.26794952921359614997e-3, 1.53471628257306584586e-3, -4.82252216942144333080e-4, 1.14023324652700450339e-4, -2.16306299555318422214e-5, 3.42850448301348024988e-6},
           {3.18176028519251202428e-3, -2.97502835873759583982e-3, 1.39667075691702149455e-3, -4.38738983418304024590e-4, 1.03706326653391469120e-4, -1.96685280165360683140e-5, 3.11679724418798468732e-6},
           {2.89779559492675141061e-3, -2.70845120173681232559e-3, 1.27107934368897012439e-3, -3.99162426969501744380e-4, 9.43250773913725283626e-5, -1.78847958820197565648e-5, 2.83348559092311523352e-6},
           {2.63927136221813992203e-3, -2.46584168055092624317e-3, 1.15681544278351910830e-3, -3.63165530501493411756e-4, 8.57945186139074192095e-5, -1.62631860604985714624e-5, 2.57597806032019541368e-6},
           {2.40390060242171585761e-3, -2.24503835929016964598e-3, 1.05285461438946637176e-3, -3.30423726082432721307e-4, 7.80373392248422657370e-5, -1.47889337307022963419e-5, 2.34192009019397033801e-6},
           {2.18960254706552582063e-3, -2.04407525499008179901e-3, 9.58265294592407787869e-4, -3.00641939720841706602e-4, 7.09832683739513659385e-5, -1.34486212124259793804e-5, 2.12917232909230094668e-6},
           {1.99448399851389528495e-3, -1.86116411975023772485e-3, 8.72200356452685785988e-4, -2.73551905778493791715e-4, 6.45684331591982706156e-5, -1.22300548451780560772e-5, 1.93579093503630383395e-6},
           {1.81682237465015990890e-3, -1.69467833259856720356e-3, 7.93889439423831402842e-4, -2.48909726374990007778e-4, 5.87347750269707254839e-5, -1.11221531370490497138e-5, 1.76000968039565380038e-6},
           {1.65505029005049721612e-3, -1.54313825453365575935e-3, 7.22631977025823039017e-4, -2.26493653396590252690e-4, 5.34295194976100429850e-5, -1.01148451506593243111e-5, 1.60022369709775377848e-6},
           {1.50774153409621663145e-3, -1.40519791356390547077e-3, 6.57790859091447938957e-4, -2.06102072770859135300e-4, 4.86046943360343917094e-5, -9.19897818787980306693e-6, 1.45497471160886051834e-6},
           {1.37359831917305340136e-3, -1.27963289870769826931e-3, 5.98786670721931143374e-4, -1.87551672529872714285e-4, 4.42166917345344917404e-5, -8.36623392113887884270e-6, 1.32293763296226161455e-6},
           {1.25143968364897924771e-3, -1.16532935295445417949e-3, 5.45092455373520092497e-4, -1.70675777875354368288e-4, 4.02258704810471836373e-5, -7.60905219733383330748e-6, 1.20290836967249834334e-6},
           {1.14019094481267809112e-3, -1.06127396521427520663e-3, 4.96228954298655973096e-4, -1.55322837994811862499e-4, 3.65961944551638715135e-5, -6.92056181138428098487e-6, 1.09379276278262711908e-6},
           {1.03887410648918071532e-3, -9.66544870395895827815e-4, 4.51760278928044233838e-4, -1.41355050772749168573e-4, 3.32949041292291160184e-5, -6.29451761095942212117e-6, 9.94596532650098096690e-7},
           {9.46599134714584873086e-4, -8.80303375032696444440e-4, 4.11289976743583107679e-4, -1.28647112808238841403e-4, 3.02922180562418089675e-5, -5.72524335248039512942e-6, 9.04416146482637352207e-7},
           {8.62556022727596605724e-4, -8.01786433400676103178e-4, 3.74457454793296687368e-4, -1.17085083301280717017e-4, 2.75610616027090814619e-5, -5.20757978168879802919e-6, 8.22430522176287806540e-7},
           {7.86007573693921820362e-4, -7.30299805909625067771e-4, 3.40934728271316122173e-4, -1.06565351416090665069e-4, 2.50768204356883759394e-5, -4.73683746037715333219e-6, 7.47893491763133771229e-7},
           {7.16282836085789628884e-4, -6.65211837762113233040e-4, 3.10423464558738421062e-4, -9.69936976794269104874e-5, 2.28171165013111737236e-5, -4.30875390474588092118e-6, 6.80126954818506470383e-7},
           {6.52771132552605734198e-4, -6.05947801521312663479e-4, 2.82652295822239036423e-4, -8.82844408350500473893e-5, 2.07616044392301025295e-5, -3.91945464069227336842e-6, 6.18514658572307558482e-7},
           {5.94916628493983440373e-4, -5.51984752359971895565e-4, 2.57374375721507501168e-4, -8.03596623594020478343e-5, 1.88917865655872559692e-5, -3.56541781752000912583e-6, 5.62496547276051407893e-7},
           {5.42213391432279107757e-4, -5.02846849426079865221e-4, 2.34365158006504063206e-4, -7.31485015558213009807e-5, 1.71908447280099901749e-5, -3.24344205441948377387e-6, 5.11563628650454693542e-7},
           {4.94200896722942514643e-4, -4.58101100998712035609e-4, 2.13420376811732044392e-4, -6.65865147916616396387e-5, 1.56434874913844105117e-5, -2.95061722391460677273e-6, 4.65253310026977949777e-7},
           {4.50459939177995469673e-4, -4.17353494959060364322e-4, 1.94354210295822655988e-4, -6.06150930305290419576e-5, 1.42358112541735626523e-5, -2.68429790357822279157e-6, 4.23145161145265776497e-7},
           {4.10608913847642384518e-4, -3.80245479602023001703e-4, 1.76997610947675018418e-4, -5.51809323459124124577e-5, 1.29551740231427474625e-5, -2.44207925193739071331e-6, 3.84857064517414003593e-7},
           {3.74300432540885315465e-4, -3.46450762995041921903e-4, 1.61196787400566142121e-4, -5.02355525876962727720e-5, 1.17900806907141225043e-5, -2.22177508685006585006e-6, 3.50041717856163655846e-7},
           {3.41218245698473947834e-4, -3.15672401982250352276e-4, 1.46811823977016989162e-4, -4.57348598138753505713e-5, 1.07300787648732422880e-5, -2.02139796494378026437e-6, 3.18383456320872239557e-7},
           {3.11074441988225204505e-4, -2.87640154559906245819e-4, 1.33715425442467784369e-4, -4.16387485003106316860e-5, 9.76566359756946483295e-6, -1.83914107915306365738e-6, 2.89595365292723754485e-7},
           {2.83606900498829144538e-4, -2.62108071737588408951e-4, 1.21791775586505772021e-4, -3.79107399052658146691e-5, 8.88819224477801258372e-6, -1.67336180814673860223e-6, 2.63416657076624091405e-7},
           {2.58576972686530115290e-4, -2.38852307170573247832e-4, 1.10935499286981083993e-4, -3.45176532960939883325e-5, 8.08980517063049484299e-6, -1.52256676665421540209e-6, 2.39610287366571661271e-7},
           {2.35767373300302434313e-4, -2.17669124822037965547e-4, 1.01050718654353098168e-4, -3.14293070458548603509e-5, 7.36335508000501802179e-6, -1.38539821952255781518e-6, 2.17960789526657774041e-7},
           {2.14980261394169335594e-4, -1.98373086707297977688e-4, 9.20501947096792215355e-5, -2.86182468805979989962e-5, 6.70234222936203877615e-6, -1.26062173489152262325e-6, 1.98272306751837920449e-7},
           {1.96035494247283917325e-4, -1.80795404402563715703e-4, 8.38545468276411247628e-5, -2.60594988060611314478e-5, 6.10085562502169650675e-6, -1.14711496327829242005e-6, 1.80366803999910922668e-7},
           {1.78769038568867780908e-4, -1.64782439482596049013e-4, 7.63915428830355442043e-5, -2.37303444678871112473e-5, 5.55351957205115371327e-6, -1.04385743972292012676e-6, 1.64082443245730814625e-7},
           {1.63031524780244275585e-4, -1.50194339398671146933e-4, 6.95954536817207993242e-5, -2.16101169042320712598e-5, 5.05544508596487966897e-6, -9.49921315555429392136e-7, 1.49272107115956354636e-7},
           {1.48686931452864416151e-4, -1.36903796532740278883e-4, 6.34064658409922956217e-5, -1.96800148357038574484e-5, 4.60218572398909534963e-6, -8.64462934893263213334e-7, 1.35802057331621825159e-7},
           {1.35611388151096767286e-4, -1.24794919276755694997e-4, 5.77701478151129981398e-5, -1.79229338066456076459e-5, 4.18969743311510181951e-6, -7.86715178742408097217e-7, 1.23550715629190331337e-7},
           {1.23692085992259002622e-4, -1.13762204997980151877e-4, 5.26369642441069053780e-5, -1.63233126454170757191e-5, 3.81430204893790335003e-6, -7.15980506628894982766e-7, 1.12407555960065480783e-7},
           {1.12826286203564245996e-4, -1.03709605670937454747e-4, 4.79618342423516693957e-5, -1.48669938509396251376e-5, 3.47265411268576951840e-6, -6.51624632094740875211e-7, 1.02272097794269926943e-7},
           {1.02920417835115923398e-4, -9.45496777928698091354e-5, 4.37037296419930020789e-5, -1.35410966396402663014e-5, 3.16171070420084889528e-6, -5.93070774212992209659e-7, 9.30529912856586850365e-8},
           {9.38892565877840281924e-5, -8.62028089597683799122e-5, 3.98253095683930610597e-5, -1.23339015022223193885e-5, 2.87870401621060905003e-6, -5.39794432564175533918e-7, 8.46671859022624690955e-8},
           {8.56551774419846818041e-5, -7.85965141711568817708e-5, 3.62925880540306859874e-5, -1.12347452244623426896e-5, 2.62111642028859264010e-6, -4.91318637920011519795e-7, 7.70391748939971407086e-8},
           {7.81474744346529230036e-5, -7.16647955601251257464e-5, 3.30746316965013366471e-5, -1.02339254214473216609e-5, 2.38665779767164044290e-6, -4.47209635244107740385e-7, 7.01003086681479313634e-8},
           {7.13017415330337078544e-5, -6.53475598163484524281e-5, 3.01432846382543651108e-5, -9.32261372119539654107e-6, 2.17324492878891137901e-6, -4.07072959583786269359e-7, 6.37881707772173647647e-8},
           {6.50593091007620096932e-5, -5.95900880891851131662e-5, 2.74729183929385046854e-5, -8.49277681224174699583e-6, 1.97898275415614283531e-6, -3.70549869028877411883e-7, 5.80460107997795456854e-8},
           {5.93667309490104327268e-5, -5.43425536301383926212e-5, 2.50402042679609621641e-5, -7.73710464123906594780e-6, 1.80214733636956327917e-6, -3.37314102185423080750e-7, 5.28222289182517633316e-8},
           {5.41753174177466437699e-5, -4.95595828632961523654e-5, 2.28239063371527265334e-5, -7.04894511157463501201e-6, 1.64117036845481914129e-6, -3.07068930585006579810e-7, 4.80699074728168349606e-8},
           {4.94407103434547058282e-5, -4.51998559627164221437e-5, 2.08046931031360954464e-5, -6.42224469303807362605e-6, 1.49462508792992327655e-6, -2.79544479151283547436e-7, 4.37463852025064867662e-8},
           {4.51224961437497677883e-5, -4.12257433706584718210e-5, 1.89649661578043954855e-5, -5.85149440622620781524e-6, 1.36121346875716987652e-6, -2.54495290299125843847e-7, 3.98128702766830992789e-8},
           {4.11838535895330630217e-5, -3.76029750132873149507e-5, 1.72887043027867876206e-5, -5.33168069413510575637e-6, 1.23975457500499859928e-6, -2.31698109471248354730e-7, 3.62340885764603097140e-8},
           {3.75912331447667911045e-5, -3.43003392639318148817e-5, 1.57613217312822071641e-5, -4.85824073771061849483e-6, 1.12917397062383928317e-6, -2.10949871942807731781e-7, 3.29779640092787506241e-8},
           {3.43140650353866800081e-5, -3.12894089708157680527e-5, 1.43695389994760781859e-5, -4.42702181241300654944e-6, 1.02849408935728615013e-6, -1.92065872564908195791e-7, 3.00153279338922943157e-8},
           {3.13244934648541502559e-5, -2.85442921088249213499e-5, 1.31012656310572236207e-5, -4.03424431946684876896e-6, 9.36825477549730797742e-7, -1.74878101790178330721e-7, 2.73196550401409294158e-8},
           {2.85971346266862544504e-5, -2.60414048355204942196e-5, 1.19454933031792806384e-5, -3.67646815874919617525e-6, 8.53358830554091159044e-7, -1.59233732842992668517e-7, 2.48668232705558428773e-8},
           {2.61088563760895806768e-5, -2.37592649322592369210e-5, 1.08921986575150546672e-5, -3.35056214052081222427e-6, 7.77357750661333266851e-7, -1.44993746277486921129e-7, 2.26348955913026924964e-8},
           {2.38385776154703003576e-5, -2.16783037937479344630e-5, 9.93225486670051587368e-6, -3.05367616070385727904e-6, 7.08152161033281461993e-7, -1.32031679420967037716e-7, 2.06039216202550411894e-8},
           {2.17670856238316029474e-5, -1.97806952952981976999e-5, 9.05735116524505730015e-6, -2.78321588940537580732e-6, 6.45132316081909029846e-7, -1.20232489340174878260e-7, 1.87557573019507860875e-8},
           {1.98768697194784772287e-5, -1.80502000179555251104e-5, 8.25991962561236568426e-6, -2.53681974510783401979e-6, 5.87743354156489162794e-7, -1.09491519003635439800e-7, 1.70739009844995016430e-8},
           {1.81519697904616260896e-5, -1.64720234489198764493e-5, 7.53306852530250086857e-6, -2.31233794760280580261e-6, 5.35480343324325264089e-7, -9.97135572544898278805e-8, 1.55433444037024169611e-8},
           {1.65778383591110898914e-5, -1.50326868994935695863e-5, 6.87052170998162858791e-6, -2.10781346152027006358e-6, 4.87883775506360459085e-7, -9.08119840634714355304e-8, 1.41504372161044468950e-8},
           {1.51412149670206326173e-5, -1.37199099963131277238e-5, 6.26656341154920494432e-6, -1.92146465937495434216e-6, 4.44535468296732006510e-7, -8.27079933088610644777e-8, 1.28827638466783092909e-8},
           {1.38300117760244132729e-5, -1.25225037048705176265e-5, 5.71598802899135738213e-6, -1.75166954856832667167e-6, 4.05054837492553431454e-7, -7.53298860365047611864e-8, 1.17290315294853910560e-8},
           {1.26332093800372806240e-5, -1.14302729382368570369e-5, 5.21405442438806182554e-6, -1.59695142089152237895e-6, 3.69095506720647683774e-7, -6.86124277947748720634e-8, 1.06789685220062178113e-8},
           {1.15407619130005572575e-5, -1.04339278893159754879e-5, 4.75644432692389352701e-6, -1.45596579589922862626e-6, 3.36342223602384020792e-7, -6.24962642225975560033e-8, 9.72323156682651527240e-9},
           {1.05435106203965570272e-5, -9.52500330264563199723e-6, 4.33922447456440467861e-6, -1.32748854118395674822e-6, 3.06508054674090039692e-7, -5.69273895987029966086e-8, 8.85332175886029294403e-9},
           {9.63310513660421161377e-6, -8.69578497243122526029e-6, 3.95881215653612585423e-6, -1.21040506318043700493e-6, 2.79331833804086556216e-7, -5.18566635419470859065e-8, 8.06150805306603511167e-9},
           {8.80193177843489914843e-6, -7.93924281777687483662e-6, 3.61194385019067952942e-6, -1.10370047176734475378e-6, 2.54575841141287737572e-7, -4.72393714903164956619e-8, 7.34075771737329413630e-9},
           {8.04304822712144974219e-6, -7.24896994455025694965e-6, 3.29564667351813434380e-6, -1.00645063069596046362e-6, 2.32023691715452497792e-7, -4.30348249840785814472e-8, 6.68467309892572233171e-9},
           {7.35012402738815725389e-6, -6.61912715650710392059e-6, 3.00721239975186917947e-6, -9.17814013842194307655e-7, 2.11478414704611400563e-7, -3.92059981401186318113e-8, 6.08743412934650822029e-9},
           {6.71738638350962043844e-6, -6.04439242668687208771e-6, 2.74417380340450976171e-6, -8.37024294522136651173e-7, 1.92760706108204098410e-7, -3.57191970331302283208e-8, 5.54374604707231084648e-9},
           {6.13957077892962472919e-6, -5.51991488410775918281e-6, 2.50428312789882328410e-6, -7.63383601697627012882e-7, 1.75707339130774063781e-7, -3.25437589980012630247e-8, 5.04879186236349645236e-9},
           {5.61187598847459948297e-6, -5.04127291083263646249e-6, 2.28549248389697731224e-6, -6.96256382887110702036e-7, 1.60169718004948757249e-7, -2.96517791392001922817e-8, 4.59818913381856377371e-9},
           {5.12992309083893310113e-6, -4.60443598090697999483e-6, 2.08593600465720096509e-6, -6.35063819042546895109e-7, 1.46012562276867063380e-7, -2.70178615797001867448e-8, 4.18795066449611110454e-9},
           {4.68971812418607732269e-6, -4.20572990581256779243e-6, 1.90391360041416045484e-6, -5.79278741604789963645e-7, 1.33112709753989169340e-7, -2.46188932062383903693e-8, 3.81444876143920250395e-9},
           {4.28761805971354712750e-6, -3.84180518123396432157e-6, 1.73787616802952467434e-6, -5.28421006452516088505e-7, 1.21358027385055922761e-7, -2.24338378715451462647e-8, 3.47438273483202777645e-9},
           {3.92029979715693527683e-6, -3.50960815736885540261e-6, 1.58641212512079431798e-6, -4.82053283554258182457e-7, 1.10646420314590404159e-7, -2.04435491994561084211e-8, 3.16474934249501600186e-9},
           {3.58473191271729025662e-6, -3.20635477997411614531e-6, 1.44823514966622855888e-6, -4.39777224856487978798e-7, 1.00884930238605955844e-7, -1.86306003072322847866e-8, 2.88281591221234620273e-9},
           {3.27814891402354856184e-6, -2.92950667205055317944e-6, 1.32217301680790931132e-6, -4.01229976326676062812e-7, 9.19889149921423004171e-8, -1.69791289124965640338e-8, 2.62609589873078585069e-9},
           {2.99802777870197484849e-6, -2.67674934673397627727e-6, 1.20715743433008813124e-6, -3.66081003149507236356e-7, 8.38813020302063253063e-8, -1.54746964313489015686e-8, 2.39232665439407349011e-9},
           {2.74206657311280715825e-6, -2.44597236076342578183e-6, 1.10221478716382334044e-6, -3.34029199874764633969e-7, 7.64919091282868672199e-8, -1.41041598007148608196e-8, 2.17944921248536998052e-9},
           {2.50816496600831844168e-6, -2.23525123500721273798e-6, 1.00645770934130073098e-6, -3.04800259862163936322e-7, 6.97568262328818865787e-8, -1.28555548729691138460e-8, 1.98558990062590020511e-9},
           {2.29440646842770014317e-6, -2.04283098409682042383e-6, 9.19077409166725643828e-7, -2.78144280684612304002e-7, 6.36178529419086842662e-8, -1.17179903354039370309e-8, 1.80904361818801742702e-9},
           {2.09904224621965414781e-6, -1.86711111138674979240e-6, 8.39336680051250811312e-7, -2.53833584257919436159e-7, 5.80219865944489901449e-8, -1.06815512021368558430e-8, 1.64825862677764094516e-9},
           {1.92047636530698189063e-6, -1.70663193835155818457e-6, 7.66563535537067978522e-7, -2.31660732380915434188e-7, 5.29209564035446812151e-8, -9.73721101243661670153e-9, 1.50182271656251593644e-9},
           {1.75725234230044281245e-6, -1.56006214926466679483e-6, 7.00145412565086449610e-7, -2.11436720112521371516e-7, 4.82707994788253044614e-8, -8.87675194797971907335e-9, 1.36845062369442233125e-9},
           {1.60804088444242708849e-6, -1.42618744268165714900e-6, 6.39523892071153131697e-7, -1.92989330997295150632e-7, 4.40314749613598474096e-8, -8.09269215294604713946e-9, 1.24697258540945908026e-9},
           {1.47162871321515790252e-6, -1.30390019096888326589e-6, 5.84189890572652204796e-7, -1.76161639592622790069e-7, 4.01665128346863120189e-8, -7.37821960577121065929e-9, 1.13632392969438653448e-9},
           {1.34690837537490881634e-6, -1.19219001796289275311e-6, 5.33679280571566696124e-7, -1.60810648062041236045e-7, 3.66426942865762676309e-8, -6.72713195038612575218e-9, 1.03553560577290131914e-9},
           {1.23286895375633987385e-6, -1.09013521289605560304e-6, 4.87568901388998770757e-7, -1.46806044791968895693e-7, 3.34297607785506099130e-8, -6.13378174842719178135e-9, 9.43725570179185644187e-10},
           {1.12858759800544937824e-6, -9.96894906050653083641e-7, 4.45472925493637726212e-7, -1.34029074074127974940e-7, 3.05001492370318996769e-8, -5.59302666268169894898e-9, 8.60090950924813120118e-10},
           {1.03322180251472668418e-6, -9.11701938272533413484e-7, 4.07039548523603341305e-7, -1.22371506882927093575e-7, 2.78287510136229439992e-8, -5.10018412638531549102e-9, 7.83900919299787801884e-10},
           {9.46002365312722688188e-7, -8.33856362545635293496e-7, 3.71947974055503158770e-7, -1.11734703674916933257e-7, 2.53926924744507010821e-8, -4.65099009331526138692e-9, 7.14490205243255272734e-10},
           {8.66226967559524187663e-7, -7.62719521354084017671e-7, 3.39905666771968337417e-7, -1.02028760954199326980e-7, 2.31711352717314578678e-8, -4.24156150028967952384e-9, 6.51253198032624001199e-10},
           {7.93254318671526429516e-7, -6.97708648588236679171e-7, 3.10645850042551096812e-7, -9.31717340907090197317e-8, 2.11450945264401801995e-8, -3.86836210702398340513e-9, 5.93638579324445431433e-10},
           {7.26498816990744891757e-7, -6.38291949329601916594e-7, 2.83925226083798526776e-7, -8.50889295542620001331e-8, 1.92972733107929005451e-8, -3.52817140861077301460e-9, 5.41144440384564314785e-10},
           {6.65425680368756636876e-7, -5.83984115017582091483e-7, 2.59521898821748418220e-7, -7.77122603422495036987e-8, 1.76119119646168538685e-8, -3.21805634345634873521e-9, 4.93313839712559461704e-10},
           {6.09546505092375801621e-7, -5.34342235295396824435e-7, 2.37233481361480060455e-7, -7.09796589383650237069e-8, 1.60746509119003823479e-8, -2.93534554457377668965e-9, 4.49730761236090453108e-10},
           {5.58415215273006183594e-7, -4.88962071286957134350e-7, 2.16875371589577081690e-7, -6.48345426488030350846e-8, 1.46724057640761127249e-8, -2.67760590492691246961e-9, 4.10016436860599517725e-10},
           {5.11624368186739623949e-7, -4.47474658201419172542e-7, 1.98279180910860786798e-7, -5.92253266255232442632e-8, 1.33932536059793074777e-8, -2.44262124824836189396e-9, 3.73826000441735289272e-10}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson
