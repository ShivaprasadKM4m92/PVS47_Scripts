Action()
{

	web_cleanup_auto_headers();

	lr_start_transaction("S10_03_NavigateTriggeredAlertsQuantitativeReview");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("saveDashboardConfig", 
		"Action={URL}/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
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

	web_reg_find("Search=Body",
		"Text=Quantitative Review",
		LAST);

	web_url("review", 
		"URL={URL}/signal/aggregateCaseAlert/review", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"URL={URL}/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t117.inf", 
		LAST);

	web_url("date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("simple_case_alert_review-9886291cf5fcacea8bb0fd82eeab7d8a.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/simple_case_alert_review-9886291cf5fcacea8bb0fd82eeab7d8a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"URL={URL}/signal/assets/yadcf/jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t120.inf", 
		LAST);



//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("priorities", 
		"URL={URL}/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState", 
		"URL={URL}/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);


	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

		web_concurrent_end(NULL);
		
//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("listConfig", 
		"URL={URL}/signal/aggregateCaseAlert/listConfig?adhocRun=false&draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=productSelection&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=pecCount&"
		"columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=closedPecCount&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertPriority&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true"
		"&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateRagne&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=9&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1596109040717", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	
	lr_end_transaction("S10_03_NavigateTriggeredAlertsQuantitativeReview",LR_AUTO);

	lr_think_time(3);

	
	lr_start_transaction("S10_04_Search_QuantitativeAltert");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_reg_find("Search=Body",
		"Text={AlertName}",
		LAST);

	web_url("listConfig_2", 
		"URL={URL}/signal/aggregateCaseAlert/listConfig?adhocRun=false&draw=2&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=productSelection&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=pecCount&"
		"columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=closedPecCount&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertPriority&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true"
		"&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateRagne&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=9&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D={AlertName}&search%5Bregex%5D=false&_=1596109040720", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t129.inf", 
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
		"URL={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"URL={URL}/signal/assets/query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t132.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"URL={URL}/signal/assets/app/bootstrap-modal-popover/bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t133.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"URL={URL}/signal/assets/app/pvs/bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t134.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t135.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"URL={URL}/signal/assets/app/pvs/businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t136.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t137.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"URL={URL}/signal/assets/colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t138.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"URL={URL}/signal/assets/app/pvs/updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t139.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fixedColumns-18e4b58b095bead044c38f2fbb3fd070.css", 
		"URL={URL}/signal/assets/app/pvs/fixedColumns-18e4b58b095bead044c38f2fbb3fd070.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t140.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("disposition-change-cc5b2f75a9cd176f1ce0ecd1578ec974.js", 
		"URL={URL}/signal/assets/app/pvs/disposition/disposition-change-cc5b2f75a9cd176f1ce0ecd1578ec974.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t141.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("priority-change-13788bc067cf5f50f18a400bbf32805f.js", 
		"URL={URL}/signal/assets/app/pvs/priority/priority-change-13788bc067cf5f50f18a400bbf32805f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t142.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("backbone-fb26971962c1315514c8ede192bc0252.js", 
		"URL={URL}/signal/assets/backbone/backbone-fb26971962c1315514c8ede192bc0252.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t143.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"URL={URL}/signal/assets/yadcf/jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t144.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"URL={URL}/signal/assets/backbone/underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t145.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("productEventHistoryTable-e9d8010929d435ee34f500c4b9421495.js", 
		"URL={URL}/signal/assets/app/pvs/productEventHistory/productEventHistoryTable-e9d8010929d435ee34f500c4b9421495.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t146.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"URL={URL}/signal/assets/app/pvs/caseHistory/caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t147.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t148.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("advancedFilterQueryBuilder-e4d8d67c8c1097e3a3366370ca4a0fc2.js", 
		"URL={URL}/signal/assets/app/pvs/advancedFilter/advancedFilterQueryBuilder-e4d8d67c8c1097e3a3366370ca4a0fc2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t149.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t150.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("agg_case_alert_details-8d806ca22a2bf202b9cc33c007f84a35.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/agg_case_alert_details-8d806ca22a2bf202b9cc33c007f84a35.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t151.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"URL={URL}/signal/assets/app/pvs/query/to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t152.inf", 
		LAST);

//	
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("fetchSubGroupsMap", 
		"URL={URL}/signal/aggregateCaseAlert/fetchSubGroupsMap?dataSource=pva", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("commonTagDetails", 
		"URL={URL}/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id=6564&_=1596109086458", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	
//	web_revert_auto_header("X-Requested-With");

	web_url("info_3", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_header("Upgrade", 
//		"websocket");

//	web_url("websocket_3", 
//		"URL={URL}/signal/stomp/944/7kxesdma/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t158.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_concurrent_end(NULL);
	
	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("{Config_Id}", 
		"Action={URL}/signal/aggregateCaseAlert/listByExecutedConfig/{Config_Id}?callingScreen=review&cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isArchived=false&isFilterRequest=false&filters=%5B%5D&frequency=", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
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

//	web_add_header("Accept", 
//		"*/*");

	web_concurrent_start(NULL);

	web_url("priority.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/priority.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t160.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("action_drop_down.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/action_drop_down.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t161.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("tags_details.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/tags_details.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t162.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("tags_details_view_all.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/tags_details_view_all.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t163.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("disposition.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/disposition.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t164.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	
	lr_end_transaction("S10_05_ClickOnAlertName",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_06_ClickOnCaseSeries");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment: Automatic rules - Do not change!  
Original value='{Config_Id}' 
Name ='configId' 
Type ='Manual'*/
//	web_reg_save_param_ex(
//		"ParamName=configId",
//		"LB/IC=executedConfigId = \"",
//		"RB/IC=\";",
//		SEARCH_FILTERS,
//		"Scope=Body",
//		"IgnoreRedirections=Yes",
//		"RequestUrl=*/details*",
//		LAST);

	web_reg_find("Search=Body",
		"Text=Case Series",
		LAST);

	web_url("caseSeriesDetails", 
		"URL={URL}/signal/singleCaseAlert/caseSeriesDetails?aggExecutionId={Config_Id}&aggAlertId={Altert_Id1}&aggCountType=NEW_COUNT&productId=100195&ptCode=10019842&type=NEW&typeFlag=CUMM_FLAG&isArchived=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("highcharts-3d-65774008a3b78b30a394568a24c6af09.js",
		"URL={URL}/signal/assets/vendorUi/highcharts/highcharts-3d-65774008a3b78b30a394568a24c6af09.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t168.inf",
		LAST);

	web_url("highcharts-more-f214354c75a376fd86847242d26a1023.js",
		"URL={URL}/signal/assets/vendorUi/highcharts/highcharts-more-f214354c75a376fd86847242d26a1023.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t169.inf",
		LAST);

	web_url("grid-rx-b439bf122addf135d43063a53d34f9d7.js",
		"URL={URL}/signal/assets/vendorUi/highcharts/themes/grid-rx-b439bf122addf135d43063a53d34f9d7.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t170.inf",
		LAST);

	web_url("highcharts-de65192df8733b7a60482497a875df4c.js",
		"URL={URL}/signal/assets/vendorUi/highcharts/highcharts-de65192df8733b7a60482497a875df4c.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t171.inf",
		LAST);

	web_url("similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js",
		"URL={URL}/signal/assets/app/pvs/similarCases/similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t172.inf",
		LAST);

	web_url("single_case_alert_details-09363ee86eb158f849b41946e0442b37.js",
		"URL={URL}/signal/assets/app/pvs/alerts_review/single_case_alert_details-09363ee86eb158f849b41946e0442b37.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t173.inf",
		LAST);

	web_url("caseHistoryTable-1e8c84a2d7ab964eba716ee12d217be0.js",
		"URL={URL}/signal/assets/app/pvs/caseHistory/caseHistoryTable-1e8c84a2d7ab964eba716ee12d217be0.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t174.inf",
		LAST);

	

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("commonTagDetails_2",
		"URL={URL}/signal/commonTag/commonTagDetails",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t175.inf",
		"Mode=HTTP",
		LAST);

	web_url("viewColumnInfo_2",
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id=6559&_=1596109135915",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t176.inf",
		"Mode=HTTP",
		LAST);

	
//	web_revert_auto_header("X-Requested-With");

	web_url("info_4",
		"URL={URL}/signal/stomp/info",
		"Resource=0",
		"RecContentType=application/json",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
		"Snapshot=t178.inf",
		"Mode=HTTP",
		LAST);
	
	web_concurrent_end(NULL);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("{Config_Id}",
		"Action={URL}/signal/singleCaseAlert/listByExecutedConfig/{Config_Id}?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isArchived=false&isFilterRequest=false&filters=%5B%5D&isFaers=false",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={Config_Id}&isFaers=&isCaseSeries=true",
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

//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_4", 
//		"URL={URL}/signal/stomp/290/b2l1e3pe/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t180.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_end_transaction("S10_06_ClickOnCaseSeries",LR_AUTO);

	lr_think_time(3);


	lr_start_transaction("S10_07_SaveCaseSeries");

	web_url("generateCaseSeries", 
		"URL={URL}/signal/aggregateCaseAlert/generateCaseSeries?metaInfo=id:{Altert_Id1},typeFlag:CUMM_FLAG,type:NEW,executedConfigId:{Config_Id},productId:100195,ptCode:10019842&seriesName=NORFLOXACIN_Hepatomegaly_{Config_Id}5&isArchived=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S10_07_SaveCaseSeries",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_08_ClickonReport");

	web_url("discardTempChanges", 
		"URL={URL}/signal/viewInstance/discardTempChanges?viewInstance.id=6564", 
		"Resource=0", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Report Library",
		LAST);

	web_url("index", 
		"URL={URL}/signal/template/index?configId={Config_Id}&type=NEW&alertId={Altert_Id1}&typeFlag=CUMM_FLAG", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"URL={URL}/signal/assets/app/dms/dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/template/index?configId={Config_Id}&type=NEW&alertId={Altert_Id1}&typeFlag=CUMM_FLAG", 
		"Snapshot=t188.inf", 
		LAST);

	web_url("template-71bb2f4a5d7b0f5d9ca4bad0d92ac989.js", 
		"URL={URL}/signal/assets/app/pvs/template/template-71bb2f4a5d7b0f5d9ca4bad0d92ac989.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/template/index?configId={Config_Id}&type=NEW&alertId={Altert_Id1}&typeFlag=CUMM_FLAG", 
		"Snapshot=t189.inf", 
		LAST);

	web_concurrent_end(NULL);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("getDmsFolders", 
		"URL={URL}/signal/controlPanel/getDmsFolders?folder=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/template/index?configId={Config_Id}&type=NEW&alertId={Altert_Id1}&typeFlag=CUMM_FLAG", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("dataTables_en.json", 
		"URL={URL}/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/template/index?configId={Config_Id}&type=NEW&alertId={Altert_Id1}&typeFlag=CUMM_FLAG", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	
	web_revert_auto_header("X-Requested-With");

	web_url("info_5", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/template/index?configId={Config_Id}&type=NEW&alertId={Altert_Id1}&typeFlag=CUMM_FLAG", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getGeneratedReports", 
		"URL={URL}/signal/template/getGeneratedReports?configId={Config_Id}&alertId={Altert_Id1}&_=1596109196258", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/template/index?configId={Config_Id}&type=NEW&alertId={Altert_Id1}&typeFlag=CUMM_FLAG", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_5", 
//		"URL={URL}/signal/stomp/010/d656_5t4/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t195.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("templates", 
		"URL={URL}/signal/api/templates?_=1596109196259", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/template/index?configId={Config_Id}&type=NEW&alertId={Altert_Id1}&typeFlag=CUMM_FLAG", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	
	lr_end_transaction("S10_08_ClickonReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S10_09_ClickBack");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_2", 
		"URL={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/review", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchSubGroupsMap_2", 
		"URL={URL}/signal/aggregateCaseAlert/fetchSubGroupsMap?dataSource=pva", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("commonTagDetails_3", 
		"URL={URL}/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_3", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id=6564&_=1596109227310", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	
	web_revert_auto_header("X-Requested-With");

	web_url("info_6", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("{Config_Id}_2", 
		"Action={URL}/signal/aggregateCaseAlert/listByExecutedConfig/{Config_Id}?callingScreen=review&cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isArchived=false&isFilterRequest=false&filters=%5B%5D&frequency=", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
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


	lr_end_transaction("S10_09_ClickBack",LR_AUTO);

	lr_think_time(3);


	lr_start_transaction("S10_10_Select2CasesandclickonDisposition");

	web_url("bulk_operation_options.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/bulk_operation_options.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t209.inf", 
		LAST);


	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("changeDisposition", 
		"Action={URL}/signal/aggregateCaseAlert/changeDisposition", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=selectedRows", "Value=[{\"configObj.id\":{ConfigObjId},\"executedConfigObj.id\":{Config_Id},\"alert.id\":{Altert_Id1}},{\"configObj.id\":{ConfigObjId},\"executedConfigObj.id\":{Config_Id},\"alert.id\":{Alert_Id2}}]", ENDITEM, 
		"Name=justification", "Value=Validation of current case/PEC based on available evidences", ENDITEM, 
		"Name=targetDisposition.id", "Value=37", ENDITEM, 
		"Name=incomingDisposition", "Value=Review Required", ENDITEM, 
		"Name=isArchived", "Value=false", ENDITEM, 
		LAST);

	web_submit_data("{Config_Id}_3", 
		"Action={URL}/signal/aggregateCaseAlert/listByExecutedConfig/{Config_Id}?callingScreen=review&cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isArchived=false&isFilterRequest=false&filters=%5B%5D&frequency=", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/details?callingScreen=review&configId={Config_Id}", 
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

	
	lr_end_transaction("S10_10_Select2CasesandclickonDisposition",LR_AUTO);

	lr_think_time(3);

	

	return 0;
}