//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADRotation3D : NSObject <NSCopying>
{
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)revolution;
- (float)longitude;
- (float)latitude;
- (id)initWithLatitude:(float)arg1 longitude:(float)arg2 revolution:(float)arg3;

@end

