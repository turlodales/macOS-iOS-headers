//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

#import "NUGLFramebufferAttachable.h"

@class NUPixelFormat;

@interface NUGLRenderbuffer : NUGLObject <NUGLFramebufferAttachable>
{
    NUPixelFormat *_format;
    CDStruct_d58201db _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NUPixelFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
- (void)copyRect:(CDStruct_996ac03c)arg1 toBuffer:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)read:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)draw:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)attachToFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)delete;
- (void)generate:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)init;

@end

