//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistiveControlSupport/ACSHView.h>

@interface ACSHMouseSelectionView : ACSHView
{
    struct CGPoint _selectionStartPoint;
    struct CGPoint _selectionEndPoint;
}

@property(nonatomic) struct CGPoint selectionEndPoint; // @synthesize selectionEndPoint=_selectionEndPoint;
@property(nonatomic) struct CGPoint selectionStartPoint; // @synthesize selectionStartPoint=_selectionStartPoint;
- (void)_selectionEndPointUpdated;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

