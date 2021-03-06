//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDAVScheduleChangesProperty, NSData, NSString;

@interface CalDAVResource : NSObject
{
    NSString *_filename;
    NSString *_etag;
    NSString *_scheduleTag;
    NSData *_data;
    CalDAVScheduleChangesProperty *_scheduleChanges;
}

+ (id)resourceWithCalDAVCalendarItemData:(id)arg1;
- (void).cxx_destruct;
@property(retain) CalDAVScheduleChangesProperty *scheduleChanges; // @synthesize scheduleChanges=_scheduleChanges;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSString *scheduleTag; // @synthesize scheduleTag=_scheduleTag;
@property(retain) NSString *etag; // @synthesize etag=_etag;
@property(retain) NSString *filename; // @synthesize filename=_filename;

@end

