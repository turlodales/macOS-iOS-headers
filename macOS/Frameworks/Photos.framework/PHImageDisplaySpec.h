//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHImageDisplaySpec : NSObject
{
    long long _contentMode;
    struct CGSize _targetSize;
    struct CGRect _normalizedCropRect;
}

@property(nonatomic) struct CGRect normalizedCropRect; // @synthesize normalizedCropRect=_normalizedCropRect;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (BOOL)isTargetingMaximumSizeWithFullSizedWidth:(long long)arg1 height:(long long)arg2;
- (struct CGSize)requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2;
- (id)description;
- (id)shortDescription;
- (BOOL)hasExplicitCrop;
- (id)initWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 normalizedCropRect:(struct CGRect)arg3;
- (id)initWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2;
- (id)initWithTargetSize:(struct CGSize)arg1;
- (id)init;

@end

