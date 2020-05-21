//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CCVegaRenderer, NSAppearance, NSArray, NSMutableSet, NSNumber, NSObject<CCChartViewDelegate>, NSString, NSTrackingArea;

@interface CCChartView : NSView
{
    CCVegaRenderer *_renderer;
    NSString *_baseConfigType;
    NSString *_config;
    NSString *_spec;
    double _zoomFactor;
    NSArray *_legacyData;
    NSMutableSet *_knownNamedDatasets;
    NSTrackingArea *_trackingArea;
    NSNumber *_scaleFactor;
    NSAppearance *_currentAppearance;
    unsigned int _rendererType;
    _Bool _preventGestures;
    _Bool _caUpdateFromBackground;
    NSObject<CCChartViewDelegate> *delegate;
}

+ (void)registerExpressionFunction:(CDUnknownBlockType)arg1 withName:(id)arg2;
- (void).cxx_destruct;
@property __weak NSObject<CCChartViewDelegate> *delegate; // @synthesize delegate;
@property(readonly) struct CGImage *CGImage;
@property(nonatomic) double contentScaleFactor;
- (id)getBenchmarkRecords;
- (void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingIDs:(id)arg3;
- (void)changeDefaultDatasetByInserting:(id)arg1 removingIDs:(id)arg2;
- (void)setNamedDataset:(id)arg1 rows:(id)arg2;
- (void)setDefaultDataset:(id)arg1;
@property(retain, nonatomic) NSArray *data;
@property(retain) NSString *config;
@property(retain) NSString *spec;
@property(nonatomic) double zoomFactor;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateTrackingAreas;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)triggerMouseEvent:(id)arg1 type:(id)arg2 setConsumed:(_Bool)arg3;
- (void)triggerMouseEvent:(id)arg1 type:(id)arg2;
- (id)eventToMouseEvent:(id)arg1;
- (id)localizedStringNamed:(id)arg1;
- (id)colorNamed:(id)arg1;
- (void)rendererDidSetDescription:(id)arg1;
- (void)rendererDidUpdate;
- (id)loadChartDataFromURL:(id)arg1 error:(id *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)reinitializeRenderer;
- (void)lazilyInitializeRenderer;
- (void)viewDidChangeEffectiveAppearance;
- (void)render;
- (void)setupWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3;
- (id)initWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3;
- (id)initWithSpec:(id)arg1 config:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRenderer:(id)arg1;
- (id)renderer;

@end

