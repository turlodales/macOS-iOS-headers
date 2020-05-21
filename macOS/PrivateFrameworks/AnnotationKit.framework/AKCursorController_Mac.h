//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKController, NSCursor;

@interface AKCursorController_Mac : NSObject
{
    NSCursor *_currentCursorOrNil;
    AKController *_controller;
}

- (void).cxx_destruct;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSCursor *currentCursorOrNil; // @synthesize currentCursorOrNil=_currentCursorOrNil;
- (void)updateCursorForDraggableArea:(unsigned long long)arg1 ofAnnotation:(id)arg2;
- (void)setCurrentCursorOrNil:(id)arg1 updateSystemCursor:(BOOL)arg2;
- (id)initWithController:(id)arg1;

@end

