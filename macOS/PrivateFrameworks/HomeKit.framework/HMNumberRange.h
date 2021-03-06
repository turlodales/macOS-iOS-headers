//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMNumberRange : NSObject
{
    NSNumber *_minValue;
    NSNumber *_maxValue;
}

+ (id)numberRangeWithMinValue:(id)arg1 maxValue:(id)arg2;
+ (id)numberRangeWithMinValue:(id)arg1;
+ (id)numberRangeWithMaxValue:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
- (id)description;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2;

@end

