//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIResponseKitManaging.h"

@class NSString;

@interface TIResponseKitManager : NSObject <TIResponseKitManaging>
{
}

+ (id)singletonInstance;
+ (id)sharedTIResponseKitManager;
- (void)persistResponseKitDynamicDataToDisk;
- (void)resetResponseKit;
- (void)resetResponseKitConversationHistory;
- (void)updateResponseKitConversationHistoryWithMessage:(id)arg1 withSenderID:(id)arg2 withTimestamp:(id)arg3;
- (void)registerResponseKitResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 withClientID:(id)arg4 withSenderID:(id)arg5 withRecipientID:(id)arg6 withTimestamp:(id)arg7 shouldUpdateConversationHistory:(BOOL)arg8;
- (void)generateResponseKitSuggestionsForString:(id)arg1 withLanguage:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(BOOL)arg7 stringIsBlacklisted:(BOOL)arg8 async:(BOOL)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

