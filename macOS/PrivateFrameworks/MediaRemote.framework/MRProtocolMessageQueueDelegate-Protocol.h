//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRProtocolMessage, MRProtocolMessageQueue, NSData;

@protocol MRProtocolMessageQueueDelegate <NSObject>
- (void)messageQueue:(MRProtocolMessageQueue *)arg1 didPurgeMessage:(MRProtocolMessage *)arg2;
- (void)messageQueue:(MRProtocolMessageQueue *)arg1 didSendMessage:(MRProtocolMessage *)arg2;
- (unsigned long long)messageQueue:(MRProtocolMessageQueue *)arg1 processData:(NSData *)arg2 atReadPosition:(long long)arg3;
@end

