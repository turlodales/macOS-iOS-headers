//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetInspector.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVStreamDataAssetInspector : AVAssetInspector
{
    NSArray *_trackIDs;
}

- (id)trackIDs;
- (long long)trackCount;
- (BOOL)providesPreciseDurationAndTiming;
- (CDStruct_1b6d18a9)duration;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTrackIDs:(id)arg1;

@end

