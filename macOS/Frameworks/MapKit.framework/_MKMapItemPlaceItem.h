//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_MKPlaceItem.h"

@class CNContact, EKCalendarItem, MKMapItem, NSString;

@interface _MKMapItemPlaceItem : NSObject <_MKPlaceItem>
{
    MKMapItem *_mapItem;
    unsigned long long _options;
    BOOL _isIntermediateMapItem;
}

+ (id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 isIntermediateMapItem:(BOOL)arg3;
+ (id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isIntermediateMapItem;
- (void)setIsSuggestedFavorite:(BOOL)arg1;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) BOOL isContactPersisted;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSString *name;

@end

