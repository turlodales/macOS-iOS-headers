//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DAMailboxRequest : NSObject
{
    int _requestType;
    int _bodyFormat;
    NSString *_messageID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) int bodyFormat; // @synthesize bodyFormat=_bodyFormat;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (id)init;

@end

