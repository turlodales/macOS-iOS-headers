//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, NSError;

__attribute__((visibility("hidden")))
@interface AVPlayerConnection : NSObject
{
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

- (id)error;
@property(readonly, nonatomic) long long status;
- (void)removeItemFromPlayQueue;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1;
- (id)playerItem;
- (id)player;
- (id)description;
- (void)dealloc;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2;

@end

