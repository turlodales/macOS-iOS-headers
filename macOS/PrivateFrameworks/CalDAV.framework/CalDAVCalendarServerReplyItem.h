//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalDAV/CalDAVItemWithRecurrenceChildren.h>

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren
{
    CoreDAVLeafItem *_attendee;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVLeafItem *attendee; // @synthesize attendee=_attendee;
- (id)copyParseRules;

@end

