//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

@class CalUILabel, NSLayoutConstraint;

@interface EKUISubtitleGadget : EKUISingleViewGadget
{
    CalUILabel *_subtitleLabel;
    NSLayoutConstraint *_zeroHeightConstraint;
}

- (void).cxx_destruct;
@property(retain) NSLayoutConstraint *zeroHeightConstraint; // @synthesize zeroHeightConstraint=_zeroHeightConstraint;
@property(retain) CalUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (BOOL)shouldDisplay;

@end

