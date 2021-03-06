//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFClientTimingFeedback : SFFeedback
{
    NSString *_input;
    NSString *_eventName;
    unsigned long long _nanosecondInterval;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long nanosecondInterval; // @synthesize nanosecondInterval=_nanosecondInterval;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithEvent:(id)arg1 timeInterval:(unsigned long long)arg2 queryId:(unsigned long long)arg3;

@end

