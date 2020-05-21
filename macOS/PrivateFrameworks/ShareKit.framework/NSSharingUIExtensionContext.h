//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ShareKit/NSSharingExtensionContext.h>

@class NSViewController<NSSharingPlugInViewControllerProtocol>, SHKServiceCompletionInfo, SHKSharingViewService;

@interface NSSharingUIExtensionContext : NSSharingExtensionContext
{
    NSViewController<NSSharingPlugInViewControllerProtocol> *_viewController;
    SHKServiceCompletionInfo *_completionInfo;
    SHKSharingViewService *_viewService;
}

+ (BOOL)shouldDimSourceWindow;
- (void).cxx_destruct;
@property __weak SHKSharingViewService *viewService; // @synthesize viewService=_viewService;
- (BOOL)_fadesOutSuccessfulClosingAnimation;
- (void)getPreviewImageForAttachments:(id)arg1 block:(CDUnknownBlockType)arg2 timeoutBlock:(CDUnknownBlockType)arg3;
- (id)imageForItem:(id)arg1;
- (id)previewItemSupportedTypes;
- (void)cancelServiceUI;
- (void)cancel;
- (void)_reallyCancelRequestWithError:(id)arg1;
- (void)cancelRequestWithError:(id)arg1;
- (void)_reallyCompleteRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain) SHKServiceCompletionInfo *completionInfo; // @synthesize completionInfo=_completionInfo;
- (void)closeServiceWindowWithSuccess:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_serviceWindowDidShowWithViewService:(id)arg1;
- (void)_endServicePrematurelyWithViewService:(id)arg1;
- (void)_endServicePrematurely;
- (void)prepareUIWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)performServiceWithOptionsDictionaryData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)title;
- (BOOL)disableWindowPresentation;
- (BOOL)hasNarrowLayout;
- (BOOL)serviceNeedsUserConfiguration;
- (void)startUserConfiguration;
- (void)setDisplayState:(id)arg1;
- (id)displayState;
@property __weak NSViewController<NSSharingPlugInViewControllerProtocol> *viewController; // @synthesize viewController=_viewController;
- (Class)accountDelegateClass;

@end

