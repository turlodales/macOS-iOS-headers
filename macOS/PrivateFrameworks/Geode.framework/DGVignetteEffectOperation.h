//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGVignetteEffectOperation : DGOperation
{
    NSNumber *_inputIntensity;
    NSNumber *_inputFalloff;
    NSNumber *_inputRadius;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius=_inputRadius;
@property(copy, nonatomic) NSNumber *inputFalloff; // @synthesize inputFalloff=_inputFalloff;
@property(copy, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
- (BOOL)isPostGeometryOperation;
- (void)dealloc;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (id)commandIdentifier;
- (id)_filter;
- (BOOL)isMigratable;

@end

