//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FPTag : NSObject <NSSecureCoding, NSCopying>
{
    int _color;
    NSString *_label;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) int color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (long long)localizedStandardCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (BOOL)isEqualToTag:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLabel:(id)arg1 color:(int)arg2;

@end

