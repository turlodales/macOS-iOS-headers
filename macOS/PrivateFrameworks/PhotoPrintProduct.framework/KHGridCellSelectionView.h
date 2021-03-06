//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXView.h>

@class UXImageView;

@interface KHGridCellSelectionView : UXView
{
    UXImageView *_dragHandleImageView;
    UXView *_selectionView;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) UXView *selectionView; // @synthesize selectionView=_selectionView;
@property(readonly, nonatomic) UXImageView *dragHandleImageView; // @synthesize dragHandleImageView=_dragHandleImageView;
- (void)mouseDown:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

