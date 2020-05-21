//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKPuckAnimatorTarget.h"
#import "VKRouteMatchedAnnotationPresentation.h"
#import "VKTrackableAnnotationPresentation.h"

@class GEORouteMatch, MKAnnotationView, NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation>
{
    MKAnnotationView *_annotationView;
    NSHashTable *_presentationCoordinateObservers;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void)removePresentationCoordinateChangedObserver:(id)arg1;
- (void)addPresentationCoordinateChangedObserver:(id)arg1;
@property(retain, nonatomic) GEORouteMatch *routeMatch;
@property(nonatomic) BOOL tracking;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
@property(nonatomic) double presentationCourse;
@property(nonatomic) CDStruct_c3b9c2ee presentationCoordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

