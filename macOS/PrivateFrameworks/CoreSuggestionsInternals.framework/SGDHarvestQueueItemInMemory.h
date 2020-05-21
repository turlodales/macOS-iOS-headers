//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class NSString, SGDHarvestQueueInMemory;

@interface SGDHarvestQueueItemInMemory : SGDHarvestQueueItem
{
    BOOL _highPriority;
    SGDHarvestQueueInMemory *_parentQueue;
    BOOL _inProgress;
    BOOL _beingDeleted;
    NSString *_sourceKey;
    NSString *_messageId;
}

- (void).cxx_destruct;
@property BOOL beingDeleted; // @synthesize beingDeleted=_beingDeleted;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
- (id)description;
- (BOOL)highPriority;
- (void)markAsFailed;
- (void)finish;
- (id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3 sourceKey:(id)arg4 messageId:(id)arg5 highPriority:(BOOL)arg6 parentQueue:(id)arg7;

@end

