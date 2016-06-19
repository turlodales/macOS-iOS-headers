//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "PUEditingExtensionVendor.h"

@class NSMutableArray, PUEditingInitialPayload;

@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor>
{
    NSMutableArray *_fileURLs;
    PUEditingInitialPayload *__initialPayload;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(readonly) PUEditingInitialPayload *_initialPayload; // @synthesize _initialPayload=__initialPayload;
- (void).cxx_destruct;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)cancelContentEditingWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)finishContentEditing;
- (void)stopAccessingURLs;
- (id)_sandboxedURLForData:(id)arg1 error:(id *)arg2;
- (id)_writeonlySandboxedURLForData:(id)arg1 error:(id *)arg2;
- (id)_readonlySandboxedURLForData:(id)arg1 error:(id *)arg2;
- (BOOL)_setupLivePhotoEditingInput:(id)arg1 withInitialPayload:(id)arg2 error:(id *)arg3;
- (BOOL)_setupVideoEditingInput:(id)arg1 withInitialPayload:(id)arg2 error:(id *)arg3;
- (BOOL)_setupImageEditingInput:(id)arg1 withInitialPayload:(id)arg2 error:(id *)arg3;
- (id)_setupContentEditingInputWithInitialPayload:(id)arg1 error:(id *)arg2;
- (void)startContentEditingWithPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)_contentEditingController;
- (void)dealloc;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end

