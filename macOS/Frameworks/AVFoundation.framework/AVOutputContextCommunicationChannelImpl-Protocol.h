//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVOutputContextCommunicationChannel, NSData;

@protocol AVOutputContextCommunicationChannelImpl <NSObject>
@property __weak AVOutputContextCommunicationChannel *parentCommunicationChannel;
- (void)sendData:(NSData *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

