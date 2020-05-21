//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AVCaptionConversionValidator : NSObject
{
    void *_validatorInternal;
}

+ (id)mutableCaptionArray;
+ (id)captionConversionValidatorWithCaptions:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 conversionSettings:(id)arg3;
@property(readonly) NSArray *warnings;
- (void)stopValidating;
- (void)validateCaptionConversionWithWarningHandler:(CDUnknownBlockType)arg1;
- (void)_issueWarningForFigDictionary:(struct __CFDictionary *)arg1;
- (void)_completeValidation;
@property(readonly) CDStruct_e83c9415 timeRange;
@property(readonly) NSArray *captions;
@property(readonly) long long status;
- (void)dealloc;
- (id)initWithCaptions:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 conversionSettings:(id)arg3;
- (BOOL)_isConversionToClosedCaptions:(id)arg1;

@end

