//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSClipView.h"

__attribute__((visibility("hidden")))
@interface FI_TAutoResizingClipView : NSClipView
{
    struct CGSize _globalDocumentViewSize;
    _Bool _autoResizeWidth;
    _Bool _autoResizeHeight;
}

@property _Bool autoResizeHeight; // @synthesize autoResizeHeight=_autoResizeHeight;
@property _Bool autoResizeWidth; // @synthesize autoResizeWidth=_autoResizeWidth;
- (void)viewFrameChanged:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (BOOL)isFlipped;

@end

