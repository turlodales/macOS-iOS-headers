//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalKit/TXRBufferMap-Protocol.h>

@class NSString;

@interface MTKTextureIOBufferMap : NSObject <TXRBufferMap>
{
    void *_bytes;
}

@property(readonly, nonatomic) void *bytes;
- (id)initWithContents:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

