//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CTMessageStatus : NSObject
{
    unsigned int _messageId;
    int _messageType;
    int _result;
}

@property(readonly) int result; // @synthesize result=_result;
@property(readonly) int messageType; // @synthesize messageType=_messageType;
@property(readonly) unsigned int messageId; // @synthesize messageId=_messageId;
- (id)initWithMessageId:(unsigned int)arg1 messageType:(int)arg2 result:(int)arg3;

@end

