/* This file was autogenerated on 2023-02-17T18:31 DO NOT EDIT! */

#pragma once

#include <array>

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 27.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<27>()
{
    // clang-format off
  return {{{1.81818181818181818182e-2, -1.75438596491228070175e-2, 8.47457627118644067797e-3, -2.73224043715846994536e-3, 6.61375661375661375661e-4, -1.28205128205128205128e-4, 2.07296849087893864013e-5},
           {1.65095106151410472850e-2, -1.59283289839905091434e-2, 7.69333512874866183584e-3, -2.48010596365204599029e-3, 6.00284304310259256982e-4, -1.16352086714683068658e-4, 1.88115162400573651495e-5},
           {1.49911898455291226623e-2, -1.44617210652997329329e-2, 6.98418455512871908658e-3, -2.25126017800292982374e-3, 5.44840840738602971184e-4, -1.05595794141370903250e-4, 1.70709764746913081736e-5},
           {1.36126617693356228439e-2, -1.31302943862357576060e-2, 6.34046611143364389346e-3, -2.04355012984782204513e-3, 4.94522697401745896760e-4, -9.58346915239153917089e-5, 1.54916046407923916337e-5},
           {1.23610419508987066928e-2, -1.19215765797369682016e-2, 5.75613688085499074915e-3, -1.85502206359365508920e-3, 4.48855689564501918708e-4, -8.69766311029963347639e-5, 1.40584662634238767456e-5},
           {1.12246346693384690257e-2, -1.08242471009824467454e-2, 5.22571252168303312241e-3, -1.68390297432741598178e-3, 4.07409537133369319475e-4, -7.89380036085086017649e-5, 1.27580117135189492430e-5},
           {1.01928231456396411331e-2, -9.82803076346153679788e-3, 4.74421559303382211342e-3, -1.52858387277285357950e-3, 3.69793796556875243968e-4, -7.16429465275622643760e-5, 1.15779477094434665247e-5},
           {9.25596991572059414610e-3, -8.92360112373083783077e-3, 4.30712866473150629565e-3, -1.38760460082240307846e-3, 3.35654169928275452651e-4, -6.50226258341844585075e-5, 1.05071207492353764192e-5},
           {8.40532641094794176484e-3, -8.10249280307201100171e-3, 3.91035176808845422874e-3, -1.25964005387665814797e-3, 3.04669156292584268446e-4, -5.90145843602384422423e-5, 9.53541136513737248436e-6},
           {7.63295089444235037163e-3, -7.35702191873895995633e-3, 3.55016378542266251503e-3, -1.14348767956250099535e-3, 2.76547013409172569472e-4, -5.35621506206933128231e-5, 8.65363819506846757316e-6},
           {6.93163398035808245301e-3, -6.68021387412608309841e-3, 3.22318741343610108002e-3, -1.03805613450146062490e-3, 2.51023001168589000778e-4, -4.86139024811007322384e-5, 7.85347095912734766219e-6},
           {6.29483103485235437335e-3, -6.06573782672722994214e-3, 2.92635736940284520852e-3, -9.42354991776979183590e-4, 2.27856880535885791177e-4, -4.41231805764383212473e-5, 7.12735151397682414551e-6},
           {5.71660082236789129917e-3, -5.50784721584663111010e-3, 2.65689153980329774776e-3, -8.55485401707431329134e-4, 2.06830644318017122527e-4, -4.00476468633325835946e-5, 6.46842223483333870641e-6},
           {5.19154981974737778083e-3, -5.00132578926661738178e-3, 2.41226479888165474055e-3, -7.76631617565556268273e-4, 1.87746458252900850399e-4, -3.63488841165817962251e-5, 5.87046104451144155195e-6},
           {4.71478167413904528799e-3, -4.54143862001465861006e-3, 2.19018524986233469043e-3, -7.05053306080298015923e-4, 1.70424792913431819193e-4, -3.29920325699478833429e-5, 5.32782247221579883465e-6},
           {4.28185132914397827836e-3, -4.12388765149634354407e-3, 1.98857266447696658801e-3, -6.40078569991793435573e-4, 1.54702728730092217441e-4, -2.99454602540823729780e-5, 4.83538418213552602664e-6},
           {3.88872338765659103510e-3, -3.74477135201786368035e-3, 1.80553891724419745754e-3, -5.81097616674997887419e-4, 1.40432418078045558128e-4, -2.71804639045561309020e-5, 4.38849846392467244255e-6},
           {3.53173431977617550623e-3, -3.40054809851620017114e-3, 1.63937022980717851499e-3, -5.27557012966298395119e-4, 1.27479689864345855288e-4, -2.46709976033243666871e-5, 3.98294822434457049839e-6},
           {3.20755816039711193557e-3, -3.08800294451519073344e-3, 1.48851105774714374298e-3, -4.78954471878541418114e-4, 1.15722783402311257405e-4, -2.23934265803429967162e-5, 3.61490706214850297920e-6},
           {2.91317537396069969891e-3, -2.80421745926409064081e-3, 1.35154946781818399715e-3, -4.34834121925910439561e-4, 1.05051199586055427006e-4, -2.03263038409667721237e-5, 3.28090304711471276457e-6},
           {2.64584459368347917410e-3, -2.54654235399467314752e-3, 1.22720386763546743941e-3, -3.94782214348854464201e-4, 9.53646584902929092889e-5, -1.84501675014796981910e-5, 2.97778585935036220681e-6},
           {2.40307696964723585195e-3, -2.31257263752765018089e-3, 1.11431096263026247796e-3, -3.58423227674171962238e-4, 8.65721535294155912239e-5, -1.67473569116955284242e-5, 2.70269697693230038260e-6},
           {2.18261288470060618380e-3, -2.10012506731807255256e-3, 1.01181482668140105413e-3, -3.25416332805738618174e-4, 7.85910932250618053446e-5, -1.52018458218932521090e-5, 2.45304262892473393147e-6},
           {1.98240081941315846731e-3, -1.90721768367827122781e-3, 9.18756983354105890606e-4, -2.95452185252928749976e-4, 7.13465224616690522723e-5, -1.37990910131158394384e-5, 2.22646925709537459552e-6},
           {1.80057816755097108846e-3, -1.73205123456062100307e-3, 8.34267404223226045033e-4, -2.68250014198897091672e-4, 6.47704158627074885832e-5, -1.25258949565994847335e-5, 2.02084125349060765171e-6},
           {1.63545382189878192591e-3, -1.57299231610685645577e-3, 7.57556339419209368198e-4, -2.43554980918932661646e-4, 5.88010366035885293575e-5, -1.13702812012119040309e-5, 1.83422076265392328627e-6},
           {1.48549236691135474672e-3, -1.42855807034436587712e-3, 6.87906903393755157945e-4, -2.21135781606708137301e-4, 5.33823545971263589086e-5, -1.03213813085276366626e-5, 1.66484935688615742747e-6},
           {1.34929972979297950475e-3, -1.29740229608595936985e-3, 6.24668346032406602772e-4, -2.00782471977601468215e-4, 4.84635185497873786269e-5, -9.36933226470496472588e-6, 1.51113141073792116615e-6},
           {1.22561015532173227943e-3, -1.17830284240667501096e-3, 5.67249945710943505664e-4, -1.82304493115281052032e-4, 4.39983768971353151581e-5, -8.50518339769448921957e-6, 1.37161901706327503254e-6},
           {1.11327438218378140140e-3, -1.07015016615531343043e-3, 5.15115466762560477582e-4, -1.65528879930315153766e-4, 3.99450430897140186135e-5, -7.72081191844891145178e-6, 1.24499830160305254046e-6},
           {1.01124890988011392583e-3, -9.71936945923731554844e-4, 4.67778129149068141492e-4, -1.50298635325726723461e-4, 3.62655011205007126612e-5, -7.00884628657388864919e-6, 1.13007700634547679739e-6},
           {9.18586255520184862162e-4, -8.82748654847165248327e-4, 4.24796042962151485650e-4, -1.36471254730541037775e-4, 3.29252475659964986268e-5, -6.36259667503893871972e-6, 1.02577322395743326078e-6},
           {8.34426109120902509408e-4, -8.01755003638043232776e-4, 3.85768064765805494907e-4, -1.23917387083304617913e-4, 2.98929667586154980115e-5, -5.77599187585999817598e-6, 9.31105176506474352831e-7},
           {7.57987304472810142358e-4, -7.28202173449184111259e-4, 3.50330036769965099102e-4, -1.12519619636766048717e-4, 2.71402360215683793356e-5, -5.24352204971141080248e-6, 8.45181941605441894160e-7},
           {6.88560530297968793369e-4, -6.61405765597391148355e-4, 3.18151373435681652981e-4, -1.02171375124617886581e-4, 2.46412581818880425813e-5, -4.76018677780477147482e-6, 7.67195038102776159579e-7},
           {6.25501713378124571570e-4, -6.00744401925485901374e-4, 2.88931963388160833756e-4, -9.27759108924888564263e-5, 2.23726188353123278652e-5, -4.32144792461165310637e-6, 6.96410791597706983793e-7},
           {5.68226011642865508691e-4, -5.45653915703484719904e-4, 2.62399357486535727679e-4, -8.42454105583033955500e-5, 2.03130660708711322155e-5, -3.92318686558407588662e-6, 6.32163407458194837838e-7},
           {5.16202360935089869104e-4, -4.95622078525756351412e-4, 2.38306216596538290300e-4, -7.65001596408146898078e-5, 1.84433105754438884808e-5, -3.56166567537366459155e-6, 5.73848685731088550672e-7},
           {4.68948524369249637647e-4, -4.50183813703049651861e-4, 2.16427995059755018392e-4, -6.94677973878408462106e-5, 1.67458442312730206090e-5, -3.23349190956058993079e-6, 5.20918318422340495864e-7},
           {4.26026597915461801343e-4, -4.08916851223852797440e-4, 1.96560838074055224071e-4, -6.30826377550037045196e-5, 1.52047754942681993579e-5, -2.93558664693287587228e-6, 4.72874715148163932207e-7},
           {3.87038930124161857649e-4, -3.71437783511843907201e-4, 1.78519673215059710954e-4, -5.72850531383936329832e-5, 1.38056799995725101935e-5, -2.66515549022863708445e-6, 4.29266308168267203896e-7},
           {3.51624417791839244223e-4, -3.37398484974382034934e-4, 1.62136478157228608715e-4, -5.20209150567428824574e-5, 1.25354649847900002257e-5, -2.41966225126143826980e-6, 3.89683292357384015488e-7},
           {3.19455142895155082966e-4, -3.06482861756647605774e-4, 1.47258708312572784592e-4, -4.72410865159900546706e-5, 1.13822462518584875950e-5, -2.19680507175828057301e-6, 3.53753759794460820071e-7},
           {2.90233319321598660923e-4, -2.78403901219419062409e-4, 1.33747869610811805129e-4, -4.29009612766447905605e-5, 1.03352365070303823657e-5, -1.99449475429168124931e-6, 3.21140192389243175380e-7},
           {2.63688520829947624542e-4, -2.52900993474850367508e-4, 1.21478223011251858362e-4, -3.89600456867288409538e-5, 9.38464402592007920334e-6, -1.81083509860106277192e-6, 2.91536279359194198185e-7},
           {2.39575164310496858434e-4, -2.29737499870557936683e-4, 1.10335608576638647695e-4, -3.53815791444639452792e-5, 8.52158068810879556414e-6, -1.64410505757240208742e-6, 2.64664029447905562522e-7},
           {2.17670224808133014110e-4, -2.08698545631927362279e-4, 1.00216378064471402557e-4, -3.21321896190949313731e-5, 7.73797851428967007931e-6, -1.49274254435905671224e-6, 2.40271150568698353708e-7},
           {1.97771160943384095550e-4, -1.89589015977691599177e-4, 9.10264260123722486430e-5, -2.91815809887252189262e-5, 7.02651391922697832692e-6, -1.35532973774412050822e-6, 2.18128672090472285871e-7},
           {1.79694031337996668789e-4, -1.72231736934351932055e-4, 8.26803102207303715039e-5, -2.65022492539261483315e-5, 6.38053896665335234498e-6, -1.23057974701374293147e-6, 1.98028787281128012624e-7},
           {1.63271784440940904114e-4, -1.56465823808918217969e-4, 7.51004533767340461516e-5, -2.40692249579977282496e-5, 5.79401897832830483135e-6, -1.11732451046602509054e-6, 1.79782895508878262536e-7},
           {1.48352705774841298622e-4, -1.42145181853079377110e-4, 6.82164183270023908971e-5, -2.18598393916800528614e-5, 5.26147590945592321743e-6, -1.01450381334323103779e-6, 1.63219825693294881345e-7},
           {1.34799008096957845509e-4, -1.29137145080101260102e-4, 6.19642501985354787622e-5, -1.98535123841754575582e-5, 4.77793695707748715000e-6, -9.21155321556791064726e-7, 1.48184224213959957263e-7},
           {1.22485551306854420148e-4, -1.17321240491943007303e-4, 5.62858791961522427556e-5, -1.80315596856599229996e-5, 4.33888791743087145049e-6, -8.36405537175233772525e-7, 1.34535092041404634282e-7},
           {1.11298680147372603582e-4, -1.06588066150496596387e-4, 5.11285784749092593712e-5, -1.63770181309600978503e-5, 3.94023085307062051474e-6, -7.59461590355777021831e-7, 1.22144457267404332800e-7},
           {1.01135168847889283421e-4, -9.68382725945582373663e-5, 4.64444720035711678210e-5, -1.48744869414925365433e-5, 3.57824567119439328991e-6, -6.89603790303426807275e-7, 1.10896170493061634456e-7},
           {9.19012628594409599703e-5, -8.79816380731974519288e-5, 4.21900878049170111137e-5, -1.35099836744867602930e-5, 3.24955525150785402955e-6, -6.26178865011965318096e-7, 1.00684811695612222905e-7},
           {8.35118087395444840112e-5, -7.99362289457145069362e-5, 3.83259523849456161179e-5, -1.22708134663785396995e-5, 2.95109379543006450757e-6, -5.68593826047108154246e-7, 9.14146982495657158753e-8},
           {7.58894640689658907338e-5, -7.26276373966524885131e-5, 3.48162225499081150518e-5, -1.11454503423665398731e-5, 2.68007809881165188844e-6, -5.16310400535037325253e-7, 8.29989847346496969067e-8},
           {6.89639800310308938129e-5, -6.59882893388681645349e-5, 3.16283511611921007607e-5, -1.01234294776557377760e-5, 2.43398147789573432296e-6, -4.68839977875375070742e-7, 7.53588460311419113277e-8},
           {6.26715499633580946925e-5, -5.99568160352807912180e-5, 2.87327836967213270556e-5, -9.19524939893691447971e-6, 2.21051010325751682499e-6, -4.25739023557191721547e-7, 6.84227359907854182795e-8},
           {5.69542178085086800519e-5, -5.44774835668005076193e-5, 2.61026827767190828665e-5, -8.35228320814555978051e-6, 2.00758151914897195833e-6, -3.86604916865885226833e-7, 6.21257146860571196507e-8},
           {5.17593409497695941166e-5, -4.94996748156977751302e-5, 2.37136780741376355897e-5, -7.58669799538833682594e-6, 1.82330514626474206083e-6, -3.51072173269450472280e-7, 5.64088378888773443610e-8},
           {4.70391024263789778691e-5, -4.49774191254111147431e-5, 2.15436392682535165480e-5, -6.89138168492162673747e-6, 1.65596458462892849343e-6, -3.18809015902684290066e-7, 5.12186030180546059604e-8},
           {4.27500679837246295263e-5, -4.08689652441219584251e-5, 1.95724699161124291618e-5, -6.25987662794111798716e-6, 1.50400155025638547009e-6, -2.89514263861598534473e-7, 4.65064463284336731290e-8},
           {3.88527838327309605238e-5, -3.71363935645513691588e-5, 1.77819203127141842419e-5, -5.68631931935322753300e-6, 1.36600129462674504732e-6, -2.62914508008914714828e-7, 4.22282865989138272002e-8},
           {3.53114113727211263293e-5, -3.37452640401599582255e-5, 1.61554175889052006063e-5, -5.16538567324654983699e-6, 1.24067936997004759873e-6, -2.38761547703288017032e-7, 3.83441110158187983009e-8},
           {3.20933954770643851593e-5, -3.06642964917149988624e-5, 1.46779114575701464065e-5, -4.69224134400724953597e-6, 1.12686961603140889648e-6, -2.16830064325497010923e-7, 3.48175993466933405351e-8},
           {2.91691632541290277582e-5, -2.78650803211646584505e-5, 1.33357341654065252219e-5, -4.26249662741890099024e-6, 1.02351325547832007423e-6, -1.96915509707543224190e-7, 3.16157828612507195301e-8},
           {2.65118504803949894127e-5, -2.53218109247729901889e-5, 1.21164733407076725377e-5, -3.87216551910163540536e-6, 9.29648995546528127464e-7, -1.78832189596531046457e-7, 2.87087347843270456553e-8},
           {2.40970531607012301877e-5, -2.30110503471049746883e-5, 1.10088565484226288802e-5, -3.51762854668298553514e-6, 8.44404042987480924948e-7, -1.62411524123521920550e-7, 2.60692893634211001936e-8},
           {2.19026019049317644818e-5, -2.09115099440516597894e-5, 1.00026464734435929300e-5, -3.19559902752166717603e-6, 7.66985947971447346338e-7, -1.47500468915657486278e-7, 2.36727869035321864711e-8},
           {1.99083570231742146696e-5, -1.90038530287795919037e-5, 9.08854575262413140403e-6, -2.90309243595934313980e-6, 6.96675200396736647529e-7, -1.33960082003494271764e-7, 2.14968423671110969275e-8},
           {1.80960224345100509510e-5, -1.72705156612060255423e-5, 8.25811056639087793521e-6, -2.63739859325737458442e-6, 6.32818509130535416247e-7, -1.21664223049006532134e-7, 1.95211353593330085746e-8},
           {1.64489766599242964425e-5, -1.56955439110949028969e-5, 7.50367218282735460959e-6, -2.39605641986047049932e-6, 5.74822701127516110733e-7, -1.10498372666069493882e-7, 1.77272195206898047862e-8},
           {1.49521193289956391383e-5, -1.42644460787284794941e-5, 6.81826572155218423591e-6, -2.17683101366643261889e-6, 5.22149183199143535255e-7, -1.00358560736219859525e-7, 1.60983495319947771858e-8},
           {1.35917317745367072755e-5, -1.29640584967786522965e-5, 6.19556547228479675222e-6, -1.97769283979740962589e-6, 4.74308914494479829890e-7, -9.11503936487857215477e-8, 1.46193241030267986127e-8},
           {1.23553504205498781624e-5, -1.17824236637912727873e-5, 5.62982616432521524539e-6, -1.79679883716841536131e-6, 4.30857842552149426644e-7, -8.27881713257862206205e-8, 1.32763434667869526012e-8},
           {1.12316517879751577867e-5, -1.07086795747942630901e-5, 5.11582963884646071831e-6, -1.63247526511991762422e-6, 3.91392760138224731596e-7, -7.51940857371179109052e-8, 1.20568800381238890330e-8},
           {1.02103480508471531387e-5, -9.73295921902577882139e-6, 4.64883642643199195324e-6, -1.48320212969213459003e-6, 3.55547544037206255117e-7, -6.82974933784532961574e-8, 1.09495610195997545712e-8},
           {9.28209217365935238063e-6, -8.84629930963112619908e-6, 4.22454177816080972738e-6, -1.34759904392281533678e-6, 3.22989740550257608757e-7, -6.20342548802198765179e-8, 9.94406185008987013111e-9},
           {8.43839174987430317007e-6, -8.04055739628567686943e-6, 3.83903574018023977313e-6, -1.22441238998700516896e-6, 2.93417465710229508471e-7, -5.63461355475787759733e-8, 9.03100949380196179602e-9},
           {7.67153074245101208731e-6, -7.30833658987254942670e-6, 3.48876689950200408104e-6, -1.11250366319306674981e-6, 2.66556591177448950118e-7, -5.11802612044405400317e-8, 8.20189466013081175994e-9},
           {6.97449840074250570370e-6, -6.64291719931049155974e-6, 3.17050946306561804461e-6, -1.01083888891866965407e-6, 2.42158189461603880149e-7, -4.64886242346541324497e-8, 7.44899212890891373660e-9},
           {6.34092469483365801780e-6, -6.03819464505397548846e-6, 2.88133336325666776821e-6, -9.18479013617787049575e-7, 2.19996214548581406560e-7, -4.22276351854918961212e-8, 6.76528843196800179715e-9},
           {5.76502166896567272788e-6, -5.48862307227742542143e-6, 2.61857711133815534066e-6, -8.34571180149316536610e-7, 1.99865396219738720353e-7, -3.83577157268817904527e-8, 6.14441621121252480674e-9},
           {5.24153017069456160320e-6, -4.98916413985611743664e-6, 2.37982314591622797981e-6, -7.58340805955568475033e-7, 1.81579328355615360771e-7, -3.48429291485507294084e-8, 5.58059463627849420952e-9},
           {4.76567146237048542195e-6, -4.53524050946482594444e-6, 2.16287544685794797233e-6, -6.89084390132327103513e-7, 1.64968733335392579268e-7, -3.16506449300057626015e-8, 5.06857532190433161140e-9},
           {4.33310326686906412011e-6, -4.12269360288291391458e-6, 1.96573920622673399449e-6, -6.26162982252095859148e-7, 1.49879886294615078596e-7, -2.87512342384206029007e-8, 4.60359323691290713356e-9},
           {3.93987984067814547774e-6, -3.74774523533063804554e-6, 1.78660236699907819707e-6, -5.68996251992541698894e-7, 1.36173184502347305722e-7, -2.61177935000333003360e-8, 4.18132214368536405760e-9},
           {3.58241570482813860714e-6, -3.40696276873787262641e-6, 1.62381885775407989660e-6, -5.17057104241273022844e-7, 1.23721848479148941376e-7, -2.37258934543350783436e-8, 3.79783414964108176677e-9},
           {3.25745269809983329715e-6, -3.09722746160052238027e-6, 1.47589336734856517584e-6, -4.69866789448604170294e-7, 1.12410742711823331469e-7, -2.15533513396275222194e-8, 3.44956299092694780621e-9},
           {2.96203004776730853184e-6, -2.81570572181788600876e-6, 1.34146751795337962796e-6, -4.26990463629874795264e-7, 1.02135304941432398852e-7, -1.95800240757002328210e-8, 3.13327070362830708416e-9},
           {2.69345718112241798987e-6, -2.55982299590424167840e-6, 1.21930730786540260636e-6, -3.88033156621581127127e-7, 9.28005740181243624998e-8, -1.77876205064805531200e-8, 2.84601736967492270332e-9},
           {2.44928902644261473504e-6, -2.32724005248220394836e-6, 1.10829170734706489926e-6, -3.52636111010562965004e-7, 8.43203072394516136564e-8, -1.61595309443888887876e-8, 2.58513365352885968599e-9},
           {2.22730357514232206649e-6, -2.11583144022309052867e-6, 1.00740230149155658230e-6, -3.20473457618528661128e-7, 7.66161789267461721546e-8, -1.46806724204816362070e-8, 2.34819587198013578793e-9},
           {2.02548149780481431725e-6, -1.92366592060857489785e-6, 9.15713883868076887595e-7, -2.91249196567817601288e-7, 6.96170527546478021907e-8, -1.33373481918094799894e-8, 2.13300336318801741403e-9},
           {1.84198762582192964953e-6, -1.74898869423703663185e-6, 8.32385913558751002995e-7, -2.64694455807965124680e-7, 6.32583210391931106125e-8, -1.21171201911479768116e-8, 1.93755794271550698077e-9},
           {1.67515412765018376451e-6, -1.59020525605860583234e-6, 7.56654756240138164867e-7, -2.40565001573136863925e-7, 5.74813048164624309836e-8, -1.10086932256305959234e-8, 1.76004525391576949035e-9},
           {1.52346522438487605702e-6, -1.44586673005052065728e-6, 6.87826637262798710727e-7, -2.18638977592111234117e-7, 5.22327091125313100005e-8, -1.00018098409733689970e-8, 1.59881783782697643074e-9},
           {1.38554330360480965688e-6, -1.31465654758021853708e-6, 6.25271241310511096782e-7, -1.98714852007273454145e-7, 4.74641283217295121575e-8, -9.08715486796246304925e-9, 1.45237976388404855829e-9},
           {1.26013630338185715912e-6, -1.19537834617582226493e-6, 5.68415899238404308545e-7, -1.80609552897050180015e-7, 4.31315970788222251408e-8, -8.25626875862229256164e-9, 1.31937267741445747893e-9},
           {1.14610625010226857383e-6, -1.08694497674867803778e-6, 5.16740308152801103227e-7, -1.64156775055520160766e-7, 3.91951824360950714105e-8, -7.50146890184581818396e-9, 1.19856313318866228186e-9},
           {1.04241884441974498185e-6, -9.88368517596008350058e-7, 4.69771735756006072819e-7, -1.49205442280075950756e-7, 3.56186135424435872307e-8, -6.81577818302585187850e-9, 1.08883109636943252499e-9},
           {9.48133999353071451332e-7, -8.98751202849479592367e-7, 4.27080664483026318471e-7, -1.35618310867940529539e-7, 3.23689453720602503071e-8, -6.19286012007906458264e-9, 9.89159503161883178308e-10},
           {8.62397243343777689684e-7, -8.17277181514592858918e-7, 3.88276835046335389184e-7, -1.23270701338648530072e-7, 2.94162533684717841808e-8, -5.62695996984178583221e-9, 8.98624783410902663501e-10},
           {7.84431909083629978381e-7, -7.43205030945330452234e-7, 3.53005652717526598713e-7, -1.12049346594606459122e-7, 2.67333561584885890895e-8, -5.11285125471707578190e-9, 8.16388256418351182322e-10},
           {7.13532036182110056725e-7, -6.75860955590204816901e-7, 3.20944923045706776176e-7, -1.01851345816742874426e-7, 2.42955637527991034672e-8, -4.64578721019203299945e-9, 7.41688319444061125086e-10},
           {6.49055922337875665898e-7, -6.14632608194882828686e-7, 2.91801886773263065825e-7, -9.25832143771991483587e-8, 2.20804488879326812714e-8, -4.22145669989935797085e-9, 6.73833355789350533874e-10},
           {5.90420263666772494180e-7, -5.58963476412042704336e-7, 2.65310526488751603098e-7, -8.41600209452184789373e-8, 2.00676393803580129918e-8, -3.83594418670098135302e-9, 6.12195296109521907227e-10},
           {5.37094830277912778805e-7, -5.08347783004781686831e-7, 2.41229120080082393385e-7, -7.65046037742259374485e-8, 1.82386295596057628462e-8, -3.48569338621672464318e-9, 5.56203772726139707999e-10},
           {4.88597628129156899957e-7, -4.62325852584436983375e-7, 2.19338018342429150158e-7, -6.95468588951561663304e-8, 1.65766090253430549615e-8, -3.16747426366389144628e-9, 5.05340812268454863408e-10},
           {4.44490502679902864390e-7, -4.20479902141409588644e-7, 1.99437626175787906155e-7, -6.32230936102673361400e-8, 1.50663071349520975693e-8, -2.87835306613821582253e-9, 4.59136017018438216334e-10},
           {4.04375143934014372318e-7, -3.82430216548639763661e-7, 1.81346568696232214515e-7, -5.74754392892420988022e-8, 1.36938517748909002208e-8, -2.61566511084589873551e-9, 4.17162189912992821105e-10},
           {3.67889456166867111284e-7, -3.47831673778282134124e-7, 1.64900025300300138218e-7, -5.22513180209948609985e-8, 1.24466411023149049408e-8, -2.37699007555738211227e-9, 3.79031362313118447918e-10},
           {3.34704258992133489644e-7, -3.16370587805970992101e-7, 1.49948216279586520750e-7, -4.75029581754386403923e-8, 1.13132270643628205828e-8, -2.16012956093763876401e-9, 3.44391187422172336944e-10},
           {3.04520289477300067323e-7, -2.87761840113937136203e-7, 1.36355027997031892058e-7, -4.31869543841942992441e-8, 1.02832096122901543909e-8, -1.96308671563469820483e-9, 3.12921665659401825868e-10},
           {2.77065477790275793627e-7, -2.61746273371436921900e-7, 1.23996763920777365187e-7, -3.92638678620969590692e-8, 9.34714062729822355658e-9, -1.78404773427696907633e-9, 2.84332171402809126495e-10},
           {2.52092471378550240366e-7, -2.38088323293277708007e-7, 1.12761009977762046207e-7, -3.56978633662275912567e-8, 8.49643666538769997467e-9, -1.62136505602159385573e-9, 2.58358753336352443440e-10},
           {2.29376384970515308192e-7, -2.16573866877173563731e-7, 1.02545603748344158905e-7, -3.24563794295731840080e-8, 7.72329971071104626048e-9, -1.47354210717445458146e-9, 2.34761683197016011786e-10},
           {2.08712755766989798381e-7, -1.97008267218688980047e-7, 9.32576979849922471153e-8, -2.95098288154722901732e-8, 7.02064520147621699021e-9, -1.33921944581666607392e-9, 2.13323230041453726636e-10},
           {1.89915685078920852476e-7, -1.79214596917178522268e-7, 8.48129098114751995698e-8, -2.68313264196229727363e-8, 6.38203666016257369272e-9, -1.21716217945744722667e-9, 1.93845639261558003602e-10}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson
