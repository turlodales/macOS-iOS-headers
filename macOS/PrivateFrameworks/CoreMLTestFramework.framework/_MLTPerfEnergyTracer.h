//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMLTestFramework/_MLTPerfTracerProtocol-Protocol.h>

@class NSMutableArray;

@interface _MLTPerfEnergyTracer : NSObject <_MLTPerfTracerProtocol>
{
    BOOL _inMeasurement;
    int _pid;
    unsigned long long _sampleStartCPUCycles;
    NSMutableArray *_values;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long sampleStartCPUCycles; // @synthesize sampleStartCPUCycles=_sampleStartCPUCycles;
@property(nonatomic) BOOL inMeasurement; // @synthesize inMeasurement=_inMeasurement;
@property(nonatomic) int pid; // @synthesize pid=_pid;
- (BOOL)stopSampling:(id *)arg1;
- (BOOL)startSampling:(id *)arg1;
- (id)measurements;
- (id)init;

@end

