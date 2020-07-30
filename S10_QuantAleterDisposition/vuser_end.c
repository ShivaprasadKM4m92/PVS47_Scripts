vuser_end()
{
	lr_start_transaction("S10_11_Logout");

	web_url("discardTempChanges_2", 
		"URL={URL}/signal/viewInstance/discardTempChanges?viewInstance.id=6564", 
		"Resource=0", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("index_2", 
		"URL={URL}/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_11_Logout",LR_AUTO);

	lr_think_time(3);
	
	return 0;
}
