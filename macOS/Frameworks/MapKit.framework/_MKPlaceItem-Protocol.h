//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CNContact, EKCalendarItem, MKMapItem, NSString;

@protocol _MKPlaceItem
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) BOOL isContactPersisted;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, nonatomic) BOOL isIntermediateMapItem;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSString *name;
- (void)setIsSuggestedFavorite:(BOOL)arg1;
@end

