//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGGNGDefinitionOperation : DGOperation
{
    NSNumber *_inputRadius;
    NSNumber *_inputIntensity;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
@property(copy, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
@property(copy, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius=_inputRadius;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_filterWithScalingFactor:(double)arg1;

@end

