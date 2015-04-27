#ifndef _NET_PROTO_H_
#define _NET_PROTO_H_

/* This file is automatically generated with "make proto". DO NOT EDIT */


/* The following definitions come from utils/net.c  */

uint32 get_sec_channel_type(const char *param) ;
int net_run_function(int argc, const char **argv, struct functable *table, 
		     int (*usage_fn)(int argc, const char **argv));
int net_run_function2(int argc, const char **argv, const char *whoami,
		      struct functable2 *table);
NTSTATUS connect_to_service(struct cli_state **c, struct in_addr *server_ip,
					const char *server_name, 
					const char *service_name, 
					const char *service_type);
NTSTATUS connect_to_ipc(struct cli_state **c, struct in_addr *server_ip,
					const char *server_name);
NTSTATUS connect_to_ipc_anonymous(struct cli_state **c,
			struct in_addr *server_ip, const char *server_name);
NTSTATUS connect_to_ipc_krb5(struct cli_state **c,
			struct in_addr *server_ip, const char *server_name);
NTSTATUS connect_dst_pipe(struct cli_state **cli_dst, struct rpc_pipe_client **pp_pipe_hnd, int pipe_num);
int net_use_machine_password(void) ;
BOOL net_find_server(const char *domain, unsigned flags, struct in_addr *server_ip, char **server_name);
BOOL net_find_pdc(struct in_addr *server_ip, fstring server_name, const char *domain_name);
struct cli_state *net_make_ipc_connection( unsigned flags );
struct cli_state *net_make_ipc_connection_ex( const char *domain, const char *server,
                                              struct in_addr *ip, unsigned flags);
int net_help_afs(int argc, const char **argv);

/* The following definitions come from utils/net_ads.c  */

int net_ads_usage(int argc, const char **argv);
int net_ads_check(void);
int net_ads_user(int argc, const char **argv);
int net_ads_group(int argc, const char **argv);
int net_ads_testjoin(int argc, const char **argv);
int net_ads_join(int argc, const char **argv);
int net_ads_printer_usage(int argc, const char **argv);
void do_drv_upgrade_printer(int msg_type, struct process_id src,
			    void *buf, size_t len);
int net_ads_changetrustpw(int argc, const char **argv);
int net_ads_keytab(int argc, const char **argv);
int net_ads_help(int argc, const char **argv);
int net_ads(int argc, const char **argv);
int net_ads_keytab(int argc, const char **argv);
int net_ads_usage(int argc, const char **argv);
int net_ads_help(int argc, const char **argv);
int net_ads_changetrustpw(int argc, const char **argv);
int net_ads_join(int argc, const char **argv);
int net_ads_user(int argc, const char **argv);
int net_ads_group(int argc, const char **argv);
int net_ads_check(void);
int net_ads(int argc, const char **argv);

/* The following definitions come from utils/net_cache.c  */

int net_cache(int argc, const char **argv);

/* The following definitions come from utils/net_domain.c  */

NTSTATUS netdom_leave_domain( TALLOC_CTX *mem_ctx, struct cli_state *cli, 
                         DOM_SID *dom_sid );
int netdom_store_machine_account( const char *domain, DOM_SID *sid, const char *pw );
NTSTATUS netdom_get_domain_sid( TALLOC_CTX *mem_ctx, struct cli_state *cli, DOM_SID **sid );
NTSTATUS netdom_join_domain( TALLOC_CTX *mem_ctx, struct cli_state *cli, 
                           DOM_SID *dom_sid, const char *clear_pw,
                           enum netdom_domain_t dom_type );

/* The following definitions come from utils/net_groupmap.c  */

int net_help_groupmap(int argc, const char **argv);
int net_groupmap(int argc, const char **argv);

/* The following definitions come from utils/net_help.c  */

int net_common_methods_usage(int argc, const char**argv);
int net_common_flags_usage(int argc, const char **argv);
int net_help_user(int argc, const char **argv);
int net_help_group(int argc, const char **argv);
int net_help_join(int argc, const char **argv);
int net_help_share(int argc, const char **argv);
int net_help_file(int argc, const char **argv);
int net_help_printer(int argc, const char **argv);
int net_help_status(int argc, const char **argv);
int net_help(int argc, const char **argv);

/* The following definitions come from utils/net_idmap.c  */

int net_help_idmap(int argc, const char **argv);
int net_idmap(int argc, const char **argv);

/* The following definitions come from utils/net_lookup.c  */

int net_lookup_usage(int argc, const char **argv);
int net_lookup(int argc, const char **argv);

/* The following definitions come from utils/net_rap.c  */

