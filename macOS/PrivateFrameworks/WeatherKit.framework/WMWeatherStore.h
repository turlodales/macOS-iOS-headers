//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WMWeatherStoreProtocol.h"

@class NSString, NSXPCConnection;

@interface WMWeatherStore : NSObject <WMWeatherStoreProtocol>
{
    NSXPCConnection *_connection;
    id <WMWeatherStoreProtocol> _remoteWeatherStore;
}

+ (id)sharedWeatherStore;
- (void).cxx_destruct;
@property(retain) id <WMWeatherStoreProtocol> remoteWeatherStore; // @synthesize remoteWeatherStore=_remoteWeatherStore;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)currentConditionsForCoordinate:(struct CLLocationCoordinate2D)arg1 result:(CDUnknownBlockType)arg2;
- (void)currentHourlyForecastForCoordinate:(struct CLLocationCoordinate2D)arg1 result:(CDUnknownBlockType)arg2;
- (void)currentDailyForecastForCoordinate:(struct CLLocationCoordinate2D)arg1 result:(CDUnknownBlockType)arg2;
- (void)forecastForCoordinate:(struct CLLocationCoordinate2D)arg1 atDate:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)historicalWeatherForCoordinate:(struct CLLocationCoordinate2D)arg1 atDate:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)almanacWeatherForCoordinate:(struct CLLocationCoordinate2D)arg1 atDate:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)weatherForCoordinate:(struct CLLocationCoordinate2D)arg1 atDate:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

