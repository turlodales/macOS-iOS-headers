//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVOutputContextCommunicationChannelImpl.h"

@class AVOutputContextCommunicationChannel, NSString;

__attribute__((visibility("hidden")))
@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl>
{
    AVOutputContextCommunicationChannel *_parentChannel;
    struct OpaqueFigRoutingContext *_routingContext;
    struct __CFString *_commChannelUUID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CFString *commChannelUUID; // @synthesize commChannelUUID=_commChannelUUID;
@property __weak AVOutputContextCommunicationChannel *parentCommunicationChannel; // @synthesize parentCommunicationChannel=_parentChannel;
- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg1 commChannelUUID:(struct __CFString *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

