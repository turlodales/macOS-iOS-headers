//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSAttributedString, NSColor, NSImage;

@interface EKUITextButtonCell : NSButtonCell
{
    BOOL _mouseOver;
    NSImage *_originalImage;
    NSColor *_mouseoverTextColor;
    NSAttributedString *_originalTitle;
}

- (void).cxx_destruct;
@property(retain) NSAttributedString *originalTitle; // @synthesize originalTitle=_originalTitle;
@property(retain) NSColor *mouseoverTextColor; // @synthesize mouseoverTextColor=_mouseoverTextColor;
@property(retain) NSImage *originalImage; // @synthesize originalImage=_originalImage;
@property BOOL mouseOver; // @synthesize mouseOver=_mouseOver;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;

@end

