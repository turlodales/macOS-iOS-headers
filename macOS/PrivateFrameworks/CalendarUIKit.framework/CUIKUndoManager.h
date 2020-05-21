//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUndoManager.h"

#import "CUIKUndoDelegate.h"

@class NSError, NSString;

@interface CUIKUndoManager : NSUndoManager <CUIKUndoDelegate>
{
    BOOL _disableUndoForOrganizerScheduling;
    id <CUIKCommitDelegate> _commitDelegate;
    id <CUIKDecisionDelegate> _decisionDelegate;
    CDUnknownBlockType _editingManagerProvider;
    NSError *_lastError;
}

+ (id)operationForAction:(unsigned long long)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSError *lastError; // @synthesize lastError=_lastError;
@property(copy, nonatomic) CDUnknownBlockType editingManagerProvider; // @synthesize editingManagerProvider=_editingManagerProvider;
@property(retain) id <CUIKDecisionDelegate> decisionDelegate; // @synthesize decisionDelegate=_decisionDelegate;
@property(retain) id <CUIKCommitDelegate> commitDelegate; // @synthesize commitDelegate=_commitDelegate;
@property BOOL disableUndoForOrganizerScheduling; // @synthesize disableUndoForOrganizerScheduling=_disableUndoForOrganizerScheduling;
- (void)clearUndoOperations;
- (void)undoOperation:(id)arg1;
- (void)handleUndoForOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

