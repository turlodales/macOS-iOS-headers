//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSUICollectionReusableView.h>

@class NSUICollectionViewCell;

@interface GKShowcaseCellView : NSUICollectionReusableView
{
    NSUICollectionViewCell *_cell;
    SEL _touchedShowcaseCellAction;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) SEL touchedShowcaseCellAction; // @synthesize touchedShowcaseCellAction=_touchedShowcaseCellAction;
@property(retain, nonatomic) NSUICollectionViewCell *cell; // @synthesize cell=_cell;
- (struct CGRect)alignmentRectForText;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

