//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PASampleThreadData;

@interface PATimestampIndexedSampleThread : NSObject
{
    unsigned long long _lastTimestampIndex;
    PASampleThreadData *_sampleThread;
}

- (void).cxx_destruct;
@property(readonly) PASampleThreadData *sampleThread; // @synthesize sampleThread=_sampleThread;
@property unsigned long long lastTimestampIndex; // @synthesize lastTimestampIndex=_lastTimestampIndex;
- (id)debugDescription;
- (id)initWithSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;

@end

