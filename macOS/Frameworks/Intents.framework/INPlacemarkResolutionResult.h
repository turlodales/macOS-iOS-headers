//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INPlacemarkResolutionResult : INIntentResolutionResult
{
}

+ (id)unsupportedWithReason:(long long)arg1 alternativePlacemarks:(id)arg2;
+ (id)needsMoreDetailsForPlacemark:(id)arg1;
+ (id)confirmationRequiredWithPlacemarkToConfirm:(id)arg1;
+ (id)disambiguationWithPlacemarksToDisambiguate:(id)arg1;
+ (id)successWithResolvedPlacemark:(id)arg1;

@end

