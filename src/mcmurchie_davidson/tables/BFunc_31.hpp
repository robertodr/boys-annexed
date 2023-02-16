#pragma once

#include <array>

/* This file was autogenerated on 2023-02-16T14:43 DO NOT EDIT! */

namespace mcmurchie_davidson {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 31.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 *  Row i contains the coefficients for the expansion at point i. The
 *  coefficients are in natural order: from 0-th to 6-th power.
 */
template <>
inline constexpr std::array<std::array<double, 7>, 121>
pretabulated<31>()
{
    // clang-format off
  return {{{1.58730158730158730159e-2, -1.53846153846153846154e-2, 7.46268656716417910448e-3, -2.41545893719806763285e-3, 5.86854460093896713615e-4, -1.14155251141552511416e-4, 1.85185185185185185185e-5},
           {1.44068233034462221676e-2, -1.39622504057619681306e-2, 6.77214584642065083042e-3, -2.19177115367302733848e-3, 5.32466580140395786234e-4, -1.03568105136453357767e-4, 1.67998816623039921284e-5},
           {1.30761801777264721758e-2, -1.26714952969645081732e-2, 6.14555153088887102381e-3, -1.98881335880289177725e-3, 4.83122652751618545264e-4, -9.39634835578382699231e-5, 1.52408433634774933413e-5},
           {1.18685447376419023896e-2, -1.15001629828698475472e-2, 5.57697767068526112366e-3, -1.80466310836311185674e-3, 4.38354595875732014777e-4, -8.52501484795767361640e-5, 1.38265740726257225785e-5},
           {1.07725365495480469163e-2, -1.04371957323595599548e-2, 5.06104785483259527606e-3, -1.63757635665177318091e-3, 3.97737792614317933054e-4, -7.73453393662349011689e-5, 1.25436229385042468098e-5},
           {9.77782889120086366741e-3, -9.47256043302103188652e-3, 4.59288421686682157841e-3, -1.48597089125345610539e-3, 3.60887052762396342512e-4, -7.01739849540836601802e-5, 1.13797895626937758013e-5},
           {8.87505111736500672259e-3, -8.59715358330747150828e-3, 4.16806117539964774560e-3, -1.34841130687865561402e-3, 3.27452949782536901699e-4, -6.36679884403925494801e-5, 1.03240076895975393988e-5},
           {8.05570007827861173100e-3, -7.80271510010213577985e-3, 3.78256346972473530763e-3, -1.22359537520297205482e-3, 2.97118498292288694095e-4, -5.77655791586338860874e-5, 9.36623972045959783618e-6},
           {7.31205975102202244270e-3, -7.08175012322861344854e-3, 3.43274809144945370135e-3, -1.11034168093804156210e-3, 2.69596140393950627501e-4, -5.24107245524496555256e-5, 8.49738104360885840424e-6},
           {6.63712832182014166732e-3, -6.42745807448319786404e-3, 3.11530975022464816371e-3, -1.00757840643552940528e-3, 2.44625012122918659378e-4, -4.75525968372882381816e-5, 7.70917326701066704013e-6},
           {6.02455202804613645234e-3, -5.83366829773208830229e-3, 2.82724954528584511773e-3, -9.14333158071734984282e-4, 2.21968463963665406120e-4, -4.31450892610144134997e-5, 6.99412552433603525940e-6},
           {5.46856513286125920509e-3, -5.29478166917259854968e-3, 2.56584654503165662462e-3, -8.29723737588060599596e-4, 2.01411811806392372637e-4, -3.91463773485341005572e-5, 6.34544310295392439996e-6},
           {4.96393546363241115749e-3, -4.80571762359990970609e-3, 2.32863200454000180556e-3, -7.52949770566540090878e-4, 1.82760296915720463250e-4, -3.55185209450886967952e-5, 5.75696271225395778842e-6},
           {4.50591499806962062641e-3, -4.36186609398981576385e-3, 2.11336597602411902647e-3, -6.83285112385855885470e-4, 1.65837235476470114823e-4, -3.22271032624759100381e-5, 5.22309377418609619434e-6},
           {4.09019502992236366062e-3, -3.95904390839374627220e-3, 1.91801608999768750594e-3, -6.20070959409742424560e-4, 1.50482340089686244134e-4, -2.92409034857705743473e-5, 4.73876517546816425721e-6},
           {3.71286548952221321859e-3, -3.59345523048988473025e-3, 1.74073830556878937637e-3, -5.62709599877111521851e-4, 1.36550197231867270937e-4, -2.65315998185336013077e-5, 4.29937697311323399179e-6},
           {3.37037803387309382874e-3, -3.26165566854673578956e-3, 1.57985944701288208609e-3, -5.10658745055773358873e-4, 1.23908886177537133850e-4, -2.40735001350727314921e-5, 3.90075659226640464279e-6},
           {3.05951255674430074374e-3, -2.96051971239892413798e-3, 1.43386136076404540653e-3, -4.63426386747425498279e-4, 1.12438726234063469684e-4, -2.18432976718372906511e-5, 3.53911909826800181314e-6},
           {2.77734680165547028613e-3, -2.68721118964115966016e-3, 1.30136654237346101153e-3, -4.20566132243394767525e-4, 1.02031140360867798303e-4, -1.98198494290098789516e-5, 3.21103116378860324915e-6},
           {2.52122879006533035656e-3, -2.43915646091601287168e-3, 1.18112509696129651393e-3, -3.81672972376261325153e-4, 9.25876243545745104737e-5, -1.79839751700877166420e-5, 2.91337838718327080272e-6},
           {2.28875180376702982293e-3, -2.21402010017756386423e-3, 1.07200290936613042495e-3, -3.46379442435369114955e-4, 8.40188117878141289222e-5, -1.63182751037972105783e-5, 2.64333565022601899019e-6},
           {2.07773168470597440621e-3, -2.00968282940346349222e-3, 9.72970911695628147900e-4, -3.14352139453663516518e-4, 7.62436258019332587128e-5, -1.48069645109373657001e-5, 2.39834023241715336571e-6},
           {1.88618623740148343669e-3, -1.82422149862719032085e-3, 8.83095346412904195002e-4, -2.85288562764975106578e-4, 6.91885096814951584083e-5, -1.34357237404051893227e-5, 2.17606742538372806002e-6},
           {1.71231653908005725453e-3, -1.65589092157390066484e-3, 8.01528932554334779849e-4, -2.58914247807144712755e-4, 6.27867288890784664302e-5, -1.21915621452646220804e-5, 1.97440841476884876217e-6},
           {1.55448998070497994284e-3, -1.50310739479193812736e-3, 7.27502851256618785110e-4, -2.34980165936614414455e-4, 5.69777379196696845713e-5, -1.10626946626817932205e-5, 1.79145021865743030059e-6},
           {1.41122487848612475879e-3, -1.36443374414542840239e-3, 6.60319474555412359341e-4, -2.13260365550884702351e-4, 5.17066059513962875908e-5, -1.00384298621342602349e-5, 1.62545749122150187087e-6},
           {1.28117651033103261381e-3, -1.23856575702331649438e-3, 5.99345768479016684054e-4, -1.93549832110719304164e-4, 4.69234958293588240918e-5, -9.10906839566287228880e-6, 1.47485601807504285157e-6},
           {1.16312444519489719547e-3, -1.12431987176459576711e-3, 5.44007307865651589321e-4, -1.75662546736037343195e-4, 4.25831914272357863545e-5, -8.26581088311742365280e-6, 1.33821774597709893332e-6},
           {1.05596104553124761800e-3, -1.02062200772333878766e-3, 4.93782846142779008325e-4, -1.59429724937931239278e-4, 3.86446688920063363823e-5, -7.50067435529896649123e-6, 1.21424720416692635052e-6},
           {9.58681034153136446725e-4, -9.26497430213869387766e-4, 4.48199388577098865438e-4, -1.44698218762186387766e-4, 3.50707076949569385225e-5, -6.80641645948199928453e-6, 1.10176918789634838407e-6},
           {8.70372026892017158078e-4, -8.41061554388866671784e-4, 4.06827722284371594546e-4, -1.31329067173386579469e-4, 3.18275377910983551014e-5, -6.17646670578850286100e-6, 9.99717586769304954934e-7},
           {7.90205941583916075463e-4, -7.63511601004672707353e-4, 3.69278360624675965410e-4, -1.19196180917979452103e-4, 2.88845195328343455404e-5, -5.60486409998921908366e-6, 9.07125251422002801450e-7},
           {7.17431202206771979381e-4, -6.93119025103199754012e-4, 3.35197863542330764478e-4, -1.08185149382973122383e-4, 2.62138532954734180982e-5, -5.08620056916738170664e-6, 8.23114801983529674759e-7},
           {6.51365664517641104053e-4, -6.29222645965369330179e-4, 3.04265498977959064110e-4, -9.81921581264284663079e-5, 2.37903160549333514244e-5, -4.61556964187687031624e-6, 7.46890290741042900173e-7},
           {5.91390196365313021952e-4, -5.71222413336572570203e-4, 2.76190213716999389496e-4, -8.91230068076444482310e-5, 2.15910224144533132188e-5, -4.18851989448826384443e-6, 6.77729639581528175593e-7},
           {5.36942852047495922975e-4, -5.18573750953398352435e-4, 2.50707884975174492143e-4, -8.08922181989270094133e-5, 1.95952078097460461598e-5, -3.80101272082001523069e-6, 6.14977780171603699127e-7},
           {4.87513585700907173173e-4, -4.70782423870089086065e-4, 2.27578826684950131457e-4, -7.34222298261760238482e-5, 1.77840318330113393000e-5, -3.44938402333195869357e-6, 5.58040431538472517403e-7},
           {4.42639453810653323539e-4, -4.27399881044839750985e-4, 2.06585526863191869772e-4, -6.66426605704586468406e-5, 1.61403998076043964603e-5, -3.13030946150737594521e-6, 5.06378455793031651371e-7},
           {4.01900261550552548827e-4, -3.88019029147270778143e-4, 1.87530594632042568346e-4, -6.04896452747401855519e-5, 1.46488009187329185339e-5, -2.84077292692471584015e-6, 4.59502738248348033020e-7},
           {3.64914611862436784589e-4, -3.52270397631945125002e-4, 1.70234897453339003312e-4, -5.49052310457923177793e-5, 1.32951613630003751486e-5, -2.57803794524390062791e-6, 4.16969543185938175247e-7},
           {3.31336319989740271750e-4, -3.19818658827436433194e-4, 1.54535870940576192979e-4, -4.98368295271470817067e-5, 1.20667111224205581314e-5, -2.33962173319842209524e-6, 3.78376301056255275787e-7},
           {3.00851159634960018969e-4, -2.90359470151372602541e-4, 1.40285985248658241764e-4, -4.52367199503857919793e-5, 1.09518630980614444984e-5, -2.12327166395881829827e-6, 3.43357787011860252726e-7},
           {2.73173910044603729386e-4, -2.63616608610993678925e-4, 1.27351353526005881250e-4, -4.10615982541090316022e-5, 9.94010345596949555129e-6, -1.92694391715707388535e-6, 3.11582654401169713352e-7},
           {2.48045676168729203881e-4, -2.39339370515001770246e-4, 1.15610469260127540596e-4, -3.72721679972125275425e-5, 9.02189214459816900716e-6, -1.74878411065344849032e-6, 2.82750290233089021706e-7},
           {2.25231456622081914433e-4, -2.17300211832127546183e-4, 1.04953060569309912617e-4, -3.38327691897555066138e-5, 8.18857263963230691864e-6, -1.58710972998580960615e-6, 2.56587962690538861137e-7},
           {2.04517936514611120644e-4, -1.97292606908688243714e-4, 9.52790506012460058959e-5, -3.07110415245307193273e-5, 7.43229005978431144614e-6, -1.44039418854644561830e-6, 2.32848233553172726456e-7},
           {1.85711484342952109008e-4, -1.79129105323086798692e-4, 8.64976142047314090289e-5, -2.78776188188482187827e-5, 6.74591687667381459197e-6, -1.30725236704582879002e-6, 2.11306610913024584947e-7},
           {1.68636334061447479846e-4, -1.62639568529294455904e-4, 7.85263219525700182548e-5, -2.53058517721375795433e-5, 6.12298551404759164860e-6, -1.18642749489474608033e-6, 1.91759419855518709897e-7},
           {1.53132935199680469832e-4, -1.47669569641649156859e-4, 7.12903634212060826388e-5, -2.29715564135690559718e-5, 5.55762719703799644845e-6, -1.07677924889991947050e-6, 1.74021870854059376439e-7},
           {1.39056455479879322729e-4, -1.34078941255923015947e-4, 6.47218423831961764186e-5, -2.08527858575499457788e-5, 5.04451647151925139281e-6, -9.77272956245284109893e-7, 1.57926307509118320808e-7},
           {1.26275421826942157218e-4, -1.21740457601187733005e-4, 5.87591372495861581312e-5, -1.89296232059844523905e-5, 4.57882086746702314669e-6, -8.86969799231940880823e-7, 1.43320616970322642661e-7},
           {1.14670486969859698376e-4, -1.10538638586814928614e-4, 5.33463207170255829205e-5, -1.71839936366957447378e-5, 4.15615522907022180954e-6, -8.05017928774518502374e-7, 1.30066787928803434281e-7},
           {1.04133310018340914812e-4, -1.00368664461028054397e-4, 4.84326331349056683415e-5, -1.55994938993040682001e-5, 3.77254027865023932787e-6, -7.30644402291043025541e-7, 1.18039602471788460124e-7},
           {9.45655404736948923539e-5, -9.11353908426932392316e-5, 4.39720046162655591728e-5, -1.41612376048640867634e-5, 3.42436502163326242010e-6, -6.63147869459787011370e-7, 1.07125449365501151123e-7},
           {8.58778961086654389579e-5, -8.27524548364112202611e-5, 3.99226213775021884040e-5, -1.28557148452563578729e-5, 3.10835263627874233404e-6, -6.01891936424610608679e-7, 9.72212474880282533634e-8},
           {7.79893260361885000973e-5, -7.51414638014358330894e-5, 3.62465322104203992930e-5, -1.16706648141250512551e-5, 2.82152952493821938687e-6, -5.46299145477760923784e-7, 8.82334691819577522442e-8},
           {7.08262510903215515698e-5, -6.82312591256529734273e-5, 3.29092913698436571857e-5, -1.05949602243468065407e-5, 2.56119723361842823711e-6, -4.95845513097363908234e-7, 8.00772542472671992038e-8},
           {6.43218743714796487108e-5, -6.19572480642044756422e-5, 2.98796345044738878159e-5, -9.61850242877506756789e-6, 2.32490697383622624525e-6, -4.50055574521668937621e-7, 7.26756061572287523179e-8},
           {5.84155554694976305273e-5, -5.62607973450450106066e-5, 2.71291845712110851134e-5, -8.73212625239162541541e-6, 2.11043650543931355013e-6, -4.08497887853996189918e-7, 6.59586628622100902291e-8},
           {5.30522424781804105760e-5, -5.10886828268630074326e-5, 2.46321849566827486748e-5, -7.92751363597606605873e-6, 1.91576916146083905696e-6, -3.70780955057124125824e-7, 5.98630352556526415335e-8},
           {4.81819564595753303880e-5, -4.63925900239062306081e-5, 2.23652572869805628625e-5, -7.19711527484756257187e-6, 1.73907481639069259125e-6, -3.36549521155117185536e-7, 5.43312070199601941569e-8},
           {4.37593235103538128481e-5, -4.21286607923340592147e-5, 2.03071816399958440759e-5, -6.53407951193481578386e-6, 1.57869261767485997525e-6, -3.05481216552013142158e-7, 4.93109901536680430662e-8},
           {3.97431500310942872303e-5, -3.82570819083221148080e-5, 1.84386970864996570870e-5, -5.93218781310763361919e-6, 1.43311531697182118953e-6, -2.77283510634567787901e-7, 4.47550310106482755382e-8},
           {3.60960372061532529762e-5, -3.47417116633918232897e-5, 1.67423206782361219029e-5, -5.38579621500955336055e-6, 1.30097505286057111908e-6, -2.51690947781412398211e-7, 4.06203621622855755453e-8},
           {3.27840310710418811357e-5, -3.15497409610697687439e-5, 1.52021831756089781097e-5, -4.88978219215700259169e-6, 1.18103045045265009179e-6, -2.28462639581621459590e-7, 3.68679958291079348273e-8},
           {2.97763048792811440635e-5, -2.86513857243945607733e-5, 1.38038799656947679177e-5, -4.43949644135277113983e-6, 1.07215491584123216490e-6, -2.07379989497357055127e-7, 3.34625550234257619263e-8},
           {2.70448707847538169036e-5, -2.60196077190596417343e-5, 1.25343357648096026985e-5, -4.03071912798716675344e-6, 9.73326014642625038435e-7, -1.88244628411067077555e-7, 3.03719389028876653166e-8},
           {2.45643181314796834756e-5, -2.36298611649051875381e-5, 1.13816818300502597191e-5, -3.65962018101050312038e-6, 8.83615834156895644144e-7, -1.70876541498669000072e-7, 2.75670191599139911864e-8},
           {2.23115758931166759062e-5, -2.14598627515837253631e-5, 1.03351445223577366212e-5, -3.32272326165593973464e-6, 8.02182237992485195735e-7, -1.55112368685283698824e-7, 2.50213645668171467403e-8},
           {2.02656970316995438928e-5, -1.94893828948226317365e-5, 9.38494417083159625497e-6, -3.01687306573568696146e-6, 7.28260930453065452600e-7, -1.40803862586657345717e-7, 2.27109910638686742331e-8},
           {1.84076627513147371591e-5, -1.77000562698788998356e-5, 8.52220328527158699726e-6, -2.73920565085557815807e-6, 6.61158255653825574369e-7, -1.27816489333092038667e-7, 2.06141350201748244780e-8},
           {1.67202048095216803877e-5, -1.60752098404193134588e-5, 7.73886325215999417923e-6, -2.48712150849210831839e-6, 6.00244663291729271918e-7, -1.16028159027696686470e-7, 1.87110475172839734897e-8},
           {1.51876442191328499899e-5, -1.45997067658807838560e-5, 7.02760872935988319273e-6, -2.25826112682335737868e-6, 5.44948779306086668596e-7, -1.05328073819956733768e-7, 1.69838077050670122936e-8},
           {1.37957448270603875046e-5, -1.32598047199283391599e-5, 6.38179902744832988187e-6, -2.05048281374686655148e-6, 4.94752025391986989194e-7, -9.56156826906935336608e-8, 1.54161534604856100947e-8},
           {1.25315803967794456932e-5, -1.20430272883463835665e-5, 5.79540583151811999863e-6, -1.86184257087668159499e-6, 4.49183736524120008664e-7, -8.67997330560370997478e-8, 1.39933277441165796768e-8},
           {1.13834139478675159174e-5, -1.09380472378542863740e-5, 5.26295667708964712999e-6, -1.69057582869081544997e-6, 4.07816730361550883203e-7, -7.87974102156908576953e-8, 1.27019391982974594683e-8},
           {1.03405882212515866630e-5, -9.93458055909434594507e-6, 4.77948364804330256585e-6, -1.53508087058318619251e-6, 3.70263286679887872991e-7, -7.15335565032418099118e-8, 1.15298356659157666813e-8},
           {9.39342624331739355829e-6, -9.02329028845414941450e-6, 4.34047681372460010481e-6, -1.39390378952699593574e-6, 3.36171498856532322185e-7, -6.49399627514767705434e-8, 1.04659894314695578135e-8},
           {8.53314105689295012282e-6, -8.19569920541439617416e-6, 3.94184196705591135445e-6, -1.26572483553099076374e-6, 3.05221962954163662218e-7, -5.89547253707818525798e-8, 9.50039309724516788673e-9},
           {7.75175377320618303367e-6, -7.44411058562638528802e-6, 3.57986226603235320749e-6, -1.14934602520298142551e-6, 2.77124773140668864641e-7, -5.35216629602358095272e-8, 8.62396510834853585236e-9},
           {7.04201917704550862682e-6, -6.76153626570945290503e-6, 3.25116341776870618039e-6, -1.04367989665094543445e-6, 2.51616795080665534944e-7, -4.85897869348636711986e-8, 7.82846403184807951636e-9},
           {6.39735818825877480283e-6, -6.14163134453286501557e-6, 2.95268207764709231299e-6, -9.47739303763785915049e-7, 2.28459191562080792681e-7, -4.41128211640510501281e-8, 7.10641077831077210884e-9},
           {5.81179654707849397061e-6, -5.57863490815849621160e-6, 2.68163716640720877312e-6, -8.60628153723781839544e-7, 2.07435177005843294304e-7, -4.00487660801886173929e-8, 6.45101802932812299596e-9},
           {5.27990914916595418095e-6, -5.06731622225902726984e-6, 2.43550383550848050139e-6, -7.81533000503826752082e-7, 1.88347979670253667316e-7, -3.63595031376290033506e-8, 5.85612620295137065387e-9},
           {4.79676950927372950024e-6, -4.60292588722581474844e-6, 2.21198983603650895690e-6, -7.09715415178977184284e-7, 1.71018992324517064424e-7, -3.30104358839909655664e-8, 5.31614535093498650006e-9},
           {4.35790388053476908202e-6, -4.18115149782608795252e-6, 2.00901406906025776984e-6, -6.44505061210074410806e-7, 1.55286093946872189545e-7, -2.99701642523643435229e-8, 4.82600243791378162671e-9},
           {3.95924960004942232594e-6, -3.79807739160069156512e-6, 1.82468711588555942643e-6, -5.85293409506620623142e-7, 1.41002126618602734371e-7, -2.72101889973436558666e-8, 4.38109350364573371358e-9},
           {3.59711727107076230983e-6, -3.45014810861047255985e-6, 1.65729356528864643573e-6, -5.31528034109605386021e-7, 1.28033513251295141225e-7, -2.47046434830321556435e-8, 3.97724025572524487875e-9},
           {3.26815642805633554908e-6, -3.13413522000399593444e-6, 1.50527597172673096147e-6, -4.82707434809688662724e-7, 1.16259003114896531847e-7, -2.24300502899170893642e-8, 3.61065068214921651126e-9},
           {2.96932436349957459303e-6, -2.84710721452020945417e-6, 1.36722029387078929707e-6, -4.38376337983822665942e-7, 1.05568533341032521597e-7, -2.03651003422780626243e-8, 3.27788331120024187824e-9},
           {2.69785782508375995525e-6, -2.58640216075530279867e-6, 1.24184267673370113083e-6, -3.98121431441060296488e-7, 9.58621956711053631564e-8, -1.84904524707787454889e-8, 2.97581478065898013324e-9},
           {2.45124731859437767833e-6, -2.34960288908402791205e-6, 1.12797745330619043780e-6, -3.61567493158544066201e-7, 8.70492987122727944432e-8, -1.67885515181302041791e-8, 2.70161040969964214447e-9},
           {2.22721377643498491175e-6, -2.13451446077766645380e-6, 1.02456625308297215334e-6, -3.28373877500210969253e-7, 7.90475168659247056300e-8, -1.52434632710329389946e-8, 2.45269749525615728676e-9},
           {2.02368737374683872775e-6, -1.93914371332666657510e-6, 9.30648115270389410857e-7, -2.98231325878650073155e-7, 7.17821179112596453774e-8, -1.38407246606682761438e-8, 2.22674108044199895399e-9},
           {1.83878829424190813171e-6, -1.76168069045779637132e-6, 8.45350513912848827407e-7, -2.70859071876667450173e-7, 6.51852619687648082509e-8, -1.25672078183251684116e-8, 2.02162196600877887237e-9},
           {1.67080926611154735846e-6, -1.60048178301713765166e-6, 7.67881210747686265741e-7, -2.46002213618316621020e-7, 5.91953652418447500417e-8, -1.14109967036849053461e-8, 1.83541675705978847439e-9},
           {1.51819970494063465470e-6, -1.45405442293775719092e-6, 6.97520859377582466754e-7, -2.23429328695668404861e-7, 5.37565225459020632535e-8, -1.03612751420842290825e-8, 1.66637975649615097311e-9},
           {1.37955131559509844949e-6, -1.32104318707567159022e-6, 6.33616291409676985094e-7, -2.02930309241181607610e-7, 4.88179831886297626355e-8, -9.40822521486336979353e-9, 1.51292653414804826244e-9},
           {1.25358501870075144001e-6, -1.20021718091680434581e-6, 5.75574421617711490252e-7, -1.84314396807783557151e-7, 4.43336752683767024072e-8, -8.54293504470064832316e-9, 1.37361901639736997592e-9},
           {1.13913907972150839766e-6, -1.09045858415549564532e-6, 5.22856714998257447896e-7, -1.67408398599244735073e-7, 4.02617739139543111429e-8, -7.75731510656646486770e-9, 1.24715195548162208857e-9},
           {1.03515832989173340338e-6, -9.90752251034675213276e-7, 4.74974163869204654363e-7, -1.52055068299897576148e-7, 3.65643094034831103956e-8, -7.04402227543729993100e-9, 1.13234065071840516326e-9},
           {9.40684378466281819732e-7, -9.00176268221498235015e-7, 4.31482727947918424779e-7, -1.38111636301316607883e-7, 3.32068114757499681360e-8, -6.39639089495728070238e-9, 1.02810980572911808131e-9},
           {8.54846725018646199417e-7, -8.17893381963102251890e-7, 3.91979194692995699072e-7, -1.25448475528872445248e-7, 3.01579864886147142943e-8, -5.80837021751309391699e-9, 9.33483416481976970769e-10},
           {7.76854688929446060310e-7, -7.43143214409487789622e-7, 3.56097421138277897869e-7, -1.13947890346355828965e-7, 2.73894243884944578989e-8, -5.27446762632479711794e-9, 8.47575594719900416583e-10},
           {7.05990080843322846809e-7, -6.75235196381014260161e-7, 3.23504922027924948107e-7, -1.03503017174180234771e-7, 2.48753327357900119181e-8, -4.78969710472032148850e-9, 7.69582240180674024342e-10},
           {6.41600547803726164618e-7, -6.13542150566049080593e-7, 2.93899772310606423981e-7, -9.40168265069328786629e-8, 2.25922952859573133111e-8, -4.34953246727124987417e-9, 6.98773483038916969159e-10},
           {5.83093530067178509683e-7, -5.57494465223043993022e-7, 2.67007794999861988487e-7, -8.54012169691649876950e-8, 2.05190528571749127947e-8, -3.94986491239085513211e-9, 6.34486825277789551633e-10},
           {5.29930773310384350513e-7, -5.06574803987922923415e-7, 2.42580008084166191367e-7, -7.75761929132834978131e-8, 1.86363044254024486108e-8, -3.58696449675743791163e-9, 5.76120916302082180679e-10},
           {4.81623345128592364743e-7, -4.60313302404117815303e-7, 2.20390306599427880812e-7, -7.04691178483870698559e-8, 1.69265265780475939514e-8, -3.25744516891231534214e-9, 5.23129904095904641922e-10},
           {4.37727109430538361249e-7, -4.18283206346006970416e-7, 2.00233358181410282472e-7, -6.40140367012844561083e-8, 1.53738096302576395507e-8, -2.95823303294267981249e-9, 4.75018308664431182915e-10},
           {3.97838616608233372016e-7, -3.80096911639666986788e-7, 1.81922692416643729320e-7, -5.81510605574563062924e-8, 1.39637088646607630643e-8, -2.68653754361208671212e-9, 4.31336369431556460319e-10},
           {3.61591371238850368134e-7, -3.45402367936585895394e-7, 1.65288966126637752917e-7, -5.28258081164721432376e-8, 1.26831094976803708059e-8, -2.43982536193392867835e-9, 3.91675822740605889745e-10},
           {3.28652442597381618534e-7, -3.13879813301507848261e-7, 1.50178388368677404431e-7, -4.79888986288802413613e-8, 1.15201041046784905515e-8, -2.21579662525702352371e-9, 3.55666069665814887878e-10},
           {2.98719386455557731813e-7, -2.85238809066885850164e-7, 1.36451290432722638355e-7, -4.35954915648695985031e-8, 1.04638813533692833138e-8, -2.01236340868463926728e-9, 3.22970698026605281658e-10},
           {2.71517449544707720456e-7, -2.59215547312516678151e-7, 1.23980827471982042540e-7, -3.96048687036139512166e-8, 9.50462500128831823681e-9, -1.82763017529389114957e-9, 2.93284325839624539738e-10},
           {2.46797030694963731852e-7, -2.35570405876163784580e-7, 1.12651799637384650282e-7, -3.59800547302796389819e-8, 8.63342220961017859808e-9, -1.65987603135680859731e-9, 2.66329736476732675249e-10},
           {2.24331375055157391828e-7, -2.14085728113236282543e-7, 1.02359581705011277266e-7, -3.26874727889631792011e-8, 7.84218031318771196350e-9, -1.50753861976437822468e-9, 2.41855278549336545146e-10},
           {2.03914479969304825862e-7, -1.94563806722591265996e-7, 9.30091512010868668172e-8, -2.96966317677212978153e-8, 7.12355126616639623965e-9, -1.36919950028132912358e-9, 2.19632506036732720179e-10},
           {1.85359193057065136721e-7, -1.76825052860934558047e-7, 8.45142059509257609341e-8, -2.69798423894562299347e-8, 6.47086305465718552999e-9, -1.24357087925804884046e-9, 1.99454036442058499612e-10},
           {1.68495484835429214382e-7, -1.60706333497999918945e-7, 7.67963628149233422093e-8, -2.45119594525215997486e-8, 5.87805743341088855579e-9, -1.12948356412903069046e-9, 1.81131606815514996243e-10},
           {1.53168879843901781860e-7, -1.46059461534893658929e-7, 6.97844301341608829510e-8, -2.22701478100638277715e-8, 5.33963340284385102406e-9, -1.02587602955470662556e-9, 1.64494309350165681795e-10}}};
    // clang-format on
}
}  // namespace mcmurchie_davidson