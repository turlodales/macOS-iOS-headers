//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUIGadget.h>

@interface EKUISingleViewGadget : EKUIGadget
{
    BOOL _hasAddedControlViewConstraints;
}

@property BOOL hasAddedControlViewConstraints; // @synthesize hasAddedControlViewConstraints=_hasAddedControlViewConstraints;
- (double)bottomPadding;
- (double)horizontalPadding;
- (void)addSubviewsIfNeeded;
- (void)updateConstraints;
- (id)control;

@end

