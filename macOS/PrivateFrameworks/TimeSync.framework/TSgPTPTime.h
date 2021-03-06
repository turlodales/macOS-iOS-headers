//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/NSCopying-Protocol.h>

@interface TSgPTPTime : NSObject <NSCopying>
{
    BOOL _ptpTimescale;
    BOOL _timeTraceable;
    BOOL _frequencyTraceable;
    unsigned short _localPortNumber;
    unsigned long long _nanosecondsSinceEpoch;
    unsigned long long _grandmasterIdentity;
}

@property(readonly, nonatomic, getter=isFrequencyTraceable) BOOL frequencyTraceable; // @synthesize frequencyTraceable=_frequencyTraceable;
@property(readonly, nonatomic, getter=isTimeTraceable) BOOL timeTraceable; // @synthesize timeTraceable=_timeTraceable;
@property(readonly, nonatomic, getter=isPTPTimescale) BOOL ptpTimescale; // @synthesize ptpTimescale=_ptpTimescale;
@property(readonly, nonatomic) unsigned short localPortNumber; // @synthesize localPortNumber=_localPortNumber;
@property(readonly, nonatomic) unsigned long long grandmasterIdentity; // @synthesize grandmasterIdentity=_grandmasterIdentity;
@property(readonly, nonatomic) unsigned long long nanosecondsSinceEpoch; // @synthesize nanosecondsSinceEpoch=_nanosecondsSinceEpoch;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int nanoseconds; // @dynamic nanoseconds;
@property(readonly, nonatomic) unsigned long long seconds; // @dynamic seconds;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1 onGrandmaster:(unsigned long long)arg2 withLocalPortNumber:(unsigned short)arg3 ptpTimescale:(BOOL)arg4 timeTraceable:(BOOL)arg5 frequencyTraceable:(BOOL)arg6;
- (id)initWithSeconds:(unsigned long long)arg1 nanoseconds:(unsigned int)arg2 onGrandmaster:(unsigned long long)arg3 withLocalPortNumber:(unsigned short)arg4 ptpTimescale:(BOOL)arg5 timeTraceable:(BOOL)arg6 frequencyTraceable:(BOOL)arg7;
- (id)init;

@end

