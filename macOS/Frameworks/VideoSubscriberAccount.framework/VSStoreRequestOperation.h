//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, VSStoreRequest;

@interface VSStoreRequestOperation : VSAsyncOperation
{
    int _requestCompletionFlag;
    VSStoreRequest *_request;
    VSOptional *_result;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSStoreRequest *request; // @synthesize request=_request;
- (void)cancel;
- (void)executionDidBegin;
- (BOOL)_isFirstToFinish;
- (id)init;

@end

