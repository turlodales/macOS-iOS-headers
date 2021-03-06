//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSString;
@protocol PLCloudChangeEventsResult, PLCloudChangeTrackerDelegate;

@protocol PLCloudChangeTracker <NSObject>
@property(readonly, copy) NSString *lastKnownDeletionTokenDescription;
@property(readonly) BOOL hasChangeTrackerToken;
@property(readonly, copy) NSString *lastKnownTokenDescription;
@property(nonatomic) __weak id <PLCloudChangeTrackerDelegate> delegate;
@property(readonly, copy) NSString *name;
- (void)updateLastKnownDeletionTokenToResult:(id <PLCloudChangeEventsResult>)arg1;
- (void)updateLastKnownTokenToResult:(id <PLCloudChangeEventsResult>)arg1;
- (id <PLCloudChangeEventsResult>)fetchDeletionEvents;
- (id <PLCloudChangeEventsResult>)fetchAllEvents;
- (BOOL)isConnected;
- (void)disconnect;
- (BOOL)connect;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)forceTokenToCurrent;
- (void)clearToken;
@end

