//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "SHNetworkRecognitionRequester.h"

@class NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface SHNetworkRecognitionRequester : NSObject <NSURLSessionDelegate, SHNetworkRecognitionRequester>
{
    NSURLSession *_URLSession;
}

- (void).cxx_destruct;
@property(retain) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (void)makeRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)taskWithRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

