//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface QLThumbnailReply : NSObject
{
    CDUnknownBlockType _drawingBlock;
    CDUnknownBlockType _drawInContextBlock;
    CDUnknownBlockType _ioSurfaceBlock;
    NSURL *_imageURL;
    unsigned long long _type;
    struct CGSize _contextSize;
}

+ (id)replyWithContextSize:(struct CGSize)arg1 ioSurfaceBlock:(CDUnknownBlockType)arg2;
+ (id)replyWithImageFileURL:(id)arg1;
+ (id)replyWithContextSize:(struct CGSize)arg1 currentContextDrawingBlock:(CDUnknownBlockType)arg2;
+ (id)replyWithContextSize:(struct CGSize)arg1 drawingBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) struct CGSize contextSize; // @synthesize contextSize=_contextSize;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) CDUnknownBlockType ioSurfaceBlock; // @synthesize ioSurfaceBlock=_ioSurfaceBlock;
@property(copy, nonatomic) CDUnknownBlockType drawInContextBlock; // @synthesize drawInContextBlock=_drawInContextBlock;
@property(copy, nonatomic) CDUnknownBlockType drawingBlock; // @synthesize drawingBlock=_drawingBlock;

@end

