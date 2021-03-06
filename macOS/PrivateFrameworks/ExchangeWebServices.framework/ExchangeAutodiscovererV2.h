//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/EWSAutodiscoverV2BindingDelegate-Protocol.h>

@class NSString;

@interface ExchangeAutodiscovererV2 : NSObject <EWSAutodiscoverV2BindingDelegate>
{
    ExchangeAutodiscovererV2 *_me;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) ExchangeAutodiscovererV2 *me; // @synthesize me=_me;
- (void)autodiscoverV2Binding:(id)arg1 didFailWithError:(id)arg2;
- (void)autodiscoverV2Binding:(id)arg1 didFinishWithResponse:(id)arg2;
- (void)autodiscoverV2ForEmail:(id)arg1 protocol:(id)arg2 retrieveAuthURI:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

