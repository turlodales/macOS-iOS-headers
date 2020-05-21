//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GEOTrafficAndETAResult : NSObject
{
    BOOL _isSuccess;
    double _seconds;
    double _aggressiveTravelTime;
    double _conservativeTravelTime;
    NSString *_shortTrafficString;
    NSString *_longTrafficString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *longTrafficString; // @synthesize longTrafficString=_longTrafficString;
@property(copy, nonatomic) NSString *shortTrafficString; // @synthesize shortTrafficString=_shortTrafficString;
@property(nonatomic) double conservativeTravelTime; // @synthesize conservativeTravelTime=_conservativeTravelTime;
@property(nonatomic) double aggressiveTravelTime; // @synthesize aggressiveTravelTime=_aggressiveTravelTime;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
@property(nonatomic) BOOL isSuccess; // @synthesize isSuccess=_isSuccess;

@end

