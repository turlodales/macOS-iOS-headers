//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>

#import <CalendarPersistence/CoreDAVDeleteTaskDelegate-Protocol.h>

@class NSString;

@interface CalDAVDeleteInboxFileQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVDeleteTaskDelegate>
{
    NSString *_filename;
    NSString *_inboxPath;
}

- (void).cxx_destruct;
- (void)handleRemovalCleanup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)useCoreDAV;
- (void)performOperation;
- (id)initWithChangeRequest:(id)arg1 inboxPath:(id)arg2 filename:(id)arg3 forSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

