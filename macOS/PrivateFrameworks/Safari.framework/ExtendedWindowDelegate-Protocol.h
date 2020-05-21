//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowDelegate.h"

@class NSEvent, NSWindow;

@protocol ExtendedWindowDelegate <NSWindowDelegate>

@optional
- (BOOL)window:(NSWindow *)arg1 willHandleMouseDraggedEvent:(NSEvent *)arg2;
- (BOOL)window:(NSWindow *)arg1 willHandleMouseDownEvent:(NSEvent *)arg2;
- (BOOL)window:(NSWindow *)arg1 willHandleKeyEvent:(NSEvent *)arg2;
- (BOOL)window:(NSWindow *)arg1 performKeyEquivalent:(NSEvent *)arg2;
@end

