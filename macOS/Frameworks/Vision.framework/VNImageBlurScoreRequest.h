//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@interface VNImageBlurScoreRequest : VNImageBasedRequest
{
}

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (Class)configurationClass;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
@property(nonatomic) unsigned long long maximumIntermediateSideLength;
@property(nonatomic) unsigned long long blurDeterminationMethod;

@end

