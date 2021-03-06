//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTransportProviding-Protocol.h>

@class NSError, NSString;
@protocol CRKTransportProviding;

@interface CRKFailIfSimulatorTransportProvider : NSObject <CRKTransportProviding>
{
    id <CRKTransportProviding> _baseProvider;
    NSError *_failureError;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *failureError; // @synthesize failureError=_failureError;
@property(readonly, nonatomic) id <CRKTransportProviding> baseProvider; // @synthesize baseProvider=_baseProvider;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTransportProvider:(id)arg1 failureError:(id)arg2;
- (id)initWithTransportProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

