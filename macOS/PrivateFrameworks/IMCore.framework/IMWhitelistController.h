//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUCallProviderManagerDelegate.h"

@class IMCommLimitsPolicyCache, NSObject<OS_dispatch_queue>, NSSet, NSString, TUCallProviderManager;

@interface IMWhitelistController : NSObject <TUCallProviderManagerDelegate>
{
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_screenTimeDispatchQueue;
    NSSet *_emergencyNumbersSet;
    IMCommLimitsPolicyCache *_policyCache;
}

+ (id)sharedInstance;
+ (id)STConversation;
+ (BOOL)isContactLimitsFeatureEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) IMCommLimitsPolicyCache *policyCache; // @synthesize policyCache=_policyCache;
@property(retain, nonatomic) NSSet *emergencyNumbersSet; // @synthesize emergencyNumbersSet=_emergencyNumbersSet;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *screenTimeDispatchQueue; // @synthesize screenTimeDispatchQueue=_screenTimeDispatchQueue;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
- (void)providersChangedForProviderManager:(id)arg1;
- (id)conversationContextForChat:(id)arg1;
- (void)registerForScreenTimeNotifications;
- (void)_participantsForChatDidChange:(id)arg1;
- (void)_addObserversToChat:(id)arg1;
- (BOOL)allowedToShowConversationForChat:(id)arg1 sync:(BOOL)arg2;
- (BOOL)allowedToShowConversationWithHandleIDs:(id)arg1 sync:(BOOL)arg2 context:(id *)arg3;
- (void)initializeContext:(id)arg1 participantIDsHash:(id)arg2;
- (void)reloadEmergencyNumbersSet;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

