//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOPreloadStep : NSObject
{
    CDStruct_2c43369c coord;
    double routeIdx;
    GEOTileKeyList *wantedTiles;
    double startTime;
    double endTime;
    unsigned int bytesLoaded;
    unsigned int bytesLoadedFromNetwork;
    unsigned int generation;
    unsigned int numRetries;
    unsigned int hasError:1;
    unsigned int hasLifetimeError:1;
    unsigned int nearManeuver:1;
    unsigned int loading:1;
    unsigned int loaded:1;
}

- (void).cxx_destruct;
- (double)networkDataRateKB;
- (void)resetErrors;
- (BOOL)okToLoad;

@end

