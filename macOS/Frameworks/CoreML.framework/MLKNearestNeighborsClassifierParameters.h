//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MLKNearestNeighborsClassifierParameters : NSObject
{
    unsigned long long _numberOfDimensions;
    long long _weightingScheme;
    long long _indexType;
    unsigned long long _leafSize;
    NSObject *_defaultLabel;
    NSString *_nearestLabelsFeatureName;
    NSString *_nearestDistancesFeatureName;
}

- (void).cxx_destruct;
@property(retain) NSString *nearestDistancesFeatureName; // @synthesize nearestDistancesFeatureName=_nearestDistancesFeatureName;
@property(retain) NSString *nearestLabelsFeatureName; // @synthesize nearestLabelsFeatureName=_nearestLabelsFeatureName;
@property(retain) NSObject *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property unsigned long long leafSize; // @synthesize leafSize=_leafSize;
@property long long indexType; // @synthesize indexType=_indexType;
@property long long weightingScheme; // @synthesize weightingScheme=_weightingScheme;
@property unsigned long long numberOfDimensions; // @synthesize numberOfDimensions=_numberOfDimensions;

@end

