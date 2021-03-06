//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MKRouteETA : NSObject
{
    int _status;
    double _distance;
    unsigned long long _transportType;
    double _travelTime;
    double _responseTime;
}

+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 status:(int)arg4;
+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) double distance; // @synthesize distance=_distance;

@end

