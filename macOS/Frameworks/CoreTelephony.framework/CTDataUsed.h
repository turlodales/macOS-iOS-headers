//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CTDataUsage;

@interface CTDataUsed : NSObject <NSCopying, NSSecureCoding>
{
    CTDataUsage *_native;
    CTDataUsage *_proxied;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) CTDataUsage *proxied; // @synthesize proxied=_proxied;
@property(readonly, nonatomic) CTDataUsage *native; // @synthesize native=_native;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addProxiedUsage:(id)arg1;
- (void)addNativeUsage:(id)arg1;
- (void)addUsage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithUsage:(id)arg1 proxied:(id)arg2;

@end

