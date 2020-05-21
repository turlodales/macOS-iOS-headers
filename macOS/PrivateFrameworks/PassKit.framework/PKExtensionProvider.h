//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface PKExtensionProvider : NSObject
{
    BOOL _didReceiveExtensions;
    id _matchingContext;
    NSDictionary *_extensions;
    NSDictionary *_passKitExtensions;
    NSObject<OS_dispatch_queue> *_extensionQueue;
    NSObject<OS_dispatch_semaphore> *_extensionSema;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
@property(nonatomic) BOOL didReceiveExtensions; // @synthesize didReceiveExtensions=_didReceiveExtensions;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *extensionSema; // @synthesize extensionSema=_extensionSema;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionQueue; // @synthesize extensionQueue=_extensionQueue;
@property(retain, nonatomic) NSDictionary *passKitExtensions; // @synthesize passKitExtensions=_passKitExtensions;
@property(retain, nonatomic) NSDictionary *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
- (void)_receivedExtensions:(id)arg1;
- (void)_beginExtensionRequestWithExtension:(id)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_beginRemoteViewControllerExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endMatchingExtensions;
- (void)beginMatchingExtensions;
- (id)_extensionWithIdentifier:(id)arg1;
- (void)extensionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)extensionWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *allExtensions;
- (void)dealloc;
- (id)init;

@end

