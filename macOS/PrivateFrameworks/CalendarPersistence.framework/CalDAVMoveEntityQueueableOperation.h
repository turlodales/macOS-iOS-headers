//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

#import "CalDAVEntityTaggableOperation.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class CalManagedMoveEntityChangeRequest, NSData, NSManagedObjectID, NSString;

@interface CalDAVMoveEntityQueueableOperation : CalDAVEntityQueueableOperation <CoreDAVPropFindTaskDelegate, CalDAVEntityTaggableOperation>
{
    NSString *_etag;
    NSString *_scheduleTag;
    NSString *_filename;
    NSString *_sourceCalendarUID;
    NSString *_destinationCalendarUID;
    NSManagedObjectID *_objectID;
    NSData *_icsData;
    NSString *eTag;
    NSString *scheduleTag;
    NSManagedObjectID *objectID;
    CalManagedMoveEntityChangeRequest *_changeRequest;
}

- (void).cxx_destruct;
@property(retain) NSString *destinationCalendarUID; // @synthesize destinationCalendarUID=_destinationCalendarUID;
@property(retain) NSString *sourceCalendarUID; // @synthesize sourceCalendarUID=_sourceCalendarUID;
@property(retain) NSString *filename; // @synthesize filename=_filename;
@property(readonly) CalManagedMoveEntityChangeRequest *changeRequest; // @synthesize changeRequest=_changeRequest;
@property(retain) NSManagedObjectID *objectID; // @synthesize objectID;
@property(retain) NSString *scheduleTag; // @synthesize scheduleTag;
@property(retain) NSString *eTag; // @synthesize eTag;
- (void)finishOperation;
- (void)configureOperationDependencies;
- (id)readableDescription;
- (void)forceEntityToServer;
- (void)forceEntityFromServerAndClearEventFromQueue:(BOOL)arg1;
- (void)finishMoveWithEtag:(id)arg1 scheduleTag:(id)arg2;
- (id)etagByRemovingWeakPrefix;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)moveTaskCompletedWithTaskGroup:(id)arg1;
- (void)performOperation;
- (id)calendarItemForLocalUID:(id)arg1 inContext:(id)arg2;
- (id)initWithChangeRequest:(id)arg1 forSession:(id)arg2 source:(id)arg3 eTag:(id)arg4 scheduleTag:(id)arg5 icsData:(id)arg6 objectID:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL shouldHaveTagsUpdated; // @dynamic shouldHaveTagsUpdated;
@property(readonly) Class superclass;

@end

