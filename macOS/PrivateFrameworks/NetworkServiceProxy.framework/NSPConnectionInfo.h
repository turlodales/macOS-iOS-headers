//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface NSPConnectionInfo : NSObject <NSSecureCoding>
{
    long long _fallbackReason;
    BOOL _isMultipath;
    BOOL _TFOSucceeded;
    BOOL _isTFOProbeSucceeded;
    long long _pathType;
    long long _fallbackReasonCategory;
    double _fallbackDelay;
    long long _edgeType;
    NSString *_edgeAddress;
    unsigned long long _multipathSubflowCount;
    unsigned long long _multipathConnectedSubflowCount;
    unsigned long long _multipathPrimarySubflowInterfaceIndex;
    NSDictionary *_multipathSubflowSwitchCounts;
    NSDictionary *_TCPInfo;
    NSDate *_firstTxByteTimeStamp;
    double _firstTxByteDelay;
    double _connectionDelay;
    long long _IPType;
    long long _interfaceType;
    unsigned long long _minimumRTT;
    double _timeIntervalSinceLastUsage;
    double _timeToFirstByte;
    long long _tunnelConnectionError;
    unsigned long long _initialBytesLeftOver;
    NSDictionary *_exceptions;
    NSString *_interfaceName;
    NSArray *_timingIntervals;
}

+ (BOOL)shouldResolveForFallbackReason:(long long)arg1;
+ (BOOL)shouldMoveToNextEdgeForFallbackReason:(long long)arg1;
+ (int)fallbackReasonToErrno:(long long)arg1;
+ (id)getFallbackReasonDescription:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *timingIntervals; // @synthesize timingIntervals=_timingIntervals;
@property(retain, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(retain, nonatomic) NSDictionary *exceptions; // @synthesize exceptions=_exceptions;
@property(nonatomic) unsigned long long initialBytesLeftOver; // @synthesize initialBytesLeftOver=_initialBytesLeftOver;
@property(nonatomic) BOOL isTFOProbeSucceeded; // @synthesize isTFOProbeSucceeded=_isTFOProbeSucceeded;
@property(nonatomic) long long tunnelConnectionError; // @synthesize tunnelConnectionError=_tunnelConnectionError;
@property(nonatomic) double timeToFirstByte; // @synthesize timeToFirstByte=_timeToFirstByte;
@property(nonatomic) double timeIntervalSinceLastUsage; // @synthesize timeIntervalSinceLastUsage=_timeIntervalSinceLastUsage;
@property(nonatomic) unsigned long long minimumRTT; // @synthesize minimumRTT=_minimumRTT;
@property(nonatomic) long long interfaceType; // @synthesize interfaceType=_interfaceType;
@property(nonatomic) long long IPType; // @synthesize IPType=_IPType;
@property(nonatomic) BOOL TFOSucceeded; // @synthesize TFOSucceeded=_TFOSucceeded;
@property(nonatomic) double connectionDelay; // @synthesize connectionDelay=_connectionDelay;
@property(nonatomic) double firstTxByteDelay; // @synthesize firstTxByteDelay=_firstTxByteDelay;
@property(retain, nonatomic) NSDate *firstTxByteTimeStamp; // @synthesize firstTxByteTimeStamp=_firstTxByteTimeStamp;
@property(retain, nonatomic) NSDictionary *TCPInfo; // @synthesize TCPInfo=_TCPInfo;
@property(retain, nonatomic) NSDictionary *multipathSubflowSwitchCounts; // @synthesize multipathSubflowSwitchCounts=_multipathSubflowSwitchCounts;
@property(nonatomic) unsigned long long multipathPrimarySubflowInterfaceIndex; // @synthesize multipathPrimarySubflowInterfaceIndex=_multipathPrimarySubflowInterfaceIndex;
@property(nonatomic) unsigned long long multipathConnectedSubflowCount; // @synthesize multipathConnectedSubflowCount=_multipathConnectedSubflowCount;
@property(nonatomic) unsigned long long multipathSubflowCount; // @synthesize multipathSubflowCount=_multipathSubflowCount;
@property(nonatomic) BOOL isMultipath; // @synthesize isMultipath=_isMultipath;
@property(retain, nonatomic) NSString *edgeAddress; // @synthesize edgeAddress=_edgeAddress;
@property(nonatomic) long long edgeType; // @synthesize edgeType=_edgeType;
@property(nonatomic) double fallbackDelay; // @synthesize fallbackDelay=_fallbackDelay;
@property(readonly, nonatomic) long long fallbackReasonCategory; // @synthesize fallbackReasonCategory=_fallbackReasonCategory;
@property(nonatomic) long long pathType; // @synthesize pathType=_pathType;
- (id)timingIntervalAtIndex:(unsigned long long)arg1 forKey:(id)arg2;
@property(nonatomic) long long fallbackReason;
- (id)copyDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

