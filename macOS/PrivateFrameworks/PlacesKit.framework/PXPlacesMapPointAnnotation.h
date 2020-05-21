//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"
#import "PXPlacesMapRenderable.h"

@class NSOrderedSet, NSString;

@interface PXPlacesMapPointAnnotation : NSObject <MKAnnotation, PXPlacesMapRenderable>
{
    id <PXPlacesMapRenderer> renderer;
    id <PXPlacesMapSelectionHandler> selectionHandler;
    NSOrderedSet *geotaggables;
    long long index;
    struct CLLocationCoordinate2D coordinate;
}

- (void).cxx_destruct;
@property(nonatomic) long long index; // @synthesize index;
@property(retain) NSOrderedSet *geotaggables; // @synthesize geotaggables;
@property __weak id <PXPlacesMapSelectionHandler> selectionHandler; // @synthesize selectionHandler;
@property __weak id <PXPlacesMapRenderer> renderer; // @synthesize renderer;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

