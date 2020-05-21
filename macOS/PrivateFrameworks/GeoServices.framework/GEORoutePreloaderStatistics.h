//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDateInterval;

@interface GEORoutePreloaderStatistics : NSObject <NSSecureCoding>
{
    NSDateInterval *_dateInterval;
    long long _transportType;
    unsigned long long _tilesPreloaded;
    unsigned long long _tilesUsed;
    unsigned long long _tilesMissed;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long tilesMissed; // @synthesize tilesMissed=_tilesMissed;
@property(nonatomic) unsigned long long tilesUsed; // @synthesize tilesUsed=_tilesUsed;
@property(nonatomic) unsigned long long tilesPreloaded; // @synthesize tilesPreloaded=_tilesPreloaded;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;

@end

