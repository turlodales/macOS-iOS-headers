//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNFuture, CNReputationContactsAdapter, CNReputationCoreRecentsAdapter, CNReputationHandle, CNReputationLogger;

__attribute__((visibility("hidden")))
@interface CNReputationFutureBuilder : NSObject
{
    CNReputationHandle *_handle;
    CNReputationCoreRecentsAdapter *_coreRecentsAdapter;
    CNReputationContactsAdapter *_contactsAdapter;
    CNReputationLogger *_logger;
    CNFuture *_scoreFuture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNFuture *scoreFuture; // @synthesize scoreFuture=_scoreFuture;
@property(readonly, nonatomic) CNReputationLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter; // @synthesize contactsAdapter=_contactsAdapter;
@property(readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter; // @synthesize coreRecentsAdapter=_coreRecentsAdapter;
@property(readonly, copy, nonatomic) CNReputationHandle *handle; // @synthesize handle=_handle;
- (id)build;
- (id)contactsTrustForPhoneNumber:(id)arg1;
- (void)addContactsTrustForPhoneNumber;
- (id)contactsTrustForEmailAddress:(id)arg1;
- (void)addContactsTrustForEmailAddress;
- (id)coreRecentsTrustForHandle:(id)arg1;
- (void)addCoreRecentsTrust;
- (id)initWithHandle:(id)arg1 coreRecentsAdapter:(id)arg2 contactsAdapter:(id)arg3 logger:(id)arg4;

@end

