//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RDUndoRedoChange : NSObject
{
}

+ (void)performUndo:(id)arg1 invocationTarget:(id)arg2 undoManager:(id)arg3;
- (id)actionName;
- (void)redo;
- (void)undo;

@end

