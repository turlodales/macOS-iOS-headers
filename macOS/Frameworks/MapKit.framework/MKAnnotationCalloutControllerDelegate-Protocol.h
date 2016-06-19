//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKAnnotationCalloutController, MKAnnotationView;

@protocol MKAnnotationCalloutControllerDelegate <NSObject>
- (void)calloutController:(MKAnnotationCalloutController *)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 annotationCoordinate:(struct CLLocationCoordinate2D)arg3 completionHandler:(void (^)(void))arg4;
- (struct CGRect)calloutController:(MKAnnotationCalloutController *)arg1 visibleCenteringRectInAnnotationView:(MKAnnotationView *)arg2;

@optional
- (void)calloutControllerDidFinishMapsTransitionExpanding:(MKAnnotationCalloutController *)arg1;
@end

