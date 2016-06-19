//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSUnit.h>

#import "NSSecureCoding.h"

@class NSUnitConverter;

@interface NSDimension : NSUnit <NSSecureCoding>
{
    unsigned long long _reserved;
    NSUnitConverter *_converter;
}

+ (BOOL)supportsSecureCoding;
+ (id)baseUnit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)dimension;
@property(readonly, copy) NSUnitConverter *converter; // @synthesize converter=_converter;
@property(readonly) unsigned long long specifier; // @synthesize specifier=_reserved;
- (void)dealloc;
- (id)initWithSpecifier:(unsigned long long)arg1 symbol:(id)arg2 converter:(id)arg3;
- (id)initWithSymbol:(id)arg1 converter:(id)arg2;

@end

