//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRKChunkedFile : NSObject
{
    int mFileDescriptor;
}

+ (long long)preferredChunkSizeForFileDescriptor:(int)arg1;
+ (void)assertFileDescriptorIsValid:(int)arg1;
- (long long)readNextChunkIntoBuffer:(id)arg1 error:(id *)arg2;
- (id)initWithFileDescriptor:(int)arg1;
- (id)init;

@end

