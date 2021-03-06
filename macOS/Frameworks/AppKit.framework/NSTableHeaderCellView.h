//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSCell, NSTableHeaderView;

__attribute__((visibility("hidden")))
@interface NSTableHeaderCellView : NSView
{
    NSTableHeaderView *_tableHeaderView;
    NSCell *_cell;
    BOOL _selected;
}

@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property NSTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain) NSCell *cell; // @synthesize cell=_cell;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_commonInit;

@end

