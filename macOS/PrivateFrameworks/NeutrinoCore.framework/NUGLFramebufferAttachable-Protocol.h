//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NUGLContext, NUGLFramebuffer;

@protocol NUGLFramebufferAttachable
- (void)detachFromFramebuffer:(NUGLFramebuffer *)arg1 atPoint:(unsigned int)arg2 context:(NUGLContext *)arg3;
- (void)attachToFramebuffer:(NUGLFramebuffer *)arg1 atPoint:(unsigned int)arg2 context:(NUGLContext *)arg3;
@end

