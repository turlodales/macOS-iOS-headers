//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGLabeledValue : NSObject
{
    NSString *_label;
    NSString *_value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToLabeledValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end

