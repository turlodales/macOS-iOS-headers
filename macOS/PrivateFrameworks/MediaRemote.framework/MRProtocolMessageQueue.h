//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRPendingMessageQueue, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MRProtocolMessageQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <MRProtocolMessageQueueDataSource> _datasource;
    id <MRProtocolMessageQueueDelegate> _delegate;
    MRPendingMessageQueue *_pendingMessageQueue;
    NSMutableDictionary *_pendingReplyQueue;
}

- (void).cxx_destruct;
- (id)_dataForMessage:(id)arg1;
- (BOOL)reply:(id)arg1;
- (void)flush;
- (void)enqueueMessage:(id)arg1 reply:(CDUnknownBlockType)arg2 queue:(id)arg3;
@property(nonatomic) __weak id <MRProtocolMessageQueueDelegate> delegate;
@property(nonatomic) __weak id <MRProtocolMessageQueueDataSource> datasource;
- (void)dealloc;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;

@end

