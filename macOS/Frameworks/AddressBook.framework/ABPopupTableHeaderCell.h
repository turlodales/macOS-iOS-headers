//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableHeaderCell.h>

@class NSPopUpButtonCell;

@interface ABPopupTableHeaderCell : NSTableHeaderCell
{
    NSPopUpButtonCell *_popup;
}

- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4 inColumn:(id)arg5;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

