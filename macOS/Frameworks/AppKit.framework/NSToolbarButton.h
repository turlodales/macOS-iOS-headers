//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSString, NSToolbarItem;

@interface NSToolbarButton : NSButton
{
    NSToolbarItem *_item;
    SEL _primaryAction;
    SEL _alternateAction;
    NSString *_primaryToolTip;
    NSString *_alternateToolTip;
    NSString *_primaryTitle;
    NSString *_alternateTitle;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)cachedDrawingImage;
- (void)invalidateCachedDrawingImage;
- (BOOL)refusesFirstResponder;
- (BOOL)sendAction;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)setBordered:(BOOL)arg1;
- (void)_updateTitleAndLabelConfiguration;
- (void)_updateImageScale;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (id)_item;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

