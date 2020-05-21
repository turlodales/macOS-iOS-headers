//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>;

__attribute__((visibility("hidden")))
@interface TSUZipFileDescriptorWrapper : NSObject
{
    NSObject<OS_dispatch_group> *_accessGroup;
    int _fileDescriptor;
    id <TSUReadChannel> _readChannel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TSUReadChannel> readChannel; // @synthesize readChannel=_readChannel;
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (void)waitForAccessToEnd;
- (void)endAccess;
- (void)beginAccess;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 queue:(id)arg2;
- (id)init;

@end

