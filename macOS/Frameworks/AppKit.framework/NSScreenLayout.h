//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>
#import <AppKit/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSScreenLayout : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_UUIDString;
    struct CGSize _size;
}

+ (id)layoutWithScreen:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

