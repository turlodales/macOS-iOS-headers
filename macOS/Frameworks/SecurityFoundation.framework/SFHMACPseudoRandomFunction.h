//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFPseudoRandomFunction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SFHMACPseudoRandomFunction : NSObject <SFPseudoRandomFunction>
{
    id _hmacPseudoRandomFunctionInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) id <SFDigestOperation> digestOperation;
- (id)generateBytesWithLength:(long long)arg1 key:(id)arg2 error:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

