//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISVariantResourceProtocol.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ISImageSetVariantResource : NSObject <ISVariantResourceProtocol>
{
    NSString *_variantName;
    unsigned long long _flags;
    NSMutableDictionary *_resourceImages;
}

+ (id)resourceWithURL:(id)arg1 resourceInfo:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *resourceImages; // @synthesize resourceImages=_resourceImages;
@property(readonly) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly) NSString *variantName; // @synthesize variantName=_variantName;
@property(readonly, copy) NSString *description;
- (void)addImage:(struct CGImage *)arg1 size:(unsigned long long)arg2 scale:(unsigned long long)arg3;
- (struct CGImage *)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithVariantName:(id)arg1 flags:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

