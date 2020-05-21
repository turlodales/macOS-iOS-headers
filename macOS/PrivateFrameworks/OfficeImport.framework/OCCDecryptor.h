//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface OCCDecryptor : NSObject
{
    OITSUTemporaryDirectory *mTempDirectory;
    NSString *mOutputFilename;
    NSString *mBaseStringForOutputFilename;
    struct OCCStreamer *mStreamer;
}

+ (id)allocTempFileWithBase:(id)arg1 outFilename:(id *)arg2 tempDirectory:(id *)arg3;
+ (id)agilePasswordKeyEncryptorNamespace;
+ (id)agileDescriptorNamespace;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
- (BOOL)decryptIntoOutputFile;
- (BOOL)verifyPassphrase:(id)arg1;
- (BOOL)decrypt;
- (void)deleteOutputFile;
- (BOOL)isReadProtectedUsingDefaultPassphrase;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;
- (void)dealloc;

@end

