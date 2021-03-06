//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CUICustomFontCacheKey : NSObject <NSCopying>
{
    NSString *_name;
    double _pointSize;
    unsigned long long _hash;
    BOOL _hasHash;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) double pointSize;
@property(copy, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

