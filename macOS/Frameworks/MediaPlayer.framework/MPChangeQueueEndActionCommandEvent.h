//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeQueueEndActionCommandEvent : MPRemoteCommandEvent
{
    BOOL _preservesQueueEndAction;
    long long _queueEndAction;
}

@property(readonly, nonatomic) BOOL preservesQueueEndAction; // @synthesize preservesQueueEndAction=_preservesQueueEndAction;
@property(readonly, nonatomic) long long queueEndAction; // @synthesize queueEndAction=_queueEndAction;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

