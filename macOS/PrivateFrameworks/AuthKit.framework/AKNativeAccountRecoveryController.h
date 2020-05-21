//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDPAuthProvider.h"

@class AKAccountRecoveryContext, CDPRecoveryController, NSString;

@interface AKNativeAccountRecoveryController : NSObject <CDPAuthProvider>
{
    CDPRecoveryController *_recoveryController;
    AKAccountRecoveryContext *_recoveryContext;
    id <CDPStateUIProvider> _cdpUiProvider;
}

+ (BOOL)shouldSendServerResponseForRecoveredInfo:(id)arg1 withRecoveryError:(id)arg2;
+ (id)postBodyForiCSCServerUIResponseWithContext:(id)arg1 recoveryError:(id)arg2;
+ (id)requestForRecoveryCompletionWithContext:(id)arg1 recoveredInfo:(id)arg2 recoveryError:(id)arg3;
- (void).cxx_destruct;
- (id)_mapICSCRecoveryResultsToAuthKit:(id)arg1;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(CDUnknownBlockType)arg2;
- (void)dismissNativeRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentNativeRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

