//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface LFMachPortWrapper : NSObject <NSSecureCoding>
{
    long long _type;
    unsigned int _machPort;
}

+ (BOOL)supportsSecureCoding;
+ (id)machPortWrapperWithMachPort:(unsigned int)arg1 ofType:(long long)arg2;
@property(readonly) unsigned int machPort; // @synthesize machPort=_machPort;
@property(readonly) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1 ofType:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

