//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>
@property(readonly) NSSet *updatedItems;
@property(readonly) NSSet *removedItems;
@property(readonly) NSSet *addedItems;
- (BOOL)hasChanges;
- (void)updateWithChange:(id <PXPlacesGeotaggedItemDataSourceChange>)arg1;
@end

