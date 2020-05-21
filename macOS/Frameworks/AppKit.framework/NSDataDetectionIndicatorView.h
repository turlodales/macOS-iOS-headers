//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSDrawingHandlerView.h>

@class NSString, NSTextView, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface NSDataDetectionIndicatorView : _NSDrawingHandlerView
{
    NSTrackingArea *_trackingArea;
    id _dataResult;
    NSString *_string;
    struct _NSRange _range;
    NSTextView *_textView;
}

- (void)copy:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)_highlightMenuItemsForEvent:(id)arg1;
- (BOOL)_isSharing;
- (BOOL)_performContextualActionWithEvent:(id)arg1;
- (BOOL)_performDirectActionWithEvent:(id)arg1;
- (void)_reset;
- (void)bindToTextView:(id)arg1 forDataResult:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

