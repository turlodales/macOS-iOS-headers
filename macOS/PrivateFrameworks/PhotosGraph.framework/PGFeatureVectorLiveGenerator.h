//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGFeatureVectorGenerator.h>

#import "CLLocationManagerDelegate.h"

@class NSString;

@interface PGFeatureVectorLiveGenerator : PGFeatureVectorGenerator <CLLocationManagerDelegate>
{
}

- (void)enumerateFeatureVectorsByTypeUsingBlock:(CDUnknownBlockType)arg1;
- (id)_nearestAssetsForCurrentDate:(id)arg1 atLocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

