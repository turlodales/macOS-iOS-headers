//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"

@class NSMutableArray, NSString;

@interface HMDAWDConfigurationLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _isResidentCapable;
    _Bool _isResidentEnabled;
    _Bool _isDemoHomeConfigured;
    unsigned int _databaseSize;
    unsigned int _metadataVersion;
    NSMutableArray *_homeConfigurations;
}

+ (id)uuid;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *homeConfigurations; // @synthesize homeConfigurations=_homeConfigurations;
@property _Bool isDemoHomeConfigured; // @synthesize isDemoHomeConfigured=_isDemoHomeConfigured;
@property _Bool isResidentEnabled; // @synthesize isResidentEnabled=_isResidentEnabled;
@property _Bool isResidentCapable; // @synthesize isResidentCapable=_isResidentCapable;
@property unsigned int metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property unsigned int databaseSize; // @synthesize databaseSize=_databaseSize;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)initWithCapacity:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

