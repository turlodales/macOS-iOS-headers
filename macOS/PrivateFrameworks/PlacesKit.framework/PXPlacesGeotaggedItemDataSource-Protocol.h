//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol PXPlacesGeotaggedItemDataSource <NSObject>
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly) NSSet *allItems;
@property __weak id <PXPlacesGeotaggedItemDataSourceDelegate> delegate;
- (CDStruct_02837cd9)minimalEncompassingMapRect;
- (NSSet *)findItemsInMapRect:(CDStruct_02837cd9)arg1;
@end

