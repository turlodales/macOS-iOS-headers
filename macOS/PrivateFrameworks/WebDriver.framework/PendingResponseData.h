//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WDProtocolCommand;

@interface PendingResponseData : NSObject
{
    long long _sequenceId;
    WDProtocolCommand *_originatingCommand;
    CDUnknownBlockType _responseHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) WDProtocolCommand *originatingCommand; // @synthesize originatingCommand=_originatingCommand;
@property(nonatomic) long long sequenceId; // @synthesize sequenceId=_sequenceId;

@end

