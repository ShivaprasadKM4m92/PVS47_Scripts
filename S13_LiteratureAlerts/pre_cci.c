# 1 "c:\\project\\pvs\\scripts\\s13_literaturealerts\\\\combined_S13_LiteratureAlerts.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\project\\pvs\\scripts\\s13_literaturealerts\\\\combined_S13_LiteratureAlerts.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\project\\pvs\\scripts\\s13_literaturealerts\\\\combined_S13_LiteratureAlerts.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\project\\pvs\\scripts\\s13_literaturealerts\\\\combined_S13_LiteratureAlerts.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\project\\pvs\\scripts\\s13_literaturealerts\\\\combined_S13_LiteratureAlerts.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	lr_start_transaction("S13_01_OpenApplication");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

 
	web_reg_save_param_attrib(
		"ParamName=CsrfTokenId",
		"TagName=input",
		"Extract=value",
		"Name=_csrf",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/auth*",
		"LAST");

	web_reg_find("Search=Body",
		"Text=Login",
		"LAST");

	web_url("signal", 
		"URL={URL}/signal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"LAST");

	 

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"6e5406c103ef7317b32f3e6f0091183fcb5ac377");



	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_url("login-23162286b278bf1e48cb0201c9e9a644.css", 
		"URL={URL}/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t6.inf", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL={URL}/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t7.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t8.inf", 
		"LAST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_concurrent_start(0);

 
 
 
 
 
 
 

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

 
 
 
 
 
 
 

	web_concurrent_end(0);

	web_add_auto_header("User-Agent", 
		"Chrome WIN 81.0.4044.138 (8c6c7ba89cc9453625af54f11fd83179e23450fa-refs/branch-heads/4044@{#999}) channel(stable)");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Content-Encoding", 
		"gzip");

	web_add_header("Pragma", 
		"no-cache");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");



	web_add_header("Origin", 
		"{URL}");

	web_add_header("Accept", 
		"*/*");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t12.inf", 
		"LAST");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	

	

	lr_end_transaction("S13_01_OpenApplication",2);

	lr_think_time(3);

	lr_start_transaction("S13_02_Login");

	
	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"{URL}");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	 
	web_reg_save_param_ex(
		"ParamName=User_Id",
		"LB=userId = \"",
		"RB=\"",
		"SEARCH_FILTERS",
		"Scope=ALL",
		"LAST");

	web_reg_find("Search=Body",
		"Text=Dashboard",
		"LAST");

	web_submit_data("authenticate",
		"Action={URL}/signal/login/authenticate",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/signal/login/auth",
		"Snapshot=t18.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=_csrf", "Value={CsrfTokenId}", "ENDITEM",
		"Name=username", "Value={UserName}", "ENDITEM",
		"Name=password", "Value={Password}", "ENDITEM",
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(0);

	web_url("theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"URL={URL}/signal/assets/theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t19.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t20.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t21.inf", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL={URL}/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t22.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t23.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL={URL}/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t24.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t25.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL={URL}/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t26.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t27.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL={URL}/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t28.inf", 
		"LAST");

	web_concurrent_end(0);

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_concurrent_start(0);
	
	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t30.inf", 
		"LAST");

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL={URL}/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t31.inf", 
		"LAST");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t32.inf", 
		"LAST");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL={URL}/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t33.inf", 
		"LAST");

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t34.inf", 
		"LAST");

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t35.inf", 
		"LAST");

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t36.inf", 
		"LAST");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL={URL}/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t37.inf", 
		"LAST");

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL={URL}/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t38.inf", 
		"LAST");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL={URL}/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t39.inf", 
		"LAST");

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL={URL}/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t40.inf", 
		"LAST");

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL={URL}/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t41.inf", 
		"LAST");

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t42.inf", 
		"LAST");

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL={URL}/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t43.inf", 
		"LAST");

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t44.inf", 
		"LAST");

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t45.inf", 
		"LAST");

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL={URL}/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t46.inf", 
		"LAST");

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t47.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 



	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t49.inf", 
		"LAST");

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL={URL}/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t50.inf", 
		"LAST");

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t51.inf", 
		"LAST");

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t52.inf", 
		"LAST");

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t53.inf", 
		"LAST");

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t54.inf", 
		"LAST");

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t55.inf", 
		"LAST");

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL={URL}/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t56.inf", 
		"LAST");

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t57.inf", 
		"LAST");

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t58.inf", 
		"LAST");

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL={URL}/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t59.inf", 
		"LAST");

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t60.inf", 
		"LAST");

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL={URL}/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t61.inf", 
		"LAST");

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL={URL}/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t62.inf", 
		"LAST");

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL={URL}/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t63.inf", 
		"LAST");

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t64.inf", 
		"LAST");

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t65.inf", 
		"LAST");

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL={URL}/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t66.inf", 
		"LAST");

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL={URL}/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t67.inf", 
		"LAST");

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL={URL}/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t68.inf", 
		"LAST");

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL={URL}/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t69.inf", 
		"LAST");

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL={URL}/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t70.inf", 
		"LAST");

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL={URL}/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t71.inf", 
		"LAST");

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL={URL}/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t72.inf", 
		"LAST");

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t73.inf", 
		"LAST");

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL={URL}/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t74.inf", 
		"LAST");

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL={URL}/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t75.inf", 
		"LAST");

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL={URL}/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t76.inf", 
		"LAST");

	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"URL={URL}/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t77.inf", 
		"LAST");

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t78.inf", 
		"LAST");

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t79.inf", 
		"LAST");

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t80.inf", 
		"LAST");

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t81.inf", 
		"LAST");

	web_url("dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t82.inf", 
		"LAST");

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t83.inf", 
		"LAST");

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL={URL}/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t84.inf", 
		"LAST");

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL={URL}/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t85.inf", 
		"LAST");

 
 

	web_url("date_picker_template.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t86.inf", 
		"LAST");

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL={URL}/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t87.inf", 
		"LAST");

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL={URL}/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t88.inf", 
		"LAST");

 
 

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t89.inf", 
		"LAST");

 
 

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL={URL}/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t90.inf", 
		"LAST");

 
 
 
 
 

	web_url("en.json", 
		"URL={URL}/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL={URL}/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t92.inf", 
		"LAST");
	
	web_concurrent_end(0);

	web_add_header("Origin", 
		"{URL}");

	web_concurrent_start(0);

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t93.inf", 
		"LAST");

	web_add_header("Origin", 
		"{URL}");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t94.inf", 
		"LAST");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t95.inf", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 

	

	

 
 

	web_url("sideBar", 
		"URL={URL}/signal/dashboard/sideBar?_=1590470274406", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1590470274408", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("caseByStatus", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1590470274407", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1590470274409", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 



	web_url("alertByDueDate", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1590470274410", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1590470274411", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		"LAST");

 
 

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t104.inf", 
		"LAST");

	web_url("getProductByStatus_2", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1590470274412", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		"LAST");

 

	web_url("info", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	web_concurrent_end(0);
	
	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"{URL}");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("events", 
		"Action={URL}/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=start", "Value=27-Apr-2020", "ENDITEM", 
		"Name=end", "Value=08-Jun-2020", "ENDITEM", 
		"LAST");

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1590470274414", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("signalList", 
		"URL={URL}/signal/dashboard/signalList?_=1590470274415", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		"LAST");

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



	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

 
 
 
 
 
 
 

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1590470274416", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		"LAST");

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

	web_concurrent_start(0);

	

	web_add_header("Accept", 
		"*/*");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t115.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 

	lr_end_transaction("S13_02_Login",2);

	lr_think_time(3);

	
	lr_start_transaction("S13_03_NavigateLiteratureAlert");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("saveDashboardConfig", 
		"Action={URL}/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dashboardWidgetsConfig", "Value={\"pvWidgetChart-11\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-11\",\"x\":0,\"y\":7,\"height\":6,\"width\":12},\"content\":{\"id\":\"listAction\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Actions\"},\"pvWidgetChart-9\":{\"reportWidgetName\":\"Qualitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-9\",\"x\":0,\"y\":37,\"width\":6,\"height\":7},\"content\":{\"id\":\"qualitative-products-status\","
		"\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-10\":{\"reportWidgetName\":\"Quantitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-10\",\"x\":0,\"y\":43,\"width\":6,\"height\":7},\"content\":{\"id\":\"quantitative-products-status\",\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-7\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-7\",\"x\":0,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"assignedSignalTable\",\"type"
		"\":\"pvDashReports\"},\"reportWidgetName\":\"Assigned Signals\"},\"pvWidgetChart-5\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-5\",\"x\":0,\"y\":0,\"height\":6,\"width\":12},\"content\":{\"id\":\"assignedTriggeredAlerts\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Alerts\"},\"pvWidgetChart-4\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-4\",\"x\":6,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"due-date-chart\",\"type\":\""
		"pvDashChart\"},\"reportWidgetName\":\"Alert By Due Date\"},\"pvWidgetChart-6\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-6\",\"x\":6,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"calendar\",\"type\":\"pvDashCalendar\"},\"reportWidgetName\":\"Calendar\"},\"pvWidgetChart-1\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-1\",\"x\":0,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"adhoc-chart\",\"type\":\"pvDashChart\"},\""
		"reportWidgetName\":\"Ad-hoc Review By Status\"},\"pvWidgetChart-2\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-2\",\"x\":6,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"case-status-chart\",\"type\":\"pvDashChart\"},\"reportWidgetName\":\"Qualitative Review By Status\"},\"pvWidgetChart-3\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-3\",\"x\":0,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"aggregate-chart\",\"type\":\"pvDashChart\"}"
		",\"reportWidgetName\":\"Quantitative Review By Status\"},\"inbox\":{\"reportWidgetName\":\"Inbox\",\"reportWidgetDetails\":{\"id\":\"inbox\"},\"visible\":true},\"isDirty\":true}", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Alert Criteria",
		"LAST");

	web_url("create", 
		"URL={URL}/signal/literatureAlert/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);

	web_url("scheduler-9cb1a5abf9dea3870bf67a0959578bb2.js", 
		"URL={URL}/signal/assets/app/pvs/scheduler-9cb1a5abf9dea3870bf67a0959578bb2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t120.inf", 
		"LAST");

	web_url("dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t121.inf", 
		"LAST");

	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"URL={URL}/signal/assets/app/pvs/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t122.inf", 
		"LAST");

	web_url("copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t123.inf", 
		"LAST");

	web_url("copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"URL={URL}/signal/assets/copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t124.inf", 
		"LAST");

	web_url("configurationCommon-f8f219758a6f70b184f12e4897ae1571.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/configurationCommon-f8f219758a6f70b184f12e4897ae1571.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t125.inf", 
		"LAST");

	web_url("dateRangeLiterature-c3b0611a9416ab79b58c7a10d4e88796.js", 
		"URL={URL}/signal/assets/app/pvs/literatureSearch/dateRangeLiterature-c3b0611a9416ab79b58c7a10d4e88796.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t126.inf", 
		"LAST");

	web_url("configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"URL={URL}/signal/assets/configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t127.inf", 
		"LAST");

	web_url("dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t128.inf", 
		"LAST");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_end(0);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL={URL}/signal/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t130.inf", 
		"LAST");

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"URL={URL}/signal/assets/plugin/dictionary/dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t131.inf", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL={URL}/signal/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t132.inf", 
		"LAST");

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL={URL}/signal/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t133.inf", 
		"LAST");

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL={URL}/signal/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t134.inf", 
		"LAST");

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


	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 

	web_url("polymer.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

 
 
 
 
 
 
 

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer-mini.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t141.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("polymer-micro.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t143.inf", 
		"LAST");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 

	lr_end_transaction("S13_03_NavigateLiteratureAlert",2);

	lr_think_time(3);

	lr_start_transaction("S13_04_SearchAndAddProduct");

 
 
 
 
 
 
 
 

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_custom_request("searchViews", 
		"URL={URL}/signal/productDictionary/searchViews", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=contains=PENICILLIN+(UNSPECIFIED)&dictionaryLevel=3&ref_level=&exact_search=false&imp=false&dataSource=pva&filters=%7B%7D", 
		"LAST");

	web_custom_request("getSelectedItem", 
		"URL={URL}/signal/productDictionary/getSelectedItem?productId={Product_Id}&dataSource=pva&dictionaryLevel=3&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		"EncType=", 
		"LAST");

	web_submit_data("getPreLevelProductParents", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=dictionaryLevel", "Value=3", "ENDITEM", 
		"Name=currentLang", "Value=en", "ENDITEM", 
		"Name=productIds", "Value={Product_Id}", "ENDITEM", 
		"LAST");

	web_submit_data("getPreLevelProductParents_2", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=dictionaryLevel", "Value=2", "ENDITEM", 
		"Name=currentLang", "Value=en", "ENDITEM", 
		"Name=productIds", "Value=100435", "ENDITEM", 
		"LAST");

	web_submit_data("getPreLevelProductParents_3", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dataSource", "Value=pva", "ENDITEM", 
		"Name=dictionaryLevel", "Value=1", "ENDITEM", 
		"Name=currentLang", "Value=en", "ENDITEM", 
		"Name=productIds", "Value=111700", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 

	lr_end_transaction("S13_04_SearchAndAddProduct",2);

	lr_think_time(3);

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


	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("searchUserGroupList", 
		"URL={URL}/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/literatureAlert/create", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	lr_start_transaction("S13_05_CreateLiteratureAlertAlert");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Your alert is executing, and will be delivered when it is complete",
		"LAST");

	web_submit_data("run",
		"Action={URL}/signal/literatureAlert/run",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/signal/literatureAlert/create",
		"Snapshot=t156.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=delimiter", "Value=none", "ENDITEM",
		"Name=owner", "Value={User_Id}", "ENDITEM",
		"Name=optradio", "Value=on", "ENDITEM",
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"{ProductName} N/A\",\"id\":\"{Product_Id}\"}],\"4\":[]}", "ENDITEM",
		"Name=JSONExpressionValues", "Value=", "ENDITEM",
		"Name=eventSelection", "Value=", "ENDITEM",
		"Name=searchString", "Value=", "ENDITEM",
		"Name=dateRangeEnum", "Value=LAST_WEEK", "ENDITEM",
		"Name=dateRangeEnum", "Value=", "ENDITEM",
		"Name=relativeDateRangeValue", "Value=1", "ENDITEM",
		"Name=startDateAbsoluteCustomFreq", "Value=", "ENDITEM",
		"Name=endDateAbsoluteCustomFreq", "Value=", "ENDITEM",
		"Name=dateRangeStartAbsolute", "Value=", "ENDITEM",
		"Name=dateRangeStart", "Value=null", "ENDITEM",
		"Name=dateRangeStart", "Value=", "ENDITEM",
		"Name=dateRangeEndAbsolute", "Value=", "ENDITEM",
		"Name=dateRangeEnd", "Value=null", "ENDITEM",
		"Name=dateRangeEnd", "Value=", "ENDITEM",
		"Name=_pubmed", "Value=", "ENDITEM",
		"Name=_embase", "Value=", "ENDITEM",
		"Name=_event_exactSearch", "Value=", "ENDITEM",
		"Name=_product_exactSearch", "Value=", "ENDITEM",
		"Name=_study_exactSearch", "Value=", "ENDITEM",
		"Name=_study_imp", "Value=", "ENDITEM",
		"Name=name", "Value={Li_AlertName}", "ENDITEM",
		"Name=priority", "Value=6657", "ENDITEM",
		"Name=assignedToValue", "Value=User_{User_Id}", "ENDITEM",
		"Name=TimeZoneSelectlist", "Value=", "ENDITEM",
		"Name=intervalSelectlist", "Value=none", "ENDITEM",
		"Name=monthlySelectlist", "Value=1", "ENDITEM",
		"Name=repeat-monthly", "Value=bysetpos", "ENDITEM",
		"Name=monthlySelectlist", "Value=1", "ENDITEM",
		"Name=monthlySelectlist", "Value=SU", "ENDITEM",
		"Name=repeat-yearly", "Value=bymonthday", "ENDITEM",
		"Name=monthlySelectlist", "Value=1", "ENDITEM",
		"Name=monthlySelectlist", "Value=1", "ENDITEM",
		"Name=yearlyDateSelectlist", "Value=1", "ENDITEM",
		"Name=yearlyDaySelectlist", "Value=SU", "ENDITEM",
		"Name=yearlyDaySelectlist", "Value=1", "ENDITEM",
		"Name=EndSelectlist", "Value=never", "ENDITEM",
		"Name=isEnabled", "Value=true", "ENDITEM",
		"Name=schedulerTime", "Value={Scheduler_Time}", "ENDITEM",
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-05-26T05:18Z\",\"timeZone\":{\"name\":\"UTC\",\"offset\":\"+00:00\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", "ENDITEM",
		"Name=configSelectedTimeZone", "Value=UTC", "ENDITEM",
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", "ENDITEM",
		"Name=repeatExecution", "Value=false", "ENDITEM",
		"Name=schedulerFrom", "Value=createPage", "ENDITEM",
		"Name=previousAction", "Value=create", "ENDITEM",
		"Name=_csrf", "Value={CsrfTokenId}", "ENDITEM",
		"LAST");

	web_concurrent_start(0);

	web_url("executionStatus-8725fcdfa337d82dd022ca3ec2bde5f2.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/executionStatus-8725fcdfa337d82dd022ca3ec2bde5f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=S13_SEARCH_ALERT", 
		"Snapshot=t157.inf", 
		"LAST");

	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"URL={URL}/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=S13_SEARCH_ALERT", 
		"Snapshot=t158.inf", 
		"LAST");

	web_url("executionStatus-e35e74007b0b5422a22b611690365bff.css", 
		"URL={URL}/signal/assets/executionStatus-e35e74007b0b5422a22b611690365bff.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=S13_SEARCH_ALERT", 
		"Snapshot=t159.inf", 
		"LAST");

	web_url("fuelux-f9b4ad7ab3a7ffc6f349ea76f519d981.js", 
		"URL={URL}/signal/assets/fuelux/fuelux-f9b4ad7ab3a7ffc6f349ea76f519d981.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=S13_SEARCH_ALERT", 
		"Snapshot=t160.inf", 
		"LAST");

	web_url("fuelux-6f987968c570ff7348ebf0d29c49fdbe.css", 
		"URL={URL}/signal/assets/fuelux-6f987968c570ff7348ebf0d29c49fdbe.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=S13_SEARCH_ALERT", 
		"Snapshot=t161.inf", 
		"LAST");

	web_concurrent_end(0);

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


	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL={URL}/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=S13_SEARCH_ALERT", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=S13_SEARCH_ALERT", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("executionStatus", 
		"URL={URL}/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=S13_SEARCH_ALERT&_=1590470432177", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=S13_SEARCH_ALERT", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		"LAST");

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



	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

 
 
 
 
 
 
 

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


	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	lr_end_transaction("S13_05_CreateLiteratureAlertAlert",2);

	lr_think_time(3);

 
 
 
 
 
 
 
 

	lr_start_transaction("S13_06_Logout");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Login",
		"LAST");

	web_url("index", 
		"URL={URL}/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=S13_SEARCH_ALERT", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S13_06_Logout",2);

	lr_think_time(3);

	return 0;
}
# 5 "c:\\project\\pvs\\scripts\\s13_literaturealerts\\\\combined_S13_LiteratureAlerts.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\project\\pvs\\scripts\\s13_literaturealerts\\\\combined_S13_LiteratureAlerts.c" 2

