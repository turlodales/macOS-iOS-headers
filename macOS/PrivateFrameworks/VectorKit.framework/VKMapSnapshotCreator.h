//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapEngineDelegate.h"
#import "VKNotificationObserverDelegate.h"

@class GEOPOICategoryFilter, NSString, VKGlobeImageCanvas, VKMapImageCanvas, VKNotificationObserver, VKRouteContext;

@interface VKMapSnapshotCreator : NSObject <MapEngineDelegate, VKNotificationObserverDelegate>
{
    VKMapImageCanvas *_mapCanvas;
    VKGlobeImageCanvas *_globeCanvas;
    int _mapType;
    CDStruct_51745937 _mapDisplayStyle;
    GEOPOICategoryFilter *_pointsOfInterestFilter;
    struct VKEdgeInsets _edgeInsets;
    BOOL _didBecomeFullyDrawn;
    BOOL _hasFailedTiles;
    CDUnknownBlockType _completion;
    struct unique_ptr<md::MapEngine, std::__1::default_delete<md::MapEngine>> _mapEngine;
    shared_ptr_e963992e _taskContext;
    BOOL _didSoftDealloc;
    VKNotificationObserver *_notificationObserver;
    unsigned long long _signpostId;
    id <VKRouteOverlay> _routeOverlay;
    VKRouteContext *_routeContext;
}

+ (BOOL)supportsSharingThumbnails;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) VKRouteContext *routeContext; // @synthesize routeContext=_routeContext;
@property(retain, nonatomic) id <VKRouteOverlay> routeOverlay; // @synthesize routeOverlay=_routeOverlay;
@property(nonatomic) struct VKEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) GEOPOICategoryFilter *pointsOfInterestFilter; // @synthesize pointsOfInterestFilter=_pointsOfInterestFilter;
@property(nonatomic) CDStruct_51745937 mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (void)selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg1;
- (void)labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg1;
- (void)labelManagerDidLayout;
- (void)didStartLoadingData;
- (void)didFinishLoadingDataWithError:(id)arg1;
- (void)didFinishLoadingData;
- (void)venueCreated:(const struct Venue *)arg1 building:(const struct VenueBuilding *)arg2;
- (void)nearestVenueDidChange:(const struct Venue *)arg1 building:(const struct VenueBuilding *)arg2;
- (_Bool)wantsTimerTick;
- (void)didPresent;
- (void)willLayoutWithTimestamp:(double)arg1;
- (void)didReceiveMemoryWarning;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (void)willBecomeFullyDrawn;
- (void)cancelFlushingTileDecodes:(BOOL)arg1;
- (void)cancel;
- (void)renderSnapshot:(CDUnknownBlockType)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)addCustomFeatureDataSource:(id)arg1;
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) BOOL showsVenues;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointLabels;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) BOOL localizeLabels;
- (struct LabelSettings *)_labelSettings;
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
@property(nonatomic) unsigned char emphasis;
@property(nonatomic) int mapType;
@property(readonly) struct CGSize size;
- (id)activeCanvas;
- (void)softDealloc;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 signpostId:(unsigned long long)arg4 auditToken:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

