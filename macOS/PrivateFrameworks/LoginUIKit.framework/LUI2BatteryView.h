//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSImageView, NSTextField;

@interface LUI2BatteryView : NSStackView
{
    NSTextField *_batteryTextField;
    NSImageView *_batteryImageView;
}

@property(retain) NSImageView *batteryImageView; // @synthesize batteryImageView=_batteryImageView;
@property(retain) NSTextField *batteryTextField; // @synthesize batteryTextField=_batteryTextField;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBatteryPercentage:(id)arg1;
- (void)setBatteryImage:(id)arg1;
- (void)_setupBatteryView;

@end

