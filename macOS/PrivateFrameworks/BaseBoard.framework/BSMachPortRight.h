//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSInvalidatable.h"
#import "BSXPCCoding.h"
#import "NSSecureCoding.h"

@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable>
{
    struct os_unfair_lock_s _lock;
    unsigned int _lock_port;
    unsigned int _rawPort;
    int _owner;
    NSString *_trace;
}

+ (BOOL)supportsSecureCoding;
+ (void)_unsafe_destroyPort:(unsigned int)arg1;
+ (BOOL)_unsafe_isUsablePort:(unsigned int)arg1;
+ (unsigned int)_unsafe_decodePort:(id)arg1;
+ (struct _xpc_type_s *)_decodeType;
+ (id)_rightDescription;
+ (id)_descriptionForPort:(unsigned int)arg1 owner:(int)arg2 tag:(id)arg3 trace:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *trace; // @synthesize trace=_trace;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_lock_encodePort:(unsigned int)arg1;
- (void)_lock_invalidateForOwner:(int)arg1;
- (void)_lock_invalidate;
- (BOOL)_lock_isUsable;
- (void)_critical:(CDUnknownBlockType)arg1;
- (unsigned int)rawPort;
- (void)invalidate;
- (BOOL)isUsable;
- (unsigned int)port;
- (void)dealloc;
- (id)init;
- (id)_initWithPort:(unsigned int)arg1 owner:(int)arg2 trace:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

