//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@class NSURL;

@interface NSError (MapKitAdditions)
+ (id)_errorWithExtensionServiceError:(long long)arg1;
@property(readonly, retain, nonatomic) NSURL *_mapkit_locationErrorSettingsURL;
@property(readonly, nonatomic, getter=_mapkit_isCLErrorNetwork) BOOL _mapkit_CLErrorNetwork;
@property(readonly, nonatomic, getter=_mapkit_isCLHeadingFailure) BOOL _mapkit_CLHeadingFailure;
@property(readonly, nonatomic, getter=_mapkit_isCLLocationUnknown) BOOL _mapkit_CLLocationUnknown;
@property(readonly, nonatomic, getter=_mapkit_isCLDenied) BOOL _mapkit_CLDenied;
- (id)_mapkit_error;
- (id)_mapkit_transitIncident;
- (long long)_mapkit_underlyingGEOError;
- (long long)_mapkit_directionsErrorCode;
- (BOOL)_mapkit_isDirectionsError;
- (id)_mapkit_errorWithDirectionsError:(id)arg1;
@end

