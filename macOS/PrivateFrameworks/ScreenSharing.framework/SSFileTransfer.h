//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString, SSFileCopy;

@interface SSFileTransfer : NSObject
{
    int direction;
    NSString *sourcePath;
    NSString *destinationPath;
    NSString *remoteComputerName;
    unsigned long long bytesToCopy;
    unsigned long long bytesCopied;
    int state;
    SSFileCopy *activeCopy;
    NSString *displayName;
    NSLock *lock;
    CDUnknownBlockType _completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) NSString *displayName; // @synthesize displayName;
@property int state; // @synthesize state;
@property unsigned long long bytesCopied; // @synthesize bytesCopied;
@property unsigned long long bytesToCopy; // @synthesize bytesToCopy;
@property(copy) NSString *remoteComputerName; // @synthesize remoteComputerName;
@property(copy) NSString *destinationPath; // @synthesize destinationPath;
@property(copy) NSString *sourcePath; // @synthesize sourcePath;
@property int direction; // @synthesize direction;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)dictionaryRepresentation;
- (void)restoreFromDictionaryRepresentation:(id)arg1;
@property(retain) SSFileCopy *activeCopy;
- (void)unobserve:(id)arg1;
@property(readonly) NSString *errorString;
- (void)observe:(id)arg1;
- (void)dealloc;
- (id)init;

@end

