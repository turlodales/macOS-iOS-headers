//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SidecarCore/NSFilePromiseProviderDelegate-Protocol.h>
#import <SidecarCore/NSPasteboardItemDataProvider-Protocol.h>
#import <SidecarCore/NSPasteboardWriting-Protocol.h>

@class NSFilePromiseProvider, NSOperationQueue, NSString, SidecarItem, SidecarService;

__attribute__((visibility("hidden")))
@interface SidecarPasteboardItem : NSObject <NSFilePromiseProviderDelegate, NSPasteboardWriting, NSPasteboardItemDataProvider>
{
    SidecarItem *_item;
    NSFilePromiseProvider *_promise;
    NSOperationQueue *_queue;
    SidecarService *_service;
}

- (void).cxx_destruct;
- (void)pasteboardFinishedWithDataProvider:(id)arg1;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)operationQueueForFilePromiseProvider:(id)arg1;
- (void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2;
- (id)initWithItem:(id)arg1 fromService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

