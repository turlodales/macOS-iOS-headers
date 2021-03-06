//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

#import <CalendarPersistence/CoreDAVTaskGroupDelegate-Protocol.h>

@class CalDAVUpdateFreeBusySetTaskGroup, NSString;

@interface CalDAVChangeCalendarAffectsAvailabilityQueueableOperation : CalDAVCalendarQueueableOperation <CoreDAVTaskGroupDelegate>
{
    CalDAVUpdateFreeBusySetTaskGroup *_updateFreeBusySetTaskGroup;
}

- (void).cxx_destruct;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)performOperation;
- (id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 value:(id)arg4 inboxURI:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

