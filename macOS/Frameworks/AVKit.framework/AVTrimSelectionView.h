//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface AVTrimSelectionView : NSView
{
    NSImage *_selectionImage;
    unsigned long long _trimViewStyle;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateSelectionImage;
@property unsigned long long trimViewStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

