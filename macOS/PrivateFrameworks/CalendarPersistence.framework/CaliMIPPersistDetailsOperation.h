//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CaliMIPOperation.h>

@class NSData, NSDate, NSString, NSTimeZone;

@interface CaliMIPPersistDetailsOperation : CaliMIPOperation
{
    BOOL _eventIsAllDay;
    BOOL _eventIsFloating;
    NSData *_attachment;
    NSDate *_eventStartDate;
    NSTimeZone *_eventTimeZone;
    NSString *_eventTitle;
    NSString *_organizerName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSString *organizerName; // @synthesize organizerName=_organizerName;
@property(retain) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
@property(retain) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
@property(retain) NSDate *eventStartDate; // @synthesize eventStartDate=_eventStartDate;
@property BOOL eventIsFloating; // @synthesize eventIsFloating=_eventIsFloating;
@property BOOL eventIsAllDay; // @synthesize eventIsAllDay=_eventIsAllDay;
@property(retain) NSData *attachment; // @synthesize attachment=_attachment;
- (id)attachmentInContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAttendees:(id)arg1;

@end

