//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLClassifierModelProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>
#import <ProactiveML/PMLRegressionModelProtocol-Protocol.h>

@class NSString;

@interface PMLImmutableLogisticRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLRegressionModelProtocol, PMLClassifierModelProtocol>
{
    id _backingObject;
    const float *_weights;
    int _length;
    BOOL _intercept;
}

- (void).cxx_destruct;
- (BOOL)classify:(id)arg1;
- (float)predict:(id)arg1;
- (BOOL)intercept;
- (id)toChunk;
- (id)initWithFloatsNoCopy:(const float *)arg1 count:(int)arg2 intercept:(BOOL)arg3;
- (id)initWithChunk:(id)arg1 intercept:(BOOL)arg2;
- (id)initWithWeights:(id)arg1 intercept:(BOOL)arg2;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

