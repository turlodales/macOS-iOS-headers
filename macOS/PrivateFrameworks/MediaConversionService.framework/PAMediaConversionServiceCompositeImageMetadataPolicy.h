//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSArray;

@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    NSArray *_policies;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithPolicies:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *policies; // @synthesize policies=_policies;
- (id)processMetadata:(id)arg1;
- (BOOL)metadataNeedsProcessing:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

