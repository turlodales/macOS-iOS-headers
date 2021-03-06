//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKViewController.h>

@class EKCalendar;

@interface EKCalendarViewController : EKViewController
{
}

+ (id)emptyPlaceholderTitleString;
+ (id)newPlaceholderTitleString;
- (id)infoViewPublicURLString;
- (BOOL)isCalendarPublished;
- (BOOL)isCalendarSubscribed;
- (BOOL)isCalendarPubSub;
- (BOOL)isCalendarPublicallyShared;
- (BOOL)isCalendarSharedToMe;
- (BOOL)isCalendarFamilyCalendar;
- (BOOL)isCalendarMarkedImmutableSharees;
- (BOOL)calendarSupportsPublishing;
- (BOOL)calendarSupportsSharing;
- (double)defaultLabelWidth;
@property(retain, nonatomic) EKCalendar *calendar;
- (id)initWithSettings:(id)arg1;

@end

