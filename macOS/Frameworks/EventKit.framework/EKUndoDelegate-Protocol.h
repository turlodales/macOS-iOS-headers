//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKUndoableOperation;

@protocol EKUndoDelegate <NSObject>
@property BOOL disableUndoForOrganizerScheduling;
- (void)clearUndoOperations;
- (void)handleUndoForOperation:(EKUndoableOperation *)arg1;
@end

