//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRProtocolMessage, MRProtocolMessageQueue, NSData;

@protocol MRProtocolMessageQueueDataSource <NSObject>
- (NSData *)messageQueue:(MRProtocolMessageQueue *)arg1 dataForMessage:(MRProtocolMessage *)arg2;
@end

