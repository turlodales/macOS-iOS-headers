//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSMapTable, NSPrintThumbnailView, NSSegmentedControl, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface NSPrintPreviewController : NSViewController
{
    struct CGSize _maxViewFrameSize;
    NSPrintThumbnailView *thumbnailView;
    NSView *pageNumberView;
    NSSegmentedControl *pageNumberLeftControl;
    NSTextField *pageNumberTextField;
    NSSegmentedControl *pageNumberRightControl;
    double _pageNumberViewLeading;
    BOOL _isPreviewing;
    BOOL _isInStartOrStop;
    NSMapTable *_observedKeyPathsPerAccessoryController;
    BOOL _hasRealPrintingStarted;
}

@property BOOL hasRealPrintingStarted; // @synthesize hasRealPrintingStarted=_hasRealPrintingStarted;
- (void)_updatePrintPreview:(id)arg1;
- (void)_cancelDeferredPrintPreview;
- (void)_updatePrintPreviewDeferred;
- (void)printInfoDidChange:(id)arg1;
- (void)userClickedPageNumberControl:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stop;
- (void)_start;
- (void)setMaxViewFrameSize:(struct CGSize)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (BOOL)_viewControllerSupports10_10Features;
- (void)loadView;
- (BOOL)_checkSizeValidity:(struct CGSize)arg1;
- (BOOL)_checkOriginValidity:(struct CGPoint)arg1;
- (void)_tileView;
- (void)_updatePageNumberView;
- (long long)_sheetAlignedPageNumberForRawPageNumber:(long long)arg1;
- (long long)_sheetNumberForRawPageNumber:(long long)arg1;
- (long long)_lastPageNumber;
- (long long)_firstPageNumber;
- (long long)_nUpPages;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (void)teardownForRealPrinting;
- (id)initWithOperation:(id)arg1;

@end

