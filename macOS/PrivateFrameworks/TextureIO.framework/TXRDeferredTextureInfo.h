//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface TXRDeferredTextureInfo : NSObject
{
    TXRTextureInfo *_info;
    NSMutableArray *_mipmaps;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *mipmaps; // @synthesize mipmaps=_mipmaps;
@property(retain, nonatomic) TXRTextureInfo *info; // @synthesize info=_info;
- (id)initWithMipmapLevelCount:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(BOOL)arg3;

@end

