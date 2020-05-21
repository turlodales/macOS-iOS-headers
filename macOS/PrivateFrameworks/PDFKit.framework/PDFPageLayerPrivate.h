//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSDate, NSMutableArray, NSMutableDictionary, NSObject<PDFPageLayerGeometryInterface>, PDFPage, PDFRenderingProperties, PDFTimer;

__attribute__((visibility("hidden")))
@interface PDFPageLayerPrivate : NSObject
{
    PDFPage *page;
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    long long oldPageRotation;
    struct CGRect oldBoundsForBox;
    CALayer *tilesLayer;
    int generationCount;
    double lastLayoutZoomFactor;
    struct CGRect lastLayerFrameInRootView;
    NSDate *lastZoomChange;
    _Bool zoomChangeScheduled;
    double zoomGenerationDelay;
    unsigned long long visibilityDelegateIndex;
    _Bool tileLayerHidden;
    NSMutableArray *tiles;
    _Bool allowUpdate;
    PDFTimer *forcedUpdateTimer;
    _Bool isForcingUpdate;
    // Error parsing type: AB, name: isTiling
    // Error parsing type: AB, name: requestedTiling
    CALayer *effectsLayer;
    NSMutableDictionary *pageLayerEffects;
}

- (void).cxx_destruct;

@end

