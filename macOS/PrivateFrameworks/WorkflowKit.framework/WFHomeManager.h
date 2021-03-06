//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/HMHomeManagerDelegate-Protocol.h>
#import <WorkflowKit/WFApplicationStateObserver-Protocol.h>

@class HMHomeManager, NSArray, NSHashTable, NSString;
@protocol OS_dispatch_group;

@interface WFHomeManager : NSObject <HMHomeManagerDelegate, WFApplicationStateObserver>
{
    BOOL _hasLoadedHomes;
    BOOL _loading;
    NSArray *_homes;
    NSHashTable *_eventObservers;
    HMHomeManager *_homeManager;
    NSObject<OS_dispatch_group> *_loadHomesGroup;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *loadHomesGroup; // @synthesize loadHomesGroup=_loadHomesGroup;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSHashTable *eventObservers; // @synthesize eventObservers=_eventObservers;
@property(readonly, nonatomic) BOOL hasLoadedHomes; // @synthesize hasLoadedHomes=_hasLoadedHomes;
@property(readonly, nonatomic) NSArray *homes; // @synthesize homes=_homes;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)serviceWithIdentifier:(id)arg1 inHome:(id)arg2;
- (id)sceneNamed:(id)arg1 inHome:(id)arg2;
- (id)primaryHome;
- (id)homeWithIdentifier:(id)arg1;
- (id)homeNamed:(id)arg1;
@property(readonly, nonatomic) NSArray *homesToWhichWeCanAddHomeAutomations;
@property(readonly, nonatomic) NSArray *homesToWhichWeHaveAdminAccess;
@property(readonly, nonatomic) unsigned long long status;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)ensureHomesAreLoadedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reloadData;
- (void)_setHomes:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