int net_rap_file_usage(int argc, const char **argv);
int net_rap_file(int argc, const char **argv);
int net_rap_share_usage(int argc, const char **argv);
int net_rap_share(int argc, const char **argv);
int net_rap_session_usage(int argc, const char **argv);
int net_rap_session(int argc, const char **argv);
int net_rap_server_usage(int argc, const char **argv);
int net_rap_server(int argc, const char **argv);
int net_rap_domain_usage(int argc, const char **argv);
int net_rap_domain(int argc, const char **argv);
int net_rap_printq_usage(int argc, const char **argv);
int net_rap_printq(int argc, const char **argv);
int net_rap_user(int argc, const char **argv);
int net_rap_group_usage(int argc, const char **argv);
int net_rap_group(int argc, const char **argv);
int net_rap_groupmember_usage(int argc, const char **argv);
int net_rap_groupmember(int argc, const char **argv);
int net_rap_validate_usage(int argc, const char **argv);
int net_rap_validate(int argc, const char **argv);
int net_rap_service_usage(int argc, const char **argv);
int net_rap_service(int argc, const char **argv);
int net_rap_password_usage(int argc, const char **argv);
int net_rap_password(int argc, const char **argv);
int net_rap_admin_usage(int argc, const char **argv);
int net_rap_admin(int argc, const char **argv);
int net_rap_usage(int argc, const char **argv);
int net_rap_help(int argc, const char **argv);
int net_rap(int argc, const char **argv);

/* The following definitions come from utils/net_rpc.c  */

NTSTATUS net_get_remote_domain_sid(struct cli_state *cli, TALLOC_CTX *mem_ctx,
				   DOM_SID **domain_sid, char **domain_name);
int run_rpc_command(struct cli_state *cli_arg,
			const int pipe_idx,
			int conn_flags,
			rpc_command_fn fn,
			int argc,
			const char **argv) ;
int net_rpc_changetrustpw(int argc, const char **argv) ;
int net_rpc_join(int argc, const char **argv) ;
NTSTATUS rpc_info_internals(const DOM_SID *domain_sid,
			const char *domain_name, 
			struct cli_state *cli,
			struct rpc_pipe_client *pipe_hnd,
			TALLOC_CTX *mem_ctx,
			int argc,
			const char **argv);
int net_rpc_info(int argc, const char **argv) ;
int net_rpc_getsid(int argc, const char **argv) ;
int net_rpc_user(int argc, const char **argv) ;
struct rpc_sh_cmd *net_rpc_user_edit_cmds(TALLOC_CTX *mem_ctx,
					  struct rpc_sh_ctx *ctx);
struct rpc_sh_cmd *net_rpc_user_cmds(TALLOC_CTX *mem_ctx,
				     struct rpc_sh_ctx *ctx);
int net_rpc_group(int argc, const char **argv) ;
BOOL sync_files(struct copy_clistate *cp_clistate, pstring mask);
BOOL copy_top_level_perms(struct copy_clistate *cp_clistate, 
				const char *sharename);
int net_usersidlist(int argc, const char **argv);
int net_usersidlist_usage(int argc, const char **argv);
int net_rpc_share(int argc, const char **argv) ;
struct rpc_sh_cmd *net_rpc_share_cmds(TALLOC_CTX *mem_ctx,
				      struct rpc_sh_ctx *ctx);
int net_rpc_file(int argc, const char **argv) ;
BOOL net_rpc_check(unsigned flags);
int rpc_printer_migrate(int argc, const char **argv) ;
int rpc_printer_usage(int argc, const char **argv);
int net_rpc_printer(int argc, const char **argv) ;
int net_rpc_usage(int argc, const char **argv) ;
int net_rpc_help(int argc, const char **argv);
int net_rpc(int argc, const char **argv);

/* The following definitions come from utils/net_rpc_audit.c  */

int net_rpc_audit(int argc, const char **argv) ;

/* The following definitions come from utils/net_rpc_join.c  */

int net_rpc_join_ok(const char *domain, const char *server, struct in_addr *ip );
int net_rpc_join_newstyle(int argc, const char **argv) ;
int net_rpc_testjoin(int argc, const char **argv) ;

/* The following definitions come from utils/net_rpc_printer.c  */

NTSTATUS net_copy_fileattr(TALLOC_CTX *mem_ctx,
		  struct cli_state *cli_share_src,
		  struct cli_state *cli_share_dst, 
		  const char *src_name, const char *dst_name,
		  BOOL copy_acls, BOOL copy_attrs,
		  BOOL copy_timestamps, BOOL is_file);
