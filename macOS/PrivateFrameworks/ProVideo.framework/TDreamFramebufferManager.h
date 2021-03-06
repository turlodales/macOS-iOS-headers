//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TDreamFramebuffer;

@interface TDreamFramebufferManager : NSObject
{
    id memoryWarningObserver;
    NSMutableArray *framebufferArrayLarge;
    NSMutableArray *framebufferArraySmall;
    NSString *actualLookUp;
    NSString *actualPalette;
    struct CGSize smallUseSize;
    struct CGSize largeUseSize;
    TDreamFramebuffer *_outputBufferAndTexture;
    TDreamFramebuffer *_lookUpBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TDreamFramebuffer *lookUpBuffer; // @synthesize lookUpBuffer=_lookUpBuffer;
@property(retain, nonatomic) TDreamFramebuffer *outputBufferAndTexture; // @synthesize outputBufferAndTexture=_outputBufferAndTexture;
- (unsigned int)getOutputBufferNamer;
- (void)deleteAllFramebuffers;
- (void)clearFrameBuffers;
- (void)deleteSmallFramebuffers;
- (void)deleteLargeFramebuffers;
- (id)init;
- (void)dealloc;
- (unsigned int)getBufferFromArray:(int)arg1 withSize:(struct CGSize)arg2;
- (unsigned int)getTextureNameFromArray:(int)arg1;
- (void)addImageBufferToArray:(int)arg1 ipImage:(struct IPImage)arg2;
- (unsigned int)getOutputBufferNameWithIPImage:(struct IPImage)arg1;
- (_Bool)lookupFailedToLoad;
- (void)newLookUp:(id)arg1;

@end

