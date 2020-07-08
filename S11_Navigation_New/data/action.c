Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("dns-query", 
		"URL=https://dns.google/dns-query?dns=HjkBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("dns-query_2", 
		"URL=https://dns.google/dns-query?dns=ghABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("dns-query_3", 
		"URL=https://dns.google/dns-query?dns=y4wBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("dns-query_4", 
		"URL=https://dns.google/dns-query?dns=Z2MBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("dns-query_5", 
		"URL=https://dns.google/dns-query?dns=skUBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dns-query_6", 
		"URL=https://dns.google/dns-query?dns=oVEBAAABAAAAAAABA3d3dwpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAFEADABNAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("dns-query_7", 
		"URL=https://dns.google/dns-query?dns=lyEBAAABAAAAAAABDmNsaWVudHNlcnZpY2VzCmdvb2dsZWFwaXMDY29tAAABAAEAACkQAAAAAAAARgAMAEIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("dns-query_8", 
		"URL=https://dns.google/dns-query?dns=QDoBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t9.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dns-query_9", 
		"URL=https://dns.google/dns-query?dns=V-QBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t12.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	web_concurrent_end(NULL);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0gelAUWHIEsA6CgYIARAAGBASNwF-L9Ir9zhZjkYIUKp3Q3vEHnuc31nP7YgQmhVj7QK6TelWmr30ucARfaJiHImoJTl5g0MrBUI", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=83", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0gelAUWHIEsA6CgYIARAAGBASNwF-L9Ir9zhZjkYIUKp3Q3vEHnuc31nP7YgQmhVj7QK6TelWmr30ucARfaJiHImoJTl5g0MrBUI&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dns-query_10", 
		"URL=https://dns.google/dns-query?dns=UoQBAAABAAAAAAABE29hdXRoYWNjb3VudG1hbmFnZXIKZ29vZ2xlYXBpcwNjb20AAAEAAQAAKRAAAAAAAABBAAwAPQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("dns-query_11", 
		"URL=https://dns.google/dns-query?dns=uvMBAAABAAAAAAABCGNsaWVudHM0Bmdvb2dsZQNjb20AAAEAAQAAKRAAAAAAAABQAAwATAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t19.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_url("login-23162286b278bf1e48cb0201c9e9a644.css", 
		"URL=http://10.100.22.24:8181/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/calendar.readonly+https://www.googleapis.com/auth/cast-edu-messaging+https://www.googleapis.com/auth/clouddevices+https://www.googleapis.com/auth/hangouts+https://www.googleapis.com/auth/hangouts.readonly+https://www.googleapis.com/auth/meetings+https://www.googleapis.com/auth/plus.peopleapi.readwrite+https://www.googleapis.com/auth/userinfo.email&client_id="
		"919648714761-55j965o0km033psv3i9qls5mo3qtdrb0.apps.googleusercontent.com&origin=pkedcjkdefgpdelpbcmbmeomcjbeemfm&lib_ver=83.0.4103.116&release_channel=stable&device_id=7cf0235b-aebe-49b6-b014-2d2ee376ae19&device_type=chrome", 
		LAST);

	web_add_header("X-Client-Data", 
		"CIi2yQEIo7bJAQjEtskBCKmdygEI58jKARibvsoB");

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=VEA7Edk/IMK7gPVkWMKLOg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\nshivaprasaadkm@gmail.com4*8\b", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("pv-signal-logo-61161afba9a8a8e20ebe65b7f0973c2a.png", 
		"URL=http://10.100.22.24:8181/signal/assets/pv-signal-logo-61161afba9a8a8e20ebe65b7f0973c2a.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("application-edeae5626e2c5caac9747dbc70972fa9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/application-edeae5626e2c5caac9747dbc70972fa9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t25.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dns-query_12", 
		"URL=https://dns.google/dns-query?dns=_sIBAAABAAAAAAABEGNvbnRlbnQtYXV0b2ZpbGwKZ29vZ2xlYXBpcwNjb20AAAEAAQAAKRAAAAAAAABEAAwAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCbwRebZvvad7EgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCbwRebZvvad7EgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("background-4c8c4fd7df1b6436735eac4cfed91698.jpg", 
		"URL=http://10.100.22.24:8181/signal/assets/background-4c8c4fd7df1b6436735eac4cfed91698.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://10.100.22.24:8181/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("dns-query_13", 
		"URL=https://dns.google/dns-query?dns=hbQBAAABAAAAAAABBW10YWxrBmdvb2dsZQNjb20AAAEAAQAAKRAAAAAAAABTAAwATwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("dns-query_14", 
		"URL=https://dns.google/dns-query?dns=AYABAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t31.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-83.0.4103.116");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2210744924&cup2hreq=587923910f05d0d622d75309bab155bdb5eb744ebbb3ec4887f9f6a8e0dda879", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{c67fe5f5-0ef5-4ffe-b3b6-c24e97bd6fa6}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{a45af9f7-3a84-4af2-942f-23a69fecdf78}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{69db907b-aed0-4f65-a8e9-bb1ddc2b434e}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{50d5032b-382c-4f36-9f3c-c018b6cbe0a8}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{c13112ce-d49e-4f6c-bb87-0c162ba477da}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{4a76dd7b-0a5a-478f-973a-a044c4af8e98}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\""
		"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{fc3dd83d-995e-42c4-97fa-e5eeba5af020}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.2ab2be7a7c283b0e4ec01de815baab251360d04ad22206876428ad1cbedc446f\"}]},\"ping\":{\"ping_freshness\":\"{ae8bae3d-a979-42c5-a5dc-93717929fe4b}\",\"rd\":4937},\"updatecheck\":{},\""
		"version\":\"8320.407.0.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1282\"},\"prodversion\":\"83.0.4103.116\",\"protocol\":\"3.1\",\"requestid\":\"{86cb27b5-acf2-43fa-b93b-8ace44910fbf}\",\"sessionid\":\"{eae84b17-beae-49b6-8d83-8bba83d05aa6}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\""
		"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.116\"}}", 
		LAST);

	web_url("dns-query_15", 
		"URL=https://dns.google/dns-query?dns=7AwBAAABAAAAAAABBnVwZGF0ZQpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAE4ADABKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,llkgjffcdpffmhiakmfcdcblohccpfmo,mimojjlkmoijpicakmndhoigimigcmbb,oimompecagnajdejgnnjijobebaeigek,aemomkdncapdnfajjbbcbdebjljbpmpj,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hfnkpimlhhgieaddgfemjhofmfblmnib,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,gkmgaooipdjhmangpemjhigmamcehddo,hnimpnehoodheedghdeeijklkeaacbdc,ehgidpndbllacpjalkiimkbadgjfnnmc,copjbmjbojbakpaedmpkhmiplmmehfck,ggkkehgbnfjpeggfpleeakpidbkibbmn,bklopemakmnopmghhmccadeonafabnal,"
		"jflookgnkcckhobaglndicnbbgbonegd");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-83.0.4103.116");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:1643005540&cup2hreq=7fac8e5e06066af28c8761f4822883ee122a4802c2be90fe4a8013163a3f89a9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{0cd40153-0eae-428d-9ccc-aee0098da890}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{f8ed6cf7-bdbd-420c-87c8-e30a0fc500f0}\",\"rd\":4937},\"updatecheck\":{},\""
		"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GCEU\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8962baf052b75de7e61b9e134a6d48c4c269a48c1249d16747f2f608c73bcf90\"}]},\"ping\":{\"ping_freshness\":\"{fc3d805f-0600-4b1d-a0b9-d00c4e5b2eae}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"32.0.0.387\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\""
		",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{4a85b34b-a0bb-4f80-a770-a203a81d3ca5}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{49a7df88-a02e-4635-a882-f8033b073f24}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1/vs3:\",\"cohorthint\":\"OnePercent_9_13\",\""
		"cohortname\":\"OnePercent_9_13\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.97988718faca3fd8cad05b90f3627c0db65f5a46dfaeda169eaef2eb7e8a96ce\"}]},\"ping\":{\"ping_freshness\":\"{3a04a815-c943-4985-8047-a85da2b2c0f4}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"9.13.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.2dd7455e11752d1a7696ad0abb1ab803cf8d1a9b91b13d5499f9a41ae6294e52\"}]},\"ping\":{\"ping_freshness\":\"{e26fe35a-7451-4504-9f83-81914e14fe1e}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"5981\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\""
		"{c43018bc-9c9c-4e8c-965a-10c29b538b77}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{44774351-2ab9-4e84-acfc-24a4707791cb}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\""
		"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.86d4ab947598b4c1e45ab37df6055bf0ade111d5a4cc8f3cf076674a8636078e\"}]},\"ping\":{\"ping_freshness\":\"{9615826c-b160-4e1c-9eaf-ad2d072b164e}\",\"rd\":4937},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"83.238.200\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"enabled\":true,\""
		"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{9cee37cc-981b-49aa-8668-71635a921783}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{1e402d66-f207-4086-8ada-dcd7b56956dc}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GCEU\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\""
		"{b02c3e3a-d33e-4ffa-b309-d92829a27bf9}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:vx3@0.01\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.1db1125acbf39b8582227d0c44516ac2f19807168785714b2b99fbcb5e97b163\"}]},\"ping\":{\"ping_freshness\":\"{c050c948-87c0-4c57-9007-27792f10bdc9}\",\"rd\":4937},\"updatecheck\":{},\"version\":\""
		"2020.6.24.1141\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GCEU\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{18e61435-df65-4039-9dfd-7e4cebd116e0}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d186b628791449b587f5bbc5bd89c0b30c88b0b7d6d392506d9497ef3e069ad5\"}]},\"ping\":{\"ping_freshness\":\"{dfcbfba6-c231-448d-a3df-dcad0dc96bbe}\",\"rd\":4937},\"updatecheck\":{},\"version\":\"1664\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.17763.1282\"},\"prodversion\":\"83.0.4103.116\",\"protocol\":\"3.1\",\"requestid\":\"{3956de43-6d71-4a58-bd8a-b0abba9cd50e}\",\"sessionid\":\"{530b9f24-53e1-47fa-bbc9-c488a2cbb38b}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.116\"}}", 
		LAST);

	lr_start_transaction("S11_01_OpenApplication");

	lr_end_transaction("S11_01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S11_02_Login");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("authenticate", 
		"Action=http://10.100.22.24:8181/signal/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=bae1792e-77f8-4bed-be49-a25821957eb6", ENDITEM, 
		"Name=username", "Value=bhagya", ENDITEM, 
		"Name=password", "Value=bhagya", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"URL=http://10.100.22.24:8181/signal/assets/theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("pvs_app_css-5c3c9738e333026bac181f4ace083610.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_css-5c3c9738e333026bac181f4ace083610.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL=http://10.100.22.24:8181/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL=http://10.100.22.24:8181/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL=http://10.100.22.24:8181/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL=http://10.100.22.24:8181/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t85.inf", 
		LAST);

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t86.inf", 
		LAST);

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("userGroupSelect-aa16ca7f818f4d9440e25a6580328f56.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/userGroupSelect-aa16ca7f818f4d9440e25a6580328f56.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t93.inf", 
		LAST);

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t94.inf", 
		LAST);

	web_url("actions-51fad02afa6a5da6ce440dd20f523dfb.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/actions/actions-51fad02afa6a5da6ce440dd20f523dfb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t95.inf", 
		LAST);

	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t97.inf", 
		LAST);

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("dashboard-df570732ab33600380d40654470a3c10.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboard-df570732ab33600380d40654470a3c10.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("rx_common-dcefd25069e04f9d4bd2d9ba66e3a539.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/common/rx_common-dcefd25069e04f9d4bd2d9ba66e3a539.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t108.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("dns-query_16", 
		"URL=https://dns.google/dns-query?dns=z70BAAABAAAAAAABDHNhZmVicm93c2luZwpnb29nbGVhcGlzA2NvbQAAAQABAAApEAAAAAAAAEgADABEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t75.inf", 
		LAST);

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
		"Ch0KDGdvb2dsZWNocm9tZRINODMuMC40MTAzLjExNhopCAUQARobCg0IBRAGGAEiAzAwMTABEOrxCBoCGAcPWlO2IgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCczQcaAhgH0C7rWSIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ9NQHGgIYB9wDpUAiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEMvcBxoCGAfmNaphIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEENQaGgIYB_NEMiYiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQkjIaAhgHQAyY_iIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAeqCEgXIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAcGgIYB8zKzygiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEKUJGgIYB_fqpbEiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEKh2GgIYByVxjvEiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEOTzAxoCGAfGBAnCIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCdBBoCGAeTRRv4IgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t80.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t104.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("left_bg-b4ea12efc891fcaf7bd4c4b3ba9828cf.png", 
		"URL=http://10.100.22.24:8181/signal/assets/left_bg-b4ea12efc891fcaf7bd4c4b3ba9828cf.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://10.100.22.24:8181/signal/assets/theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"Snapshot=t111.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("section-hd-bg-8eaf77fc4a1a47c48ca4b2e3d5a96340.jpg", 
		"URL=http://10.100.22.24:8181/signal/assets/section-hd-bg-8eaf77fc4a1a47c48ca4b2e3d5a96340.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t113.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t114.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKAAQlHvIFB7IvAMRILDe_YgOYSABoAIgASCw1_PJqbEgAaACIAEgsNkcnz6RIAGgAiABILDbnQilESABoAIgASCw3RZ88eEgAaACIAEgsN0miFORIAGgAiABILDRv2j6ASABoAIgASCw3wFhzoEgAaACIAEgsNOE-ZNhIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKAAQlHvIFB7IvAMRILDe_YgOYSABoAIgASCw1_PJqbEgAaACIAEgsNkcnz6RIAGgAiABILDbnQilESABoAIgASCw3RZ88eEgAaACIAEgsN0miFORIAGgAiABILDRv2j6ASABoAIgASCw3wFhzoEgAaACIAEgsNOE-ZNhIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t115.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1594213875743", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("bg2-a39cb4fbdd9436c08ad118995fc95c46.png", 
		"URL=http://10.100.22.24:8181/signal/assets/bg2-a39cb4fbdd9436c08ad118995fc95c46.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://10.100.22.24:8181/signal/assets/theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"Snapshot=t117.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCawvb5cmFgDSEgsNnOy7GRIAGgAiABILDb2Fgw8SABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCawvb5cmFgDSEgsNnOy7GRIAGgAiABILDb2Fgw8SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t118.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1594213875744", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_concurrent_start(NULL);

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t120.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t121.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1594213875747", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594213875748", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"bae1792e-77f8-4bed-be49-a25821957eb6");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=29-Jun-2020", ENDITEM, 
		"Name=end", "Value=10-Aug-2020", ENDITEM, 
		LAST);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1594213875746", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Client-Data", 
		"CIi2yQEIo7bJAQjEtskBCKmdygEI58jKARibvsoB");

	web_custom_request("command_2", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=VEA7Edk/IMK7gPVkWMKLOg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t127.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\nshivaprasaadkm@gmail.com4*ö\b", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1594213875750", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CeLz7kID33hnEgsNcYiOKxIAGgAiABILDb2Fgw8SABoAIgASCw2c7LsZEgAaACIAEgsNvYWDDxIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CeLz7kID33hnEgsNcYiOKxIAGgAiABILDb2Fgw8SABoAIgASCw2c7LsZEgAaACIAEgsNvYWDDxIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t129.inf", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Client-Data", 
		"CIi2yQEIo7bJAQjEtskBCKmdygEI58jKARibvsoB");

	web_custom_request("command_3", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=VEA7Edk/IMK7gPVkWMKLOg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t130.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\nshivaprasaadkm@gmail.com4\"Ê\n®\nfZ:ADqtAZzFXPSOo30VJo+M4IzVVF8jUxS7LEpusJqBTpdITC0ZAx+WapJZzWjp44AfIdmbhrIYo5z982pXkDLYVhgdE6GQ76GBIg== ≤ﬁÆ”õªÍ(”¥µÙ≤.0ÁﬁõÀ≤.:\n20LSS0N800ê", 
		LAST);

	web_url("websocket", 
		"URL=http://10.100.22.24:8181/signal/stomp/940/e0fus9ir/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJZCXXwJzK-GymlEgsNWdcY1RIAGgAiABILDb2Fgw8SABoAIgASCw1xiI4rEgAaACIAEgsNvYWDDxIAGgAiABILDZzsuxkSABoAIgASCw29hYMPEgAaACIAGgA=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJZCXXwJzK-GymlEgsNWdcY1RIAGgAiABILDb2Fgw8SABoAIgASCw1xiI4rEgAaACIAEgsNvYWDDxIAGgAiABILDZzsuxkSABoAIgASCw29hYMPEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t132.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1594213875749", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1594213875751", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1594213875741", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1594213875745", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1594213875742", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S11_02_Login",LR_AUTO);

	lr_think_time(3);

	web_url("7435_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594213875752", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S11_03_TriggeredAlertsEVDASReview");

	web_url("7435_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594213875753", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"bae1792e-77f8-4bed-be49-a25821957eb6");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t140.inf", 
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

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("review", 
		"URL=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t141.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("fuelux-6f987968c570ff7348ebf0d29c49fdbe.css", 
		"URL=http://10.100.22.24:8181/signal/assets/fuelux-6f987968c570ff7348ebf0d29c49fdbe.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("fuelux-f9b4ad7ab3a7ffc6f349ea76f519d981.js", 
		"URL=http://10.100.22.24:8181/signal/assets/fuelux/fuelux-f9b4ad7ab3a7ffc6f349ea76f519d981.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("evdas_alert_review-25c2140db00a086d7e58cf797410b5d1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/evdas_alert_review-25c2140db00a086d7e58cf797410b5d1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t146.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("priorities", 
		"URL=http://10.100.22.24:8181/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState", 
		"URL=http://10.100.22.24:8181/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("listConfig", 
		"URL=http://10.100.22.24:8181/signal/evdasAlert/listConfig?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=description&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B2%5D%5Bdata%5D=productSelection&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=caseCount&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=newCases&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=closedCaseCount&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=priority&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D"
		"=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateRagne&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=10&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D="
		"8&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1594214302494", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214302495", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("spinner.gif", 
		"URL=http://10.100.22.24:8181/signal/assets/spinner.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t152.inf", 
		LAST);

	web_url("dns-query_17", 
		"URL=https://dns.google/dns-query?dns=WEwBAAABAAAAAAABEGNvbnRlbnQtYXV0b2ZpbGwKZ29vZ2xlYXBpcwNjb20AAAEAAQAAKRAAAAAAAABEAAwAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t153.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("websocket_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/603/p6mlho1n/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214302496", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCTYpmtasdEcoEgsNvYWDDxIAGgAiABoAEiUJdxvX-LDIy1YSCw1M2wmDEgAaACIAEgsNvYWDDxIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCTYpmtasdEcoEgsNvYWDDxIAGgAiABoAEiUJdxvX-LDIy1YSCw1M2wmDEgAaACIAEgsNvYWDDxIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t156.inf", 
		LAST);

	lr_end_transaction("S11_03_TriggeredAlertsEVDASReview",LR_AUTO);

	lr_think_time(3);

	web_url("7435_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214302497", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S11_04_TriggeredAlertsAdhocReview");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/evdasAlert/review", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t159.inf", 
		LAST);

	web_url("datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t160.inf", 
		LAST);

	web_url("updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t161.inf", 
		LAST);

	web_url("fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t162.inf", 
		LAST);

	web_url("bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/bootstrap-modal-popover/bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t163.inf", 
		LAST);

	web_url("disposition-change-a303f57685feda1e1afe8ee8a46288f2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/disposition/disposition-change-a303f57685feda1e1afe8ee8a46288f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t164.inf", 
		LAST);

	web_url("priority-change-bc6eb91278b6d309860e3107cd206425.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/priority/priority-change-bc6eb91278b6d309860e3107cd206425.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t165.inf", 
		LAST);

	web_url("ad_hoc_alert_list-dad397ffd1d22dc10b06da34bad07873.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/ad_hoc_alert_list-dad397ffd1d22dc10b06da34bad07873.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t166.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t167.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t168.inf", 
		LAST);

	web_url("word-icon.png", 
		"URL=http://10.100.22.24:8181/signal/assets/word-icon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t169.inf", 
		LAST);

	web_url("pdf-icon.jpg", 
		"URL=http://10.100.22.24:8181/signal/assets/pdf-icon.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t170.inf", 
		LAST);

	web_url("excel.gif", 
		"URL=http://10.100.22.24:8181/signal/assets/excel.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t171.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("viewColumnInfo", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6572&_=1594214330522", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"bae1792e-77f8-4bed-be49-a25821957eb6");

	web_custom_request("list", 
		"URL=http://10.100.22.24:8181/signal/adHocAlert/list?callingScreen=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_url("7435_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214330523", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dns-query_18", 
		"URL=https://dns.google/dns-query?dns=jG4BAAABAAAAAAABEGNvbnRlbnQtYXV0b2ZpbGwKZ29vZ2xlYXBpcwNjb20AAAEAAQAAKRAAAAAAAABEAAwAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t176.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKRAwnbB72vta9OsRILDeJlGlASABoAIgASCw29hYMPEgAaACIAEgsNjuWu7hIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKRAwnbB72vta9OsRILDeJlGlASABoAIgASCw29hYMPEgAaACIAEgsNjuWu7hIAGgAiABILDU-0cagSABoAIgASCw12yHYWEgAaACIAEgsNxMF0kxIAGgAiABILDcMKKI4SABoAIgASCw3Vpq0bEgAaACIAEgsN-u2y3hIAGgAiABILDbw7JsISABoAIgASCw2RPh1wEgAaACIAEgsN3t0OwBIAGgAiABILDY7lru4SABoAIgASCw1PtHGoEgAaACIAEgsNdsh2FhIAGgAiABILDcTBdJMSABoAIgASCw3DCiiOEgAaACIAEg"
		"sN1aatGxIAGgAiABILDfrtst4SABoAIgASCw28OybCEgAaACIAEgsNkT4dcBIAGgAiABILDd7dDsASABoAIgASCw3m4M1sEgAaACIAEgsNes7A8hIAGgAiABILDTtc4cwSABoAIgASCw3u458SEgAaACIAEgsNBu27_xIAGgAiABILDbLkoa8SABoAIgASCw2z64X_EgAaACIAEgsNBu27_xIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t177.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKeAwmBz-kul5q69BILDeJlGlASABoAIgASCw29hYMPEgAaACIAEgsNjuWu7hIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKeAwmBz-kul5q69BILDeJlGlASABoAIgASCw29hYMPEgAaACIAEgsNjuWu7hIAGgAiABILDU-0cagSABoAIgASCw12yHYWEgAaACIAEgsNxMF0kxIAGgAiABILDcMKKI4SABoAIgASCw3Vpq0bEgAaACIAEgsN-u2y3hIAGgAiABILDbw7JsISABoAIgASCw2RPh1wEgAaACIAEgsN3t0OwBIAGgAiABILDY7lru4SABoAIgASCw1PtHGoEgAaACIAEgsNdsh2FhIAGgAiABILDcTBdJMSABoAIgASCw3DCiiOEgAaACIAEg"
		"sN1aatGxIAGgAiABILDfrtst4SABoAIgASCw28OybCEgAaACIAEgsNkT4dcBIAGgAiABILDd7dDsASABoAIgASCw2O5a7uEgAaACIAEgsN5uDNbBIAGgAiABILDXrOwPISABoAIgASCw07XOHMEgAaACIAEgsN7uOfEhIAGgAiABILDQbtu_8SABoAIgASCw2y5KGvEgAaACIAEgsNs-uF_xIAGgAiABILDQbtu_8SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t178.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("websocket_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/376/flw0_mau/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_concurrent_start(NULL);

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t180.inf", 
		LAST);

	web_url("dns-query_19", 
		"URL=https://dns.google/dns-query?dns=S1kBAAABAAAAAAABEGNvbnRlbnQtYXV0b2ZpbGwKZ29vZ2xlYXBpcwNjb20AAAEAAQAAKRAAAAAAAABEAAwAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t181.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("S11_04_TriggeredAlertsAdhocReview",LR_AUTO);

	lr_think_time(3);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214330524", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S11_05_TriggeredAlertsLiteratureReview");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("review_2", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/adHocAlert/index", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("literature_alert_review-982289e3fdc377b2cb30a2d898e60e2e.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/literature/literature_alert_review-982289e3fdc377b2cb30a2d898e60e2e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t184.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCTYpmtasdEcoEgsNvYWDDxIAGgAiABoAEiUJVCKlc6Fv5lkSCw3zXyKDEgAaACIAEgsNvYWDDxIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCTYpmtasdEcoEgsNvYWDDxIAGgAiABoAEiUJVCKlc6Fv5lkSCw3zXyKDEgAaACIAEgsNvYWDDxIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t185.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("listByLiteratureConfiguration", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/listByLiteratureConfiguration?args="
		"%7B%22draw%22%3A1%2C%22columns%22%3A%5B%7B%22data%22%3A%22name%22%2C%22name%22%3A%22name%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22searchString%22%2C%22name%22%3A%22searchString%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22dateRange%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22"
		"%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22selectedDatasource%22%2C%22name%22%3A%22selectedDatasource%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22lastUpdated%22%2C%22name%22%3A%22lastUpdated%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22dateCreated"
		"%22%2C%22name%22%3A%22dateCreated%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22action%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%5D%2C%22order%22%3A%5B%7B%22column%22%3A5%2C%22dir%22%3A%22desc%22%7D%5D%2C%22start%22%3A0%2C%22length%22%3A20%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afal"
		"se%7D%7D&_=1594214364836", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_4", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214364837", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("websocket_4", 
		"URL=http://10.100.22.24:8181/signal/stomp/304/fd6nu4jq/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S11_05_TriggeredAlertsLiteratureReview",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214364838", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214364839", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214364840", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S11_08_SortOnAuthor_Accending");

	web_url("7435_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214364841", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214364842", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S11_08_SortOnAuthor_Accending",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S11_08_SortOnAlert_Accending");

	web_url("listByLiteratureConfiguration_2", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/listByLiteratureConfiguration?args="
		"%7B%22draw%22%3A2%2C%22columns%22%3A%5B%7B%22data%22%3A%22name%22%2C%22name%22%3A%22name%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22searchString%22%2C%22name%22%3A%22searchString%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22dateRange%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22"
		"%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22selectedDatasource%22%2C%22name%22%3A%22selectedDatasource%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22lastUpdated%22%2C%22name%22%3A%22lastUpdated%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22dateCreated"
		"%22%2C%22name%22%3A%22dateCreated%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22action%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%5D%2C%22order%22%3A%5B%7B%22column%22%3A0%2C%22dir%22%3A%22asc%22%7D%5D%2C%22start%22%3A0%2C%22length%22%3A20%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afals"
		"e%7D%7D&_=1594214364843", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S11_08_SortOnAlert_Accending",LR_AUTO);

	lr_think_time(3);

	web_url("7435_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214364844", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S11_09_SortOnAlert_Decending");

	web_url("listByLiteratureConfiguration_3", 
		"URL=http://10.100.22.24:8181/signal/literatureAlert/listByLiteratureConfiguration?args="
		"%7B%22draw%22%3A3%2C%22columns%22%3A%5B%7B%22data%22%3A%22name%22%2C%22name%22%3A%22name%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22searchString%22%2C%22name%22%3A%22searchString%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22dateRange%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22"
		"%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22selectedDatasource%22%2C%22name%22%3A%22selectedDatasource%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22lastUpdated%22%2C%22name%22%3A%22lastUpdated%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22dateCreated"
		"%22%2C%22name%22%3A%22dateCreated%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22action%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%5D%2C%22order%22%3A%5B%7B%22column%22%3A0%2C%22dir%22%3A%22desc%22%7D%5D%2C%22start%22%3A0%2C%22length%22%3A20%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afal"
		"se%7D%7D&_=1594214364845", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S11_09_SortOnAlert_Decending",LR_AUTO);

	lr_think_time(3);

	web_url("7435_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214364846", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S11_11_AlertConfiguration-ViewAlerts");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL=http://10.100.22.24:8181/signal/configuration/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/literatureAlert/review", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("configuration-91d885e44161bbf4c43667ab547e7ba1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/configuration-91d885e44161bbf4c43667ab547e7ba1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t200.inf", 
		LAST);

	web_url("jquery-ui-0ac146552c49411ebf7e65f0b61ae8a0.css", 
		"URL=http://10.100.22.24:8181/signal/assets/jquery-ui/jquery-ui-0ac146552c49411ebf7e65f0b61ae8a0.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t201.inf", 
		LAST);

	web_url("deleteModal-6bdd3856fe6074dc751693b38eb0cbf8.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/deleteModal-6bdd3856fe6074dc751693b38eb0cbf8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t202.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCR8IREkOGDBdEgsNhtIUPxIAGgAiABILDb2Fgw8SABoAIgASCw1G8EH3EgAaACIAEgsNxPlf7BIAGgAiABILDapov5ISABoAIgASCw3BUxmSEgAaACIAEgsNXgYQIBIAGgAiABILDYVjL18SABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCR8IREkOGDBdEgsNhtIUPxIAGgAiABILDb2Fgw8SABoAIgASCw1G8EH3EgAaACIAEgsNxPlf7BIAGgAiABILDapov5ISABoAIgASCw3BUxmSEgAaACIAEgsNXgYQIBIAGgAiABILDYVjL18SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t203.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214491304", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_5", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("configurations", 
		"URL=http://10.100.22.24:8181/signal/api/configurations?alertType=Single%20Case%20Alert&_=1594214491303", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("websocket_5", 
		"URL=http://10.100.22.24:8181/signal/stomp/571/d220pqiy/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_concurrent_start(NULL);

	web_url("alert_config_edit_button.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/alert_config_edit_button.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t208.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLBAQkiGeTRpcCYzhILDYbSFD8SABoAIgASCw29hYMPEgAaACIAEgsNRvBB9xIAGgAiABILDcT5X-wSABoAIgASCw2qaL-SEgAaACIAEgsNwVMZkhIAGgAiABILDV4GECASABoAIgASCw2FYy9fEgAaACIAEgsNRvBB9xIAGgAiABILDcT5X-wSABoAIgASCw2qaL-SEgAaACIAEgsNwVMZkhIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLBAQkiGeTRpcCYzhILDYbSFD8SABoAIgASCw29hYMPEgAaACIAEgsNRvBB9xIAGgAiABILDcT5X-wSABoAIgASCw2qaL-SEgAaACIAEgsNwVMZkhIAGgAiABILDV4GECASABoAIgASCw2FYy9fEgAaACIAEgsNRvBB9xIAGgAiABILDcT5X-wSABoAIgASCw2qaL-SEgAaACIAEgsNwVMZkhIAGgAiABILDV4GECASABoAIgASCw2FYy9fEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t209.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214491305", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S11_11_AlertConfiguration-ViewAlerts",LR_AUTO);

	lr_think_time(3);

	web_concurrent_start(NULL);

	web_url("dns-query_20", 
		"URL=https://dns.google/dns-query?dns=QR8BAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t211.inf", 
		LAST);

	web_url("dns-query_21", 
		"URL=https://dns.google/dns-query?dns=cR8BAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t212.inf", 
		LAST);

	web_url("dns-query_22", 
		"URL=https://dns.google/dns-query?dns=i1MBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t213.inf", 
		LAST);

	web_url("dns-query_23", 
		"URL=https://dns.google/dns-query?dns=bQ4BAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t214.inf", 
		LAST);

	web_url("dns-query_24", 
		"URL=https://dns.google/dns-query?dns=j8kBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t215.inf", 
		LAST);

	web_url("dns-query_25", 
		"URL=https://dns.google/dns-query?dns=t1cBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t216.inf", 
		LAST);

	web_url("dns-query_26", 
		"URL=https://dns.google/dns-query?dns=r7wBAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
		"Resource=1", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t217.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("S11_12_AlertConfiguration-ViewExecutionStatus");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("executionStatus", 
		"URL=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/configuration/index", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("executionStatus-e35e74007b0b5422a22b611690365bff.css", 
		"URL=http://10.100.22.24:8181/signal/assets/executionStatus-e35e74007b0b5422a22b611690365bff.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t219.inf", 
		LAST);

	web_url("executionStatus-8725fcdfa337d82dd022ca3ec2bde5f2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/executionStatus-8725fcdfa337d82dd022ca3ec2bde5f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t220.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCfhgm1RhBpKlEgsN9V4ldBIAGgAiABILDU13IEUSABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCfhgm1RhBpKlEgsN9V4ldBIAGgAiABILDU13IEUSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t221.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t222.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214518349", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t223.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus_2", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=SINGLE_CASE_ALERT&_=1594214518350", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t224.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_concurrent_start(NULL);

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CSZIMGktmQr1EgsN4hsEvhIAGgAiABILDb2Fgw8SABoAIgASCw31XiV0EgAaACIAEgsNTXcgRRIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CSZIMGktmQr1EgsN4hsEvhIAGgAiABILDb2Fgw8SABoAIgASCw31XiV0EgAaACIAEgsNTXcgRRIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t225.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CSpZ_SUrVXxtEgsN4hsEvhIAGgAiABILDU13IEUSABoAIgASCw31XiV0EgAaACIAEgsNvYWDDxIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CSpZ_SUrVXxtEgsN4hsEvhIAGgAiABILDU13IEUSABoAIgASCw31XiV0EgAaACIAEgsNvYWDDxIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t226.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("X-Requested-With");

	web_url("info_6", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("websocket_6", 
		"URL=http://10.100.22.24:8181/signal/stomp/462/1zts_6uf/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S11_12_AlertConfiguration-ViewExecutionStatus",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_20", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214518351", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus_3", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=2&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=COMPLETED&alertType=SINGLE_CASE_ALERT&_=1594214518352", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_21", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214518353", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t231.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S11_13_AlertConfiguration-ViewExecutionStatusCompleted");

	lr_end_transaction("S11_13_AlertConfiguration-ViewExecutionStatusCompleted",LR_AUTO);

	lr_think_time(3);

	web_url("7435_22", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214518354", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t232.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S11_13_AlertConfiguration-ViewExecutionStatusQuantitativeConfiguration");

	web_url("executionStatus_4", 
		"URL=http://10.100.22.24:8181/signal/configurationRest/executionStatus?draw=3&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=COMPLETED&alertType=AGGREGATE_CASE_ALERT&_=1594214518355", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t233.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S11_13_AlertConfiguration-ViewExecutionStatusQuantitativeConfiguration",LR_AUTO);

	lr_think_time(3);

	web_url("7435_23", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1594214518356", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S11_14_Logout");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_3", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/configuration/executionStatus", 
		"Snapshot=t235.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S11_14_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}