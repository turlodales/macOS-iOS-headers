//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCursor, NSImmediateActionGestureRecognizer, NSMutableArray, NSTrackingArea, PDFAKOverlayAdaptor, PDFAnnotation, PDFCoachMarkManager, PDFDocument, PDFPage, PDFPageView, PDFPasswordViewController, PDFRenderingProperties, PDFRevealManager, PDFScrollView, PDFSelection, PDFTimer, PDFViewController, PDFViewLayout;

__attribute__((visibility("hidden")))
@interface PDFViewPrivate : NSObject
{
    PDFDocument *document;
    PDFScrollView *scrollView;
    PDFViewController *controller;
    PDFSelection *currentSelection;
    _Bool autoScale;
    _Bool scaling;
    double zoomIncrement;
    id <PDFViewDelegate> delegate;
    _Bool delegateWillScale;
    _Bool delegateOrdersPageDrawing;
    double gutterWide;
    _Bool displaysPageBreaks;
    struct NSEdgeInsets pageBreakMargins;
    struct NSEdgeInsets documentMargins;
    long long displayMode;
    long long displayDirection;
    PDFViewLayout *viewLayout;
    _Bool displaysAsBook;
    _Bool displaysRTL;
    PDFRenderingProperties *renderingProperties;
    unsigned long long lastVerticalScrollDirection;
    unsigned long long lastHorizontalScrollDirection;
    _Bool displaysBookmarksForPages;
    unsigned long long currentPageIndex;
    unsigned long long firstVisiblePage;
    unsigned long long lastVisiblePage;
    _Bool inhibitAutoScroll;
    PDFPage *fromPage;
    PDFTimer *pageSyncTimer;
    NSMutableArray *destinationHistory;
    long long historyIndex;
    NSArray *highlights;
    PDFCoachMarkManager *coachMarkManager;
    PDFPasswordViewController *passwordViewController;
    PDFAnnotation *currentTextWidget;
    PDFAKOverlayAdaptor *akOverlayAdaptor;
    _Bool showsScrollIndicators;
    _Bool dataDetectorsEnabled;
    _Bool debugDrawCGPDFNodeLayer[11];
    _Bool wantsForceUpdate;
    double blockingWaitDuration;
    unsigned long long activeMarkupStyle;
    PDFPageView *rotatingPageView;
    struct CGRect rotatingPageOriginalFrame;
    _Bool enableSwipeGestures;
    _Bool isActivelyFluidSwiping;
    struct CGRect originalCurrentPageViewFrames[2];
    struct CGRect originalTopPageViewFrames[2];
    struct CGRect sourcePageFrames[2];
    struct CGRect targetPageFrames[2];
    NSTrackingArea *trackingArea;
    _Bool enableMouseEvents;
    NSImmediateActionGestureRecognizer *deepPressRecognizer;
    PDFRevealManager *revealManager;
    _Bool isPresentingRVItem;
    NSCursor *annotationCursor;
    _Bool allowsDragging;
}

- (void).cxx_destruct;

@end

