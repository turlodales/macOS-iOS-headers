//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@interface HMBCloudZoneConfiguration : HMFObject
{
    BOOL _shouldRebuildOnManateeKeyLoss;
    BOOL _shouldSuppressDelegateCallbacksOnInitialFetch;
}

@property BOOL shouldSuppressDelegateCallbacksOnInitialFetch; // @synthesize shouldSuppressDelegateCallbacksOnInitialFetch=_shouldSuppressDelegateCallbacksOnInitialFetch;
@property BOOL shouldRebuildOnManateeKeyLoss; // @synthesize shouldRebuildOnManateeKeyLoss=_shouldRebuildOnManateeKeyLoss;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)attributeDescriptions;

@end

