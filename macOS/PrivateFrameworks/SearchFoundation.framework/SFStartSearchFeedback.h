//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFStartSearchFeedback : SFFeedback
{
    NSString *_input;
    NSString *_uuid;
    unsigned long long _triggerEvent;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2;

@end

