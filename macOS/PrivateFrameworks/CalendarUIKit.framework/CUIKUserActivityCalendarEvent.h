//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSDate, NSString;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource
{
    NSString *_title;
    NSString *_externalID;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_location;
    NSString *_relatedUniqueIdentifier;
    unsigned long long _view;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long view; // @synthesize view=_view;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateActivity:(id)arg1;
- (id)eventFromStore:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEvent:(id)arg1 view:(unsigned long long)arg2;
- (id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 forceLocal:(BOOL)arg3;

@end

