//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface AXMDiagnosticMetric : NSObject <NSSecureCoding>
{
    long long _state;
    unsigned long long _startTime;
    unsigned long long _endTime;
    struct mach_task_basic_info _startTaskInfo;
    struct task_vm_info _startVMInfo;
    struct mach_task_basic_info _endTaskInfo;
    struct task_vm_info _endVMInfo;
    NSString *_name;
    long long _representedMetrics;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long representedMetrics; // @synthesize representedMetrics=_representedMetrics;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)finish;
- (void)start;
- (void)_capturMachAbsoluteTime:(unsigned long long *)arg1 taskInfo:(struct mach_task_basic_info *)arg2 vmInfo:(struct task_vm_info *)arg3;
@property(readonly, nonatomic) NSNumber *elapsedTime;
@property(readonly, nonatomic) NSNumber *finalTime;
@property(readonly, nonatomic) NSNumber *initialTime;
@property(readonly, nonatomic) NSNumber *physicalFootprintDelta;
@property(readonly, nonatomic) NSNumber *residentMemoryPeakDelta;
@property(readonly, nonatomic) NSNumber *residentMemoryDelta;
@property(readonly, nonatomic) NSNumber *finalPhysicalFootprint;
@property(readonly, nonatomic) NSNumber *finalResidentMemoryPeak;
@property(readonly, nonatomic) NSNumber *finalResidentMemory;
@property(readonly, nonatomic) NSNumber *initialPhysicalFootprint;
@property(readonly, nonatomic) NSNumber *initialResidentMemoryPeak;
@property(readonly, nonatomic) NSNumber *initialResidentMemory;
@property(readonly, nonatomic) BOOL isMemoryFootprintMetric;
@property(readonly, nonatomic) BOOL isElapsedTimeMetric;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithName:(id)arg1 metrics:(long long)arg2;

@end

