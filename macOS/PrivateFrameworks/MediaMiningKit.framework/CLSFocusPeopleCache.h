//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, PHPhotoLibrary;

@interface CLSFocusPeopleCache : NSObject
{
    NSSet *_peopleUUIDs;
    unsigned long long _maximumNumberOfPeople;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)_personSortDescriptors;
- (void).cxx_destruct;
@property(nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) unsigned long long maximumNumberOfPeople; // @synthesize maximumNumberOfPeople=_maximumNumberOfPeople;
@property(readonly, nonatomic) NSSet *peopleUUIDs; // @synthesize peopleUUIDs=_peopleUUIDs;
- (id)_collectValidPeopleUUIDs;
- (void)invalidate;
- (id)initWithPhotoLibrary:(id)arg1 maximumNumberOfPeople:(unsigned long long)arg2;

@end

