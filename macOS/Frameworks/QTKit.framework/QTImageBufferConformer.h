//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, QTPixelBufferConverter;

__attribute__((visibility("hidden")))
@interface QTImageBufferConformer : NSObject
{
    NSDictionary *_imageBufferAttributes;
    QTPixelBufferConverter *_converter;
}

- (struct __CVBuffer *)copyConformedImageBufferForImageBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (BOOL)isConformantImageBuffer:(struct __CVBuffer *)arg1;
- (void)setImageBufferAttributes:(id)arg1;
- (id)imageBufferAttributes;
- (void)dealloc;
- (id)initWithImageBufferAttributes:(id)arg1;

@end

