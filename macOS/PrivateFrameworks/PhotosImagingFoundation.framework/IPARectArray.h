//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>
#import <PhotosImagingFoundation/NSMutableCopying-Protocol.h>

@interface IPARectArray : NSObject <NSCopying, NSMutableCopying>
{
    struct RectArray *_imp;
}

+ (id)rectArrayWithRect:(struct CGRect)arg1;
+ (id)rectArray;
- (void)enumerateRects:(CDUnknownBlockType)arg1;
- (struct CGRect)rectAtIndex:(unsigned long long)arg1;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRectArray:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;
- (id)init;

@end

