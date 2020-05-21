//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "QLDataGenerationHandler.h"

@class NSDictionary, NSMutableArray, NSString, NSURL, NSUUID, QLDaemonProxy, QLPreviewProgressiveCallbacks;

@interface QLPreview : NSObject <NSSecureCoding, QLDataGenerationHandler>
{
    // Error parsing type: ^{__QLPreview={__CFRuntimeBase=QAQ}@^{__CFURL}^{__CFDictionary}^{__CFString}@{?=q^?^?^?^?}^vIiCCi^{__CFDictionary}^{__QLServer}^{__QLGenerator}CICCCC^{__CFString}^{__CFString}i^{__CFSet}{CGSize=dd}C^{__CFString}^{__CFString}^{__CFString}^{__CFURL}^{__CFData}^{__CFData}iiiiiI{CGRect={CGPoint=dd}{CGSize=dd}}CCC^{__CFString}C@}, name: _previewRef
    QLDaemonProxy *_daemonProxy;
    NSUUID *_uuid;
    NSMutableArray *_waitForDataCompletionBlocks;
    NSDictionary *_waitForDataOptions;
    BOOL _progressive;
    QLPreviewProgressiveCallbacks *_progressiveCallbacks;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) QLPreviewProgressiveCallbacks *progressiveCallbacks; // @synthesize progressiveCallbacks=_progressiveCallbacks;
@property BOOL progressive; // @synthesize progressive=_progressive;
@property(retain) NSDictionary *waitForDataOptions; // @synthesize waitForDataOptions=_waitForDataOptions;
@property(retain) NSMutableArray *waitForDataCompletionBlocks; // @synthesize waitForDataCompletionBlocks=_waitForDataCompletionBlocks;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) QLDaemonProxy *daemonProxy; // @synthesize daemonProxy=_daemonProxy;
- (void)dealloc;
- (id)debugDescription;
@property(readonly) NSDictionary *properties;
@property(readonly) unsigned long long extensionGenerationType;
@property(readonly) NSString *extensionPath;
- (void)startAttachment:(id)arg1 withMimeType:(id)arg2 encoding:(id)arg3;
- (void)receivedDataFromServer:(id)arg1 attachmentURL:(id)arg2 hasMoreData:(BOOL)arg3;
- (void)waitForPreviewDataIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePreviewFailure:(int)arg1;
- (void)getNextData:(CDUnknownBlockType)arg1;
- (void)getData:(CDUnknownBlockType)arg1;
- (id)synchronousGetData;
- (void)retrieveDataForProgressiveRendering:(CDUnknownBlockType)arg1;
- (void)processProgressiveRendering:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processAttachment:(id)arg1 withContentID:(id)arg2;
- (void)copyBitmapImage:(CDUnknownBlockType)arg1;
- (void)_createDaemonProxyIfNeeded;
@property(readonly) NSString *applicationBundleIdentifier;
@property(readonly) NSString *searchableItemUniqueIdentifier;
@property(readonly) NSURL *url;
@property(copy) NSString *displayBundleID;
- (id)previewContentType;
@property(readonly) NSString *contentType;
@property(readonly) NSURL *previewURL;
- (void)setPreviewURL:(id)arg1;
-     // Error parsing type: v24@0:8^{__QLPreview={__CFRuntimeBase=QAQ}@^{__CFURL}^{__CFDictionary}^{__CFString}@{?=q^?^?^?^?}^vIiCCi^{__CFDictionary}^{__QLServer}^{__QLGenerator}CICCCC^{__CFString}^{__CFString}i^{__CFSet}{CGSize=dd}C^{__CFString}^{__CFString}^{__CFString}^{__CFURL}^{__CFData}^{__CFData}iiiiiI{CGRect={CGPoint=dd}{CGSize=dd}}CCC^{__CFString}C@}16, name: updatePreviewFromSelf:
- (void)encodeWithCoder:(id)arg1;
- (id)_previewDataForXPC;
- (id)initWithCoder:(id)arg1;
-     // Error parsing type: @24@0:8^{__QLPreview={__CFRuntimeBase=QAQ}@^{__CFURL}^{__CFDictionary}^{__CFString}@{?=q^?^?^?^?}^vIiCCi^{__CFDictionary}^{__QLServer}^{__QLGenerator}CICCCC^{__CFString}^{__CFString}i^{__CFSet}{CGSize=dd}C^{__CFString}^{__CFString}^{__CFString}^{__CFURL}^{__CFData}^{__CFData}iiiiiI{CGRect={CGPoint=dd}{CGSize=dd}}CCC^{__CFString}C@}16, name: initWithQLPreviewRef:
// Error parsing type for property previewRef:
// Property attributes: T^{__QLPreview={__CFRuntimeBase=QAQ}@^{__CFURL}^{__CFDictionary}^{__CFString}@{?=q^?^?^?^?}^vIiCCi^{__CFDictionary}^{__QLServer}^{__QLGenerator}CICCCC^{__CFString}^{__CFString}i^{__CFSet}{CGSize=dd}C^{__CFString}^{__CFString}^{__CFString}^{__CFURL}^{__CFData}^{__CFData}iiiiiI{CGRect={CGPoint=dd}{CGSize=dd}}CCC^{__CFString}C@}


@end

