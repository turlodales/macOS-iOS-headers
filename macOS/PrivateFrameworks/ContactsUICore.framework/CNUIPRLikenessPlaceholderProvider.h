//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIPRLikenessProvider.h"

@class CNCache, NSString;

@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider>
{
    CNCache *_cache;
}

+ (id)companyImageNameForDiameter:(double)arg1;
+ (id)imageNameForDiameter:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
- (unsigned long long)_cnui_likenessType;
- (id)_cnui_likenessForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_circularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)renderRoundedRectImageForSilhouetteImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (struct CGImage *)renderCircularImageForSilhouetteImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

