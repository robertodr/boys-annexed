#pragma once

#include <array>

/* This file was autogenerated on 2023-02-12T14:29 DO NOT EDIT! */

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 12.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<12>()
{
    // clang-format off
  return {{{4.00000000000000000000e-2, -3.70370370370370370370e-2, 1.72413793103448275862e-2, -5.37634408602150537634e-3, 1.26262626262626262626e-3, -2.38095238095238095238e-4, 3.75375375375375375375e-5},
           {3.64634576640223764810e-2, -3.37451178229993195568e-2, 1.57019079625549222434e-2, -4.89436982685486580286e-3, 1.14903536646782881286e-3, -2.16608008606702180567e-4, 3.41404035568716916565e-5},
           {3.32411833626609504178e-2, -3.07470774713549353796e-2, 1.43004233107517086943e-2, -4.45574956067387034642e-3, 1.04569429243311830952e-3, -1.97065136021829932951e-4, 3.10514521309160853213e-5},
           {3.03051267284859503215e-2, -2.80165792173849501068e-2, 1.30245151563965072539e-2, -4.05657177479990492530e-3, 9.51675654935031254886e-4, -1.79290250372596190196e-4, 2.82426640814495003354e-5},
           {2.76297507890642876638e-2, -2.55296546137099185370e-2, 1.18628928340802596020e-2, -3.69327882104494940180e-3, 8.66136181183410061232e-4, -1.63123015225223957653e-4, 2.56885727609398714286e-5},
           {2.51918059849458760013e-2, -2.32644899110134931175e-2, 1.08052839423654813839e-2, -3.36263482409408787088e-3, 7.88309065369455675039e-4, -1.48417667166463051760e-4, 2.33660310923770212584e-5},
           {2.29701245682274214632e-2, -2.12012317597159542781e-2, 9.84234225762683524741e-3, -3.06169650671251009424e-3, 7.17497019253486708820e-4, -1.35041688574549047014e-4, 2.12539999063419679569e-5},
           {2.09454335385801902747e-2, -1.93218104807822699254e-2, 8.96556399632563415236e-3, -2.78778666612824067156e-3, 6.53065955608431451991e-4, -1.22874601490882142622e-4, 1.93333556252930951190e-5},
           {1.91001844407235089884e-2, -1.76097793130413210472e-2, 8.16721166715438963435e-3, -2.53847006018052042536e-3, 5.94439246780082254998e-4, -1.11806871523976555558e-4, 1.75867155238541228110e-5},
           {1.74183984992383501800e-2, -1.60501681890886857551e-2, 7.44024482355427809604e-3, -2.31153148384712460797e-3, 5.41092505901993002515e-4, -1.01738911730460179555e-4, 1.59982789562759507318e-5},
           {1.58855257047271491988e-2, -1.46293507233682066465e-2, 6.77825708987479704642e-3, -2.10495583677465644343e-3, 4.92548843096744966286e-4, -9.25801773382489148149e-5, 1.45536830897243394333e-5},
           {1.44883165908940986233e-2, -1.33349232155785882292e-2, 6.17541889148688800948e-3, -1.91691000061817409979e-3, 4.48374553350393636759e-4, -8.42483430130007313009e-5, 1.32398718159870491909e-5},
           {1.32147055562854432581e-2, -1.21555945812224803354e-2, 5.62642537100102330810e-3, -1.74572636151786378389e-3, 4.08175196703482157622e-4, -7.66685551283186847741e-5, 1.20449766358427917792e-5},
           {1.20537046882299592881e-2, -1.10810862198986136151e-2, 5.12644901985576540576e-3, -1.58988782805267710521e-3, 3.71592034996561491628e-4, -6.97727521899491298337e-5, 1.09582084208193324408e-5},
           {1.09953071408985178503e-2, -1.01020409217344574876e-2, 4.67109659736141078629e-3, -1.44801420865210369628e-3, 3.38298792673882376195e-4, -6.34990471907988994439e-5, 9.96975905741511544847e-6},
           {1.00303992052155465514e-2, -9.20993999398629463460e-3, 4.25636994820003181084e-3, -1.31884982484289058069e-3, 3.07998712115942576729e-4, -5.77911662427687603774e-5, 9.07071206999955211513e-6},
           {9.15068028638332461866e-3, -8.39702786403993817199e-3, 3.87863036475359027749e-3, -1.20125224797150344930e-3, 2.80421876667243184355e-4, -5.25979383484407830135e-5, 8.25296140138712843305e-6},
           {8.34859007573007273761e-3, -7.65624348250506549241e-3, 3.53456617277973046340e-3, -1.09418205727891074824e-3, 2.55322776974789783597e-4, -4.78728316453404687480e-5, 7.50913760526772229928e-6},
           {7.61724226810848222685e-3, -6.98115791142377758310e-3, 3.22116324817437816100e-3, -9.96693526505900394274e-4, 2.32478098478136770404e-4, -4.35735318821709946557e-5, 6.83254077296748135343e-6},
           {6.95036423473733948331e-3, -6.36591753836803202898e-3, 2.93567819911866659255e-3, -9.07926154659986187241e-4, 2.11684709913623507124e-4, -3.96615592740238331231e-5, 6.21707957904426158446e-6},
           {6.34224211472669743145e-3, -5.80519240788870093117e-3, 2.67561397204778934553e-3, -8.27096964256631068425e-4, 1.92757834532507658053e-4, -3.61019202356946243169e-5, 5.65721588656416295507e-6},
           {5.78767083704015330298e-3, -5.29412920786237646553e-3, 2.43869766182170386384e-3, -7.53493497328451035389e-4, 1.75529387401885533793e-4, -3.28627908121259868076e-5, 5.14791440408309946961e-6},
           {5.28190862876499328538e-3, -4.82830849017977514759e-3, 2.22286032642274051369e-3, -6.86467445840345719989e-4, 1.59846463673962832421e-4, -2.99152289156150376804e-5, 4.68459693284385603922e-6},
           {4.82063560568170897808e-3, -4.40370574331284091174e-3, 2.02621862463511336755e-3, -6.25428858914235446739e-4, 1.45569964087356295418e-4, -2.72329127434466327761e-5, 4.26310078492518294282e-6},
           {4.39991607761150513994e-3, -4.01665596893232938747e-3, 1.84705811164171318159e-3, -5.69840874507185476613e-4, 1.32573345216354667678e-4, -2.47919029894799664612e-5, 3.87964099143617138288e-6},
           {4.01616423420369378361e-3, -3.66382144623872505612e-3, 1.68381804245468463636e-3, -5.19214927949099335283e-4, 1.20741483121947966407e-4, -2.25704266811401022615e-5, 3.53077595469158371652e-6},
           {3.66611290700427725625e-3, -3.34216239630252039822e-3, 1.53507754671482915011e-3, -4.73106394074559923751e-4, 1.09969640092422496751e-4, -2.05486806712577175637e-5, 3.21337622995421996175e-6},
           {3.34678513109494838937e-3, -3.04891028474518635885e-3, 1.39954305077503136923e-3, -4.31110623617349231727e-4, 1.00162525100904822883e-4, -1.87086529940847461463e-5, 2.92459615108185094797e-6},
           {3.05546825455626190615e-3, -2.78154352476583108592e-3, 1.27603683423745833427e-3, -3.92859338111746459951e-4, 9.12334394610635668246e-5, -1.70339604582506830136e-5, 2.66184804053446620917e-6},
           {2.78969036671475843769e-3, -2.53776536404513777118e-3, 1.16348661834582379690e-3, -3.58017350794557868976e-4, 8.31034999380789656887e-5, -1.55097009979186479329e-5, 2.42277876792412741859e-6},
           {2.54719883678648567268e-3, -2.31548375863304279482e-3, 1.06091609293568916485e-3, -3.26279583955724986760e-4, 7.57009322770899962043e-5, -1.41223194383213938147e-5, 2.20524844284397626018e-6},
           {2.32594077331457803684e-3, -2.11279305472688704731e-3, 9.67436297102274326762e-4, -2.97368355870273248440e-4, 6.89604287521040416366e-5, -1.28594854544471303115e-5, 2.00731104729395281087e-6},
           {2.12404523188572435036e-3, -1.92795731543389829363e-3, 8.82237776433523503139e-4, -2.71030912884849160219e-4, 6.28225639206756884597e-5, -1.17099826130325455897e-5, 1.82719683080957777762e-6},
           {1.93980701415329788093e-3, -1.75939514433219590384e-3, 8.04583446646162537413e-4, -2.47037184450441438428e-4, 5.72332632988772205393e-5, -1.06636074892308192497e-5, 1.66329630756091990388e-6},
           {1.77167191533357352984e-3, -1.60566587103136882049e-3, 7.33802099817715595097e-4, -2.25177740909349893058e-4, 5.21433201520408019878e-5, -9.71107794128711748478e-6, 1.51414570937088919288e-6},
           {1.61822329020300421931e-3, -1.46545697610809318862e-3, 6.69282495185718703280e-4, -2.05261935677458052076e-4, 4.75079560338615848711e-5, -8.84394971011895926472e-6, 1.37841376194071103638e-6},
           {1.47816981932461931522e-3, -1.33757264386430083092e-3, 6.10467981739139698046e-4, -1.87116215129110816670e-4, 4.32864211037158608795e-5, -8.05454058663246444123e-6, 1.25488966368901188772e-6},
           {1.35033436787541385148e-3, -1.22092334142513431888e-3, 5.56851604604005341430e-4, -1.70582581006598207277e-4, 3.94416306131077030453e-5, -7.33586145860580398601e-6, 1.14247215762106422564e-6},
           {1.23364383912971577878e-3, -1.11451633185228162273e-3, 5.07971651568818937869e-4, -1.55517191553200474947e-4, 3.59398342803165252385e-5, -6.68155361167230114216e-6, 1.04015959664804646674e-6},
           {1.12711993346289768465e-3, -1.01744703727796054898e-3, 4.63407600044909312193e-4, -1.41789088820521162922e-4, 3.27503155705800735897e-5, -6.08583171591354217495e-6, 9.47040911864767022506e-7},
           {1.02987073175447277525e-3, -9.28891175640958314565e-4, 4.22776428348232730537e-4, -1.29279040738819700311e-4, 2.98451181702412345368e-5, -5.54343198135094355220e-6, 8.62287401552051204909e-7},
           {9.41083029361492839730e-4, -8.48097601497084692401e-4, 3.85729258454881702382e-4, -1.17878487573616069360e-4, 2.71987971896919033328e-5, -5.04956501267760564193e-6, 7.85145266172886193464e-7},
           {8.60015353467586144906e-4, -7.74381787644281270079e-4, 3.51948300352256126557e-4, -1.07488583332404025812e-4, 2.47881928539159766822e-5, -4.59987293633309896030e-6, 7.14928821448632027686e-7},
           {7.85991602649377982086e-4, -7.07119890003898464090e-4, 3.21144070808391526254e-4, -9.80193235404221803117e-5, 2.25922246430116272311e-5, -4.19039041188399893331e-6, 6.51014327795844605900e-7},
           {7.18395252994499409691e-4, -6.45743343385687344066e-4, 2.93052861837791100378e-4, -8.93887515818835129595e-5, 2.05917040301226047768e-5, -3.81750917498926662459e-6, 5.92834380032589012199e-7},
           {6.56664080103037863662e-4, -5.89733940481515311015e-4, 2.67434436375478274545e-4, -8.15222365099154083843e-5, 1.87691641324164756443e-5, -3.47794579132550286661e-6, 5.39872806377285141405e-7},
           {6.00285350851827181375e-4, -5.38619350724140865533e-4, 2.44069930702077062760e-4, -7.43518158711392097328e-5, 1.71087047436517648922e-5, -3.16871233001685837576e-6, 4.91660030410208368023e-7},
           {5.48791442939081217274e-4, -4.91969039551192269255e-4, 2.22759945009913176836e-4, -6.78155976751620612718e-5, 1.55958513558702203483e-5, -2.88708969162534943390e-6, 4.47768853890461504714e-7},
           {5.01755853992482737415e-4, -4.49390552165836415326e-4, 2.03322805180080571231e-4, -6.18572161705665960266e-5, 1.42174269041030811598e-5, -2.63060334985208638190e-6, 4.07810622158380526627e-7},
           {4.58789565450615503990e-4, -4.10526129116432476982e-4, 1.85592980368332949922e-4, -5.64253365720911637029e-5, 1.29614350828427157250e-5, -2.39700128799921871516e-6, 3.71431737340188322853e-7},
           {4.19537729546111284960e-4, -3.75049623956730541954e-4, 1.69419642387312287994e-4, -5.14732043229772521977e-5, 1.18169541874512132264e-5, -2.18423393114656987695e-6, 3.38310487740293808818e-7},
           {3.83676650556917693546e-4, -3.42663695922283608342e-4, 1.54665354136569120061e-4, -4.69582348759045939282e-5, 1.07740405286054203411e-5, -1.99043589308811017273e-6, 3.08154164686058604293e-7},
           {3.50911034074965696994e-4, -3.13097252991668929204e-4, 1.41204875481455613103e-4, -4.28416403391609123597e-5, 9.82364055417926753170e-6, -1.81390937351698308857e-6, 2.80696440706536408505e-7},
           {3.20971480392234212106e-4, -2.86103122914681696348e-4, 1.28924076027649820667e-4, -3.90880896649915257277e-5, 8.95751089142372231640e-6, -1.65310905589414981406e-6, 2.55694985304664528970e-7},
           {2.93612200243703732813e-4, -2.61455931803695627771e-4, 1.17718945189217611162e-4, -3.56653993574373493858e-5, 8.16814559363682932385e-6, -1.50662837002136418458e-6, 2.32929296743447589961e-7},
           {2.68608933094007591887e-4, -2.38950171716919066269e-4, 1.07494690813306106435e-4, -3.25442519501162661052e-5, 7.44870994036949058884e-6, -1.37318699568830043667e-6, 2.12198730230654304162e-7},
           {2.45757049927029184305e-4, -2.18398440329713031723e-4, 9.81649184115762315269e-5, -2.96979397528047322011e-5, 6.79298019917684425134e-6, -1.25161949498892621033e-6, 1.93320704671446669495e-7},
           {2.24869824111023717400e-4, -1.99629837307395424520e-4, 8.96508837644030868400e-5, -2.71021315915803234732e-5, 6.19528881053601733963e-6, -1.14086497110616906128e-6, 1.76129071780534158622e-7},
           {2.05776855380381343014e-4, -1.82488503373595429159e-4, 8.18808123151400614817e-5, -2.47346604727341356112e-5, 5.65047450629569835459e-6, -1.03995766063963072106e-6, 1.60472632819758326402e-7},
           {1.88322633311938228201e-4, -1.66832289324582498614e-4, 7.47892793642096134895e-5, -2.25753302875109573226e-5, 5.15383691634412510925e-6, -9.48018374983167889955e-7, 1.46213789566963637814e-7},
           {1.72365227890635487650e-4, -1.52531543383293080336e-4, 6.83166456117726214473e-5, -2.06057398446728033865e-5, 4.70109525848184330081e-6, -8.64246713924478824848e-7, 1.33227317339865740675e-7},
           {1.57775095867115894678e-4, -1.39468006327219930457e-4, 6.24085430880788784172e-5, -1.88091226724420852549e-5, 4.28835074312982985923e-6, -7.87913981607248409462e-7, 1.21399249005536118651e-7},
           {1.44433992618342601057e-4, -1.27533804771195173220e-4, 5.70154069567146873192e-5, -1.71702011719584284337e-5, 3.91205235782433422567e-6, -7.18356741331403194170e-7, 1.10625859912202952976e-7},
           {1.32233980140461190086e-4, -1.16630533847826404776e-4, 5.20920490818410850402e-5, -1.56750538322469027850e-5, 3.56896572674936160067e-6, -6.54970951426307291621e-7, 1.00812744594529688004e-7},
           {1.21076522639018628710e-4, -1.06668421312618868862e-4, 4.75972696197955028367e-5, -1.43109943329973212094e-5, 3.25614476811053845848e-6, -5.97206629667709388278e-7, 9.18739769347259357190e-8},
           {1.10871661942701975551e-4, -9.75655658146128601689e-5, 4.34935032314217486621e-5, -1.30664614672420450076e-5, 2.97090589720973754492e-6, -5.44562998469570472194e-7, 8.37313462173732396540e-8},
           {1.01537265659681726266e-4, -8.92472427230409879337e-5, 3.97464968172047078496e-5, -1.19309189122471053218e-5, 2.71080454586508345487e-6, -4.96584067409875907759e-7, 7.63136622026069548123e-8},
           {9.29983416265656387747e-5, -8.16452714918396789574e-5, 3.63250159554545431692e-5, -1.08947639644635993467e-5, 2.47361378954210136362e-6, -4.52854613584486601647e-7, 6.95561229665582264691e-8},
           {8.51864127744502612830e-5, -7.46974390820915880003e-5, 3.32005774768993349604e-5, -9.94924443401164204648e-6, 2.25730489240610987474e-6, -4.12996523860801248536e-7, 6.33997398254242415469e-8},
           {7.80389470596703517784e-5, -6.83469744524087507694e-5, 3.03472058393665944397e-5, -9.08638296660319014675e-6, 2.06002959764394607617e-6, -3.76665466355970163355e-7, 5.77908141753780440831e-8},
           {7.14988375831967414237e-5, -6.25420695732425242427e-5, 2.77412111758223097770e-5, -8.29890812670440901810e-6, 1.88010400598957358726e-6, -3.43547861422153914195e-7, 5.26804615494566580968e-8},
           {6.55139284564178891882e-5, -5.72354428270800146450e-5, 2.53609870797623052779e-5, -7.58019163568430363621e-6, 1.71599389956387762590e-6, -3.13358125110727610472e-7, 4.80241786188521884233e-8},
           {6.00365823660773038450e-5, -5.23839410260588234482e-5, 2.31868263655174518983e-5, -6.92419121323294413741e-6, 1.56630138103194962936e-6, -2.85836160532765106368e-7, 4.37814492535616893611e-8},
           {5.50232861508996180778e-5, -4.79481766149753664335e-5, 2.12007531989892118783e-5, -6.32539851994890206245e-6, 1.42975270980777819250e-6, -2.60745074756798077694e-7, 3.99153861096557746504e-8},
           {5.04342910300866929200e-5, -4.38921969339587365422e-5, 1.93863701380847230904e-5, -5.77879174413666470259e-6, 1.30518722770225611949e-6, -2.37869100906874332230e-7, 3.63924045307145106458e-8},
           {4.62332844222769590394e-5, -4.01831826939390223080e-5, 1.77287187529504950843e-5, -5.27979241692544475317e-6, 1.19154727611192726876e-6, -2.17011706962670788693e-7, 3.31819258421646699105e-8},
           {4.23870905653554665322e-5, -3.67911730719257490342e-5, 1.62141526151769632571e-5, -4.82422607718912462038e-6, 1.08786901567039919487e-6, -1.97993874435493637479e-7, 3.02561073819862636998e-8},
           {3.88653973950621236806e-5, -3.36888150642695831383e-5, 1.48302215535219870739e-5, -4.40828644174754982418e-6, 9.93274067311262514902e-7, -1.80652531614566120525e-7, 2.75895968519458784563e-8},
           {3.56405073658402972198e-5, -3.08511349465523455654e-5, 1.35655661723436707865e-5, -4.02850276726647321018e-6, 9.06961900992983420849e-7, -1.64839127460818317695e-7, 2.51593087923473812422e-8},
           {3.26871101027718371709e-5, -2.82553298803926483587e-5, 1.24098217187186468641e-5, -3.68171011842393735195e-6, 8.28202904978269813943e-7, -1.50418333482962709253e-7, 2.29442211822565734039e-8},
           {2.99820749605541944497e-5, -2.58805778819587122669e-5, 1.13535304659490577360e-5, -3.36502228252635232007e-6, 7.56332074602567753732e-7, -1.37266862074332312567e-7, 2.09251903480625021921e-8},
           {2.75042617359272021076e-5, -2.37078645258833380582e-5, 1.03880618555549403308e-5, -3.07580709406704218650e-6, 6.90743264962962043515e-7, -1.25272390829113088709e-7, 1.90847825277267470334e-8},
           {2.52343479352396703923e-5, -2.17198249029784372908e-5, 9.50553970756927985703e-6, -2.81166395393163344495e-6, 6.30883956959193025721e-7, -1.14332583302609394169e-7, 1.74071205876366809891e-8},
           {2.31546711403144511536e-5, -1.99005994819220730931e-5, 8.69877587060063653889e-6, -2.57040334725785075818e-6, 5.76250490667683851077e-7, -1.04354197540587646006e-7, 1.58777445249759919193e-8},
           {2.12490851446596869202e-5, -1.82357026450976983866e-5, 7.96120973924960956790e-6, -2.35002818152407198961e-6, 5.26383724168219990705e-7, -9.52522744853071428564e-8, 1.44834845121890608471e-8},
           {1.95028286495061164995e-5, -1.67119027780591903958e-5, 7.28685311755739821961e-6, -2.14871678242825939458e-6, 4.80865079708356481808e-7, -8.69493990776331220069e-8, 1.32123453525663720480e-8},
           {1.79024054161483240038e-5, -1.53171128916352752662e-5, 6.67023995367939038961e-6, -1.96480739966882956735e-6, 4.39312942516523191820e-7, -7.93750275220469324279e-8, 1.20534013182344581023e-8},
           {1.64354748685630756486e-5, -1.40402908463472090743e-5, 6.10638051332583624194e-6, -1.79678408798144551074e-6, 4.01379380691842150574e-7, -7.24648747702602105024e-8, 1.09967004348225729202e-8},
           {1.50907522291172080094e-5, -1.28713483313893005752e-5, 5.59071959806910671285e-6, -1.64326384083834865444e-6, 3.66747157434787446871e-7, -6.61603568148072867758e-8, 1.00331773616407761397e-8},
           {1.38579173511335930458e-5, -1.18010678256363301557e-5, 5.11909844972381043059e-6, -1.50298486518696335388e-6, 3.35127009463393739258e-7, -6.04080828712521341884e-8, 9.15457409310592917395e-9},
           {1.27275314858582589697e-5, -1.08210268366541844781e-5, 4.68772001397171587131e-6, -1.37479589558961326915e-6, 3.06255167807839867932e-7, -5.51593929708925339951e-8, 8.35336777708852660144e-9},
           {1.16909612886051742631e-5, -9.92352877609962222684e-6, 4.29311726551026098830e-6, -1.25764645521500755470e-6, 2.79891099312900816309e-7, -5.03699368890572691623e-8, 7.62270500945697240586e-9},
           {1.07403094301298586319e-5, -9.10153988674737874785e-6, 3.93212432350772959395e-6, -1.15057797940537588443e-6, 2.55815449122067697050e-7, -4.59992907008979927489e-8, 6.95634202194117606490e-9},
           {9.86835123512930176292e-6, -8.34863168817515684109e-6, 3.60185011028372496634e-6, -1.05271572507420545602e-6, 2.33828166186441627477e-7, -4.20106075902719709619e-8, 6.34859023304715954992e-9},
           {9.06847682066674014171e-6, -7.65892845532101282748e-6, 3.29965432811260356703e-6, -9.63261396045190365086e-7, 2.13746795451622203724e-7, -3.83702998408914999569e-8, 5.79426667960333606928e-9},
           {8.33463825371579234726e-6, -7.02705928711542797296e-6, 3.02312554906354922241e-6, -8.81486420684071032104e-7, 1.95404921841086537465e-7, -3.50477492151047316036e-8, 5.28864889003933507471e-9},
           {7.66130128930936665137e-6, -6.44811436155621354592e-6, 2.77006123101986634607e-6, -8.06725823856747581523e-7, 1.78650752488064463646e-7, -3.20150431769497053268e-8, 4.82743380008201342543e-9},
           {7.04340128933014898114e-6, -5.91760500927993227425e-6, 2.53844948962203978966e-6, -7.38372640419718438814e-7, 1.63345824881538961045e-7, -2.92467346447404608061e-8, 4.40670034755776227011e-9},
           {6.47630295712306348080e-6, -5.43142727019891745685e-6, 2.32645247099981888778e-6, -6.75872822158262331819e-7, 1.49363829696553760692e-7, -2.67196231664509665541e-8, 4.02287541573952388495e-9},
           {5.95576355514886756948e-6, -4.98582862740129324801e-6, 2.13239118393077867292e-6, -6.18720594375496754698e-7, 1.36589538084314505764e-7, -2.44125556004212753925e-8, 3.67270282446641475366e-9},
           {5.47789930210740367753e-6, -4.57737763950997682109e-6, 1.95473166260709432283e-6, -5.66454222239382266743e-7, 1.24917824112582276531e-7, -2.23062445561164703007e-8, 3.35321509536135622340e-9},
           {5.03915467259033354665e-6, -4.20293621729984924858e-6, 1.79207234261867731608e-6, -5.18652150549355360197e-7, 1.14252773879700289437e-7, -2.03831030063618801918e-8, 3.06170774212173153799e-9},
           {4.63627434660473735869e-6, -3.85963431279368365915e-6, 1.64313254316916982733e-6, -4.74929483820951858846e-7, 1.04506873583679935070e-7, -1.86270936250601070321e-8, 2.79571585928139108484e-9},
           {4.26627757844950503856e-6, -3.54484680949116920715e-6, 1.50674195802286381465e-6, -4.34934776534033419670e-7, 9.56002695178208392988e-8, -1.70235915341401704192e-8, 2.55299280324090475920e-9},
           {3.92643477461537573046e-6, -3.25617242100866563772e-6, 1.38183106631802432547e-6, -3.98347106074048309284e-7, 8.74600935924855806686e-8, -1.55592592615562471671e-8, 2.33149077792014114253e-9},
           {3.61424608878999708853e-6, -2.99141442238106220012e-6, 1.26742238225097714717e-6, -3.64873403339754146845e-7, 8.00198485544575787763e-8, -1.42219328195963173224e-8, 2.12934315426963354021e-9},
           {3.32742185883866552196e-6, -2.74856305374825530023e-6, 1.16262246980422789935e-6, -3.34246018216521711722e-7, 7.32188475958517750287e-8, -1.30005179105388900672e-8, 1.94484836823635119377e-9},
           {3.06386472594320829877e-6, -2.52577945025082362725e-6, 1.06661465522335643882e-6, -3.06220499141293256915e-7, 6.70017035184344576088e-8, -1.18848953556804766828e-8, 1.77645525575320330904e-9},
           {2.82165329004635746557e-6, -2.32138096481419634021e-6, 9.78652375898402720670e-7, -2.80573567831288880397e-7, 6.13178630506315792718e-8, -1.08658349247406939927e-8, 1.62274969603514497656e-9},
           {2.59902716848606170135e-6, -2.13382776221883765686e-6, 8.98053109727699742614e-7, -2.57101271929859849753e-7, 5.61211823072878651415e-8, -9.93491681635743960928e-9, 1.48244244603212984472e-9},
           {2.39437333632210264537e-6, -1.96171057353666432132e-6, 8.24192833982817440886e-7, -2.35617299854222917746e-7, 5.13695397398474903320e-8, -9.08446010746712969449e-9, 1.35435805941388557083e-9},
           {2.20621363745486174019e-6, -1.80373950975298417523e-6, 7.56500967195388787431e-7, -2.15951443524603812345e-7, 4.70244832502270552209e-8, -8.30745755042210925092e-9, 1.23742479303788251767e-9},
           {2.03319336530339136041e-6, -1.65873384227248143789e-6, 6.94455751689191829949e-7, -1.97948195924790902083e-7, 4.30509084381136074292e-8, -7.59751615227111210991e-9, 1.13066541256556478641e-9},
           {1.87407082062905474449e-6, -1.52561266610344733659e-6, 6.37580038119571142488e-7, -1.81465471601376430651e-7, 3.94167652213634409295e-8, -6.94880302121362744580e-9, 1.03318881682084209850e-9},
           {1.72770776213683328739e-6, -1.40338636889603896721e-6, 5.85437436789514959796e-7, -1.66373439263163033110e-7, 3.60927903149801700743e-8, -6.35599601128403348059e-9, 9.44182407699912144885e-10},
           {1.59306067282710596936e-6, -1.29114883574116317278e-6, 5.37628803616967287332e-7, -1.52553456602559296378e-7, 3.30522632779802634849e-8, -5.81423873823530543918e-9, 8.62905139007086444369e-10},
           {1.46917277176843534333e-6, -1.18807032577427169018e-6, 4.93789031458136677546e-7, -1.39897098335661776371e-7, 3.02707840412810349507e-8, -5.31909957774668241770e-9, 7.88681183566107032609e-10},
           {1.35516670707332806269e-6, -1.09339096222545626288e-6, 4.53584120071149370184e-7, -1.28305269254765837909e-7, 2.77260700153648587669e-8, -4.86653429181318365452e-9, 7.20894163393745659015e-10},
           {1.25023787143564446024e-6, -1.00641478266161474108e-6, 4.16708500355647947604e-7, -1.17687394813210167408e-7, 2.53977710455156561950e-8, -4.45285196079497353696e-9, 6.58981892670777989366e-10},
           {1.15364828667743819744e-6, -9.26504300821695517303e-7, 3.82882590647188410575e-7, -1.07960682424070784827e-7, 2.32673006363752565468e-8, -4.07468392739130950806e-9, 6.02431587748825282062e-10},
           {1.06472100839734095655e-6, -8.53075535691882996781e-7, 3.51850564799010571663e-7, -9.90494472570435390604e-8, 2.13176820077808154587e-8, -3.72895548501182616212e-9, 5.50775502530168836134e-10}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson