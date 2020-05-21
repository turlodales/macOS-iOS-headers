//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "REMReplicaManagerProviding.h"

@class NSString, REMStore;

@interface _REMDACalDAVSyncReplicaManagerProvider : NSObject <REMReplicaManagerProviding>
{
    REMStore *_store;
}

+ (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
+ (id)replicaManagerForAccountID:(id)arg1 withStore:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) REMStore *store; // @synthesize store=_store;
- (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
- (id)replicaManagerForAccountID:(id)arg1;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

