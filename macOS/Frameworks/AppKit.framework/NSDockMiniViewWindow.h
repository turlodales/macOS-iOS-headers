//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

__attribute__((visibility("hidden")))
@interface NSDockMiniViewWindow : NSWindow
{
    BOOL shown;
}

- (void)makeKeyAndOrderFront:(id)arg1;
- (void)_setShown:(BOOL)arg1;
- (BOOL)_allowsOrdering;
- (void)_setVisible:(BOOL)arg1;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_isNonactivatingPanel;

@end

