//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLPipelineCache.h"

@class NSString;

@interface _MTLPipelineCache : NSObject <MTLPipelineCache>
{
    BOOL _writable;
    struct MTLCompilerCache *_compilerCache;
    BOOL _disableRunTimeCompilation;
}

@property BOOL disableRunTimeCompilation; // @synthesize disableRunTimeCompilation=_disableRunTimeCompilation;
@property(readonly) BOOL writable; // @synthesize writable=_writable;
- (void)write;
@property(readonly) struct MTLCompilerCache *cache; // @synthesize cache=_compilerCache;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 readOnly:(BOOL)arg2 deviceInfo:(const struct MTLTargetDeviceArch *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

