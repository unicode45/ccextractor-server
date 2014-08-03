#ifndef PARAMS_H
#define PARAMS_H

/* Default config constants: */
#define DFT_CONFIG_FILE "./server.ini"
#define DFT_PORT 2048
#define DFT_MAX_CONN 10
#define DFT_BUF_FILE_DIR "./tmp"
#define DFT_BUF_FILE_LINES 20
#define DFT_LOG_DIR "./logs"
#define DFT_USE_PWD 1
#define DFT_WRONG_PASSW_DELAY 2
#define DFT_PASSW_LEN 10
#define DFT_CREATE_LOGS 0
#define DFT_ARCHIVE_DIR "./cc"
#define DFT_ARCHIVE_INFO_FILENAME "info.txt"
#define DFT_CLIENT_LOGS 1
#define DFT_BUF_MAX_LINES 40
#define DFT_BUF_MIN_LINES 30
#define DFT_CCEXTRACTOR_PATH "./ccextractor"
#define DFT_CCE_OUTPUT_DIR "./cce"
#define DFT_DB_HOST "localhost"
#define DFT_DB_USER "root"
#define DFT_DB_PASSWORD "root"
#define DFT_DB_DBNAME "cce"

#define USERS_FILE_PATH "connections.txt"
#define TMP_FILE_PATH "./tmp_file" /* temprorary file for delete_n_lines */
#define INF_READ_DELAY 300000000 /* Nano sec less than 10^9 */
#define BUFFER_SIZE 20480
#define BIN_HEADER_LEN 11
#define CLI_TBL_LOCK "cli_tbl_lock"
#define PR_TBL_LOCK "pr_tbl_lock"

struct cfg_t
{
	int port;
	unsigned max_conn;
	unsigned use_pwd : 1;
	char *pwd;
	int wrong_pwd_delay;
	char *buf_dir;
	unsigned buf_max_lines;
	unsigned buf_min_lines;
	char *arch_dir;
	char *arch_info_filename;
	unsigned create_logs : 1;
	unsigned log_clients : 1;
	char *log_dir;
	char *cce_path;
	char *cce_output_dir;
	char *db_host;
	char *db_user;
	char *db_passwd;
	char *db_dbname;

	unsigned is_inited : 1;
} cfg;

int init_cfg();

int parse_config_file();

#endif /* end of include guard: PARAMS_H */