NTSTATUS net_copy_file(TALLOC_CTX *mem_ctx,
		       struct cli_state *cli_share_src,
		       struct cli_state *cli_share_dst, 
		       const char *src_name, const char *dst_name,
		       BOOL copy_acls, BOOL copy_attrs,
		       BOOL copy_timestamps, BOOL is_file);
NTSTATUS rpc_printer_list_internals(const DOM_SID *domain_sid,
					const char *domain_name, 
					struct cli_state *cli,
					struct rpc_pipe_client *pipe_hnd,
					TALLOC_CTX *mem_ctx, 
					int argc,
					const char **argv);
NTSTATUS rpc_printer_driver_list_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);
NTSTATUS rpc_printer_publish_publish_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);
NTSTATUS rpc_printer_publish_unpublish_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);
NTSTATUS rpc_printer_publish_update_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);
NTSTATUS rpc_printer_publish_list_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);
NTSTATUS rpc_printer_migrate_security_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);
NTSTATUS rpc_printer_migrate_forms_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);
NTSTATUS rpc_printer_migrate_drivers_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);
NTSTATUS rpc_printer_migrate_printers_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);
NTSTATUS rpc_printer_migrate_settings_internals(const DOM_SID *domain_sid,
						const char *domain_name, 
						struct cli_state *cli,
						struct rpc_pipe_client *pipe_hnd,
						TALLOC_CTX *mem_ctx, 
						int argc,
						const char **argv);

/* The following definitions come from utils/net_rpc_registry.c  */

char* dump_regval_type( uint32 type );
void dump_regval_buffer( uint32 type, REGVAL_BUFFER *buffer );
int net_rpc_registry(int argc, const char **argv) ;

/* The following definitions come from utils/net_rpc_rights.c  */

int net_rpc_rights(int argc, const char **argv) ;
struct rpc_sh_cmd *net_rpc_rights_cmds(TALLOC_CTX *mem_ctx,
				       struct rpc_sh_ctx *ctx);

/* The following definitions come from utils/net_rpc_samsync.c  */

NTSTATUS rpc_samdump_internals(const DOM_SID *domain_sid, 
				const char *domain_name, 
				struct cli_state *cli,
				struct rpc_pipe_client *pipe_hnd,
				TALLOC_CTX *mem_ctx, 
				int argc,
				const char **argv) ;
int rpc_vampire_usage(int argc, const char **argv) ;
NTSTATUS rpc_vampire_internals(const DOM_SID *domain_sid, 
				const char *domain_name, 
				struct cli_state *cli,
				struct rpc_pipe_client *pipe_hnd,
				TALLOC_CTX *mem_ctx, 
				int argc,
				const char **argv) ;

/* The following definitions come from utils/net_rpc_service.c  */

int net_rpc_service(int argc, const char **argv) ;

/* The following definitions come from utils/net_rpc_sh_acct.c  */

struct rpc_sh_cmd *net_rpc_acct_cmds(TALLOC_CTX *mem_ctx,
				     struct rpc_sh_ctx *ctx);

/* The following definitions come from utils/net_rpc_shell.c  */

int net_rpc_shell(int argc, const char **argv);

/* The following definitions come from utils/net_sam.c  */

int net_sam(int argc, const char **argv);

/* The following definitions come from utils/net_status.c  */

int net_status(int argc, const char **argv);

/* The following definitions come from utils/net_time.c  */

int net_time_usage(int argc, const char **argv);
int net_time(int argc, const char **argv);

/* The following definitions come from utils/net_usershare.c  */

int net_usershare_usage(int argc, const char **argv);
int net_usershare_help(int argc, const char **argv);
int net_usershare(int argc, const char **argv);

/* The following definitions come from utils/net_util.c  */

BOOL is_valid_policy_hnd(const POLICY_HND *hnd);
NTSTATUS net_rpc_lookup_name(TALLOC_CTX *mem_ctx, struct cli_state *cli,
			     const char *name, const char **ret_domain,
			     const char **ret_name, DOM_SID *ret_sid,
			     enum SID_NAME_USE *ret_type);

/* The following definitions come from utils/netlookup.c  */

NTSTATUS net_lookup_name_from_sid(TALLOC_CTX *ctx,
				DOM_SID *psid,
				const char **ppdomain,
				const char **ppname);
NTSTATUS net_lookup_sid_from_name(TALLOC_CTX *ctx, const char *full_name, DOM_SID *pret_sid);

/* The following definitions come from utils/passwd_util.c  */

char *stdin_new_passwd( void);
char *get_pass( const char *prompt, BOOL stdin_get);

#endif /*  _NET_PROTO_H_  */
