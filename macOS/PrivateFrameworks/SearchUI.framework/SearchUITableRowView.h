//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSLayoutConstraint, NSView;

@interface SearchUITableRowView : NSTableRowView
{
    NSView *_separatorView;
    NSLayoutConstraint *_separatorViewHeightConstraint;
    NSLayoutConstraint *_separatorViewLeftConstraint;
    NSLayoutConstraint *_separatorViewRightConstraint;
    struct NSEdgeInsets _separatorInset;
}

- (void).cxx_destruct;
@property(nonatomic) NSLayoutConstraint *separatorViewRightConstraint; // @synthesize separatorViewRightConstraint=_separatorViewRightConstraint;
@property(nonatomic) NSLayoutConstraint *separatorViewLeftConstraint; // @synthesize separatorViewLeftConstraint=_separatorViewLeftConstraint;
@property(nonatomic) NSLayoutConstraint *separatorViewHeightConstraint; // @synthesize separatorViewHeightConstraint=_separatorViewHeightConstraint;
@property(retain, nonatomic) NSView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) struct NSEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
- (void)applySeparatorStyleWithCurrentRowModel:(id)arg1 nextRowModel:(id)arg2;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)viewDidChangeBackingProperties;
- (double)separatorHeight;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initStyle;

@end

