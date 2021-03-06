//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCDPersistenceStack;

__attribute__((visibility("hidden")))
@interface CNCDChangeHistoryStore : NSObject
{
    CNCDPersistenceStack *_persistenceStack;
}

+ (BOOL)contextHasPersistentStores:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNCDPersistenceStack *persistenceStack; // @synthesize persistenceStack=_persistenceStack;
- (id)resultWithManagedObjectContext:(CDUnknownBlockType)arg1;
- (id)currentHistoryToken;
- (BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (id)initWithPersistenceStack:(id)arg1;

@end

