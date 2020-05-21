//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, NSImage, NSImageView, NSObject<OS_os_log>, NSString, NSTextField;

@interface BKUIDeviceImageView : NSView
{
    NSObject<OS_os_log> *bkui_device_image_log;
    NSString *_dfrLabel;
    CALayer *_viewLayer;
    NSImageView *_imageView;
    NSImage *_deviceImage;
    NSImage *_fingerImage;
    NSImage *_arrowImage;
    NSTextField *_dfrTextField;
}

- (void).cxx_destruct;
@property(retain) NSTextField *dfrTextField; // @synthesize dfrTextField=_dfrTextField;
@property(retain) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain) NSImage *fingerImage; // @synthesize fingerImage=_fingerImage;
@property(retain) NSImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) CALayer *viewLayer; // @synthesize viewLayer=_viewLayer;
@property(retain, nonatomic) NSString *dfrLabel; // @synthesize dfrLabel=_dfrLabel;
- (BOOL)hasSeparateTouchButtonWithTouchBar;
- (BOOL)hasTouchBar;
- (id)_getDeviceImagePathWithName:(id)arg1 withType:(id)arg2;
- (id)_getDeviceColorImageName;
- (void)_initTouchIDIntroView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

