//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGGNGSaturationOperation : DGOperation
{
    NSNumber *_inputSaturation;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
@property(copy, nonatomic) NSNumber *inputSaturation; // @synthesize inputSaturation=_inputSaturation;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_filter;

@end

