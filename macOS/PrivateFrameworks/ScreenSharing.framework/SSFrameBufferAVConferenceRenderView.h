//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenSharing/SSFrameBufferRenderView.h>

@interface SSFrameBufferAVConferenceRenderView : SSFrameBufferRenderView
{
    struct CGImage *_touchImageRef;
    struct CGImage *_forceTouchImageRef;
}

@property struct CGImage *forceTouchImageRef; // @synthesize forceTouchImageRef=_forceTouchImageRef;
@property struct CGImage *touchImageRef; // @synthesize touchImageRef=_touchImageRef;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

