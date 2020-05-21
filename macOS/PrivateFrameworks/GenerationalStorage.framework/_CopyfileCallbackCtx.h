//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSProgress;

__attribute__((visibility("hidden")))
@interface _CopyfileCallbackCtx : NSObject
{
    BOOL _doArchive;
    BOOL _doUnarchive;
    NSProgress *_progress;
    unsigned long long _generationSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long generationSize; // @synthesize generationSize=_generationSize;
@property(nonatomic) BOOL doUnarchive; // @synthesize doUnarchive=_doUnarchive;
@property(nonatomic) BOOL doArchive; // @synthesize doArchive=_doArchive;
- (id)initWithPath:(const char *)arg1 error:(id *)arg2;

@end

