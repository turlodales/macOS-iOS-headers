//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDSManagingDelegate.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface DDSAssetCenter : NSObject <DDSManagingDelegate>
{
    id <DDSAssetProviding> _provider;
    id <DDSManaging> _managerInterface;
    NSMutableSet *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableSet *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) id <DDSManaging> managerInterface; // @synthesize managerInterface=_managerInterface;
@property(readonly, nonatomic) id <DDSAssetProviding> provider; // @synthesize provider=_provider;
- (void)didUpdateAssetsWithType:(id)arg1;
- (id)assertionIDsForClientID:(id)arg1;
- (void)removeAssertionWithIdentifier:(id)arg1;
- (void)addAssertionForAssetsWithQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
- (id)allContentItemsMatchingQuery:(id)arg1 error:(id *)arg2;
- (id)assetsForQuery:(id)arg1 error:(id *)arg2;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (id)initWithProvider:(id)arg1 managerInterface:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

