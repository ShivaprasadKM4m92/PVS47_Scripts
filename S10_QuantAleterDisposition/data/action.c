Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/84.0.4147.105 Safari/537.36");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"eef26a8c6088ddf2e607288bd6dcde3f0cf9f3b8");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=84", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("login-23162286b278bf1e48cb0201c9e9a644.css", 
		"URL=http://10.100.22.24:8181/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("application-edeae5626e2c5caac9747dbc70972fa9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/application-edeae5626e2c5caac9747dbc70972fa9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t10.inf", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-84.0.4147.105");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:3196334856&cup2hreq=0f8d5c9ad97c153b68580f72a4d4a5a55b5f168dad9227940b39870f02ed56fe", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{2c19f903-a34d-4682-82d3-3cff4152e28f}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{6536468b-c4d2-4910-aca5-bd21c462f5fd}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{182dfeb2-924a-43f3-878d-deb91ae52724}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{59339f0d-58e5-4ce8-8414-04c29867064a}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{742eaab2-c456-4bf2-afa4-4eae38e42973}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{5ecebc93-29a2-44bf-9417-fc3de1f8f184}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\""
		"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{ead385ce-706d-454e-b1f9-4e600faeb4ff}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.e31b8a902f1388c1e92520ef18a94a8d491de9c0f2e7598f8ad1775544ff3182\"}]},\"ping\":{\"ping_freshness\":\"{48a45f2d-f100-4379-954c-6ad7d7f0ad1d}\",\"rd\":4959},\"updatecheck\":{},\""
		"version\":\"8420.518.0.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1339\"},\"prodversion\":\"84.0.4147.105\",\"protocol\":\"3.1\",\"requestid\":\"{b7010019-4815-447a-8e5b-373d2f917388}\",\"sessionid\":\"{913b31ea-43cc-4365-9943-f5ec4d6f3233}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\""
		"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"84.0.4147.105\"}}", 
		LAST);

	lr_start_transaction("S10_01_OpenApplication");

	lr_end_transaction("S10_01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_02_Login");

	web_revert_auto_header("Accept-Language");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,llkgjffcdpffmhiakmfcdcblohccpfmo,mimojjlkmoijpicakmndhoigimigcmbb,gcmjkmgdlgnkkcocmoeiminaijmmjnii,aemomkdncapdnfajjbbcbdebjljbpmpj,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,gkmgaooipdjhmangpemjhigmamcehddo,copjbmjbojbakpaedmpkhmiplmmehfck,ehgidpndbllacpjalkiimkbadgjfnnmc,ggkkehgbnfjpeggfpleeakpidbkibbmn,bklopemakmnopmghhmccadeonafabnal,dfcoifdifjfolmglbbogapfcihdgckga,hnimpnehoodheedghdeeijklkeaacbdc,"
		"jflookgnkcckhobaglndicnbbgbonegd,hfnkpimlhhgieaddgfemjhofmfblmnib");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-84.0.4147.105");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:1646002288&cup2hreq=792800f28a66397422db0dcd6ac469050e1b08dba55653068abef60ecfc5a863", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{a1c510b5-08f8-4085-933c-cf223d1ba6b5}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{3dde1cab-f80b-4b86-901e-8ca173274083}\",\"rd\":4959},\"updatecheck\":{},\""
		"version\":\"4.10.1679.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{b69ea9f7-6cc3-461c-b719-9e1cc7b92d98}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GCEU\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.46ca0a80af6454e21e21861ddd2a0b1ef0c9c330f03b448ee8b27df2d9213294\"}]},\"ping\":{\"ping_freshness\":\"{1848b588-7838-4da1-92ab-6ee827e729c5}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"32.0.0.403\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:w43@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.97988718faca3fd8cad05b90f3627c0db65f5a46dfaeda169eaef2eb7e8a96ce\"}]},\"ping\":{\""
		"ping_freshness\":\"{721104eb-0063-4976-b0a2-04b9f99dacaa}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"9.13.0\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{b4a1490e-d296-4d7c-b28b-c7d20cdd12eb}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{218afb98-5623-4fc1-b322-7e16baad5836}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\""
		"ping_freshness\":\"{fbce02b1-7129-4f0a-bfcc-a1d40927361a}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.86d4ab947598b4c1e45ab37df6055bf0ade111d5a4cc8f3cf076674a8636078e\"}]},\"ping\":{\"ping_freshness\":\"{167b84e2-b2af-47c9-9d2d-e01afa0cc1e9}\",\"rd\":4959},\"tag\":\"eset_exp_b\",\"updatecheck\""
		":{},\"version\":\"83.238.200\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GCEU\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{d608efa0-f2d5-4f42-8a52-c41afeb76eaf}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\""
		"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{e04ff625-85c3-4838-ac02-70e1476cfc54}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:w4r@0.01\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\""
		":true,\"packages\":{\"package\":[{\"fp\":\"1.b8c7df93700112c0eca4a7a8583b351270ce4d974dc4d856b609ab99ba5a5cd3\"}]},\"ping\":{\"ping_freshness\":\"{2d8660e1-61c0-4cec-92b3-39ac7c77a571}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"2020.7.19.1141\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GCEU\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{589aa1af-b9a4-4724-8a81-123523668706}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"dfcoifdifjfolmglbbogapfcihdgckga\",\"brand\":\"GCEU\",\"cohort\":\"1:v9l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a842f56eaefb4e5b4e4b34fe001649e553ae413c84f62adda2f3ddf87a99496b\"}]},\"ping\":{\"ping_freshness\":\""
		"{fe52b503-677e-4dff-806d-7cc840bb3f4d}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{7b3449c9-4d63-4e09-9f79-0d068a595087}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1"
		":s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c192d4ac71383a68651823d1d7b00b8c3714b406e7c1d1703ed8a66b2984e579\"}]},\"ping\":{\"ping_freshness\":\"{c5403491-6048-45cf-b89e-07483b73ab3e}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"1861\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.7902263029a1f929d2f5f18bd1f75ad4611c4839294e04e612b63e8c9f07c66d\"}]},\"ping\":{\"ping_freshness\":\"{83c184d1-3324-443d-b08b-25e002a0933b}\",\"rd\":4959},\"updatecheck\":{},\"version\":\"6024\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1339\"},\"prodversion\":\"84.0.4147.105\",\"protocol\":\"3.1\",\"requestid\":\""
		"{06f0b4ed-f126-4e92-bb60-0faf8babafe2}\",\"sessionid\":\"{65f9651b-4f8b-425d-ab6b-df054c3f5210}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"84.0.4147.105\"}}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("authenticate", 
		"Action=http://10.100.22.24:8181/signal/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=_csrf", "Value=2109086a-523a-4547-9b97-a103155fe827", ENDITEM, 
		"Name=username", "Value=perfuser5", ENDITEM, 
		"Name=password", "Value=perfuser5@123", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"URL=http://10.100.22.24:8181/signal/assets/theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t16.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t17.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_app_css-4bc4468fbad109a96399eafb5d61bb62.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_css-4bc4468fbad109a96399eafb5d61bb62.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t18.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL=http://10.100.22.24:8181/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL=http://10.100.22.24:8181/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t30.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t31.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t35.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t36.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t37.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t38.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t39.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t40.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t42.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t44.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t45.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t47.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t48.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t50.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t51.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t52.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t53.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t55.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t56.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t57.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t58.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t59.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t60.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t61.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t62.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t63.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t64.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL=http://10.100.22.24:8181/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL=http://10.100.22.24:8181/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t72.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t74.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("userGroupSelect-aa16ca7f818f4d9440e25a6580328f56.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/userGroupSelect-aa16ca7f818f4d9440e25a6580328f56.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t75.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t76.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t77.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("actions-71b3800b3a0049b55bfed50490f75a95.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/actions/actions-71b3800b3a0049b55bfed50490f75a95.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t78.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t79.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t80.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t81.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t82.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard-df570732ab33600380d40654470a3c10.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboard-df570732ab33600380d40654470a3c10.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t83.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t84.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t85.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t86.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t87.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t88.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t90.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t91.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t92.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t93.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t89.inf", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("rx_common-dcefd25069e04f9d4bd2d9ba66e3a539.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/common/rx_common-dcefd25069e04f9d4bd2d9ba66e3a539.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t95.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t96.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t97.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t98.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1596109002082", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1596109002083", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("336142", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109002087", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1596109002086", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"2109086a-523a-4547-9b97-a103155fe827");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=29-Jun-2020", ENDITEM, 
		"Name=end", "Value=10-Aug-2020", ENDITEM, 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket", 
		"URL=http://10.100.22.24:8181/signal/stomp/423/5oodvzh9/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1596109002089", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1596109002090", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1596109002088", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t110.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Accept");

	web_revert_auto_header("Accept-Language");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"event\":[{\"download_time_ms\":16123,\"downloaded\":20613,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"1862\",\"previousversion\":\"1861\",\"total\":20613,\"url\":\"http://redirector.gvt1.com/edgedl/release2/chrome_component/AMpp8r07tDKc4pkp3Ur3MUA_1862/fLJ5XDdyxo1T6OPn-deBRw\"},{\"eventresult\":1,\"eventtype\":3,\""
		"nextfp\":\"1.48591ce118d6b3d893a6b2c93546420dc13fd93cf5932ac123e7a1c05fe31845\",\"nextversion\":\"1862\",\"previousfp\":\"1.c192d4ac71383a68651823d1d7b00b8c3714b406e7c1d1703ed8a66b2984e579\",\"previousversion\":\"1861\"}],\"version\":\"1862\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1339\"},\"prodversion\":\"84.0.4147.105\",\"protocol\":\"3.1\",\""
		"requestid\":\"{e92bf42c-4513-46d6-97bb-4fe1792776bc}\",\"sessionid\":\"{65f9651b-4f8b-425d-ab6b-df054c3f5210}\",\"updaterversion\":\"84.0.4147.105\"}}", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("336142_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109002091", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("336142_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109002092", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_03_NavigateTriggeredAlertsQuantitativeReview");

	web_add_header("X-CSRF-TOKEN", 
		"2109086a-523a-4547-9b97-a103155fe827");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dashboardWidgetsConfig", "Value={\"pvWidgetChart-11\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-11\",\"x\":0,\"y\":7,\"height\":6,\"width\":12},\"content\":{\"id\":\"listAction\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Actions\"},\"pvWidgetChart-9\":{\"reportWidgetName\":\"Qualitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-9\",\"x\":0,\"y\":37,\"width\":6,\"height\":7},\"content\":{\"id\":\"qualitative-products-status\","
		"\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-10\":{\"reportWidgetName\":\"Quantitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-10\",\"x\":0,\"y\":43,\"width\":6,\"height\":7},\"content\":{\"id\":\"quantitative-products-status\",\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-7\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-7\",\"x\":0,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"assignedSignalTable\",\"type"
		"\":\"pvDashReports\"},\"reportWidgetName\":\"Assigned Signals\"},\"pvWidgetChart-5\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-5\",\"x\":0,\"y\":0,\"height\":6,\"width\":12},\"content\":{\"id\":\"assignedTriggeredAlerts\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Alerts\"},\"pvWidgetChart-4\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-4\",\"x\":6,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"due-date-chart\",\"type\":\""
		"pvDashChart\"},\"reportWidgetName\":\"Alert By Due Date\"},\"pvWidgetChart-6\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-6\",\"x\":6,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"calendar\",\"type\":\"pvDashCalendar\"},\"reportWidgetName\":\"Calendar\"},\"pvWidgetChart-1\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-1\",\"x\":0,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"adhoc-chart\",\"type\":\"pvDashChart\"},\""
		"reportWidgetName\":\"Ad-hoc Review By Status\"},\"pvWidgetChart-2\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-2\",\"x\":6,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"case-status-chart\",\"type\":\"pvDashChart\"},\"reportWidgetName\":\"Qualitative Review By Status\"},\"pvWidgetChart-3\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-3\",\"x\":0,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"aggregate-chart\",\"type\":\"pvDashChart\"}"
		",\"reportWidgetName\":\"Quantitative Review By Status\"},\"inbox\":{\"reportWidgetName\":\"Inbox\",\"reportWidgetDetails\":{\"id\":\"inbox\"},\"visible\":true},\"isDirty\":true}", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("review", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("simple_case_alert_review-9886291cf5fcacea8bb0fd82eeab7d8a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/simple_case_alert_review-9886291cf5fcacea8bb0fd82eeab7d8a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t120.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("priorities", 
		"URL=http://10.100.22.24:8181/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState", 
		"URL=http://10.100.22.24:8181/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("336142_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109040718", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("listConfig", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/listConfig?adhocRun=false&draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=productSelection&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=pecCount&"
		"columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=closedPecCount&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertPriority&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true"
		"&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateRagne&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=9&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1596109040717", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/820/o0yy22sg/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("336142_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109040719", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_03_NavigateTriggeredAlertsQuantitativeReview",LR_AUTO);

	lr_think_time(3);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODQuMC40MTQ3LjEwNRopCAUQARobCg0IBRAGGAEiAzAwMTABEOmBCRoCGAfY_OwXIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDV2AcaAhgHEflcBSIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ_N8HGgIYB14zJ3IiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEIDtBxoCGAdsgzoEIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEO8aGgIYBwEbmmkiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQmDYaAhgHxZSwFCIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBhoCGAe2bnt9IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAdGgIYB1OJbn0iBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABELoJGgIYB3cYCCoiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEPV3GgIYB7p4HxciBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEK6CBBoCGAez-aRGIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARDUBBoCGAcsE6tMIgQgASACKAEiAggD&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t128.inf", 
		LAST);

	lr_start_transaction("S10_04_Search_QuantitativeAltert");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("listConfig_2", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/listConfig?adhocRun=false&draw=2&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=productSelection&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=pecCount&"
		"columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=closedPecCount&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertPriority&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true"
		"&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateRagne&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=9&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D=Susar_quant_29julySB__9&search%5Bregex%5D=false&_=1596109040720", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("336142_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109040721", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_04_Search_QuantitativeAltert",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_05_ClickOnAlertName");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"URL=http://10.100.22.24:8181/signal/assets/query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t132.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/bootstrap-modal-popover/bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t133.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t134.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t135.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t136.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t137.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"URL=http://10.100.22.24:8181/signal/assets/colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t138.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t139.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fixedColumns-18e4b58b095bead044c38f2fbb3fd070.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/fixedColumns-18e4b58b095bead044c38f2fbb3fd070.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t140.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("disposition-change-cc5b2f75a9cd176f1ce0ecd1578ec974.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/disposition/disposition-change-cc5b2f75a9cd176f1ce0ecd1578ec974.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t141.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("priority-change-13788bc067cf5f50f18a400bbf32805f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/priority/priority-change-13788bc067cf5f50f18a400bbf32805f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t142.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("backbone-fb26971962c1315514c8ede192bc0252.js", 
		"URL=http://10.100.22.24:8181/signal/assets/backbone/backbone-fb26971962c1315514c8ede192bc0252.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t143.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t144.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"URL=http://10.100.22.24:8181/signal/assets/backbone/underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t145.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("productEventHistoryTable-e9d8010929d435ee34f500c4b9421495.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/productEventHistory/productEventHistoryTable-e9d8010929d435ee34f500c4b9421495.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t146.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/caseHistory/caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t147.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alert_utils/common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t148.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("advancedFilterQueryBuilder-e4d8d67c8c1097e3a3366370ca4a0fc2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/advancedFilter/advancedFilterQueryBuilder-e4d8d67c8c1097e3a3366370ca4a0fc2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t149.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t150.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("agg_case_alert_details-8d806ca22a2bf202b9cc33c007f84a35.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/agg_case_alert_details-8d806ca22a2bf202b9cc33c007f84a35.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t151.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/query/to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t152.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchSubGroupsMap", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/fetchSubGroupsMap?dataSource=pva", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("commonTagDetails", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6564&_=1596109086458", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("336142_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109086459", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/944/7kxesdma/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("X-CSRF-TOKEN", 
		"2109086a-523a-4547-9b97-a103155fe827");

	web_submit_data("3254", 
		"Action=http://10.100.22.24:8181/signal/aggregateCaseAlert/listByExecutedConfig/3254?callingScreen=review&cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isArchived=false&isFilterRequest=false&filters=%5B%5D&frequency=", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=1", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=flags", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=priority", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=actions", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=productName", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=soc", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=true", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=pt", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=false", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=impEvents", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listed", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=newCount", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=newSponCount", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=newSeriousCount", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=newFatalCount", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=newStudyCount", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=freqPriority", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=trendType", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=eb05", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=disposition", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=assignedTo", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=positiveRechallenge", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=positiveDechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=ebgm", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=related", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=pregenency", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=newPediatricCount", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=newInteractingCount", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=exe0newSponCount", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=exe0newSeriousCount", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=exe0newFatalCount", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=exe0newStudyCount", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=exe0ebgm", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=exe0eb05", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=exe1newSponCount", ENDITEM, 
		"Name=columns[37][name]", "Value=", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=exe1newSeriousCount", ENDITEM, 
		"Name=columns[38][name]", "Value=", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=true", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=exe1newFatalCount", ENDITEM, 
		"Name=columns[39][name]", "Value=", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=exe1newStudyCount", ENDITEM, 
		"Name=columns[40][name]", "Value=", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=exe1ebgm", ENDITEM, 
		"Name=columns[41][name]", "Value=", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=true", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=exe1eb05", ENDITEM, 
		"Name=columns[42][name]", "Value=", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=exe2newSponCount", ENDITEM, 
		"Name=columns[43][name]", "Value=", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=exe2newSeriousCount", ENDITEM, 
		"Name=columns[44][name]", "Value=", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=exe2newFatalCount", ENDITEM, 
		"Name=columns[45][name]", "Value=", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=exe2newStudyCount", ENDITEM, 
		"Name=columns[46][name]", "Value=", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=exe2ebgm", ENDITEM, 
		"Name=columns[47][name]", "Value=", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=exe2eb05", ENDITEM, 
		"Name=columns[48][name]", "Value=", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("priority.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/priority.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t160.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("action_drop_down.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/action_drop_down.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t161.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("tags_details.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/tags_details.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t162.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("tags_details_view_all.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/tags_details_view_all.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t163.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("disposition.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/disposition.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t164.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("336142_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109086460", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_05_ClickOnAlertName",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_06_ClickOnCaseSeries");

	web_url("336142_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109086461", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("caseSeriesDetails", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/caseSeriesDetails?aggExecutionId=3254&aggAlertId=228084&aggCountType=NEW_COUNT&productId=100195&ptCode=10019842&type=NEW&typeFlag=CUMM_FLAG&isArchived=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t168.inf", 
		LAST);

	web_url("highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t169.inf", 
		LAST);

	web_url("grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/themes/grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t170.inf", 
		LAST);

	web_url("highcharts-de65192df8733b7a60482497a875df4c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-de65192df8733b7a60482497a875df4c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t171.inf", 
		LAST);

	web_url("similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/similarCases/similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t172.inf", 
		LAST);

	web_url("single_case_alert_details-09363ee86eb158f849b41946e0442b37.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/single_case_alert_details-09363ee86eb158f849b41946e0442b37.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t173.inf", 
		LAST);

	web_url("caseHistoryTable-1e8c84a2d7ab964eba716ee12d217be0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/caseHistory/caseHistoryTable-1e8c84a2d7ab964eba716ee12d217be0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t174.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_2", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_2", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6559&_=1596109135915", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("336142_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109135916", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_4", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"2109086a-523a-4547-9b97-a103155fe827");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("3330", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/3330?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isArchived=false&isFilterRequest=false&filters=%5B%5D&isFaers=false", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=1", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=badge", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=priority", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=actions", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=productName", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=pt", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listedness", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=outcome", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=false", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=disposition", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=conComit", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=serious", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=country", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=age", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=gender", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=death", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=false", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=caseType", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=submitter", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_4", 
		"URL=http://10.100.22.24:8181/signal/stomp/290/b2l1e3pe/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("336142_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109135917", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=3330&isFaers=&isCaseSeries=true", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_06_ClickOnCaseSeries",LR_AUTO);

	lr_think_time(3);

	web_url("336142_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109086462", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S10_07_SaveCaseSeries");

	web_url("generateCaseSeries", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/generateCaseSeries?metaInfo=id:228084,typeFlag:CUMM_FLAG,type:NEW,executedConfigId:3254,productId:100195,ptCode:10019842&seriesName=NORFLOXACIN_Hepatomegaly_32545&isArchived=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("336142_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109086463", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_07_SaveCaseSeries",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_08_ClickonReport");

	web_url("336142_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109086464", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("discardTempChanges", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6564", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/dms/dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Snapshot=t188.inf", 
		LAST);

	web_url("template-71bb2f4a5d7b0f5d9ca4bad0d92ac989.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/template/template-71bb2f4a5d7b0f5d9ca4bad0d92ac989.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Snapshot=t189.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getDmsFolders", 
		"URL=http://10.100.22.24:8181/signal/controlPanel/getDmsFolders?folder=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("336142_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109196257", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_5", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getGeneratedReports", 
		"URL=http://10.100.22.24:8181/signal/template/getGeneratedReports?configId=3254&alertId=228084&_=1596109196258", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_5", 
		"URL=http://10.100.22.24:8181/signal/stomp/010/d656_5t4/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("templates", 
		"URL=http://10.100.22.24:8181/signal/api/templates?_=1596109196259", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("336142_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109196260", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=3254&type=NEW&alertId=228084&typeFlag=CUMM_FLAG", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_08_ClickonReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_09_ClickBack");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_2", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchSubGroupsMap_2", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/fetchSubGroupsMap?dataSource=pva", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("commonTagDetails_3", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_3", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6564&_=1596109227310", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("336142_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109227311", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_6", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"2109086a-523a-4547-9b97-a103155fe827");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("3254_2", 
		"Action=http://10.100.22.24:8181/signal/aggregateCaseAlert/listByExecutedConfig/3254?callingScreen=review&cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isArchived=false&isFilterRequest=false&filters=%5B%5D&frequency=", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=1", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=flags", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=priority", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=actions", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=productName", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=soc", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=true", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=pt", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=false", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=impEvents", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listed", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=newCount", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=newSponCount", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=newSeriousCount", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=newFatalCount", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=newStudyCount", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=freqPriority", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=trendType", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=eb05", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=disposition", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=assignedTo", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=positiveRechallenge", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=positiveDechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=ebgm", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=related", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=pregenency", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=newPediatricCount", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=newInteractingCount", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=exe0newSponCount", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=exe0newSeriousCount", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=exe0newFatalCount", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=exe0newStudyCount", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=exe0ebgm", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=exe0eb05", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=exe1newSponCount", ENDITEM, 
		"Name=columns[37][name]", "Value=", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=exe1newSeriousCount", ENDITEM, 
		"Name=columns[38][name]", "Value=", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=true", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=exe1newFatalCount", ENDITEM, 
		"Name=columns[39][name]", "Value=", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=exe1newStudyCount", ENDITEM, 
		"Name=columns[40][name]", "Value=", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=exe1ebgm", ENDITEM, 
		"Name=columns[41][name]", "Value=", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=true", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=exe1eb05", ENDITEM, 
		"Name=columns[42][name]", "Value=", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=exe2newSponCount", ENDITEM, 
		"Name=columns[43][name]", "Value=", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=exe2newSeriousCount", ENDITEM, 
		"Name=columns[44][name]", "Value=", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=exe2newFatalCount", ENDITEM, 
		"Name=columns[45][name]", "Value=", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=exe2newStudyCount", ENDITEM, 
		"Name=columns[46][name]", "Value=", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=exe2ebgm", ENDITEM, 
		"Name=columns[47][name]", "Value=", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=exe2eb05", ENDITEM, 
		"Name=columns[48][name]", "Value=", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_6", 
		"URL=http://10.100.22.24:8181/signal/stomp/312/9m2ud1_d/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("336142_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109227312", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_09_ClickBack",LR_AUTO);

	lr_think_time(3);

	web_url("336142_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109227313", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("336142_20", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109227314", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S10_10_Select2CasesandclickonDisposition");

	web_url("bulk_operation_options.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/bulk_operation_options.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t209.inf", 
		LAST);

	web_url("336142_21", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109227315", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN", 
		"2109086a-523a-4547-9b97-a103155fe827");

	web_submit_data("changeDisposition", 
		"Action=http://10.100.22.24:8181/signal/aggregateCaseAlert/changeDisposition", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=selectedRows", "Value=[{\"configObj.id\":3236,\"executedConfigObj.id\":3254,\"alert.id\":228084},{\"configObj.id\":3236,\"executedConfigObj.id\":3254,\"alert.id\":228082}]", ENDITEM, 
		"Name=justification", "Value=Validation of current case/PEC based on available evidences", ENDITEM, 
		"Name=targetDisposition.id", "Value=37", ENDITEM, 
		"Name=incomingDisposition", "Value=Review Required", ENDITEM, 
		"Name=isArchived", "Value=false", ENDITEM, 
		LAST);

	web_submit_data("3254_3", 
		"Action=http://10.100.22.24:8181/signal/aggregateCaseAlert/listByExecutedConfig/3254?callingScreen=review&cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isArchived=false&isFilterRequest=false&filters=%5B%5D&frequency=", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=2", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=flags", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=priority", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=actions", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=productName", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=soc", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=true", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=pt", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=false", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=listed", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=newCount", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=newSeriousCount", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=newFatalCount", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=trendType", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=eb05", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=disposition", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=assignedTo", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=impEvents", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=newSponCount", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=newStudyCount", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=true", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=freqPriority", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=positiveRechallenge", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=positiveDechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=ebgm", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=related", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=pregenency", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=newPediatricCount", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=newInteractingCount", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=exe0newSponCount", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=exe0newSeriousCount", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=exe0newFatalCount", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=exe0newStudyCount", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=exe0ebgm", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=exe0eb05", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=exe1newSponCount", ENDITEM, 
		"Name=columns[37][name]", "Value=", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=exe1newSeriousCount", ENDITEM, 
		"Name=columns[38][name]", "Value=", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=true", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=exe1newFatalCount", ENDITEM, 
		"Name=columns[39][name]", "Value=", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=exe1newStudyCount", ENDITEM, 
		"Name=columns[40][name]", "Value=", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=exe1ebgm", ENDITEM, 
		"Name=columns[41][name]", "Value=", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=true", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=exe1eb05", ENDITEM, 
		"Name=columns[42][name]", "Value=", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=exe2newSponCount", ENDITEM, 
		"Name=columns[43][name]", "Value=", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=exe2newSeriousCount", ENDITEM, 
		"Name=columns[44][name]", "Value=", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=exe2newFatalCount", ENDITEM, 
		"Name=columns[45][name]", "Value=", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=exe2newStudyCount", ENDITEM, 
		"Name=columns[46][name]", "Value=", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=exe2ebgm", ENDITEM, 
		"Name=columns[47][name]", "Value=", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=exe2eb05", ENDITEM, 
		"Name=columns[48][name]", "Value=", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("336142_22", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/336142?_=1596109227316", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_10_Select2CasesandclickonDisposition",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_11_Logout");

	web_url("discardTempChanges_2", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6564", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=3254", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_11_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}