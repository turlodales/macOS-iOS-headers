//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CTBundle : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned char)convertBundleType:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithBundleType:(long long)arg1;

@end

