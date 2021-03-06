//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSCurationDebugObject.h>

@class NSSet, NSString;

@interface CLSCurationDebugCluster : CLSCurationDebugObject
{
    NSSet *_debugClusters;
    NSSet *_unclusteredDebugItems;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSSet *unclusteredDebugItems; // @synthesize unclusteredDebugItems=_unclusteredDebugItems;
- (id)timestamp;
- (id)dictionaryRepresentation;
- (void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3;
- (void)addDebugClusters:(id)arg1;
- (void)setDebugClusters:(id)arg1;
- (id)allDebugItems;
- (id)initWithDebugItems:(id)arg1 reason:(id)arg2;

@end

