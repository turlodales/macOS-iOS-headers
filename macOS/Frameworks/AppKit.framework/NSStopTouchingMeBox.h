//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSBox.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface NSStopTouchingMeBox : NSBox
{
    NSView *sibling1;
    NSView *sibling2;
    double offset;
}

- (void)viewDidEndLiveResize;
- (void)tile;
- (void)setOffset:(double)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setSibling2:(id)arg1;
- (void)setSibling1:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

