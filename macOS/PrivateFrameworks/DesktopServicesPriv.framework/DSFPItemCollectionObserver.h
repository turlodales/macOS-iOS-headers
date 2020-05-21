//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FPItemCollectionItemIDBasedDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DSFPItemCollectionObserver : NSObject <FPItemCollectionItemIDBasedDelegate>
{
    struct TNodePtr fParentNode;
    struct TNSRef<FPItemCollection, void> _collection;
    TNSRef_29886eb6 _FPItems;
    TNSRef_090b95aa _FPError;
    struct mutex _mutex;
    struct TConditionVariable _cv;
    int _useCount;
    _Bool populated;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collectionDidFinishGathering:(id)arg1;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)setFPItems:(id)arg1;
- (void)incrementUseCount;
- (int)decrementUseCount;
- (void)blockUntilPopulated;
- (void)collectionSynched;
- (_Bool)populated;
- (TNSRef_090b95aa)fpError;
- (TNSRef_29886eb6)fpItems;
- (void)stopObserving;
- (void)startObserving:(id)arg1 withQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

