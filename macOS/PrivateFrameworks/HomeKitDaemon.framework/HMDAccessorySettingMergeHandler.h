//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDAccessorySettingMergeHandler : NSObject
{
}

+ (id)_mergeValidValueConstraintsFirst:(id)arg1 second:(id)arg2;
+ (BOOL)_extractMinMaxStep:(id)arg1 minConstraint:(id *)arg2 maxConstraint:(id *)arg3 stepConstraint:(id *)arg4 first:(id)arg5;
+ (id)_mergeRangeConstraintsFirst:(id)arg1 second:(id)arg2;
+ (BOOL)_isNumber:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3 first:(id)arg4;
+ (id)_mergeFirst:(id)arg1 second:(id)arg2 mergedConstraints:(id)arg3 mergeStrategy:(id)arg4;
+ (BOOL)mergeFirst:(id)arg1 second:(id)arg2 mergeStrategy:(id)arg3;

@end

