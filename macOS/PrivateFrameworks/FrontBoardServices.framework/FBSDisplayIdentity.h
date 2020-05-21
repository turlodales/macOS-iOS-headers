//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>
{
    long long _type;
    unsigned int _displayID;
    unsigned int _connectionSeed;
    int _pid;
    BOOL _external;
    NSString *_uniqueIdentifier;
    BOOL _secure;
    FBSDisplayIdentity *_rootIdentity;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSecure) BOOL secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic, getter=isExternal) BOOL external; // @synthesize external=_external;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isMusicOnlyDisplay;
- (BOOL)isiPodOnlyDisplay;
- (BOOL)isRestrictedAirPlayDisplay;
- (BOOL)isAirPlayDisplay;
- (BOOL)isMainRootDisplay;
- (unsigned int)connectionSeed;
- (unsigned int)displayID;
- (BOOL)expectsSecureRendering;
- (id)uniqueIdentifier;
- (long long)type;
@property(readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property(readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property(readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
@property(readonly, nonatomic) BOOL isRootIdentity;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *rootIdentity;
- (id)_initWithType:(long long)arg1 displayID:(unsigned int)arg2 connectionSeed:(unsigned int)arg3 pid:(int)arg4 external:(BOOL)arg5 uniqueIdentifier:(id)arg6 secure:(BOOL)arg7 root:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

