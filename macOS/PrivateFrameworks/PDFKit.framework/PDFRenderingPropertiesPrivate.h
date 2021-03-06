//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, PDFLayerController, PDFView;

__attribute__((visibility("hidden")))
@interface PDFRenderingPropertiesPrivate : NSObject
{
    PDFView *pdfView;
    PDFLayerController *pdfLayerController;
    long long displayBox;
    _Bool shouldAntiAlias;
    double greekingThreshold;
    long long interpolationQuality;
    double lineWidthThreshold;
    NSColor *pageColor;
    _Bool enablePageShadows;
    _Bool enableTileEdgeColoring;
    _Bool enableAccessibilityDrawing;
    double screenScaleFactor;
    _Bool enableTileUpdates;
    _Bool enableBackgroundImages;
    _Bool isUsingPDFExtensionView;
    struct CGColorSpace *deviceColorSpace;
}

- (void).cxx_destruct;

@end

