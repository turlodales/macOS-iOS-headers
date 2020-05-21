//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSData, NSDictionary;

@interface SFCustomFeedback : SFFeedback
{
    unsigned long long _feedbackType;
    NSDictionary *_jsonFeedback;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSDictionary *jsonFeedback; // @synthesize jsonFeedback=_jsonFeedback;
@property(nonatomic) unsigned long long feedbackType; // @synthesize feedbackType=_feedbackType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 jsonFeedback:(id)arg2;

@end

