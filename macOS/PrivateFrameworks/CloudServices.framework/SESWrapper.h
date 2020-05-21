//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSDictionary, NSString;

@interface SESWrapper : NSObject
{
    _Bool _useCKVR;
    _Bool _recoveryPassphraseMutable;
    NSString *_decodedLabel;
    NSDate *_escrowDate;
    NSData *_recoveryBlob;
    struct ccses_crypto_t *_ccses;
    struct ccsrp_ctx *_srp;
    struct ckvr_srp_context *_ckvr;
    NSString *_dsid;
    NSString *_recoveryPassphrase;
    NSString *_label;
    NSString *_recordID;
    NSDictionary *_escrowRecord;
    NSData *_escrowBlob;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *escrowBlob; // @synthesize escrowBlob=_escrowBlob;
@property(readonly, copy, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(readonly, copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) _Bool recoveryPassphraseMutable; // @synthesize recoveryPassphraseMutable=_recoveryPassphraseMutable;
@property(copy, nonatomic) NSString *recoveryPassphrase; // @synthesize recoveryPassphrase=_recoveryPassphrase;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) struct ckvr_srp_context *ckvr; // @synthesize ckvr=_ckvr;
@property(readonly, nonatomic) _Bool useCKVR; // @synthesize useCKVR=_useCKVR;
@property(readonly, nonatomic) struct ccsrp_ctx *srp; // @synthesize srp=_srp;
@property(readonly, nonatomic) struct ccses_crypto_t *ccses; // @synthesize ccses=_ccses;
@property(retain) NSData *recoveryBlob; // @synthesize recoveryBlob=_recoveryBlob;
@property(copy, nonatomic) NSDate *escrowDate; // @synthesize escrowDate=_escrowDate;
@property(copy, nonatomic) NSString *decodedLabel; // @synthesize decodedLabel=_decodedLabel;
- (void)dealloc;
- (id)recoveryResponseForBlob:(id)arg1;
-     // Error parsing type: @40@0:8@16^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}24^{ccrsa_full_ctx=QQ^{cczp_funcs}[0Q]}32, name: srpResponseForEscrowBlob:withKey:withFullCCKey:
- (id)decodedEscrowRecordFromData:(id)arg1;
-     // Error parsing type: @32@0:8^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}16^@24, name: encodedEscrowRecordWithPublicKey:error:
- (id)srpRecoveryBlobFromData:(id)arg1 error:(id *)arg2;
- (void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2;
- (unsigned long long)srpPublicKeySize;
- (unsigned long long)srpKeySize;
- (id)srpInitBlob;
- (id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5 ckvrFlag:(_Bool)arg6;
- (id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5;
- (id)initWithRequest:(id)arg1 ckvrFlag:(_Bool)arg2;
- (id)initWithRequest:(id)arg1;

@end

