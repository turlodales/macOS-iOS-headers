//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CVPixelBufferCacheItem : NSObject
{
    NSArray *_buffers;
    NSArray *_DODs;
    struct CGSize _fullSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize fullSize; // @synthesize fullSize=_fullSize;
@property(readonly, nonatomic) NSArray *DODs; // @synthesize DODs=_DODs;
@property(readonly, nonatomic) NSArray *buffers; // @synthesize buffers=_buffers;
- (id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(struct CGSize)arg3;

@end

