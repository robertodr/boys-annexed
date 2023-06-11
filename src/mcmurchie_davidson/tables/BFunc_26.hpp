/* This file was autogenerated on 2023-04-10T16:54 DO NOT EDIT! */

#pragma once

#include <array>

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 26.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<26>() {
  // clang-format off
  return {{{1.88679245283018867925e-2, -1.81818181818181818182e-2, 8.77192982456140350877e-3, -2.82485875706214689266e-3, 6.83060109289617486339e-4, -1.32275132275132275132e-4, 2.13675213675213675214e-5},
           {1.71347041539431643731e-2, -1.65095106151410472850e-2, 7.96416449199525457170e-3, -2.56444504291622032283e-3, 6.20026490913011497572e-4, -1.20056860862051854107e-4, 1.93920144524471803685e-5},
           {1.55608911135130846548e-2, -1.49911898455291226623e-2, 7.23086053264986646644e-3, -2.32806151837623969553e-3, 5.62815044500732455934e-4, -1.08968168147720605079e-4, 1.75992990235618172084e-5},
           {1.41318078819494194476e-2, -1.36126617693356228439e-2, 6.56514719311787880301e-3, -2.11348870381121434203e-3, 5.10887532461955511283e-4, -9.89045394803491874835e-5, 1.59724485873192330809e-5},
           {1.28341298037048714281e-2, -1.23610419508987066928e-2, 5.96078828986848410082e-3, -1.91871229361833010515e-3, 4.63755515898413772299e-4, -8.97711379129003837415e-5, 1.44961051838327230253e-5},
           {1.16557602713579597925e-2, -1.12246346693384690257e-2, 5.41212355049122337269e-3, -1.74190417389434430186e-3, 4.20975743581853995446e-4, -8.14819074266738693161e-5, 1.31563339347514336275e-5},
           {1.05857174314866794157e-2, -1.01928231456396411331e-2, 4.91401538173076839894e-3, -1.58140519767794055991e-3, 3.82145968193213394874e-4, -7.39587593113750596356e-5, 1.19404910879270434980e-5},
           {9.61403135232864747284e-3, -9.25596991572059414610e-3, 4.46180056186541891539e-3, -1.43570955491050195399e-3, 3.46901150205600769614e-4, -6.71308339856551013723e-5, 1.08371043056974120100e-5},
           {8.73165068631581720027e-3, -8.40532641094794176484e-3, 4.05124640153600550085e-3, -1.30345058936281793169e-3, 3.14910013469164536994e-4, -6.09338312585168550444e-5, 9.83576406003974150309e-6},
           {7.93035795001123360037e-3, -7.63295089444235037163e-3, 3.67851095936947997816e-3, -1.18338792847422083834e-3, 2.85871919890625248838e-4, -5.53094026818345138943e-5, 8.92702510344888547052e-6},
           {7.20269262513506623030e-3, -6.93163398035808245301e-3, 3.34010693706304154921e-3, -1.07439580447870036001e-3, 2.59514033625365156226e-4, -5.02046002337178001555e-5, 8.10231708018345593775e-6},
           {6.54188135801424090754e-3, -6.29483103485235437335e-3, 3.03286891336361497107e-3, -9.75452456467615033366e-4, 2.35588747944244795898e-4, -4.55713761071771623012e-5, 7.35386342940638715690e-6},
           {5.94177460162047255121e-3, -5.71660082236789129917e-3, 2.75392360792331555505e-3, -8.85630513267765843641e-4, 2.13871350426857832283e-4, -4.13661288636034258606e-5, 6.67460781055543059910e-6},
           {5.39678910500671332046e-3, -5.19154981974737778083e-3, 2.50066289463330869089e-3, -8.04088266293884841238e-4, 1.94157904391389067068e-4, -3.75492916505801741455e-5, 6.05814735276363355122e-6},
           {4.90185570998482623983e-3, -4.71478167413904528799e-3, 2.27071931000732930503e-3, -7.30061749954111563476e-4, 1.76263326520074503981e-4, -3.40849585826863665490e-5, 5.49867209499131417283e-6},
           {4.45237196482757904836e-3, -4.28185132914397827836e-3, 2.06194382574817177203e-3, -6.62857554825655457056e-4, 1.60019642497948358893e-4, -3.09405457460184434883e-5, 4.99091004234706216299e-6},
           {4.04415911009729095449e-3, -3.88872338765659103510e-3, 1.87238567600893184018e-3, -6.01846305748065819180e-4, 1.45274404168749471855e-4, -2.80864836156091156913e-5, 4.53007731742602181701e-6},
           {3.67342303282969023445e-3, -3.53173431977617550623e-3, 1.70027404925810008557e-3, -5.46456743269059432716e-4, 1.31889253241574598780e-4, -2.54959379728691737680e-5, 4.11183293388739501254e-6},
           {3.33671882262294482516e-3, -3.20755816039711193557e-3, 1.54400147225759536672e-3, -4.96170352582381247661e-4, 1.19738617969635354529e-4, -2.31445566804622528362e-5, 3.73223776339049987622e-6},
           {3.03091859705067242364e-3, -2.91317537396069969891e-3, 1.40210872963204532041e-3, -4.50516489272727999049e-4, 1.08708530481477609890e-4, -2.10102399172110847236e-5, 3.38771730682779563629e-6},
           {2.75318229455370853259e-3, -2.64584459368347917410e-3, 1.27327117699733657376e-3, -4.09067955878489146471e-4, 9.86955535872136160503e-5, -1.90729316980585811802e-5, 3.07502791691328345534e-6},
           {2.50093116085849543478e-3, -2.40307696964723585195e-3, 1.15628631876382509044e-3, -3.71436987543420789847e-4, 8.96058069185429905594e-5, -1.73144307058831196000e-5, 2.79122615194925516088e-6},
           {2.27182368028332973969e-3, -2.18261288470060618380e-3, 1.05006253365903627628e-3, -3.37271608893800333307e-4, 8.13540832014346545435e-5, -1.57182186450123610689e-5, 2.53364097031554215934e-6},
           {2.06373372626611657765e-3, -1.98240081941315846731e-3, 9.53608841839135613905e-4, -3.06252327784701963535e-4, 7.38630463132321874939e-5, -1.42693044923338094380e-5, 2.29984850218597323973e-6},
           {1.87473072629541705376e-3, -1.80057816755097108846e-3, 8.66025617280310501533e-4, -2.78089134741075312204e-4, 6.70625035497242729179e-5, -1.29540831725414994107e-5, 2.08764915943324745558e-6},
           {1.70306165534703083698e-3, -1.63545382189878192591e-3, 7.86496158053428227885e-4, -2.52518779806403122733e-4, 6.08887452297331654115e-5, -1.17602073207177062103e-5, 1.89504686686865053065e-6},
           {1.54713468909948789753e-3, -1.48549236691135474672e-3, 7.14279035172182938558e-4, -2.29302301131251710280e-4, 5.52839454016770343254e-5, -1.06764709194252717817e-5, 1.72023021808793958494e-6},
           {1.40550436378550553697e-3, -1.34929972979297950475e-3, 6.48701148042979684923e-4, -2.08222782010802182854e-4, 5.01956179944003670537e-5, -9.69270370995747606419e-6, 1.56155537745082759548e-6},
           {1.27685810367961487949e-3, -1.22561015532173227943e-3, 5.89151421203337505479e-4, -1.89083315236981150485e-4, 4.55761232788202630081e-5, -8.79967537942706337043e-6, 1.41753056628241508169e-6},
           {1.16000399005798302508e-3, -1.11327438218378140140e-3, 5.35075083077656715215e-4, -1.71705155587520159194e-4, 4.13822199825787884414e-5, -7.98900861794280304508e-6, 1.28680198640815204980e-6},
           {1.05385965711593510528e-3, -1.01124890988011392583e-3, 4.85968472961865777422e-4, -1.55926043049689380497e-4, 3.75746588314316808653e-5, -7.25310022410014304046e-6, 1.16814104776231484545e-6},
           {9.57442210901563979866e-4, -9.18586255520184862162e-4, 4.41374327423582624164e-4, -1.41598680987383828550e-4, 3.41178136826352594439e-5, -6.58504951319930091120e-6, 1.06043277917315666505e-6},
           {8.69859076919621233490e-4, -8.34426109120902509408e-4, 4.00877501819021616388e-4, -1.28589354921935155934e-4, 3.09793467708261544783e-5, -5.97859335172310011052e-6, 9.62665312643333029329e-7},
           {7.90299690769066028734e-4, -7.57987304472810142358e-4, 3.64101086724592055630e-4, -1.16776678923321690666e-4, 2.81299049091915121792e-5, -5.42804720431367586711e-6, 8.73920341618568572959e-7},
           {7.18027954082117226588e-4, -6.88560530297968793369e-4, 3.30702882798695574178e-4, -1.06050457811893879810e-4, 2.55428437811544716452e-5, -4.92825163637760834686e-6, 7.93364462967461912471e-7},
           {6.52375385206892927613e-4, -6.25501713378124571570e-4, 3.00372200962742950687e-4, -9.63106544627202688837e-5, 2.31939777231222141066e-5, -4.47452376706246574245e-6, 7.20241320768608886354e-7},
           {5.92734900587191444223e-4, -5.68226011642865508691e-4, 2.72826957851742359952e-4, -8.74664524955119047087e-5, 2.10613526395758488875e-5, -4.06261321417422678192e-6, 6.53864477597345945810e-7},
           {5.38555168703000269013e-4, -5.16202360935089869104e-4, 2.47811039262878175706e-4, -7.94354055321794255825e-5, 1.91250399102036724519e-5, -3.68866211508877778086e-6, 5.93610945895610835844e-7},
           {4.89335483799468941475e-4, -4.68948524369249637647e-4, 2.25091906851524825930e-4, -7.21426650199183394641e-5, 1.73669493469602115527e-5, -3.34916884625460446062e-6, 5.38915318260098321799e-7},
           {4.44621111500848129744e-4, -4.26026597915461801343e-4, 2.04458425611926398720e-4, -6.55202793580184035061e-5, 1.57706594387509261299e-5, -3.04095509885363995628e-6, 4.89264441155479347339e-7},
           {4.03999062825046101680e-4, -3.87038930124161857649e-4, 1.85718891755921953601e-4, -5.95065577383532324672e-5, 1.43212632845984082458e-5, -2.76113599991450203871e-6, 4.44192581704772865055e-7},
           {3.67094257125552938040e-4, -3.51624417791839244223e-4, 1.68699242487191017467e-4, -5.40454927190762006461e-5, 1.30052287641857206143e-5, -2.50709299695800029925e-6, 4.03277041876906431240e-7},
           {3.33566038128245174067e-4, -3.19455142895155082966e-4, 1.53241430878323802887e-4, -4.90862361041909236797e-5, 1.18102716289975136676e-5, -2.27644925037169760371e-6, 3.66134178626380148441e-7},
           {3.03105010535220176573e-4, -2.90233319321598660923e-4, 1.39201950609709531204e-4, -4.45826232036039305255e-5, 1.07252403191611976401e-5, -2.06704730140607672724e-6, 3.32415792381946892532e-7},
           {2.75430167667395765872e-4, -2.63688520829947624542e-4, 1.26450496737425183754e-4, -4.04927410037506194541e-5, 9.74001142168221023846e-6, -1.87692880518401596772e-6, 3.01805849766843812967e-7},
           {2.50286283340316550138e-4, -2.39575164310496858434e-4, 1.14868749935278968342e-4, -3.67785361922128825650e-5, 8.84539478611598631980e-6, -1.70431613762175936694e-6, 2.74017509595400347904e-7},
           {2.27441543639026583744e-4, -2.17670224808133014110e-4, 1.04349272815963681140e-4, -3.34054593548238008523e-5, 8.03304740477373284326e-6, -1.54759570285793414292e-6, 2.48790424059842767727e-7},
           {2.06685396501200623716e-4, -1.97771160943384095550e-4, 9.47945079888457995884e-5, -3.03421420041240817516e-5, 7.29539524718130473154e-6, -1.40530278384539558068e-6, 2.25888289624020084703e-7},
           {1.87826599054052932169e-4, -1.79694031337996668789e-4, 8.61158684671759660275e-5, -2.75601034069101238346e-5, 6.62556231348153708288e-6, -1.27610779333067059605e-6, 2.05096624502290497402e-7},
           {1.70691444498973052442e-4, -1.63271784440940904114e-4, 7.82329119044591089847e-5, -2.50334844589113475878e-5, 6.01730623949943206239e-6, -1.15880379566566109332e-6, 1.86220751744337541559e-7},
           {1.55122152015733791785e-4, -1.48352705774841298622e-4, 7.10725909265396885552e-5, -2.27388061090007969657e-5, 5.46495984792001321536e-6, -1.05229518189118460113e-6, 1.69083968890538515122e-7},
           {1.40975404681219196844e-4, -1.34799008096957845509e-4, 6.45685725400506300509e-5, -2.06547500661784917914e-5, 4.96337809604386438956e-6, -9.55587391415497514703e-7, 1.53525886926131852944e-7},
           {1.28121021780227769844e-4, -1.22485551306854420148e-4, 5.86606202459715036514e-5, -1.87619597320507475852e-5, 4.50788992141498074989e-6, -8.67777583486174226570e-7, 1.39400922862538970911e-7},
           {1.16440753140988298322e-4, -1.11298680147372603582e-4, 5.32940330752482981937e-5, -1.70428594916364186610e-5, 4.09425453274002446258e-6, -7.88046170614124081773e-7, 1.26576931725962845795e-7},
           {1.05827184267356325803e-4, -1.01135168847889283421e-4, 4.84191362972791186831e-5, -1.54814906678570559403e-5, 3.71862173537313413582e-6, -7.15649134238878657983e-7, 1.14933965050571143369e-7},
           {9.61827420739232467548e-5, -9.19012628594409599703e-5, 4.39908190365987259644e-5, -1.40633626016390025752e-5, 3.37749591862169007325e-6, -6.49911050301570805910e-7, 1.04363144168660881938e-7},
           {8.74187919691668373096e-5, -8.35118087395444840112e-5, 3.99681144728572534681e-5, -1.27753174616485375766e-5, 3.06770336659463492486e-6, -5.90218759086012965041e-7, 9.47656376745180212961e-8},
           {7.94548178841037339723e-5, -7.58894640689658907338e-5, 3.63138186983262442565e-5, -1.16054075166360383506e-5, 2.78636258559163496829e-6, -5.36015619762330441216e-7, 8.60517334225062208755e-8},
           {7.22176776176563524736e-5, -6.89639800310308938129e-5, 3.29941446694340822674e-5, -1.05427837203973663556e-5, 2.53085736941393444401e-6, -4.86796295579146864592e-7, 7.81399963125625117904e-8},
           {6.56409265723775146818e-5, -6.26715499633580946925e-5, 2.99784080176403956090e-5, -9.57759456557377512052e-6, 2.29881234973422861993e-6, -4.42102020651503428525e-7, 7.09565039261986202578e-8},
           {5.96642035918580227881e-5, -5.69542178085086800519e-5, 2.72387417834002538096e-5, -8.70089425890636095550e-6, 2.08807080203638994513e-6, -4.01516303829794391666e-7, 6.44341528109808843738e-8},
           {5.42326731900566694168e-5, -5.17593409497695941166e-5, 2.47498374078488875651e-5, -7.90455935804587852991e-6, 1.89667449884708420649e-6, -3.64661029252948454518e-7, 5.85120288782417542033e-8},
           {4.92965189883555704540e-5, -4.70391024263789778691e-5, 2.24887095627055573716e-5, -7.18121308941783828464e-6, 1.72284542123040668437e-6, -3.31192916925785709273e-7, 5.31348359837807150111e-8},
           {4.48104836532801516203e-5, -4.27500679837246295263e-5, 2.04344826220609792125e-5, -6.52415663870414248924e-6, 1.56496915698527949679e-6, -3.00800310051277104606e-7, 4.82523773102664202064e-8},
           {4.07334510609981407300e-5, -3.88527838327309605238e-5, 1.85681967822756845794e-5, -5.92730677090472751593e-6, 1.42157982983830688325e-6, -2.73200258925348998876e-7, 4.38190846681524568829e-8},
           {3.70280668079803296656e-5, -3.53114113727211263293e-5, 1.68726320200799791127e-5, -5.38513919630173325308e-6, 1.29134641831163745925e-6, -2.48135873994009530333e-7, 3.97935912838813361720e-8},
           {3.36603935442481738043e-5, -3.20933954770643851593e-5, 1.53321482458574994312e-5, -4.89263715252338213550e-6, 1.17306033600181238399e-6, -2.25373923206281800471e-7, 3.61383440542495018205e-8},
           {3.05995979297890447206e-5, -2.91691632541290277582e-5, 1.39325401605823292252e-5, -4.44524472180217507396e-6, 1.06562415685472524756e-6, -2.04702651095664014846e-7, 3.28192516179238706983e-8},
           {2.78176663090223321719e-5, -2.65118504803949894127e-5, 1.26609054623864950945e-5, -4.03882444690255694789e-6, 9.68041379775408851341e-7, -1.85929799109305641375e-7, 2.98053649327551744096e-8},
           {2.52891464653999191285e-5, -2.40970531607012301877e-5, 1.15055251735524873442e-5, -3.66961884947420934440e-6, 8.79407136670746383784e-7, -1.68880808597496200872e-7, 2.70685873539203222975e-8},
           {2.29909130608220504683e-5, -2.19026019049317644818e-5, 1.04557549720258298947e-5, -3.33421549114786416881e-6, 7.98899756880416794006e-7, -1.53397189594289463974e-7, 2.45834114859429187912e-8},
           {2.09019545848110437352e-5, -1.99083570231742146696e-5, 9.50192651438979595186e-6, -3.02951525087471018567e-6, 7.25773108989835784951e-7, -1.39335040079347329506e-7, 2.23266803339157130636e-8},
           {1.90031798383703960079e-5, -1.80960224345100509510e-5, 8.63525783060301277113e-6, -2.75270352213029250390e-6, 6.59349648314343646104e-7, -1.26563701826107072661e-7, 2.02773705081677575614e-8},
           {1.72772421590329289167e-5, -1.64489766599242964425e-5, 7.84777195554745144845e-6, -2.50122406094245153653e-6, 5.99014104965117624829e-7, -1.14964540225503222147e-7, 1.84163954443449156470e-8},
           {1.57083797584663042101e-5, -1.49521193289956391383e-5, 7.13222303936423974703e-6, -2.27275524051739474530e-6, 5.44207753416608154722e-7, -1.04429836639828707051e-7, 1.67264267893699787933e-8},
           {1.42822706936960348455e-5, -1.35917317745367072755e-5, 6.48202924838932614826e-6, -2.06518849076159877624e-6, 4.94423209949352406472e-7, -9.48617828988959633310e-8, 1.51917322747976202579e-8},
           {1.29859011289240387332e-5, -1.23553504205498781624e-5, 5.89121183189563639367e-6, -1.87660872144173841513e-6, 4.49199709292103840326e-7, -8.61715685104298826819e-8, 1.37980285542977034368e-8},
           {1.18074456683324425198e-5, -1.12316517879751577867e-5, 5.35433978739713154507e-6, -1.70527654628215350219e-6, 4.08118816279979406055e-7, -7.82785520276449436721e-8, 1.25323476228529862538e-8},
           {1.07361586523208850385e-5, -1.02103480508471531387e-5, 4.86647960951288941069e-6, -1.54961214214399724716e-6, 3.70800532423033647506e-7, -7.11095088074412457295e-8, 1.13829155630755504625e-8},
           {9.76227541137566711912e-6, -9.28209217365935238063e-6, 4.42314965481556309954e-6, -1.40818059272026983854e-6, 3.36899760980703834194e-7, -6.45979481100515270453e-8, 1.03390424800366471892e-8},
           {8.87692256416046508347e-6, -8.43839174987430317007e-6, 4.02027869814283843471e-6, -1.27967858006007985379e-6, 3.06103097496751292240e-7, -5.86834931420459016942e-8, 9.39102259126312988033e-9},
           {8.07203653031276958539e-6, -7.67153074245101208731e-6, 3.65416829493627471335e-6, -1.16292229983400136035e-6, 2.78125915798266687452e-7, -5.33113182354897860531e-8, 8.53004353407342389008e-9},
           {7.34028950460986444999e-6, -6.97449840074250570370e-6, 3.32145859965524577987e-6, -1.05683648768853920703e-6, 2.52709722229667413519e-7, -4.84316378923207813238e-8, 7.74810403910902262640e-9},
           {6.67502220834328183452e-6, -6.34092469483365801780e-6, 3.01909732252698774423e-6, -9.60444454418889185482e-7, 2.29619753404446762394e-7, -4.39992429097162839589e-8, 7.03793919758198268686e-9},
           {6.07018279655612263951e-6, -5.76502166896567272788e-6, 2.74431153613871271071e-6, -8.72859037112718376300e-7, 2.08642795037329134152e-7, -3.99730792439477440707e-8, 6.39295262114696535117e-9},
           {5.52027135683876439055e-6, -5.24153017069456160320e-6, 2.49458206992805871832e-6, -7.93274381972075993269e-7, 1.89585201488892118758e-7, -3.63158656711230761247e-8, 5.80715485809178933764e-9},
           {5.02028948717649086433e-6, -4.76567146237048542195e-6, 2.26762025473241297222e-6, -7.20958482285982586856e-7, 1.72271097533081775878e-7, -3.29937466670785171770e-8, 5.27510748833429376692e-9},
           {4.56569448738032984409e-6, -4.33310326686906412011e-6, 2.06134680144145695729e-6, -6.55246402075577962872e-7, 1.56540745563023964787e-7, -2.99759772589230157192e-8, 4.79187237307010103491e-9},
           {4.15235774134743699138e-6, -3.93987984067814547774e-6, 1.87387261766531902277e-6, -5.95534122333025995105e-7, 1.42249062998135424723e-7, -2.72346369004694618061e-8, 4.35296558333888338933e-9},
           {3.77652690618781743497e-6, -3.58241570482813860714e-6, 1.70348138436893631320e-6, -5.41272952584693228280e-7, 1.29264276060318255711e-7, -2.47443696958297889370e-8, 3.95431557572251360872e-9},
           {3.43479155948072434253e-6, -3.25745269809983329715e-6, 1.54861373080026119014e-6, -4.91964455782854988026e-7, 1.17466697362151042573e-7, -2.24821485423646656320e-8, 3.59222522327125397895e-9},
           {3.12405198791474463573e-6, -2.96203004776730853184e-6, 1.40785286090894300438e-6, -4.47155839317793191672e-7, 1.06747615907468698816e-7, -2.04270609882864817557e-8, 3.26333734595003894136e-9},
           {2.84149082961787655265e-6, -2.69345718112241798987e-6, 1.27991149795212083920e-6, -4.06435769288467535452e-7, 9.70082891553952817818e-8, -1.85601148036248731617e-8, 2.96460341774675899119e-9},
           {2.58454730886806527255e-6, -2.44928902644261473504e-6, 1.16362002624110197418e-6, -3.69430569115688282106e-7, 8.81590277526407412509e-8, -1.68640614478903240548e-8, 2.69325515739814826912e-9},
           {2.35089382583602422673e-6, -2.22730357514232206649e-6, 1.05791572011154526433e-6, -3.35800767163852176452e-7, 8.01183644046321652819e-8, -1.53232357853492350927e-8, 2.44677873674693964357e-9},
           {2.13841468577345876216e-6, -2.02548149780481431725e-6, 9.61832960304287448925e-7, -3.05237961289358962532e-7, 7.28122991419544003220e-8, -1.39234105509295617616e-8, 2.22289136530158027395e-9},
           {1.94518677182332238020e-6, -1.84198762582192964953e-6, 8.74494347118518315924e-7, -2.77461971186250316685e-7, 6.61736139519912811701e-8, -1.26516642078386217916e-8, 2.01952003185799613526e-9},
           {1.76946198357805171614e-6, -1.67515412765018376451e-6, 7.95102628029302916168e-7, -2.52218252080046019663e-7, 6.01412503932842159813e-8, -1.14962609632924868585e-8, 1.83478220427176626296e-9},
           {1.60965127981361389579e-6, -1.52346522438487605702e-6, 7.22933365025260328638e-7, -2.29275545754266228086e-7, 5.46597443980278085292e-8, -1.04465418225062613384e-8, 1.66696830682889497069e-9},
           {1.46431017863304613845e-6, -1.38554330360480965688e-6, 6.57328273790109268540e-7, -2.08423747103503690104e-7, 4.96787130018183635362e-8, -9.49282566434590342412e-9, 1.51452581132707738167e-9},
           {1.33212558170043088236e-6, -1.26013630338185715912e-6, 5.97689173087911132465e-7, -1.89471966412801427358e-7, 4.51523882242625450038e-8, -8.62631941576444436641e-9, 1.37604479310371563373e-9},
           {1.21190380145976050056e-6, -1.14610625010226857383e-6, 5.43472488374339018890e-7, -1.72246769384267034409e-7, 4.10391937638800401915e-8, -7.83903648721901560560e-9, 1.25024481697430316852e-9},
           {1.10255968132623050629e-6, -1.04241884441974498185e-6, 4.94184258798004175029e-7, -1.56590578585335348783e-7, 3.73013605700189876890e-8, -7.12372270848871843877e-9, 1.13596303050430878428e-9},
           {1.00310670891307394549e-6, -9.48133999353071451332e-7, 4.49375601424739796184e-7, -1.42360221494342106157e-7, 3.39045777169851323847e-8, -6.47378907441205072317e-9, 1.03214335334651090164e-9},
           {9.12648031508581465408e-7, -8.62397243343777689684e-7, 4.08638590757296429459e-7, -1.29425611682111796395e-7, 3.08176753346621325181e-8, -5.88325067369435716704e-9, 9.37826661640297569771e-10},
           {8.30368291330263001354e-7, -7.84431909083629978381e-7, 3.71602515472665226117e-7, -1.17668550905842195159e-7, 2.80123366486516147804e-8, -5.34667123169771831421e-9, 8.52141875786179331449e-10},
           {7.55526205633291264634e-7, -7.13532036182110056725e-7, 3.37930477795102408450e-7, -1.06981641015235587647e-7, 2.54628364541857186065e-8, -4.85911275055982118976e-9, 7.74297868365338936640e-10},
           {6.87447823608362272493e-7, -6.49055922337875665898e-7, 3.07316304097441414343e-7, -9.72672955910876797850e-8, 2.31458035942997870897e-8, -4.41608977758653641971e-9, 7.03576116649892926210e-10},
           {6.25520398233483963561e-7, -5.90420263666772494180e-7, 2.79481738206021352168e-7, -8.84368421629172010328e-8, 2.10400052363046197343e-8, -4.01352787607160259836e-9, 6.39324031116830294436e-10},
           {5.69186816902631257703e-7, -5.37094830277912778805e-7, 2.54173891502390843415e-7, -8.04097066933607977949e-8, 1.91261509435564843621e-8, -3.64772591192115298284e-9, 5.80948897702787509461e-10},
           {5.17940539794103381193e-7, -4.88597628129156899957e-7, 2.31162926292218491688e-7, -7.31126727808097167194e-8, 1.73867147237890415826e-8, -3.31532180506861148861e-9, 5.27912377277315309978e-10},
           {4.71320999610362292203e-7, -4.44490502679902864390e-7, 2.10239951070704794322e-7, -6.64792087252626265616e-8, 1.58057734025668340350e-8, -3.01326142699041951387e-9, 4.79725511023036004887e-10},
           {4.28909420562324217195e-7, -4.04375143934014372318e-7, 1.91215108274319881831e-7, -6.04488562320774004266e-8, 1.43688598223105247006e-8, -2.73877035497818029231e-9, 4.35944185140983139817e-10},
           {3.90325018323768029410e-7, -3.67889456166867111284e-7, 1.73915836889141067062e-7, -5.49666751001000416609e-8, 1.30628295052487152496e-8, -2.48932822046298090543e-9, 3.96165012592897035945e-10},
           {3.55221546181355547865e-7, -3.34704258992133489644e-7, 1.58185293902985496050e-7, -4.99827387598621735834e-8, 1.18757395438596600981e-8, -2.26264541287256444742e-9, 3.60021593489606495134e-10},
           {3.23284155785072597688e-7, -3.04520289477300067323e-7, 1.43880920056968568102e-7, -4.54516759990106306859e-8, 1.07967385960485748110e-8, -2.05664192245803120905e-9, 3.27181119272449700805e-10},
           {2.94226543792117592463e-7, -2.77065477790275793627e-7, 1.30873136685718460950e-7, -4.13322546402591195231e-8, 9.81596696552423976730e-9, -1.86942812545964487675e-9, 2.97341289046161529955e-10},
           {2.67788358321049750307e-7, -2.52092471378550240366e-7, 1.19044161646638854004e-7, -3.75870033259206776575e-8, 8.92446584155689781418e-9, -1.69928733307754028445e-9, 2.70227509336932309288e-10},
           {2.43732841516626525759e-7, -2.29376384970515308192e-7, 1.08286933438586781865e-7, -3.41818679161147196351e-8, 8.11409485739329600199e-9, -1.54465994214220945889e-9, 2.45590351195742447477e-10},
           {2.21844686691207510149e-7, -2.08712755766989798381e-7, 9.85041336093444900233e-8, -3.10858993283307446268e-8, 7.37745720386807254330e-9, -1.40412904029524335668e-9, 2.23203240969444328421e-10},
           {2.01928090475895524240e-7, -1.89915685078920852476e-7, 8.96072984585892611338e-8, -2.82709699371583998566e-8, 6.70783160490574318407e-9, -1.27640733203251473854e-9, 2.02860363242907862496e-10}}};
  // clang-format on
}
} // namespace mcmurchie_davidson
