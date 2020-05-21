//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOSQLiteDB;

@interface GEORequestCounterPersistence : NSObject
{
    GEOSQLiteDB *_db;
    double _maxAge;
    BOOL _enabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;
- (void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(BOOL)arg4 at:(id)arg5;
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)_recordAnalylticsCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 withFxn:(CDUnknownFunctionPointerType)arg4;
- (void)readProactiveTileDownloadsSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(unsigned long long)arg7;
- (void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)purgeAllCounts;
- (void)_purgeOlderThan:(id)arg1;
- (void)logsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)countsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)incrementForApp:(id)arg1 time:(id)arg2 requestId:(id)arg3 requestType:(unsigned char)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 withCompletion:(CDUnknownBlockType)arg8;
- (void)_tearDown;
- (void)dealloc;
- (id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2;
- (id)init;

@end

