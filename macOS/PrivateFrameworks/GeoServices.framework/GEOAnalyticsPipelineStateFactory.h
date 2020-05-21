//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOLogMsgState, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineStateFactory : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
    NSString *_countryCode;
}

+ (id)sharedFactory;
- (void).cxx_destruct;
- (void)deviceCountryChanged:(id)arg1;
- (id)sessionStateForType:(long long)arg1;
- (id)_emptyUserSessionState;
- (id)stateForType:(long long)arg1;
- (id)mapLaunch;
- (id)mapRestore;
- (id)suggestions;
- (id)placeRequest;
- (id)tileSet;
- (id)mapsServer;
- (id)route;
- (id)placeCard;
- (id)experimentsIncludingABAssignInfo:(BOOL)arg1 includingClientConfig:(BOOL)arg2;
- (id)mapUIShown;
- (id)mapUI;
- (id)mapSettings;
- (id)mapViewLocation;
- (id)mapView;
- (id)extension;
- (id)pairedDevice;
- (id)carPlay;
- (id)carPlayLimited;
- (id)deviceSettings_Long;
- (id)deviceSettings_Short;
- (id)deviceConnection;
- (id)deviceConnectionLimited;
- (id)deviceLocale;
- (id)deviceLocaleLimited;
- (id)applicationIdentifier;
- (id)deviceIndentifierInternal;
- (id)deviceIdentifier;
- (void)dealloc;
- (id)init;

@end

