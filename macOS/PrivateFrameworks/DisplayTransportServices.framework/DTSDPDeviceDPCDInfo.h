//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DisplayTransportServices/DTSDisplayPortDeviceInfo-Protocol.h>
#import <DisplayTransportServices/NSCopying-Protocol.h>
#import <DisplayTransportServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface DTSDPDeviceDPCDInfo : NSObject <DTSDisplayPortDeviceInfo, NSSecureCoding, NSCopying>
{
    BOOL _branch;
    unsigned char _hardwareMajorVersion;
    unsigned char _hardwareMinorVersion;
    unsigned char _firmwareMajorVersion;
    unsigned char _firmwareMinorVersion;
    unsigned int _oui;
    NSString *_deviceIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned char firmwareMinorVersion; // @synthesize firmwareMinorVersion=_firmwareMinorVersion;
@property(nonatomic) unsigned char firmwareMajorVersion; // @synthesize firmwareMajorVersion=_firmwareMajorVersion;
@property(nonatomic) unsigned char hardwareMinorVersion; // @synthesize hardwareMinorVersion=_hardwareMinorVersion;
@property(nonatomic) unsigned char hardwareMajorVersion; // @synthesize hardwareMajorVersion=_hardwareMajorVersion;
@property(nonatomic, getter=isBranch) BOOL branch; // @synthesize branch=_branch;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) unsigned int oui; // @synthesize oui=_oui;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

