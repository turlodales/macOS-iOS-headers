//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

@class NSImageView, NSView;

@interface EKUIHeaderImageView : EKUISingleViewGadget
{
    BOOL _hasBeenSetup;
    NSImageView *_imageView;
    NSView *_gradientView;
}

- (void).cxx_destruct;
@property BOOL hasBeenSetup; // @synthesize hasBeenSetup=_hasBeenSetup;
@property(retain) NSView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
- (BOOL)shouldDisplay;

@end

