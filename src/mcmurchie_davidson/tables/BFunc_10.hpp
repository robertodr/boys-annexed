#pragma once

#include <array>

/* This file was autogenerated on 2023-02-16T14:43 DO NOT EDIT! */

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 10.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<10>()
{
    // clang-format off
  return {{{4.76190476190476190476e-2, -4.34782608695652173913e-2, 2.00000000000000000000e-2, -6.17283950617283950617e-3, 1.43678160919540229885e-3, -2.68817204301075268817e-4, 4.20875420875420875421e-5},
           {4.34651897241010790052e-2, -3.96578308508158325352e-2, 1.82317288320111882405e-2, -5.62418630383321963701e-3, 1.30849233021291004239e-3, -2.44718491342743290143e-4, 3.83011788822609644946e-5},
           {3.96762281808753641821e-2, -3.61750968010020115817e-2, 1.66205916813304752089e-2, -5.12451291189248894081e-3, 1.19170194256264239119e-3, -2.22787478033693501058e-4, 3.48564764144372783391e-5},
           {3.62199168813888139340e-2, -3.30000563790786780038e-2, 1.51525633642429751607e-2, -4.66942986956415777289e-3, 1.08537626303304227116e-3, -2.02828588739995235423e-4, 3.17225218311677125619e-5},
           {3.30668739878948528266e-2, -3.01053846376909024773e-2, 1.38148753945321438319e-2, -4.25494243561831946704e-3, 9.88574402840021633498e-4, -1.84663941052247470090e-4, 2.88712060394470040740e-5},
           {3.01903263749236996927e-2, -2.74661941607643178553e-2, 1.25959029924729380007e-2, -3.87741498516891523046e-3, 9.00440328530456709707e-4, -1.68131741204704404386e-4, 2.62769688456485245342e-5},
           {2.75658769624299963830e-2, -2.50598167641695387942e-2, 1.14850622841137107316e-2, -3.53353862661932556846e-3, 8.20195188135569531671e-4, -1.53084825335625499291e-4, 2.39165673084495587677e-5},
           {2.51712928824969171815e-2, -2.28656048150183421885e-2, 1.04727167692900951373e-2, -3.22030174679704484300e-3, 7.47130333027136179364e-4, -1.39389333306412055262e-4, 2.17688651869477186804e-5},
           {2.29863126075608784071e-2, -2.08647504009730096197e-2, 9.55009222036175449422e-3, -2.93496321884021988541e-3, 6.80600972262865766722e-4, -1.26923503009026010426e-4, 1.98146415593360760701e-5},
           {2.09924703368620929611e-2, -1.90401207408360077789e-2, 8.70919924961917508999e-3, -2.67502803151478067006e-3, 6.20020401962856435724e-4, -1.15576574192356238530e-4, 1.80364168633997712680e-5},
           {1.91729360913146310019e-2, -1.73761083730824654470e-2, 7.94276285236357459940e-3, -2.43822512056136777442e-3, 5.64854757489566348255e-4, -1.05247791838732824882e-4, 1.64182947698915004573e-5},
           {1.75123701066077289146e-2, -1.58584947912194171304e-2, 7.24415829544704931164e-3, -2.22248720259643137154e-3, 5.14618240957240595176e-4, -9.58455000309087022789e-5, 1.49458184450131222417e-5},
           {1.59967902413543222595e-2, -1.44743263150994404959e-2, 6.60735277814272162905e-3, -2.02593243020374657801e-3, 4.68868780916751942342e-4, -8.72863180758931837735e-5, 1.36058398901160730501e-5},
           {1.46134512326359343459e-2, -1.32118010966700231285e-2, 6.02685234411497964407e-3, -1.84684770331643545796e-3, 4.27204084987980450480e-4, -7.94943914026338633921e-5, 1.23864011665520510762e-5},
           {1.33507347363935619661e-2, -1.20601662580922738832e-2, 5.49765357044925892516e-3, -1.68367348695574277004e-3, 3.89258049780117547454e-4, -7.24007104326051848138e-5, 1.12766264224627468896e-5},
           {1.21980491857269449790e-2, -1.10096242506120180898e-2, 5.01519960260777327571e-3, -1.53498999899771577243e-3, 3.54697495683335966166e-4, -6.59424912421445236135e-5, 1.02666237371980872462e-5},
           {1.11457385871481066963e-2, -1.00512476048296526404e-2, 4.57534014319166230933e-3, -1.39950464400665636200e-3, 3.23219197062799153651e-4, -6.00626123985751711096e-5, 9.34739588890810738748e-6},
           {1.01849994539702521507e-2, -9.17690131783551431288e-3, 4.17429503786503636881e-3, -1.27604058041751091540e-3, 2.94547181064977502477e-4, -5.47091028639455455437e-5, 8.51075923249299289952e-6},
           {9.30780514801011690795e-3, -8.37917219072943468550e-3, 3.80862113405424111343e-3, -1.16352631857062952490e-3, 2.68430270681198162013e-4, -4.98346763252950210690e-5, 7.74926994927122737421e-6},
           {8.50683696628617980195e-3, -7.65130449194073320590e-3, 3.47518211736866974165e-3, -1.06098625639467186027e-3, 2.44639849926555513239e-4, -4.53963077329993107173e-5, 7.05615699712078357081e-6},
           {7.77542136899413843798e-3, -6.98714137806606162828e-3, 3.17112105736334871572e-3, -9.67532067981450119055e-4, 2.22967831003982445461e-4, -4.13548482128315534213e-5, 6.42526115108358894057e-6},
           {7.10747279926810492101e-3, -6.38107155515436983567e-3, 2.89383541852007665149e-3, -8.82354867977062744255e-4, 2.03224805151808646285e-4, -3.76746748664225504142e-5, 5.85097958006285112642e-6},
           {6.49744159457730195706e-3, -5.82798070995216473122e-3, 2.64095431438249664269e-3, -8.04718081696629118985e-4, 1.85238360535228358070e-4, -3.43233722920172859994e-5, 5.32821545579876130658e-6},
           {5.94026653450436051274e-3, -5.32320728299737113559e-3, 2.41031780284085448904e-3, -7.33950957218806746343e-4, 1.68851552052926104927e-4, -3.12714429457117723370e-5, 4.85233213624521075077e-6},
           {5.43133161050483349863e-3, -4.86250219399772445200e-3, 2.19995803880575256997e-3, -6.69442661488721564578e-4, 1.53921509303476080396e-4, -2.84920437253592717978e-5, 4.41911150721182270770e-6},
           {4.96642664042289214837e-3, -4.44199216499639986527e-3, 2.00808211710184689180e-3, -6.10636907706454176020e-4, 1.40318170204557053030e-4, -2.59607463974549667642e-5, 4.02471610406493243944e-6},
           {4.54171138436772117014e-3, -4.05814631872852393107e-3, 1.83305645350213862813e-3, -5.57027066050419994089e-4, 1.27923128892902429176e-4, -2.36553197037279955099e-5, 3.66565466974741689719e-6},
           {4.15368284934082912518e-3, -3.70774575859401803526e-3, 1.67339256554747419468e-3, -5.08151714124197690335e-4, 1.16628587564585942918e-4, -2.15555311808674622640e-5, 3.33875083669682782471e-6},
           {3.79914549802094466194e-3, -3.38785586307534681422e-3, 1.52773412727813095308e-3, -4.63590587460971847653e-4, 1.06336402853121527855e-4, -1.96429669055873236752e-5, 3.04111464870211934590e-6},
           {3.47518410261037470968e-3, -3.09580105145012022747e-3, 1.39484518335737921885e-3, -4.22960894007522961863e-4, 9.69572181954853073733e-5, -1.79008675397278927712e-5, 2.77011666460263244373e-6},
           {3.17913900785168944754e-3, -2.82914179950359990362e-3, 1.27359941839324283634e-3, -3.85913959772173781066e-4, 8.84096744113074258864e-5, -1.63139791977862479828e-5, 2.52336440923633343269e-6},
           {2.90858358844326824605e-3, -2.58565370383078817901e-3, 1.16297038665728901842e-3, -3.52132175787814489815e-4, 8.06196914251895181951e-5, -1.48684177935136614055e-5, 2.29868095840346833690e-6},
           {2.66130370530435729839e-3, -2.36330841141020858015e-3, 1.06202261594286217518e-3, -3.21326219238983012798e-4, 7.35198147027936162266e-5, -1.35515456442424586886e-5, 2.09408546402252323100e-6},
           {2.43527898263606705498e-3, -2.16025624759355302021e-3, 9.69903507076648940463e-4, -2.93232524055365983973e-4, 6.70486205538468736003e-5, -1.23518592225220712438e-5, 1.90777544329590771836e-6},
           {2.22866574364956543733e-3, -1.97481039063453602325e-3, 8.85835957666786764919e-4, -2.67610978505228118678e-4, 6.11501749848096238897e-5, -1.12588870454674946529e-5, 1.73811067173469349841e-6},
           {2.03978145732815934268e-3, -1.80543245451041242319e-3, 8.09111645101502109656e-4, -2.44242829351348864769e-4, 5.57735412654765540892e-5, -1.02630967838729029426e-5, 1.58359853446205302668e-6},
           {1.86709056178472514523e-3, -1.65071935419259900601e-3, 7.39084909662309657609e-4, -2.22928773977383462785e-4, 5.08723318115949748371e-5, -9.35581075645554184996e-6, 1.44288070345719553206e-6},
           {1.70919154178710941232e-3, -1.50939133880945261686e-3, 6.75167183937706925738e-4, -2.03487223570855701744e-4, 4.64043003836671095271e-5, -8.52912905032991036387e-6, 1.31472102043692342072e-6},
           {1.56480514895817484668e-3, -1.38028108841527783271e-3, 6.16821919564857889390e-4, -1.85752721975380270455e-4, 4.23309709640682448224e-5, -7.77585957766002306975e-6, 1.19799447601055094010e-6},
           {1.43276366311109065212e-3, -1.26232377942673700162e-3, 5.63559966731448842327e-4, -1.69574506212993424831e-4, 3.86173000037424426828e-5, -7.08945444102605797668e-6, 1.09167718568600266475e-6},
           {1.31200110224232910881e-3, -1.15454803229434496518e-3, 5.14935365877236387623e-4, -1.54815195940159701024e-4, 3.52313690290193942114e-5, -6.46395203694098620140e-6, 9.94837272341374484561e-7},
           {1.20154429695490069276e-3, -1.05606766271849851144e-3, 4.70541514680746419865e-4, -1.41349600249514106365e-4, 3.21441048712401396064e-5, -5.89392437868080329861e-6, 9.06626572989730224032e-7},
           {1.10050475259559498060e-3, -9.66074164765452834784e-4, 4.30007676733793072453e-4, -1.29063631274046878347e-4, 2.93290250293546772131e-5, -5.37442916662020162943e-6, 8.26273095130532598426e-7},
           {1.00807122922877282281e-3, -8.83829860651546704749e-4, 3.92995801324688991043e-4, -1.17853315000649734980e-4, 2.67620059006992938545e-5, -4.90096617702110867677e-6, 7.53074154767054389268e-7},
           {9.23502975796004852566e-4, -8.08661657800870863413e-4, 3.59197626497249704845e-4, -1.07623890564281224011e-4, 2.44210718198159250315e-5, -4.46943757909417564798e-6, 6.86390134337420236870e-7},
           {8.46123560480538015015e-4, -7.39955359094332434239e-4, 3.28332040051518931831e-4, -9.82889900802525428008e-5, 2.22862030312898562120e-5, -4.07611182549577075803e-6, 6.25638804413882570887e-7},
           {7.75315244458178254652e-4, -6.77150477063930195977e-4, 3.00142675425913590687e-4, -8.97698917873568109221e-5, 2.03391608918397541006e-5, -3.71759079355696074075e-6, 5.70290158121725566993e-7},
           {7.10513850917270962937e-4, -6.19735507187964642685e-4, 2.74395721469540608637e-4, -8.19948399251987025075e-5, 1.85633287508260969403e-5, -3.39077988375810357181e-6, 5.19861711862340748863e-7},
           {6.51204085511387963450e-4, -5.67243619449907428287e-4, 2.50877926996241368707e-4, -7.48984253609727358876e-5, 1.69435670983400453438e-5, -3.09286080852832980133e-6, 4.73914230136769382580e-7},
           {5.96915268306823535924e-4, -5.19248730971321056059e-4, 2.29394782725307751995e-4, -6.84210215194054128304e-5, 1.54660816973610791602e-5, -2.82126682860455826985e-6, 4.32047836094757250831e-7},
           {5.47217440837333124991e-4, -4.75361925849851745668e-4, 2.09768864773055642480e-4, -6.25082706594550858081e-5, 1.41183035322760239995e-5, -2.57366021614886277929e-6, 3.93898472915040497348e-7},
           {5.01717815111927872493e-4, -4.35228191356356827225e-4, 1.91838325278458846773e-4, -5.71106159870472657983e-5, 1.28887795113807600051e-5, -2.34791174379523003523e-6, 3.59134684286847401171e-7},
           {4.60057534366373676801e-4, -3.98523442397409795052e-4, 1.75455517037482848497e-4, -5.21828754986114836832e-5, 1.17670729567879677586e-5, -2.14208201695804570269e-6, 3.27454685139308953016e-7},
           {4.21908718031169976178e-4, -3.64951808655126553639e-4, 1.60485740196117106053e-4, -4.76838538191136137993e-5, 1.07436730023041511576e-5, -1.95440448324957628638e-6, 2.98583696380790733292e-7},
           {3.86971765831747849512e-4, -3.34243161097594809403e-4, 1.46806100121851866407e-4, -4.35759886339492712951e-5, 9.80991209910146759682e-6, -1.78326996787186746929e-6, 2.72271519787894317854e-7},
           {3.54972898161808709475e-4, -3.06150856630354854544e-4, 1.34304466547003795943e-4, -3.98250286194865065273e-5, 8.95789090110884220295e-6, -1.62721259750581347467e-6, 2.48290331345649679236e-7},
           {3.25661911897646408256e-4, -2.80449681550681340948e-4, 1.22878524963514592153e-4, -3.63997400549521696951e-5, 8.18040986763135206255e-6, -1.48489698764023656770e-6, 2.26432673305894836612e-7},
           {2.98810132667662222816e-4, -2.56933976188563294434e-4, 1.12434912055511858700e-4, -3.32716395512325707534e-5, 7.47090698036692390334e-6, -1.35510657957901625836e-6, 2.06509627017867244654e-7},
           {2.74208546273266491090e-4, -2.35415924686445681042e-4, 1.02888427690190671507e-4, -3.04147505622659037304e-5, 6.82340102626167122545e-6, -1.23673302363670682291e-6, 1.88349150209856624172e-7},
           {2.51666093489635465854e-4, -2.15723995297793558245e-4, 9.41613166559691141004e-5, -2.78053815540970831023e-5, 6.23243994701746750845e-6, -1.12876651437554790848e-6, 1.71794563878137519523e-7},
           {2.31008113870754562807e-4, -1.97701517884956324157e-4, 8.61826139453177438249e-5, -2.54219238972155133893e-5, 5.69305380098105122259e-6, -1.03028699223364021168e-6, 1.56703175282728132968e-7},
           {2.12074925454994108213e-4, -1.81205386481070763061e-4, 7.88875479335579473392e-5, -2.32446677212033206135e-5, 5.20071192400657263675e-6, -9.40456133622104347450e-7, 1.42945024770994344523e-7},
           {1.94720528426223032058e-4, -1.66104875859269287804e-4, 7.22169963091713005285e-5, -2.12556341285325266113e-5, 4.75128391305955671191e-6, -8.58510058597921485211e-7, 1.30401745260811165561e-7},
           {1.78811421841260998269e-4, -1.52280562034727296730e-4, 6.61169900702305950429e-5, -1.94384223079710663333e-5, 4.34100409015342375335e-6, -7.83752691612345245131e-7, 1.18965524224978728845e-7},
           {1.64225523496488610628e-4, -1.39623337519712280731e-4, 6.05382613195093143552e-5, -1.77780702187698092182e-5, 3.96643913498295856972e-6, -7.15549716649866123998e-7, 1.08538158937017948616e-7},
           {1.50851183883042577879e-4, -1.28033512966639433355e-4, 5.54358309713509877755e-5, -1.62609276357688077694e-5, 3.62445860261847905518e-6, -6.53323073362102250380e-7, 9.90301965736579375752e-8},
           {1.38586285978834340650e-4, -1.17419997576334819733e-4, 5.07686328298408631331e-5, -1.48745404538401640909e-5, 3.31220806810039232080e-6, -5.96545945612355308439e-7, 9.03601515288361283973e-8},
           {1.27337423353584140414e-4, -1.07699551324759527351e-4, 4.64991708132828193874e-5, -1.36075452486399464929e-5, 3.02708466295454498176e-6, -5.44738198223179967335e-7, 8.24537929847367130029e-8},
           {1.17019149726464569746e-4, -9.87961026772754080747e-5, 4.25932063872251306415e-5, -1.24495731803485980001e-5, 2.76671478974161110553e-6, -4.97462221700582187027e-7, 7.52434964135370028832e-8},
           {1.07553293720557118104e-4, -9.06401260205203803235e-5, 3.90194735298351758892e-5, -1.13911624087347912302e-5, 2.52893381994721620331e-6, -4.54319148330159507337e-7, 6.86676532547982060684e-8},
           {9.88683331093662652600e-5, -8.31680735530120567424e-5, 3.57494187915983707119e-5, -1.04236782622070868091e-5, 2.31176759798519219907e-6, -4.14945406335220493257e-7, 6.26701335329857915359e-8},
           {9.08988233528860832154e-5, -7.63218568411758548683e-5, 3.27569642282089445941e-5, -9.53924047118000131146e-6, 2.11341558998019210649e-6, -3.79009581784215202986e-7, 5.71997966521292537556e-8},
           {8.35848756785047969364e-5, -7.00483736716608109936e-5, 3.00182911830386519225e-5, -8.73065683767646944532e-6, 1.93223553045978751702e-6, -3.46209560661647206871e-7, 5.22100460343983227432e-8},
           {7.68716803793261107365e-5, -6.42990762172601800460e-5, 2.75116430754498090389e-5, -7.99136276916256107225e-6, 1.76672943324910084869e-6, -3.16269925997445092535e-7, 4.76584236602592788184e-8},
           {7.07090713828741838226e-5, -5.90295768858635082517e-5, 2.52171455150433464600e-5, -7.31536615565978914135e-6, 1.61553084484039359087e-6, -2.88939587206833245717e-7, 4.35062409234085412867e-8},
           {6.50511284899175424613e-5, -5.41992885426953392757e-5, 2.31166422111384795197e-5, -6.69719711565650371800e-6, 1.47739322941254118644e-6, -2.63989620846272227071e-7, 3.97182425370642409687e-8},
           {5.98558139992779031087e-5, -4.97710960884355905240e-5, 2.11935452826777332661e-5, -6.13186217865429094101e-6, 1.35117938459808027143e-6, -2.41211303859456262783e-7, 3.62623005223466437993e-8},
           {5.50846407227041371855e-5, -4.57110566422068719016e-5, 1.94326986975310618403e-5, -5.61480251071159662502e-6, 1.23585179612683211499e-6, -2.20414322087377491209e-7, 3.31091355770420842712e-8},
           {5.07023686566683470236e-5, -4.19881258211695352592e-5, 1.78202536829201486099e-5, -5.14185582442539064523e-6, 1.13046384769530589888e-6, -2.01425138363323681685e-7, 3.02320633664327851066e-8},
           {4.66767278175336022264e-5, -3.85739078296907464969e-5, 1.63435550513859185855e-5, -4.70922164673210805978e-6, 1.03415180989322057201e-6, -1.84085505921196878185e-7, 2.76067634992756637735e-8},
           {4.29781649650102807385e-5, -3.54424272726687946962e-5, 1.49910374802770972249e-5, -4.31342964699311842881e-6, 9.46127538829088109370e-7, -1.68251114126317631885e-7, 2.52110691534189273302e-8},
           {3.95796121380298759592e-5, -3.25699207913430612634e-5, 1.37521308679636010538e-5, -3.95131075431388967636e-6, 8.65671821296244992275e-7, -1.53790354703352114619e-7, 2.30247754987654021122e-8},
           {3.64562751088293580774e-5, -2.99346467873946030811e-5, 1.26171739676198351962e-5, -3.61997081716307288180e-6, 7.92128308964106654752e-7, -1.40583197696581666954e-7, 2.10294652319731001956e-8},
           {3.35854400267081903346e-5, -2.75167116537902005661e-5, 1.15773355701572255768e-5, -3.31676658032034537435e-6, 7.24897989216719676281e-7, -1.28520167362892537909e-7, 1.92083496889227972417e-8},
           {3.09462966740103686040e-5, -2.52979110699623267234e-5, 1.06245425723298434601e-5, -3.03928377418294944876e-6, 6.63434144937467428699e-7, -1.17501409076203599480e-7, 1.75461241389406674598e-8},
           {2.85197768946855591645e-5, -2.32615850457500180737e-5, 9.75141432475305824977e-6, -2.78531712967653159147e-6, 6.07237759796449781048e-7, -1.07435839121412969729e-7, 1.60288359902785513788e-8},
           {2.62884068814701562546e-5, -2.13924855141448870218e-5, 8.95120270807416200192e-6, -2.55285214860587906987e-6, 5.55853329473282461881e-7, -9.82403699834414757207e-8, 1.46437647505507738327e-8},
           {2.42361721223739671875e-5, -1.96766553782883915592e-5, 8.21773743428153782430e-6, -2.34004847439120123003e-6, 5.08865042777152984869e-7, -8.98392043990722808311e-8, 1.33793126897280717961e-8},
           {2.23483939117345095117e-5, -1.81013180142583172407e-5, 7.54537611455860400469e-6, -2.14522472189821662136e-6, 4.65893299839092226070e-7, -8.21631920419174380161e-8, 1.22249052478262494422e-8},
           {2.06116164264995895819e-5, -1.66547763187909187539e-5, 6.92895867556679652291e-6, -1.96684463760605502596e-6, 4.26591537476984184903e-7, -7.51492432593481624001e-8, 1.11709003154464589679e-8},
           {1.90135034554285703835e-5, -1.53263204709621676412e-5, 6.36376574292912948483e-6, -1.80350447277569741301e-6, 3.90643334497642953983e-7, -6.87397947794806661046e-8, 1.02085055935946625953e-8},
           {1.75427439483030289495e-5, -1.41061436496839263504e-5, 5.84548064430258713155e-6, -1.65392146268327022997e-6, 3.57759772125855082358e-7, -6.28823227607503830290e-8, 9.32970331043002908523e-9},
           {1.61889656246800913851e-5, -1.29852650152819178067e-5, 5.37015471506492931593e-6, -1.51692331445789638739e-6, 3.27677026958977448516e-7, -5.75288989702687955448e-8, 8.52718163740225767122e-9},
           {1.49426559478206898672e-5, -1.19554593239817188804e-5, 4.93417561756465088146e-6, -1.39143861469585940293e-6, 3.00154175856977062882e-7, -5.26357862537102767716e-8, 7.79427220621472135708e-9},
           {1.37950898297385649954e-5, -1.10091925993551341552e-5, 4.53423841033337007085e-6, -1.27648807588683547125e-6, 2.74971194009383612939e-7, -4.81630698022595248717e-8, 7.12489318172074028957e-9},
           {1.27382634883537643503e-5, -1.01395633351435517148e-5, 4.16731912685789617363e-6, -1.17117654785257132883e-6, 2.51927129088629101867e-7, -4.40743210342035555757e-8, 6.51349739470288579538e-9},
           {1.17648339279608228603e-5, -9.34024874980846295529e-6, 3.83065064465468332568e-6, -1.07468572692603544982e-6, 2.30838435918322186683e-7, -4.03362911928373817231e-8, 5.95502508293548228696e-9},
           {1.08680635600599319481e-5, -8.60545565505338318592e-6, 3.52170064466507449057e-6, -9.86267501546655308455e-7, 2.11537457468503306981e-7, -3.69186320209859259112e-8, 5.44486082938463214511e-9},
           {1.00417695234351324953e-5, -7.92987553877346990972e-6, 3.23815147856153174040e-6, -9.05237878366486172223e-7, 1.93871039249984898491e-7, -3.37936411079131152674e-8, 4.97879432321845857946e-9},
           {9.28027730054843703336e-6, -7.30864349774450587920e-6, 2.97788177757443378474e-6, -8.30971437900215506043e-7, 1.77699265327564889410e-7, -3.09360297187748403819e-8, 4.55298460281048462836e-9},
           {8.57837826217357740492e-6, -6.73730068715798298862e-6, 2.73894965105370183877e-6, -7.62896273251662768222e-7, 1.62894305217257860236e-7, -2.83227111119691153224e-8, 4.16392747041940932798e-9},
           {7.93129080400988813258e-6, -6.21175998311417641094e-6, 2.51957733629516677333e-6, -7.00489369549974874764e-7, 1.49339361884889758694e-7, -2.59326075274677699951e-8, 3.80842579599000970305e-9},
           {7.33462476806242219898e-6, -5.72827458064625773536e-6, 2.31813717330236867935e-6, -6.43272385465613943191e-7, 1.36927711930764143455e-7, -2.37464741910475949276e-8, 3.48356245278933147229e-9},
           {6.78434886809151452020e-6, -5.28340927399040530732e-6, 2.13313878922475251928e-6, -5.90807801581861499232e-7, 1.25561829835238633574e-7, -2.17467388267016736305e-8, 3.18667565059402803177e-9},
           {6.27676086264533099790e-6, -4.87401418784364836385e-6, 1.96321738730768786523e-6, -5.42695403501444202367e-7, 1.15152588859835360455e-7, -1.99173553037024154642e-8, 2.91533645308285301983e-9},
           {5.80846024129457904115e-6, -4.49720074844945735706e-6, 1.80712304439499854427e-6, -4.98569070396843629434e-7, 1.05618531854248086774e-7, -1.82436701669877066805e-8, 2.66732828514858587649e-9},
           {5.37632320987351490634e-6, -4.15031970169057758786e-6, 1.66371092941933276098e-6, -4.58093842291375848078e-7, 9.68852058170189827896e-8, -1.67123009108260862478e-8, 2.44062825319505949850e-9},
           {4.97747977896395092488e-6, -3.83094100210422688104e-6, 1.53193236297160414939e-6, -4.20963241708470569249e-7, 8.88845546019463610785e-8, -1.53110249570646628457e-8, 2.23339011728114872482e-9},
           {4.60929277669215478695e-6, -3.53683541200754694250e-6, 1.41082664502317873279e-6, -3.86896827469032723369e-7, 8.15543646582002267225e-8, -1.40286783915644463360e-8, 2.04392876835438589301e-9},
           {4.26933862228219035997e-6, -3.26595766385986972823e-6, 1.29951358424303085068e-6, -3.55637960369806258496e-7, 7.48377591439749785512e-8, -1.28550635964929944729e-8, 1.87070607690959569773e-9},
           {3.95538971085085773520e-6, -3.01643105171009495011e-6, 1.19718666816105132269e-6, -3.26951762256110720219e-7, 6.86827361652347823289e-8, -1.17808649927111472108e-8, 1.71231799132824989831e-9},
           {3.66539827275509786151e-6, -2.78653332918927036961e-6, 1.10310681872743087009e-6, -3.00623251625497344892e-7, 6.30417472662823945409e-8, -1.07975721762301902864e-8, 1.56748277500756860387e-9},
           {3.39748158251874666832e-6, -2.57468380210770235488e-6, 1.01659668265169568021e-6, -2.76455640378746906315e-7, 5.78713126407659814175e-8, -9.89740979623954510414e-9, 1.43503028127045384291e-9},
           {3.14990840306842268361e-6, -2.37943151339152478193e-6, 9.37035410314527372244e-7, -2.54268777683907871785e-7, 5.31316698432975907957e-8, -9.07327358006882087080e-9, 1.31389217404544822399e-9},
           {2.92108656078651098931e-6, -2.19944442692656221537e-6, 8.63853881068416643695e-7, -2.33897728149339810222e-7, 4.87864530657929133163e-8, -8.31867196315815264810e-9, 1.20309301049933915413e-9},
           {2.70955155582310383216e-6, -2.03349952494149200830e-6, 7.96530336413552984678e-7, -2.15191472623527186640e-7, 4.48024003014139361994e-8, -7.62767283012796481890e-9, 1.10174210926600898962e-9},
           {2.51395612027182012609e-6, -1.88047374092502061167e-6, 7.34586385884217671666e-7, -1.98011720962378615030e-7, 4.11490859548447209230e-8, -6.99485491678308848767e-9, 1.00902613470936784548e-9},
           {2.33306064427374592259e-6, -1.73933565679449506796e-6, 6.77583353536664031345e-7, -1.82231827037576043814e-7, 3.77986766725957786428e-8, -6.41526346273829222633e-9, 9.24202333845495368055e-10},
           {2.16572439693040158759e-6, -1.60913789917209583646e-6, 6.25118935717822230122e-7, -1.67735797110269123513e-7, 3.47257083629706600946e-8, -5.88436974066050837039e-9, 8.46592368183855358151e-10},
           {2.01089747513650649266e-6, -1.48901017523054883227e-6, 5.76824143338719098718e-7, -1.54417383470282577394e-7, 3.19068825539323675479e-8, -5.39803412120353990310e-9, 7.75576687879175252694e-10},
           {1.86761341913726464760e-6, -1.37815289368976084738e-6, 5.32360504198670478274e-7, -1.42179255948647166130e-7, 2.93208803999175465357e-8, -4.95247236285217761477e-9, 7.10589400259360660047e-10}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson
