//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, SMBSocket;

@interface SMBPiston : NSObject
{
    // Error parsing type: {smb_session="session_lock"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}"sv_caps"I"sv_sessflags"S"sv_dialect"S"sv_neg_context_cnt"S"sv_capabilities"I"sv_maxtransact"I"sv_maxread"I"sv_maxwrite"I"sv_guid"[16C]"sv_security_mode"S"sv_mechs"I"gss_context"^{gss_ctx_id_t_desc_struct}"gss_cred"^{gss_cred_id_t_desc_struct}"gss_in_token"{gss_buffer_desc_struct="length"Q"value"^v}"gss_out_token"{gss_buffer_desc_struct="length"Q"value"^v}"sess_setup_nt_status"I"neg_capabilities"I"client_guid"[16C]"neg_security_mode"S"neg_dialect_count"S"neg_dialects"[8S]"session_key"*"session_key_len"I"smb3_signing_key"*"smb3_signing_key_len"I"smb3_encrypt_key"[16C]"smb3_encrypt_key_len"I"smb3_decrypt_key"[16C]"smb3_decrypt_key_len"I"smb3_nonce_high"Q"smb3_nonce_low"Q"session_flags"Q"option_flags"Q"session_id"Q"prev_session_id"Q"session_server_caps"Q"session_volume_caps"Q"session_model_infop"*"session_credits_lock"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}"session_message_id"AQ"session_credits_granted"AI"session_credits_ss_granted"AI"session_credits_max"AI"session_credits_wait"Ai"session_credits_wait_cond"{_opaque_pthread_cond_t="__sig"q"__opaque"[40c]}"session_req_pending"I"session_oldest_message_id"Q}, name: session
    int free_state_mutex;
    int free_credit_mutex;
    int free_credit_cond;
    int free_share_list_mutex;
    int free_session_mutex;
    struct _opaque_pthread_mutex_t state_mutex;
    struct _opaque_pthread_mutex_t share_list_mutex;
    NSMutableDictionary *_shareList;
    SMBSocket *_sock;
    NSString *_userName;
    NSString *_password;
    NSString *_realm;
}

- (void).cxx_destruct;
@property(retain) NSString *realm; // @synthesize realm=_realm;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *userName; // @synthesize userName=_userName;
@property __weak SMBSocket *sock; // @synthesize sock=_sock;
@property(retain) NSMutableDictionary *shareList; // @synthesize shareList=_shareList;
- (void)share_list_unlock;
- (void)share_list_lock;
- (void)setOption:(const char *)arg1 toValue:(unsigned int)arg2;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (id)getShare:(unsigned int)arg1;
-     // Error parsing type: ^{smb_session={_opaque_pthread_mutex_t=q[56c]}ISSSIIII[16C]SI^{gss_ctx_id_t_desc_struct}^{gss_cred_id_t_desc_struct}{gss_buffer_desc_struct=Q^v}{gss_buffer_desc_struct=Q^v}II[16C]SS[8S]*I*I[16C]I[16C]IQQQQQQQQ*{_opaque_pthread_mutex_t=q[56c]}AQAIAIAIAi{_opaque_pthread_cond_t=q[40c]}IQ}16@0:8, name: getSessionPtr
- (int)getPeerAddress:(struct sockaddr_storage *)arg1 withLength:(unsigned int *)arg2;
- (unsigned int)getCreateOptions:(id)arg1 onShareID:(unsigned int)arg2 parentName:(id)arg3 streamName:(id)arg4 vnodeType:(int)arg5 fileAttributes:(unsigned int)arg6 checkForReparsePoint:(unsigned int)arg7;
- (unsigned int)getCreateOptions:(id)arg1 parentName:(id)arg2 streamName:(id)arg3 vnodeType:(int)arg4 fileAttributes:(unsigned int)arg5 checkForReparsePoint:(unsigned int)arg6;
- (void)resolveID:(struct smb_create *)arg1 forShareID:(unsigned int)arg2 returnPath:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)serverCopyFile:(struct smb_server_copy_file *)arg1 onShareID:(unsigned int)arg2 from:(id)arg3 to:(id)arg4 withOptions:(unsigned long long)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)validateNegotiate:(struct smb_ioctl *)arg1 onShareID:(unsigned int)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)validateNegotiate:(struct smb_ioctl *)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)ioctl:(struct smb_ioctl *)arg1 onShareID:(unsigned int)arg2 pipeWaitOnName:(id)arg3 withTimeOut:(long long)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)ioctl:(struct smb_ioctl *)arg1 onShareID:(unsigned int)arg2 getDFSRefFor:(id)arg3 withRecvData:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)leaseBreakAcknowledge:(struct smb_lease_break_ack *)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)queryShareInformation:(struct smb_query_share *)arg1 forShareID:(unsigned int)arg2 forModelInfo:(id)arg3 forFileSystemName:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)treeDisconnect:(struct smb_tree_connect_disc *)arg1 fromShareID:(unsigned int)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)treeConnect:(struct smb_tree_connect_disc *)arg1 toShare:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)logoff:(struct smb_login_out *)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)logoff;
- (void)login:(struct smb_login_out *)arg1 asUser:(id)arg2 withPassword:(id)arg3 inRealm:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)disconnect;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 port:(unsigned short)arg3 withTimeOut:(unsigned int)arg4 outParameters:(struct smb_negotiate *)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 port:(unsigned short)arg3 outParameters:(struct smb_negotiate *)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 outParameters:(struct smb_negotiate *)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 withVPNCookie:(id)arg3 outParameters:(struct smb_negotiate *)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end

