//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/_MKPlaceItem-Protocol.h>

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
@property(readonly, nonatomic) BOOL hasContactOnly;
@property(readonly, nonatomic) BOOL isIntermediateMapItem;
- (void)setIsSuggestedFavorite:(BOOL)arg1;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) BOOL isContactPersisted;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSString *name;

@end

