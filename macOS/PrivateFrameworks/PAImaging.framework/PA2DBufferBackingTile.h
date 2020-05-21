//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAImageTile.h"
#import "PAMutableImageTile.h"

@class NSString, PABuffer, PAMutableBuffer;

@interface PA2DBufferBackingTile : NSObject <PAImageTile, PAMutableImageTile>
{
    PABuffer *_buffer;
    PAMutableBuffer *_mutableBuffer;
    struct CGRect _tileRect;
}

- (void).cxx_destruct;
@property(retain) PAMutableBuffer *mutableBuffer; // @synthesize mutableBuffer=_mutableBuffer;
@property(retain) PABuffer *buffer; // @synthesize buffer=_buffer;
@property struct CGRect tileRect; // @synthesize tileRect=_tileRect;
- (BOOL)writeBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)writeTextureRegion:(id)arg1 withContext:(id)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)readBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)readTextureRegion:(id)arg1 withContext:(id)arg2 block:(CDUnknownBlockType)arg3;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (unsigned long long)index;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

