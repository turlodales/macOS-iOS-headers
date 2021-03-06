//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CKStreamObserver.h>

#import "CSKMessagesViewControllerDataSource.h"
#import "CSKTableViewControllerFindDataSource.h"

@class NSMutableArray, NSSortDescriptor, NSString;

@interface CKUIStreamMessagesObserver : CKStreamObserver <CSKMessagesViewControllerDataSource, CSKTableViewControllerFindDataSource>
{
    BOOL _enableSortingOnReset;
    CDUnknownBlockType _resetCompletion;
    CDUnknownBlockType _additionCompletion;
    CDUnknownBlockType _removalCompletion;
    NSSortDescriptor *_lastUsedSortDescriptor;
    NSMutableArray *_messages;
    NSMutableArray *_allMessages;
}

@property(retain, nonatomic) NSMutableArray *allMessages; // @synthesize allMessages=_allMessages;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSSortDescriptor *lastUsedSortDescriptor; // @synthesize lastUsedSortDescriptor=_lastUsedSortDescriptor;
@property(nonatomic) BOOL enableSortingOnReset; // @synthesize enableSortingOnReset=_enableSortingOnReset;
@property(copy, nonatomic) CDUnknownBlockType removalCompletion; // @synthesize removalCompletion=_removalCompletion;
@property(copy, nonatomic) CDUnknownBlockType additionCompletion; // @synthesize additionCompletion=_additionCompletion;
@property(copy, nonatomic) CDUnknownBlockType resetCompletion; // @synthesize resetCompletion=_resetCompletion;
- (void).cxx_destruct;
- (void)_removeMessages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleRemovalDataBatch:(id)arg1;
- (void)handleAdditionDataBatch:(id)arg1;
- (void)resetWorkingStateWithDataBatch:(id)arg1;
- (unsigned long long)dataType;
- (id)messagesAtIndexes:(id)arg1;
- (id)messageAtIndex:(unsigned long long)arg1;
- (unsigned long long)messagesCount;
- (void)flush;
- (void)reload;
- (void)clear;
- (void)sortDisplayedMessagesWithSortDescriptor:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (unsigned long long)numberOfRowsInMessagesViewController:(id)arg1;
- (id)messagesViewController:(id)arg1 messagesAtRows:(id)arg2;
- (id)messagesViewController:(id)arg1 messageAtRow:(unsigned long long)arg2;
- (id)entitiesSnapshotForTableViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

