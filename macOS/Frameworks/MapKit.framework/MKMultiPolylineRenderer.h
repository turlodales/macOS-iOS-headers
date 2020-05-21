//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKOverlayPathRenderer.h>

@class MKMultiPolyline, VKVectorOverlayPolylineGroup;

@interface MKMultiPolylineRenderer : MKOverlayPathRenderer
{
    VKVectorOverlayPolylineGroup *_vectorGeometry;
}

+ (Class)_mapkitLeafClass;
- (void).cxx_destruct;
- (void)_updateRenderColors;
- (id)vectorDataForOverlay:(id)arg1;
- (BOOL)overlayCanProvideVectorData:(id)arg1;
- (id)_vectorGeometry;
- (BOOL)_canProvideVectorGeometry;
- (void)setMiterLimit:(double)arg1;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setAlpha:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)createPath;
@property(readonly, nonatomic) MKMultiPolyline *multiPolyline;
- (id)initWithMultiPolyline:(id)arg1;

@end

