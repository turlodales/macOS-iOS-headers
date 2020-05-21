//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage, NSMenu, NSMenuExtra;

@interface NSMenuExtraView : NSView
{
    NSMenu *_menu;
    NSMenuExtra *_menuExtra;
    NSImage *_image;
    NSImage *_alternateImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setMenu:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 menuExtra:(id)arg2;

@end

