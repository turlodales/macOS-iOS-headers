//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKMapView.h>

@class KHFrame, KHSelectionManager;

@interface KHMapView : MKMapView
{
    BOOL _rendering;
    BOOL _cameraInitiated;
    KHFrame *_frameObject;
    struct CGPoint _contextualMenuPoint;
}

- (void).cxx_destruct;
@property struct CGPoint contextualMenuPoint; // @synthesize contextualMenuPoint=_contextualMenuPoint;
@property(getter=isCameraInitiated) BOOL cameraInitiated; // @synthesize cameraInitiated=_cameraInitiated;
@property(getter=isRendering) BOOL rendering; // @synthesize rendering=_rendering;
@property(retain, nonatomic) KHFrame *frameObject; // @synthesize frameObject=_frameObject;
- (double)zoomLevelFromCoordinateSpan:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)coordinateSpanWithMapView:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 andZoomLevel:(unsigned long long)arg3;
- (double)pixelSpaceYToLatitude:(double)arg1;
- (double)pixelSpaceXToLongitude:(double)arg1;
- (double)latitudeToPixelSpaceY:(double)arg1;
- (double)longitudeToPixelSpaceX:(double)arg1;
- (void)persistMapAttributes;
- (void)setMapType:(unsigned long long)arg1;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)keyDown:(id)arg1;
- (void)getFrameInfo:(id)arg1;
- (void)showLayoutInspector:(id)arg1;
- (void)showFrameInspector:(id)arg1;
- (void)handleContextualMenu:(id)arg1;
- (void)removeAnnotation:(id)arg1;
@property(readonly, nonatomic) KHSelectionManager *selectionManager;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

