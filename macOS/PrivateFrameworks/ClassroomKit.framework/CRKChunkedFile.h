//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

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

