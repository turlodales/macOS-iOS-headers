//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUndoManager;

@interface ABUndoer : NSObject
{
    NSUndoManager *_undoManager;
}

- (void).cxx_destruct;
- (void)_performRedoCommand:(id)arg1 withName:(id)arg2;
- (void)_performUndoCommand:(id)arg1 withName:(id)arg2;
- (id)initWithUndoManager:(id)arg1;

@end

