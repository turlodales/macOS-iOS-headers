//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INIntentResponse.h"

@class NSArray, NSString;

@interface WFMatchTextIntentResponse : INIntentResponse
{
    long long _code;
}

+ (id)invalidRegularExpressionIntentResponseWithErrorDescription:(id)arg1;
@property long long code; // @synthesize code=_code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *errorDescription; // @dynamic errorDescription;
@property(copy, nonatomic) NSArray *matches; // @dynamic matches;

@end

