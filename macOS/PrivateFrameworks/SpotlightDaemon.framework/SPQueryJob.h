//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPQueryResultsQueue;

@interface SPQueryJob : NSObject
{
    struct __SIJobRef *_siJob;
    NSString *_dataclass;
    SPQueryResultsQueue *_resultsQueue;
    CDUnknownBlockType _resultsHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(nonatomic) __weak SPQueryResultsQueue *resultsQueue; // @synthesize resultsQueue=_resultsQueue;
@property(retain, nonatomic) NSString *dataclass; // @synthesize dataclass=_dataclass;
@property(nonatomic) struct __SIJobRef *siJob; // @synthesize siJob=_siJob;
- (void)cancel;
- (void)dealloc;
- (id)initWithSIJob:(struct __SIJobRef *)arg1 dataclass:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4;

@end

