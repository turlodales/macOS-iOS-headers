//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKChangeListenerDelegate.h"

@class EKEditingContextGroup, NSArray, NSString;

@interface EKEditingContext : NSObject <EKChangeListenerDelegate>
{
    BOOL _isActive;
    BOOL _isOpen;
    EKEditingContextGroup *_group;
    id <EKDecisionDelegate> _decisionDelegate;
    id <EKUndoDelegate> _undoDelegate;
    id <EKCommitDelegate> _commitDelegate;
    id <EKEditingContextObserver> _observer;
    NSArray *_objectsBeingEdited;
    NSArray *_pendingObserverUpdates;
    NSArray *_pendingGroupUpdates;
}

@property(retain) NSArray *pendingGroupUpdates; // @synthesize pendingGroupUpdates=_pendingGroupUpdates;
@property(retain) NSArray *pendingObserverUpdates; // @synthesize pendingObserverUpdates=_pendingObserverUpdates;
@property(retain) NSArray *objectsBeingEdited; // @synthesize objectsBeingEdited=_objectsBeingEdited;
@property BOOL isOpen; // @synthesize isOpen=_isOpen;
@property BOOL isActive; // @synthesize isActive=_isActive;
@property __weak id <EKEditingContextObserver> observer; // @synthesize observer=_observer;
@property __weak id <EKCommitDelegate> commitDelegate; // @synthesize commitDelegate=_commitDelegate;
@property __weak id <EKUndoDelegate> undoDelegate; // @synthesize undoDelegate=_undoDelegate;
@property __weak id <EKDecisionDelegate> decisionDelegate; // @synthesize decisionDelegate=_decisionDelegate;
@property __weak EKEditingContextGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)trackedObjectsDidRevert:(id)arg1;
- (void)relatedObjectsDidUpdate:(id)arg1;
- (void)notifyObservers;
- (void)trackedObjectsDidUpdate:(id)arg1;
- (id)trackedObjects;
- (BOOL)hasUpdatePriority;
- (BOOL)shouldResetUndoStack;
- (BOOL)performUndoableOperation:(id)arg1;
- (unsigned long long)_actionToCommit;
- (BOOL)_prepareForCommitWithDecision:(unsigned long long)arg1 shouldClose:(char *)arg2;
- (void)_revert:(BOOL)arg1;
- (void)_revert;
- (void)revert;
- (BOOL)savePartialChange;
- (void)_setAllObjectsToDontNotify;
- (void)_markAsClosed;
- (void)_markAsOpen;
- (void)_markAsInactive;
- (void)_markAsActive;
- (void)_unspecifyEarlyCommitDecision;
- (void)_specifyEarlyCommitDecision:(unsigned long long)arg1;
- (BOOL)_earlyCommitDecisionSpecified;
- (unsigned long long)_earlyCommitDecision;
- (void)_unspecifySpanDecision;
- (void)_specifySpanDecision:(unsigned long long)arg1;
- (BOOL)_spanDecisionSpecified;
- (long long)_currentSpan;
- (unsigned long long)_currentSpanDecision;
- (unsigned long long)_requestCommitDecisionIfNeededForAction:(unsigned long long)arg1;
- (BOOL)_requestEarlyCommitDecisionAtSaveTimeForAction:(unsigned long long)arg1;
- (void)_clearLiveEdits;
- (void)_cancelCurrentSave;
- (BOOL)_requestSaveAndSpanDecisionIfNeededForAction:(unsigned long long)arg1;
- (id)_diffSummarySinceLastSave;
- (BOOL)_saveActionIsDecline;
- (BOOL)_shouldSilentlyTransitionToSpanAllAfterSave;
- (BOOL)_hasChangesRequiringSpanAllAndSpanIsThis;
- (BOOL)_hasChangesToSave;
- (BOOL)saveCompleteChange:(id *)arg1;
- (BOOL)saveCompleteChange;
- (BOOL)saveCompleteChangeWithImpliedCommitDecision:(id *)arg1;
- (void)_doManualDelete;
- (BOOL)_deleteIsUndoable;
- (void)_addAdditionalObjectsToGroupForDelete;
- (BOOL)deleteAllObjects;
- (BOOL)addAllObjects;
- (BOOL)_allObjectsAreCalendars;
- (BOOL)_allObjectsAreEvents;
- (BOOL)_allObjectsAreItems;
- (id)_eventStore;
- (id)initWithObjects:(id)arg1 observer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

