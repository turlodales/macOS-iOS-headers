//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SkyLight/SLDataTimelineSnapshotCollectionMetadata-Protocol.h>

@class NSArray;

@protocol SLDataTimelineSnapshotCollection <SLDataTimelineSnapshotCollectionMetadata>
@property(readonly, nonatomic) NSArray *snapshots;
- (void)snapshotsApplyBlock:(void (^)(id <SLDataTimelineServerSnapshot>))arg1;
@end

